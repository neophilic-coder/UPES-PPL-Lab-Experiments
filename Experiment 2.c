/* Identify the suitable program control flow to solve the given problem. Write algorithm, draw flow chart, prepare test cases and test the design for completeness.
1.	Given two numbers calculate sum, difference, multiplication and division.
2.	Find if the given number is even or not.
3.	Find the biggest of three numbers.
4.	Multiply two numbers without using arithmetic multiplication operator (*). */


//CODE 1:
#include <stdio.h>
int main()
{
int a,b;
      printf(“Enter first value:”);
     scanf(“%d”,&a);
     printf(“Enter second value:”);
     scanf(“%d”,&b);
     printf(“Sum=%d \n”, a+b);
     printf(“Difference=%d \n”, a-b);
     printf(“Multiplication=%d \n”, a*b);
     printf(“Division=%d \n”, a/b);
     return 0;
}


//CODE 2:
#include <stdio.h>
int main()
{
      int a;
      printf(“Enter one number:”);
      scanf(“%d”,&a);
      if (a%2==0)
      printf(“The given number is even”);
      else
      printf(“The given number is odd”);
      return 0;
}


//CODE 3:
#include <stdio.h>
int main()
{
      int a,b,c;
      printf(“Enter three numbers:”);
      scanf(“%d %d %d”, &a, &b,& c);
      if (a>b & a>c)
      printf(“The largest numbers is: %d”,a);
      else if (b>a & b>c)
      printf(“The largest numbers is: %d”,b);
      else
     printf(“The largest numbers is: %d”,c);
     return 0;
}


//CODE 4:
#include <stdio.h>
int main()
{
      int a,b, mul=0;
      printf(“Enter a and b :”);
      scanf(“%d%d,&a,&b);
      for (i=1;i<=b;i++)
      {
            mul=mul+a;
      }
      printf(“Multiplication is:%d \n”,mul);
      return 0;
}


