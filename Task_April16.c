#include <stdio.h>

/*
//1. ���� ���� N�� �Է����� �޾Ƽ� N�� ¦���̸� 1���� N������ ��� ¦���� ����ϰ�, 
//N�� Ȧ���̸� 1���� N������ ��� Ȧ���� ã�� ����ϴ� ���α׷��� �ۼ��϶�.
int main()
{
	int n;
	while (1)
	{
		printf("Enter an integer >> ");
		scanf_s("%d", &n);
		if (n <= 0)
		{
			break;
		}
		else
		{
			if (n % 2 == 0)
			{
				for (int i = 1; i <= n; i++)
				{
					if (i % 2 == 0)
					{
						printf("%d ", i);
					}
				}
			}
			else
			{
				for (int i = 1; i <= n; i++)
				{
					if (i % 2 != 0)
					{
						printf("%d ", i);
					}
				}
			}
			printf("\n\n");
		}
	}
}
*/

/*
//2. ��/��/�ʷ� �̷���� �ð��� 2�� �Է¹޾�, ���� ���� ��/��/�ʷ� ����ϴ� ���α׷��� �ۼ��϶�.
//�ð��� 12�ð����� ǥ���Ѵ�. ��, �ð� ���� �� �ִ� ���� 1�ú��� 12�ñ����̴�.
//ù��° ���� 0�̸� ���α׷��� �����϶�.
int main()
{
	int h = 0, m = 0, s = 0, h1, m1, s1, h2, m2, s2;
	while (1)
	{
		printf("Enter two times(h m s h m s) >> ");
		scanf_s("%d", &h1);
		if (h1 == 0)
		{
			break;
		}
		else
		{
			scanf_s("%d %d %d %d %d", &m1, &s1, &h2, &m2, &s2);
			h = h1 + h2;
			m = m1 + m2;
			s = s1 + s2;
			if (s >= 60)
			{
				m += s / 60;
				s = s % 60;
			}

			if (m >= 60)
			{
				h += m / 60;
				m = m % 60;
			}

			if (h >= 12)
			{
				h = h % 12;
			}
			printf("%d %d %d", h, m, s);
		}
		printf("\n\n");
	}
}
*/

/*
//3. �� ���� ������ �Է����� �޾Ƽ� ���� ū ���� ���� ���� ���� ã�� ����ϴ� ���α׷��� �ۼ��϶�.
int main()
{
	int n1, n2, n3, max, min;
	printf("Enter 3 integers >> ");
	scanf_s("%d %d %d", &n1, &n2, &n3);

	if (n1 > n2 && n1 > n3)
	{
		max = n1;
		if (n2 > n3)
		{
			min = n3;
		}
		else
		{
			min = n2;
		}
	}
	else if (n2 > n1 && n2 > n3)
	{
		max = n2;
		if (n1 > n3)
		{
			min = n3;
		}
		else
		{
			min = n1;
		}
	}
	else
	{
		max = n3;
		if (n1 > n2)
		{
			min = n2;
		}
		else
		{
			min = n1;
		}
	}
	printf("max = %d, min = %d", max, min);
}
*/

/*
//4. ���� n1�� n2�� �Է��Ͽ�, n1���� n2���� (n1, n2 ����)�� ��� �Ҽ��� ����ϴ� ���α׷��� �ۼ��϶�.
//�� ���� ��� 0�� ��, ���α׷��� �����Ѵ�.
int main()
{
	int n1, n2, cnt;
	while (1)
	{
		printf("Enter two integers >> ");
		scanf_s("%d %d", &n1, &n2);
		if (n1 == 0 && n2 == 0)
		{
			break;
		}
		else
		{
			for (int i = n1; i <= n2; i++)
			{
				cnt = 0;
				for (int j = 1; j <= i; j++)
				{
					if (i % j == 0)
					{
						cnt++;
					}
				}
				if (cnt == 2)
				{
					printf("%d ", i);
				}
			}
			printf("\n\n");
		}
	}
}
*/