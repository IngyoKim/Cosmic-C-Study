#include <stdio.h>
#include <math.h>

/*
// 1. ���� n�� �Է��Ͽ� n!(fatorial of n)�� ����ϰ�, ��°��� �� �ڸ����� ����ϴ� ���α׷��� �ۼ��϶�.
// 0�� �Է��ϸ� ���α׷��� �����ϵ��� �϶�.
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
// 2. �� ���� ������ �Է��Ͽ�, �� ������ �� ���� ���̷� �ϴ� �ﰢ���� ����(acute), ����(right), �а�(obtuse) �ﰢ������ �Ǵ��ϴ� ���α׷��� �ۼ��϶�,
// �ﰢ���� �� �� ������ wrong�� ����϶�. �� ���� ���� �� 1���� 0�� �Է��ϸ� ���α׷��� �����ϵ��� �Ѵ�.
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
// 3. �ϳ��� ������ �Է��Ͽ�, �� ������ ��� ����� ����ϴ� ���α׷��� �ۼ��϶�.
// 0�� �ԷµǸ� ���α׷��� �����Ѵ�.
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
// 4. �������� �Է����� �޾Ƽ� 1 �̻� 9 ������ �� �� a, b�� ������ ǥ���� �� �ִ� ���� ����Ҵ� ���α׷��� �ۼ��϶�.
// ���� ������ ������ ���α׷��� �����϶�.
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
// 5. ���ڿ� ���ڰ� ���� �ִ� �� ������ �Է����� �Ͽ�, �� �� ���ڸ��� ã�� ���ϴ� ���α׷��� �ۼ��϶�.
// 0�� �Է��ϸ� ���α׷��� �����Ѵ�.
// ��� ���� �ʾƵ� ó���ǵ��� �϶�.
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