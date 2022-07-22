/* Write algorithm and C program, compile, execute and test the code using Linux C compiler with suitable test cases.
1.	Function main() gets a number and calls the following three functions
a.	“void armstrong(int)” checks if the given number is a Armstrong number or not.  
b.	“void coprime(int) reverses the given number and checks if the given number and reversed number are coprime.
c.	“int factorial(int) computes the factorial of the given number using recursion and returns to main().

2.	Function main() gets two numbers from the user and calls three functions in the given order:
a.	“int triangle_area(int base, int height)” returns the area of the right-angled triangle to main().
b.	“void swap(int *, int*)” swaps the two numbers using bitwise operator and displays them.
c.	“float* remainder (int a, int b)” returns the remainder of a/b to main(). */


//CODE  1:
#include<stdio.h>
#include<math.h>

void armstrong(int a);
void coprime(int b);
int factorial(int c);
int main()
{
	int n;
	printf(“Enter a number:”);
	scanf(“%d”,&n);
	printf(“\n Armstrong_check: \n”);
	armstrong(n);
	printf(“\n Coprime_check: \n”);
	coprime (n);
	printf(“\n Factorial_check: \n”);
	factorial (n);
	return 0;
}
void armstrong(int n1);
{
	int num,r,x=0;
	float result = 0.0;
	num=n1;
	for(num=n1;num!=0;++x)
	{
		num/=10;
	}
	for(num=n1;num!=0;num/=10)
	{
		r = num%10;
		result += pow(r,x);
	}
if((int)result == n1)
{
	printf(“%d is an Armstrong number \n”,n1);
}
else
{
	printf(“%d is not an Armstrong number \n”,n1);
}}
void coprime(int n2)
{
	int o,e=0,rem,i,gcd;
	o=n2;
	while(n2!= 0)
	{
		rem = n2%10;
		e = e*10+rem;
		n2/=10;
	}
	printf(“Original number is:%d\n”,o);
	printf(“Reversed number is:%d\n”,e);
	for(i=1;i<=o;i++)
	{
	if(o%i == 0 && e%i==0)
	{
		gcd = i;
	}
}
if(gcd == 1)
{
	printf(“%d and %d are C0-PRIME NUMBERS. \n”, o,e);
}		
else
{
printf(“%d and %d are NOT C0-PRIME NUMBERS. \n”, o,e);
}}}
int factorial(int n3)
{
	int i,fact=1;
	for(i=1;i<=n3;i++)
	{
		fact=fact*i;
	}
	printf(“\n Factorial of %d is: %d”,n3,fact);
return 0;
}


//Code 2:
#include<stdio.h>
int triangle_area)int base,int height);
void swap(int*, int*);
float* remainder( int a, int b);
int main()
{
	int num1,num2;
	printf(“Enter the first number:”);
	scanf(“%d”,&num1);
	printf(“Enter the second number:”);
	scanf(“%d”,&num2);
	printf(“\n Area of right angles triangle base %d and height %d is:” num1,num2);
	triangle_area(num1,num2);
  printf(“\n Remainder when %d is divided by %d is:”num1,num2);
  remainder(num1,num2);
	printf(“\n Swapping the two numbers using bitwise operator”);
	swap(&num1,&num2);
	return 0;
}
int triangle_area(int base,int height)
{
	float area;
	area=0.5*base*height;
	printf(“\nArea of triangle is:%f”,area);
return 0;
}
void swap(int*x,int*y)
{
		printf(“\nBefore swapping:%d,%d”,*x,*y);
		*x = *x ^ *y;
		*y = *x ^ *y;
		*x = *x ^ *y;
		printf(“\nAfter swapping : %d, %d,*x,*y);
}
float* remainder(int a,int b)
{
	float rem;
	rem=a%b;
	printf(“\n Remainder=%f”,rem);
}

