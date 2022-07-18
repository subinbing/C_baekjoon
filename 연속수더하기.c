/*
몇 개의 연속된 자연수를 더해서 어떤 수를 만드는 방법을 생각해 봅시다. 예를 들어 15라는 자연수는 아래처럼 연속된 숫자의 합으로 표시하는 방법이 4가지 있습니다.

15

7+8

4+5+6

1+2+3+4+5

합계가 9가 되는 방법은 3가지가 있습니다.

9

4+5

2+3+4

임의의 자연수 n을 연속된 수의 합으로 나타낼 수 있는 조합을 출력하는 코드를 작성하세요.

연속 수 더하기 (C언어)
*/

// >> 소스코드

#include <stdio.h>


int main(void) {

	int num;

	int start = 0, finish = 0;

	int count = 0;

	int sum;



	scanf_s("%d", &num);



	for (finish = 1;; finish++) {

		if (finish * (finish + 1) / 2 > num)

			break;

	}


	finish--;

	sum = finish * (finish + 1) / 2 - start;



	while (finish < num + 1) {

		if (sum == num) {

			count++;

			finish++;

			sum += finish;

		}

		else if (sum > num) {

			start++;

			sum -= start;

		}



		else if (sum < num) {

			finish++;

			sum += finish;

		}

	}

	printf("%d", count);

}

