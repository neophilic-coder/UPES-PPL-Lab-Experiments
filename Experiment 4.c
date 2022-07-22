/* Write algorithm and C program, compile, execute and test the code using Linux C compiler with suitable test cases.
1.	Find the biggest of 3 numbers.
2.	Check whether a given year is leap year or not.
3.	Find the roots of a quadratic equation.
4.	Check if a given character is a vowel or consonant using Switch-case statement. */


//CODE 1
#include <stdio.h>
void main()
{
      int a,b,c;
            printf(“Enter three numbers:”);
            scanf(“%d%d%d”,&a,&b,&c);
            if (a>b&&a>c)
               printf(“The largest number is:%d”,a);
           else if (b>a&&b>c)
               printf(“The largest number is:%d”,b);
          else
               printf(“The largest number is:%d”,c);
      return 0;
}


//CODE 2:
#include <stdio.h>
void main()
{
    int yr;
        printf(“Enter year:”);
        scanf(“%d”,&yr);
        if (yr % 400 == 0)
        {
                  printf(“This is a leap year”);
           }
           else if ( yr%4 ==0 && yr%100 !=0)
           {
                  printf(“ This is a leap year.”);
           else
                   printf(“This is not a leap year.”);  
           }
}


//CODE 3:
#include <stdio.h>
#include <math.h>
void main()
{
     float a,b,c;
           printf(“Enter the coefficients of x^2:”);
           scanf(“%f”,&a);
           printf(“Enter the coefficients of x:”);
          scanf(“%f”,&b);
          printf(“Enter the constant:”);
          scanf(“%f”,&c);

         float check = (b*b)-(4*a*c);
         if (check >=0)
        {
               float d = sqrt(check);
               float x1 = (-b+d)/2*a;
               float x2 = (-b-d)/2*a;
               printf(“The roots of the equation are: %.2f and %.2f”,x1,x2);
       }
       else
      {
           printf(“This equation has no real roots”);
      }
}
