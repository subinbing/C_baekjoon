/*
�� ���� ���ӵ� �ڿ����� ���ؼ� � ���� ����� ����� ������ ���ô�. ���� ��� 15��� �ڿ����� �Ʒ�ó�� ���ӵ� ������ ������ ǥ���ϴ� ����� 4���� �ֽ��ϴ�.

15

7+8

4+5+6

1+2+3+4+5

�հ谡 9�� �Ǵ� ����� 3������ �ֽ��ϴ�.

9

4+5

2+3+4

������ �ڿ��� n�� ���ӵ� ���� ������ ��Ÿ�� �� �ִ� ������ ����ϴ� �ڵ带 �ۼ��ϼ���.

���� �� ���ϱ� (C���)
*/

// >> �ҽ��ڵ�

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

