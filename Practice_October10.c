//#include <stdio.h>
//#include <string.h>
//
//char stack[100];
//int top = -1;
//void push(char stackItem);
//char pop();
//int isp(char oparator);
//int icp(char oparator);
//
//int main()
//{
//	char infix[100];
//	int countPostfix = 0;
//	while (1)
//	{
//		char postfix[100] = { '\0', };
//		printf("Enter an expression>> ");
//		gets(infix, 100);
//		if (strcmp(infix, "quit") == 0)
//		{
//			break;
//		}
//		int infixLen = strlen(infix);
//		for (int i = 0; i < infixLen; i++)
//		{
//			if (infix[i] == ' ')
//			{
//				continue;
//			}
//			else if (infix[i] >= 'a' && infix[i] <= 'z')
//			{
//				postfix[countPostfix++] = infix[i];
//			}
//			else if (top == -1)
//			{
//				push(infix[i]);
//			}
//			else if (infix[i] == ')')
//			{
//				while (stack[top] != '(')
//				{
//					postfix[countPostfix++] = pop();
//				}
//				pop();
//			}
//			else
//			{
//				while (isp(stack[top]) >= icp(infix[i]))
//				{
//					postfix[countPostfix++] = pop();
//				}
//				push(infix[i]);
//			}
//		}
//		while (top > -1)
//		{
//			postfix[countPostfix++] = pop();
//		}
//		for (int i = 0; i < countPostfix; i++)
//		{
//			printf("%c", postfix[i]);
//		}
//		printf("\n");
//	}
//}
//
//void push(char stackItem)
//{
//	if (top == 99)
//	{
//		return;
//	}
//	top++;
//	stack[top] = stackItem;
//	return;
//}
//
//char pop()
//{
//	char value;
//	if (top == -1)
//	{
//		return 0;
//	}
//	value = stack[top];
//	top--;
//	return value;
//}
//
//int isp(char oparator)
//{
//	if (oparator == '+' || oparator == '-')
//	{
//		return 1;
//	}
//	else if (oparator == '*' || oparator == '/')
//	{
//		return 2;
//	}
//	else if (oparator == '(')
//	{
//		return 0;
//	}
//}
//
//int icp(char oparator)
//{
//	if (oparator == '+' || oparator == '-')
//	{
//		return 1;
//	}
//	else if (oparator == '*' || oparator == '/')
//	{
//		return 2;
//	}
//	else if (oparator == '(')
//	{
//		return 3;
//	}
//}