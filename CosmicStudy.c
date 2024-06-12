/*
#include <stdio.h>

int main()
{
    
    //1. 양의 정수 N을 입력으로 받아서 N이 짝수이면 1부터 N까지의 모든 짝수를 출력하고,
    //N이 홀수이면 1부터 N까지의 모든 홀수를 출력하는 프로그램을 작성하라.
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
    //2. 시 / 분 / 초로 이루어진 시각을 2개 입력받아, 더한 값을 시 / 분 / 초로 출력하는 프로그램을
    //작성하라.시각은 12시간제로 표시한다.즉, 시가 가질 수 있는 값은 1시부터 12시까지이다.
    //첫번째 수가 0이면 프로그램을 종료하라.
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

    //3. 세 개의 정수를 입력으로 받아서 가장 큰 수와 가장 작은 수를 찾아 출력하는 프로그램을
    //작성하라.입출력 양식은 아래와 같이하라.
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

    //4. 정수 n1과 n2를 입력하여, n1부터 n2까지(n1, n2 포함)의 모든 소수를 출력하는 프로그램을 작성하라.
    //입출력 양식을 아래와 같이 하고, 두 수가 모두 0일 때, 프로그램을 종료한다.
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