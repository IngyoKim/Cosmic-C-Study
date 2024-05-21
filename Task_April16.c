#include <stdio.h>

/*
//1. 양의 정수 N을 입력으로 받아서 N이 짝수이면 1부터 N까지의 모든 짝수를 출력하고, 
//N이 홀수이면 1부터 N까지의 모든 홀수를 찾아 출력하는 프로그램을 작성하라.
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
//2. 시/분/초로 이루어진 시각을 2개 입력받아, 더한 값을 시/분/초로 출력하는 프로그램을 작성하라.
//시각은 12시간제로 표시한다. 즉, 시가 가질 수 있는 값은 1시부터 12시까지이다.
//첫번째 수가 0이면 프로그램을 종료하라.
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
//3. 세 개의 정수를 입력으로 받아서 가장 큰 수와 가장 작은 수를 찾아 출력하는 프로그램을 작성하라.
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
//4. 정수 n1과 n2를 입력하여, n1부터 n2까지 (n1, n2 포함)의 모든 소수를 출력하는 프로그램을 작성하라.
//두 수가 모두 0일 때, 프로그램을 종료한다.
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