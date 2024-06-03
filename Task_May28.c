#include <stdio.h>
#include <math.h>

/*
// 1. 정수 n을 입력하여 n!(fatorial of n)을 계산하고, 출력값이 몇 자리인지 출력하는 프로그램을 작성하라.
// 0을 입력하면 프로그램을 종료하도록 하라.
int main()
{
	int n, factorial = 1, digit = 0;
	while (1)
	{
		factorial = 1; digit = 0;
		printf("Enter an integers>> ");
		scanf_s("%d", &n);
		if (n == 0)
		{
			break;
		}
		for (int i = n; i > 0; i--)
		{
			factorial *= i;
		}
		printf("The value of %d! is %d\n", n, factorial);
		for (int i = 0; pow(10, i) < factorial; i++)
		{
			digit++;
		}
		printf("The number of digits if %d\n\n", digit);
	}
}
*/

/*
// 2. 세 개의 정수를 입력하여, 각 정수를 한 변의 길이로 하는 삼각형이 예각(acute), 직각(right), 둔각(obtuse) 삼각형인지 판단하는 프로그램을 작성하라,
// 삼각형이 될 수 없으면 wrong을 출력하라. 세 개의 정수 중 1개라도 0을 입력하면 프로그램을 종료하도록 한다.
int main()
{
	int n1, n2, n3, max, value1, value2;;
	while (1)
	{
		printf("Enter three integers>> ");
		scanf_s("%d %d %d", &n1, &n2, &n3);
		if (n1 == 0 || n2 == 0 || n3 == 0)
		{
			break;
		}
		if (n1 >= n2)
		{
			if (n1 >= n3)
			{
				max = n1;
				value1 = n2;
				value2 = n3;
			}
			else
			{
				max = n3;
				value1 = n2;
				value2 = n1;
			}
		}
		else if (n2 >= n3)
		{
			if (n2 >= n1)
			{
				max = n2;
				value1 = n1;
				value2 = n3;
			}
			else
			{
				max = n1;
				value1 = n2;
				value2 = n3;
			}
		}
		else if(n3 >= n1)
		{
			if (n3 >= n2)
			{
				max = n3;
				value1 = n2;
				value2 = n1;
			}
			else
			{
				max = n2;
				value1 = n1;
				value2 = n3;
			}
		}
		if (max > value1 + value2)
		{
			printf("Result>> wrong\n\n");
		}
		else if ((int)pow(max, 2) == (int)pow(value1, 2) + (int)pow(value2, 2))
		{
			printf("Result>> right\n\n");
		}
		else if ((int)pow(max, 2) > (int)pow(value1, 2) + (int)pow(value2, 2))
		{
			printf("Result>> obtuse\n\n");
		}
		else if ((int)pow(max, 2) < (int)pow(value1, 2) + (int)pow(value2, 2))
		{
			printf("Result>> acute\n\n");
		}
	}
}
*/

/*
// 3. 하나의 정수를 입력하여, 그 정수의 모든 약수를 출력하는 프로그램을 작성하라.
// 0이 입력되면 프로그램을 종료한다.
int main()
{
	int n;
	while (1)
	{
		printf("Enter an integer>> ");
		scanf_s("%d", &n);
		if (n == 0)
		{
			break;
		}
		printf("Divisors of %d: ", n);
		for (int i = 1; i <= n; i++)
		{
			if (n % i == 0)
			{
				printf("%d ", i);
			}
		}
		printf("\n\n");
	}
}
*/

/*
// 4. 정수들을 입력으로 받아서 1 이상 9 이하의 두 수 a, b의 곱으로 표현될 수 있는 수만 출력할는 프로그램을 작성하라.
// 음의 정수를 읽으면 프로그램을 종료하라.
int main()
{
	int arr[1000], n;
	while (1)
	{
		printf("Enter integers>> ");
		scanf_s("%d", &n);
		arr[0] = n;
		for (int i = 0; i <= 9; i++)
		{
			for (int j = 0; j <= 9; j++)
			{
				if (arr[0] == j * i)
				{
					printf("%d ", arr[0]);
					j = 10;
					i = 10;
				}

			}
		}
		if (n < 0)
		{
			break;
		}
		else
		{
			for (int i = 1; i < 1000; i++)
			{
				scanf_s("%d", &arr[i]);
				if (arr[i] < 0)
				{
					break;
				}
				for (int j = 0; j <= 9; j++)
				{
					for (int k = 0; k <= 9; k++)
					{
						if (arr[i] == j * k)
						{
							printf("%d ", arr[i]);
							j = 10;
							k = 10;
						}
					}
				}
			}
			printf("\n\n");
		}
	}
}
*/

/*
// 5. 문자와 숫자가 섞여 있는 한 라인을 입력으로 하여, 그 중 숫자만을 찾아 더하는 프로그램을 작성하라.
// 0을 입력하면 프로그램을 종료한다.
// 띄어 쓰지 않아도 처리되도록 하라.
int main()
{
	while(1)
	{
		char arr[1000] = { NULL };
		int n = 0, sum = 0, value = 0;
		printf("Enter a line>> ");
		fgets(arr, sizeof(arr), stdin);
		if ((int)arr[0] == 48)
		{
			break;
		}
		for (int i = 0; i < 1000; i++)
		{
			sum += value;
			n = 0, value = 0;
			if (arr[i] >= 48 && arr[i] <= 57)
			{
				for (int j = i; arr[j] >= 48 && arr[j] <= 57; j++)
				{
					if (arr[j] < 48 || arr[j] > 57)
					{
						break;
					}
					n++;
				}
				i += n;
				for (int j = n - 1; j >= 0; j--)
				{
					value += pow(10, j) * ((int)arr[i - j - 1] - 48);
				}
			}
		}
		printf("The sum of all numbers: %d\n\n", sum);
	}
}
*/