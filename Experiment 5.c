/*  Write algorithm and C program, compile, execute and test the code using Linux C compiler with suitable test cases.
1.	Given the positive number ‘n’, generate all the Armstrong numbers between 1 and n. [Hint: a 3-digit number 153 is an Armstrong number when (1^3+5^3+3^3) is equal to 153]
2.	Multiple two given numbers without using the arithmetic binary multiplication operator using for loop.
3.	Find the sum of digits of a number using while loop.
4.	Given value of ‘n’, find the sum of the series 1+ 1/2 + 1/3 + 1/4 + 1/5 +...+ 1/n.
5. Print the given pattern using nested for loop
    11111
     22222
    33333
     44444
    55555
5.	Fibonacci series upto n terms.  */


//CODE 1:
#include <stdio.h>
#include <math.h>
void main()
{
  	 int x;
     int sum=0;
  {
  	 printf("enter the no.");
   	 scanf("%d",&x);
  }
    int y= x;
    while(y!=0)
    {
         int z= y%10;
         sum = sum+ pow(z,3);
         y=y/10;
    }
     
    if(sum==x)
    printf("%d  given no. is armstrong", x);
    else 
    printf("%d  given no. is not armstrong",x);
}


//CODE 2:
#include<stdio.h>
int main()
{
	int p,q,i=1,sum=0;
	printf("Enter two numbers:");
  scanf("%d %d",&p,&q);
	while(i<=q);
	{
		sum=sum+p;
		i++;
	}
printf(“The result is:%d”,sum);
return 0;
}


//CODE 3
#include <stdio.h>
#include <math.h>
void main()
{
  int x;
  int sum=0;
  printf("enter the no.");
  scanf("%d",&x);
  int a=x ;
  while(a!=0)
  {
      int z=a%10;
      sum = sum+ z;
      a=a/10;
  }
  printf(" sum of given no. is  %d ", sum);
}


//CODE 4:
#include <stdio.h>
void main()
{
    float n, sum=0.0;
    printf("Enter the number: ");
    scanf("%f" ,&n);
    for(float i=1;i<=n;i++)
    {
       	sum = sum+1.0/i;
    }
     printf(" %f ", sum);
}


//#include <stdio.h>
#include <math.h>
void main()
{
int i,j;
printf(“Enter the values:”);
scanf(“%d %d”,&i,&j);
for(int i=1;i<=5;i++)
{ 
      for(int j=0 ;j< 5;j++)
      {
   	  printf("%d", i);
      }
 }
}


//CODE 6:
#include <stdio.h>
void fib(int );
void main()
{
    int a=0,b=1,n;
    printf(" Enter a no. ");
    scanf("%d",&n);
void fib(int x)
{  
  int i, p=0,q=1,r;
  if(x==1)
  printf("0");
  else if(x==2);
  printf("0  1");
  else
  {
    printf("%d  %d", p, q);
    for(int i=1;i<=x-1;++i)
    {  
        r=p+q;
        printf(" %d  ", r);
        p=q;
        q=r;
     }
  }
}
}


