/*
#include <stdio.h>

int main()
{
    
    //1. ���� ���� N�� �Է����� �޾Ƽ� N�� ¦���̸� 1���� N������ ��� ¦���� ����ϰ�,
    //N�� Ȧ���̸� 1���� N������ ��� Ȧ���� ����ϴ� ���α׷��� �ۼ��϶�.
    /*
       int inputNum;
       printf("Enter an integer >> ");
       scanf_s("%d", &inputNum);
       printf("\n\n%d\n\n", inputNum % 2);
       if (inputNum % 2 == 0)
       {
          for (int i = 2; i <= inputNum; i = i + 2)
          {
             printf("%d ", i);
          }
       }
       else
       {
          for (int i = 2; i <= inputNum; i = i + 2)
          {
             printf("%d ", i);
          }
       }
    */
    //2. �� / �� / �ʷ� �̷���� �ð��� 2�� �Է¹޾�, ���� ���� �� / �� / �ʷ� ����ϴ� ���α׷���
    //�ۼ��϶�.�ð��� 12�ð����� ǥ���Ѵ�.��, �ð� ���� �� �ִ� ���� 1�ú��� 12�ñ����̴�.
    //ù��° ���� 0�̸� ���α׷��� �����϶�.
    //Enter two times(h m s h m s) >> 8 22 55 5 45 15
    //2 8 10
    //Enter two times(h m s h m s) >> 12 59 59 12 59 59
    //1 59 58
    //Enter two times(h m s h m s) >> 0
    /*
       int firstHour, firstMinute, firstSecond, secondHour, secondMinute, secondSecond, hour, minute, second;
       while (1)
       {
          printf("Enter two times(h m s h m s) >> ");
          scanf_s("%d", &firstHour);
          if (firstHour == 0)
          {
             break;
          }
          else
          {
             scanf_s("%d %d %d %d %d", &firstMinute, &firstSecond, &secondHour, &secondMinute, &secondSecond);
             hour = firstHour + secondHour;
             minute = firstMinute + secondMinute;
             second = firstSecond + secondSecond;
             for (; second >= 60;)
             {
                minute++;
                second -= 60;
             }
             for (; minute >= 60;)
             {
                hour++;
                minute -= 60;
             }
             for (;hour >= 12;)
             {
                hour -= 12;
             }
             printf("%d %d %d\n\n", hour, minute, second);
          }

       }
    */

    //3. �� ���� ������ �Է����� �޾Ƽ� ���� ū ���� ���� ���� ���� ã�� ����ϴ� ���α׷���
    //�ۼ��϶�.����� ����� �Ʒ��� �����϶�.
    //Enter 3 integers >> 26 5 37
    //max = 37, min = 5
    /*
       int firstValue, secondValue, thirdValue, max, min;
       printf("Enter 3 integers >> ");
       scanf_s("%d %d %d", &firstValue, &secondValue, &thirdValue);
       if (firstValue > secondValue && firstValue > thirdValue)
       {
          max = firstValue;
          if (secondValue > thirdValue)
          {
             min = thirdValue;
          }
          else
          {
             min = secondValue;
          }
       }
       else if (secondValue > firstValue && secondValue > thirdValue)
       {
          max = secondValue;
          if (firstValue > thirdValue)
          {
             min = thirdValue;
          }
          else
          {
             min = firstValue;
          }
       }
       else
       {
          max = thirdValue;
          if (firstValue > secondValue)
          {
             min = secondValue;
          }
          else
          {
             min = firstValue;
          }
       }
       printf("max : %d, min : %d", max, min);
    */

    //4. ���� n1�� n2�� �Է��Ͽ�, n1���� n2����(n1, n2 ����)�� ��� �Ҽ��� ����ϴ� ���α׷��� �ۼ��϶�.
    //����� ����� �Ʒ��� ���� �ϰ�, �� ���� ��� 0�� ��, ���α׷��� �����Ѵ�.
    //Enter two integers >> 3 10
    //3 5 7
    //Enter two integers >> 10 50
    //11 13 17 19 23 29 31 37 41 43 47
    //Enter two integers >> 0 0
    /*
       int n1, n2, primeNum, cnt = 0;
       printf("Enter two integers >> ");
       scanf_s("%d %d", &n1, &n2);
       for (int i = n1; i <= n2; i++)
       {
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
          cnt = 0;
       }
    */
//}
//#include <stdio.h>

//int main()
//{
    //int inputNum;
    //int* arr;
    //printf("Enter the number of integers  >> ");
    //scanf_s("%d", &inputNum);
    //arr = (int*)malloc(sizeof(int) * inputNum + 1);
    //printf("\nEnter integers >> ");
    //for (int i = 0; i <= inputNum + 1; i++)
    //{
    //   scanf_s("%d", &arr[i]);
    //}
    //for (int i = 0; i <= inputNum + 1; i++)
    //{
    //    printf("%d", arr[i]);
    //
    //
    //}
    /*
    int arr[20] = { 5,1,2,4,3,7,6 };
    int tmp = 0, min, value = 0;
    for (int i = 0; i <= 6; i++)
    {

        min = 99999;
        for (int j = i; j <= 6 ; j++)
        {
            
                if (arr[j] < min)
                {
                    min = arr[j];
                    value = j;
                }
            
        }
        tmp = arr[i];
        arr[i] = arr[value];
        arr[value] = tmp;
        printf("%d ", arr[i]);
    }
    */
    /*
    int inputNum1, inputNum2, x=0;

    printf("Enter a number and a base >> ");
    scanf_s("%d %d", inputNum1, inputNum2);

    for (int i = 0; x = 1; i++)
    {
         = inputNum1 / inputNum2;
    }
    */
//}