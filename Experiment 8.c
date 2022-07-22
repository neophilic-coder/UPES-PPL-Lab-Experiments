/* Write algorithm and C program, compile, execute and test the code using Linux C compiler with suitable test cases.
1.	Find the sum of rows and columns of matrix of given order.
2.	Count how many even numbers are there in a given integer array. [Hint: Linear Search]
3.	Store ‘n’ integers in an array in ascending or descending order. Search for a number with binary search technique. */


//CODE 1:
#include<stdio.h>
int main()
{
	int array[10][10],i,j,m,n,sum=0;
	printf(“Enter the order of matrix\n”);
	scanf(“%d %d”,&m,&n);
	printf(“Enter the co-efficients of the matrix\n”);
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			scanf(“%d”,%array[i][j]);
		}
	}
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			Sum=sum+array[i][j];
		}
		printf(“Sum of the %d row is: %d\n”,i,sum);
		sum=0;
	}
	for(j=0;j<n;++j)
	{
		for(i=0;i<m;++i)
		{
			sum=sum+array[i][j];
		}
		printf(“Sum of the %d column is: %d\n”,j,sum);
	}
}


//CODE 2:
#include<stdio.h>
int main()
{
	int a[100],i,n,even=0,odd=0;
	printf(“Enter the size of an array:”);
	scanf(“%d”,&n);
	printf(“Enter elements in an array:”);
	for(i=0;i<n;i++)
	{
		scanf(“%d”,&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		even++;
		else
		odd++;
	}
	printf(“Even numbers in array:%d”,even);
}


//CODE3
#include<stdio.h>
int main()
{
  int n,j,i,temp;
  printf("Enter the size of array");
  scanf("%d",&n);
  int A[n];
  for(i=0;i<n;i++)
  {
    printf("Enter the co-efficients of the array a[%d]",i);
    scanf("%d",&A[i]);
  }
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if(A[j]>A[j+1])
      {
        temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
      }
    }
  }
  printf("\n Sorted Array:");
  for(i=0;i<n;i++)
  {
    printf("%d\n",A[i]);
  }
}
