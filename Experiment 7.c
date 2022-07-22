/*Write algorithm and C program, compile, execute and test the code using Linux C compiler with suitable test cases.
1.	Find the sum of all array elements using recursion.
2.	Create an array ‘a1’ with ‘n’ elements. Insert an element in ith position of ‘a1’ and also delete an element from jth position of ‘a1’.
3.	Convert uppercase string to lowercase using for loop. */

//CODE 1:
#include <stdio.h>
int sum(int arr[], int s, int length);
int main()
{
    int arr[MAX_SIZE];
    int n, i, suma;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter elements in the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    suma= sum(arr, 0, n);
    printf("Sum of array elements: %d", suma);
     return 0;
}
int sum(int arr[], int s, int length) 
{
    if(s >= length)
        return 0;
    return (arr[s] + sum(arr, s + 1, length));
}


//CODE 2: 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100];
    int element,i,loc,size,n,j,choice;
    printf("C Program to Insert and Delete an Element in an Array using switch case\n");
    printf("1. Inserting an Element in an Array\n");
    printf("2. Deleting an Element in an Array\n");
    printf("Select your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter %d array elements\n",size);
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("List before Insertion: ");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\nEnter an element to insert\n");
        scanf("%d",&element);
        printf("Enter a position to insert an element %d\n",element);
        scanf("%d",&loc);
        loc--;
        for(i=size-1;i>=loc;i--)
        {
            a[i+1]=a[i];
        }
        a[loc]=element;
        printf("List after Insertion: ");
        for(i=0;i<size+1;i++)
        {
            printf("%d ",a[i]);
        }
         break;
    case 2:
        printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter elements\n");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("List before deletion\n");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\nEnter an element to delete\n");
        scanf("%d",&n);
        for(i=0;i<size;i++)
        {
            if(a[i]==n)
            {
                for(j=i;j<(size-1);j++)
                {
                    a[j]=a[j+1];
                }
                break;
            }
        }
        printf("List after deletion\n");
        for(i=0;i<(size-1);i++)
        {
            printf("%d ",a[i]);
        }
        break;
    default:
        printf("Wrong choice ");
    }
    return 0;
}


//CODE 3:
#include <stdio.h>  
#include <conio.h>  
int main ()  
{  
  char str[100];  
  int i;  
  printf (" Enter the string: ");  
  scanf (" %s", &str); 
      
 // use for loop to change string from upper case to lower case  
 for ( i = 0; i <= strlen (str); i++)  
 {  
 // The ASCII value of A is 65 and Z is 90  
 if (str[i] >= 65 && str[i] <= 90)  
 str[i] = str[i] + 32; /* add 32 to string character to convert into lower case. */  
 }  
printf (" \n Upper Case to Lower case string is: %s", str);  
return 0;  
}
