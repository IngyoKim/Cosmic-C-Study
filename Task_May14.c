#include <stdio.h>
#include <math.h>

/*
//1. ������ ���ڸ� �Է����� �޾�, �ٸ� ������ ���ڷ� �ٲپ� ����ϴ� ���α׷��� �ۼ��϶�.
//�Է� ������ 0�̸� ���α׷��� �����϶�.
int main()
{
	long long int number, total = 0, result = 0;
	int baseFrom, baseTo, value = 0, eachValue, eachTotal = 0;
	while (1)
	{
		total = 0, number = 0; result = 0;
		printf("Enter baseFrom, number, baseTo >> ");
		scanf_s("%d %lld %d", &baseFrom, &number, &baseTo);
		if (baseFrom == 0 && number == 0 && baseTo == 0)
		{
			break;
		}
		else
		{
			for (int i = 1; number >= pow(10, i - 1); i++)
			{
				value = i;
			}
			for (int i = value - 1; i >= 0; i--)
			{
				eachValue = number / (int)pow(10, i);
				total += eachValue * (int)pow(baseFrom, i);
				number -= eachValue * (int)pow(10, i);
			}
			if (baseTo == 10)
			{
				printf("%lld", total);
			}
			else
			{
				for (int i = 0; total > pow(baseTo, i); i++)
				{
					value = i;
				}
				for (int i = value; i >= 0; i--)
				{
					if (i == 0)
					{
						eachTotal = total;
					}
					else
					{
						eachTotal = total % baseTo;
					}
					if (eachTotal != 0)
					{
						result += pow(10, value - i) * eachTotal;
					}
					total /= baseTo;
				}
				printf("%lld", result);
			}
			printf("\n\n");
		}
	}
}
*/

/*
//2. ������ ���������� �� ������ �Է����� �޾� ����� ����ϴ� ���α׷��� �ۼ��϶�.
//���ڿ� ������ ���̿� ������ �ְų� ���ų� ��� ó���ǰ� �϶�.
//��ȣ�� ���ٰ� �����϶�.
//0�� �Է��ϸ� ���α׷��� �����϶�.
int main()
{
	int value = 0;
	int a, i = 0;
	char b;
	while (1)
	{
		printf("Enter an expression >> ");
		scanf_s("%d", &a);
		value = a;
		if (a == 0)
		{
			break;
		}
		while (1)
		{
			b = getchar();
			if (b == '\n')
			{
				break;
			}
			while (b == ' ')
			{
				scanf_s("%c", &b, 2);
			}
			scanf_s("%d", &a);
			if (b == '+')
			{
				value += a;
			}
			else if (b == '-')
			{
				value -= a;
			}
		}
		printf("Value: %d\n\n", value);
	}
}
*/

/*
//3. ���� n1�� n2�� �Է��Ͽ�, n1�� n2�� ������� ��� ����ϴ� ���α׷��� �ۼ��϶�.
//�μ��� ��� 0�� �� ���α׷��� �����϶�.
int main()
{
	int n1, n2, max, cnt= 0, arr[100];
	while (1)
	{
		cnt = 0;
		printf("Enter two integers >> ");
		scanf_s("%d %d", &n1, &n2);
		if (n1 == 0 && n2 == 0)
		{
			break;
		}
		else
		{
			if (n1 > n2)
			{
				max = n1;
			}
			else
			{
				max = n2;
			}
			printf("Common divisors: ");
			for (int i = 1; i <= max; i++)
			{
				if (n1 % i == 0 && n2 % i == 0)
				{
					arr[cnt] = i;
					cnt++;
				}
			}
			for (int i = 0; i <= cnt - 2; i++)
			{
				printf("%d, ", arr[i]);
			}
			printf("%d", arr[cnt-1]);
		}
		printf("\n\n");
	}
}
*/