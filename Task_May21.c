#include <stdio.h>
#include <string.h>

/*
// 1. 10������ �Է��Ͽ� ������ ������ �ٲٴ� ���α׷��� �ۼ��϶�.
// �Է� ���� 0�̸� ���α׷��� �����϶�.
// 16���������� �ϰ� 10 �̻��� ���� a, b, c, d, e, f�� ǥ���϶�.
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
// 2. �� ������ �ð��� �Է����� �Ͽ� ��d��h��m��s ���·� ��ȯ�Ͽ� ����ϴ� ���α׷��� �ۼ��϶�.
// 0�� �Է��ϸ� ���α׷��� �����ض�.
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
// 3. �� ���� ���ڿ��� �Է����� �޾� ù��° ���ڿ��� �ι�° ���ڿ��� ��Ÿ�� Ƚ���� ����ϴ� ���α׷��� �ۼ��϶�.
// quit�� �ԷµǸ� ���α׷��� �����Ѵ�.
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
// 4. �� ���� ������ �Է��Ͽ�, �� ������ �� ���� ���̷� �ϴ� �ﰢ���� ���� �ﰢ������ �Ǵ��ϴ� ���α׷��� �ۼ��϶�.
// �� ���� ���� �� 1���� 0�� �Է��ϸ� ���α׷��� �����ϵ��� �Ѵ�.
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