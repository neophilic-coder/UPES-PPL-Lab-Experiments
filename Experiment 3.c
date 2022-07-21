/* Write algorithm and C program, compile, execute and test the code using Linux C compiler with suitable test cases.
1.	Obtain the required inputs and compute the areas of the following shapes: Parallelogram (with base and height), Trapezoid (with height, long base, short base), Rhombus (with height and size), Sphere (with radius), Ellipse (with major and minor axis) 
2.	Given two numbers. Demonstrate the swapping of the values (i) Using a third variable (ii) Without using a third variable.
3.	Convert temperature from Celsius to Fahrenheit and Kelvin.
4.	Print the given days in year-month-day format. E.g. 1 Year= 365 days, 1 month, 1 day  */

//CODE 1:

#include <stdio.h>
void main()
{
      printf(“Welcome to area calculator. Select whose area you want to calculate \n”);
      printf(“1. Parallelogram \n 2. Trapezoid \n 3. Rhombus \n 4. Circle \n 5.Ellipse \n”);
      printf("Enter selection:”);
     int sel;
            scanf(“%d”, &sel);
            switch (sel)
           {
               Case 3:
               {
                      float l,b;
                      printf(“Enter length:”);
                      scanf(“%f”, &l);
                      printf(“Enter breadth:”);
                      scanf(“%f”, &b);
                      float ar = l*b;
                     printf(“Area of rhombus is %.2f”,ar);
              }
             break;
          Case 2:
             {
                     float a,b,h;
                     printf(“Enter length of parallel sides:”);
                     scanf(“%f%f”, &a,&b);
                     printf(“Enter height:”);
                     scanf(“%f”, &h);
                     float ar = (a+b)*(h/2);
                     printf(“Area of trapezium is %.2f”,ar);
           }
           break;
    Case 1:
{
                      float l,b;
                      printf(“Enter base:”);
                      scanf(“%f”, &l);
                      printf(“Enter height:”);
                      scanf(“%f”, &b);
                      float ar = l*b;
                     printf(“Area of parallelogram is %.2f”,ar);
              }
              break;
          Case 4:
             { 
                   float r;
                   printf(“Enter radius:”);
                   scanf(“%f”,&r);
               float ar = 3.14*r*r;
               printf(“Area of circle is %.2f”,ar);
              }
              break;
          Case 5:
             { 
                      float a,b;
                      printf(“Enter major radius:”);
                      scanf(“%f”, &a);
                      printf(“Enter minor radius:”);
                      scanf(“%f”, &b);
                      float ar = 3.14*a*b;
                     printf(“Area of ellipse is %.2f”,ar);
              }
              break;
              default: {printf(“Invalid Input”)};
                     break;
            }
}


//CODE 2:
#include <stdio.h>
void swapWith(int n1, int n2)
{
      int c;
      c= n2;
      n2 = n1;
      n1 = c;
      printf(“Numbers swapped with the use of third variable. Order of numbers: %d and %d \n”,n1 , n2);
}
void swapWithout( int n1, int n2)
{
           n1 = n2 + n1;
           n2 = n1 - n2;
           n1 = n1 – n2;
      printf(“Numbers swapped without the use of third variable. Order of numbers: %d and %d \n”,n1 , n2);
}
void main()
{
      int a,b;
      printf(“Enter two numbers:”);
      scanf(“%d%d”,&a,&b);
      printf(“Entered number order: %d%d\n”, a,b);

      swapWith(a,b);
      swapWithout(a,b);
}


//CODE 3:
       #include <stdio.h>
       int main()
      {
             float C,F,K;
             printf("Enter temperature in Celsius:");
           scanf("%f",&C);
           F=(9/5*C)+32;
           K=C+273.15;
           printf("The temp in Fahrenheit is:%f",F);
           printf(“The temp in Kelvin is:%f”,K);
           return 0;
}


//CODE 4:
       #include <stdio.h>
       void main()
      {
             printf(“Enter the number of days:”);
             int days;
             scanf(“%d”,&days);
             int yr = days/365;
             int rem = days%365;
             int mnth = rem/30;
          rem = rem%30;
          printf(“%d years, %d months and %d days”,yr, mnth, rem);
  }



