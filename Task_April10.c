#include <stdio.h>

/*
//1. 2개의 정수 n1과 n2를 입력으로 받아서 1부터 n1까지의 모든 n2의 배수를 출력하고,
//그 합까지 출력하는 프로그램을 작성하라.n1과 n2에 0을 입력하면 프로그램을 종료하라.
//Enter 2 integers >> 20 3
//3 6 9 12 15 18 sum = 63
//Enter 2 integers >> 30 5
//5 10 15 20 25 30 sum = 105
//Enter 2 integers >> 0 0
int main()
{
   int n1, n2, count, sum = 0;
   while (1)
   {
      sum = 0;
      printf("Enter 2 integers >> ");
      scanf_s("%d %d", &n1, &n2);
      if (n1 == 0 && n2 == 0)
      {
         break;
      }
      else
      {
         count = n1 / n2;
         for (int i = 1; i <= count; i++)
         {
            printf("%d ", n2 * i);
            sum = sum + n2 * i;
         }
         printf("\nsum = %d\n\n", sum);
      }
   }
}
*/

/*
//2. 섭씨온도를 화씨온도로, 화씨온도를 섭씨온도로 변환하는 프로그램을 작성하라.
//0을 입력하면 프로그램을 종료하라.
//참고: Celsius 5 / 9 * (Fahrenheit – 32), Fahrenheit = 9 / 5 * Celsius + 32
//Enter temperature and type >> 15C
//Celsius = 15.0, Fahrenheit = 59.0
//Enter temperature and type >> 70F
//Celsius = 21.1, Fahrenheit = 70.0
//Enter temperature and type >> 0
int main()
{
   while (1)
   {
      float celsius, fahrenheit, temperature;
      char type;
      printf("Enter temperature and type >> ");
      scanf_s("%f%c", &temperature, &type, 3);
      if (temperature == 0)
      {
         break;
      }
      else
      {
         if (type == 'C')
         {
            celsius = temperature;
            fahrenheit = 1.8 * celsius + 32;
            printf("Celsius = %0.1f, Fahrenheit = %0.1f\n\n", celsius, fahrenheit);
         }
         else if (type == 'F')
         {
            fahrenheit = temperature;
            celsius = 0.555 * (fahrenheit - 32);
            printf("Celsius = %0.1f, Fahrenheit = %0.1f\n\n", celsius, fahrenheit);
         }
         else
         {
            printf("type is C or F\n\n");
         }
      }
   }
}
*/

/*
//3. 어떤 정수가 입력으로 주어질 때, 이 수를 가능하면 큰 세제곱 수들의 합으로 표현하라. 0을 입력하면 프로그램을 종료하라.
//Enter an integer >> 7
//1 + 1 + 1 + 1 + 1 + 1 + 1
//Enter an integer >> 10
//8 + 1 + 1
//Enter an integer >> 44
//27 + 8 + 8 + 1
//Enter an integer >> 0
int main()
{
   int inputValue, i = 1, x = 1, tripleI;
   printf("Enter an integer >> ");
   scanf_s("%d", &inputValue);
   while(x)
   {
       tripleI = i * i * i;
       if ((i + 1) * (i + 1) * (i + 1) < inputValue)
       {
           i++;
       }
      else if (tripleI > inputValue)
      {
         i--;
      }
      else if (tripleI == inputValue)
      {
         printf("%d", tripleI);
         x = 0;
      }
      else
      {
         printf("%d + ", tripleI);
         inputValue -= tripleI;
      }
   }
}
*/