#include <stdio.h>
#include <string.h>

/*
// 1. 10진수를 입력하여 임의의 진수로 바꾸는 프로그램을 작성하라.
// 입력 수가 0이면 프로그램을 종료하라.
// 16진수까지로 하고 10 이상의 수는 a, b, c, d, e, f로 표현하라.
int main()
{
	int i = 0, num, base;
	int arr[100];
	while (1)
	{
		printf("Enter a number and a base>> ");
		scanf_s("%d %d", &num, &base);
		if (num == 0)
		{
			break;
		}
		for (i = 0; num >= base; i++)
		{
			arr[i] = num % base;
			num = num / base;
		}
		arr[i] = num;
		for (i = i; i != -1; i--)
		{
			if (arr[i] == 10)
			{
				printf("a");
			}
			else if (arr[i] == 11)
			{
				printf("b");
			}
			else if (arr[i] == 12)
			{
				printf("c");
			}
			else if (arr[i] == 13)
			{
				printf("d");
			}
			else if (arr[i] == 14)
			{
				printf("e");
			}
			else if (arr[i] == 15)
			{
				printf("f");
			}
			else
			{
				printf("%d", arr[i]);
			}
		}
		printf("\n\n");
	}
}
*/

/*
// 2. 초 단위의 시간을 입력으로 하여 일d시h분m초s 형태로 변환하여 출력하는 프로그램을 작성하라.
// 0을 입력하면 프로그램을 종료해라.
int main()
{
	int inputSecond, d, h, m, s;
	while (1)
	{
		printf("Enter a seconds>> ");
		scanf_s("%d", &inputSecond);
		if (inputSecond == 0)
		{
			break;
		}
		if (inputSecond >= 86400)
		{
			d = inputSecond / 86400;
			inputSecond = inputSecond % 86400;
			printf("%dd", d);
		}
		if (inputSecond >= 3600)
		{
			h = inputSecond / 3600;
			inputSecond = inputSecond % 3600;
			printf("%dh", h);
		}
		if (inputSecond >= 60)
		{
			m = inputSecond / 60;
			inputSecond = inputSecond % 60;
			printf("%dm", m);
		}
		s = inputSecond;
		if (s != 0)
		{
			printf("%ds", s);
		}
		printf("\n\n");
	}
}
*/

/*
// 3. 두 개의 문자열을 입력으로 받아 첫번째 문자열에 두번째 문자열이 나타난 횟수를 출력하는 프로그램을 작성하라.
// quit가 입력되면 프로그램을 종료한다.
int main()
{
	char str[100], findStr[100], cmp[100] = { "quit" };
	while (1)
	{
		int i = 0;
		printf("Enter two strings>> ");
		scanf_s("%s", str, (int)sizeof(str));
		if (strcmp(str, cmp) == 0)
		{
			break;
		}
		scanf_s(" %s", findStr, (int)sizeof(findStr));
		char* nowStr = strstr(str, findStr);

		while (strstr(nowStr, findStr) != NULL)
		{
			nowStr = (strstr(nowStr, findStr) + 1);
			i++;
		}
		printf("%d\n\n", i);
	}
}
*/

/*
// 4. 세 개의 정수를 입력하여, 각 정수를 한 변의 길이로 하는 삼각형이 직각 삼각형인지 판단하는 프로그램을 작성하라.
// 세 개의 정수 중 1개라도 0을 입력하면 프로그램을 종료하도록 한다.
int main()
{
	int f, s, t;
	while (1)
	{
		printf("Enter three integers>> ");
		scanf_s("%d %d %d", &f, &s, &t);
		if (f == 0 || s == 0 || t == 0)
		{
			break;
		}

		if (f * f == s * s + t * t || s * s == f * f + t * t || t * t == s * s + f * f)
		{
			printf("Result >> Right");
		}
		else
		{
			printf("Result >> Wrong");
		}
		printf("\n\n");
	}
}
*/