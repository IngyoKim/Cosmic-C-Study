#include <stdio.h>
#include <string.h>
#include <math.h>

/*
//1. ���� '('�� ')'���� �̿��� ���ڿ��� �Է��Ͽ�, ��ȣ�� ¦�� �´��� Ȯ���ϴ� ���α׷��� �ۼ��϶�.
//"quit"�� �Է��ϸ� �����ϵ��� �Ѵ�.
int main()
{
	char parens[100];
	while (1)
	{
		int countleft = 0, countright = 0;
		printf("Enter a parens >> ");
		scanf_s("%s", parens, 100);
		if (strcmp(parens, "quit") == 0)
		{
			break;
		}
		for (int i = 0; i < strlen(parens); i++)
		{
			if (parens[i] == '(')
			{
				countleft++;
			}
			else if (parens[i] == ')')
			{
				countright++;
			}
		}
		printf("Result >> ");
		if (countleft == countright)
		{
			printf("Matched\n");
		}
		else
		{
			printf("Unmatched\n");
		}
	}
}
*/

/*
//2. ���������(postfix notation)�� �Է����� �޾Ƽ� �� ���� ����ϴ� ���α׷��� �ۼ��϶�.
//��Ģ����(+,-,*,/)���� ����ϰ�, ����� �� ���� �����̸� "invalid expression"�� ����϶�.
//0�� �ԷµǸ� ���α׷��� �����Ѵ�.
int stack[100];
int top = -1;
int push(int stackItem);
int pop();
int calculatePostfix(char* postfix);
int countInt = 0, countOperator = 0;

int main()
{
	char postfix[100];
	while (1)
	{
		countInt = 0, countOperator = 0;
		printf("Enter a postfix expression>> ");
		gets_s(postfix, 100);
		if (strcmp(postfix, "0") == 0)
		{
			break;
		}
		calculatePostfix(postfix);
		if (countInt == countOperator + 1)
		{
			printf("%d\n", stack[top]);
		}
		else
		{
			printf("Invalid expression\n");
		}
	}
}
	
int push(int stackItem)
{
	if (top == 99)
	{
		return 0;
	}
	top++;
	stack[top] = stackItem;
	return 1;
}

int pop()
{
	int value;
	if (top == -1)
	{
		return 0;
	}
	value = stack[top];
	top--;
	return value;
}

int calculatePostfix(char* postfix)
{
	for (int i = 0; i < strlen(postfix); i++)
	{
		int num = 0;
		if (postfix[i] >= '0' && postfix[i] <= '9')
		{
			num += postfix[i] - '0';
			while (postfix[i + 1] >= '0' && postfix[i + 1] <= '9')
			{
				num = num * 10 + (postfix[i + 1] - '0');
				i++;
			}
			push(num);
			countInt++;
		}
		else if (postfix[i] == ' ')
		{
			continue;
		}
		else
		{
			int first = pop(), second = pop();
			countOperator++;
			if (postfix[i] == '+')
			{
				push(second + first);
			}
			else if (postfix[i] == '-')
			{
				push(second - first);
			}
			else if (postfix[i] == '*')
			{
				push(second * first);
			}
			else if (postfix[i] == '/')
			{
				push(second / first);
			}
		}
	}
}
*/

/*
//3. �� ������ �Է��Ͽ�, 2���� ���� �������� ��� �Ҽ��� ���ϰ�, �� �Ҽ��� �̿��� ���μ����� ����� �Ἥ
//�ִ�����(GDC)�� �ּҰ����(LCM)�� ���ϴ� ���α׷��� �ۼ��϶�.
//����¹���� �Ʒ��� ���� �ϰ�, �� ������ ��� 0�̸� ���α׷��� �����϶�.
//�� ������ ��ȣ�� ������ �ִ������� ó���� �Է��� ���� �ִ������� ���� �����̴�.
int findPrime(int num);
int calculateGCDLCM(int a, int b);
int findDivisorGCD(int gcd);
int prime[100];
int divisor[100];
int count = 0;
int divisorCount = 0;
int gcd = 1, lcm;

int main()
{
	int a, b;
	while (1)
	{
		printf("Enter two integers>> ");
		for (int i = 0; i < 100; i++)
		{
			prime[i] = 0;
			divisor[i] = 0;
		}
		scanf_s("%d %d", &a, &b);
		if (a == 0 && b == 0)
		{
			break;
		}
		if (a > b)
		{
			findPrime(b);
		}
		else
		{
			findPrime(a);
		}
		printf("Prime numbers: ");
		for (int i = 0; i < count; i++)
		{
			printf("%d ", prime[i]);
		}
		printf("\n");
		calculateGCDLCM(a, b);
		findDivisorGCD(gcd);
		printf("\nGCD=%d, LCM=%d\n", gcd, lcm);
	}
}

int findPrime(int num)
{
	count = 0;
	if (num >= 2)
	{
		prime[count++] = 2;
	}
	for (int i = 3; i <= num; i += 2)
	{
		int flag = 1;
		for (int j = 3; j <= sqrt(i); j += 2)
		{
			if (i % j == 0)
			{
				flag = 0;
			}
		}
		if (flag == 1)
		{
			prime[count++] = i;
		}
	}
	prime[count] = -3;
}

int calculateGCDLCM(int a, int b)
{
	int calculateCount = 0;
	gcd = 1;
	printf("(%d, %d, %d)", gcd, a, b);
	while (prime[calculateCount] != -3)
	{
		if (a % prime[calculateCount] == 0 && b % prime[calculateCount] == 0)
		{
			gcd *= prime[calculateCount];
			a = a / prime[calculateCount];
			b = b / prime[calculateCount];
			printf("(%d, %d, %d) ", gcd, a, b);
		}
		else
		{
			calculateCount++;
		}
	}
	lcm = gcd * a * b;
}

int findDivisorGCD(int gcd)
{
	divisorCount = 0;
	for (int i = 1; i <= gcd; i++)
	{
		if (gcd % i == 0)
		{
			divisor[divisorCount++] = i;
		}
	}
}
*/

/*
//4. ���Ḯ��Ʈ�� �̿��Ͽ� ���� �������� ���������ϴ� ���α׷��� �ۼ��϶�.
//�������� ���� ������ �ִ� ����� �̿��϶�.
//�� ������ ���Ե� ������ ���� ����Ʈ�� �ִ� ��� ����� ���� �ּҸ� ����϶�.
//ù ��° ������ ������ ������ �����϶�.
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
}node;

node* head = NULL;

int main()
{
	int num, x = 1, count = 0;
	while (x)
	{
		printf("Enter integers>> ");
		count = 0;
		while (1)
		{
			scanf_s("%d", &num);
			if (num < 0)
			{
				if (count == 0)
				{
					x = 0;
					break;
				}
				break;
			}
			count++;
			node* newnode = (node*)malloc(sizeof(node));
			newnode->data = num;
			newnode->next = NULL;
			if (head == NULL || newnode->data < head->data)
			{
				newnode->next = head;
				head = newnode;
			}
			else
			{
				node* cur = head;
				while (cur->next != NULL && cur->next->data < newnode->data)
				{
					cur = cur->next;
				}
				newnode->next = cur->next;
				cur->next = newnode;
			}
			node* cur = head;
			while (cur != NULL)
			{
				printf("%d(%p) ", cur->data, cur);
				cur = cur->next;
			}
			printf("\n");
		}
		printf("\n");
	}
}
*/