#include <stdio.h>

#include <string.h>

​

char REV(char temp) { return temp == '1' ? '0' : '1'; } //켜짐 꺼짐 반전시키는 함수

​

int main(void) {

	int cnt = 0; //스위치 누른 횟수

	int N = 0; //자연수 N

	char now[100000] = { 0 }; //현재 상태

	char result[100000] = { 0 }; //만들고자 하는 상태

	​

		do {

			scanf_s("%d", &N);

		} while (N < 2 || N > 100000); //자연수 N 입력 (2 ≤ N ≤ 100,000)

		​

			scanf_s("%s", now, sizeof(now)); //현재 상태를 나타내는 숫자 N 입력

		scanf_s("%s", result, sizeof(result)); //만들고자 하는 전구들의 상태 입력

		​

			while (cnt < N) {

				if (cnt == 0) { //처음 스위치를 눌렀을 때

					now[0] = REV(now[0]);

					now[1] = REV(now[1]);

				}

				else if (cnt > 0 && cnt < N - 1) { //중간

					now[cnt - 1] = REV(now[cnt - 1]);

					now[cnt] = REV(now[cnt]);

					now[cnt + 1] = REV(now[cnt + 1]);

				}

				else { //끝 스위치를 눌렀을 때

					now[cnt - 1] = REV(now[cnt - 1]);

					now[cnt] = REV(now[cnt]);

					if (strcmp(now, result) == -1)

						printf("-1"); // 불가능한 경우에는 -1을 출력

				}

				cnt++;

				​

					if (strcmp(now, result) == 0) { //두 문자열 비교하여 일치하면

						printf("%d", cnt);

						break; //누른횟수 출력 후 종료

					}

			}

		return 0;

}