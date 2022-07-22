/*List of lab activities:
1.	Design a structure ‘product’ to store the details of the product purchased like product name, price per unit, number of quantities purchased, and amount spent. Get the name, price per unit, and number of quantities of the product purchased. Calculate the amount spent on the product and then display all the details of the procured product using structure pointers.
2.	Design a structure ‘student_record’ to store student details like name, SAP ID, enrollment number, date of registration and data of birth. The element date of joining is defined using another structure ‘date’ to store date details like day, month, and year. Get data of ‘n’ students and then print the entered values [Hint: Use concept of Nested structures and Array of Structures].
3.	Design a union ‘product’ to store the details of the product purchased like product name, price per unit, number of quantities purchased, and amount spent. Get the name, price per unit, and number of quantities of the product purchased. Calculate the amount spent on the product and then display all the details of the procured product using union pointers.*/


//CODE 1:
#include<stdio.h>
struct item
{ 
char item_name[30];
 int ppu;
 int no_of_items;
};
int main(){
 struct item pro,*b; b = &pro;
 printf("Enter item name:");
 scanf(" %[^\n]s",pro.item_name);
 printf("Enter the price of a single unit(in rs):");
 scanf("%d",&pro.ppu);
 printf("Enter the no of items u want to buy:");
 scanf("%d",&pro.no_of_items); 
printf("\n"); 
printf("Dispaying product info...\n"); 
printf("Item name: %s\n",b >item_name);  printf("Price of a single item: %d\n",b >ppu);  printf("Number of items: %d\n",b >no_of_items);
printf("Total amount to be paid: %d\n",b->ppu*b >no_of_items);     
return 0;
}


//CODE 2:
#include<stdio.h>
struct student_record
{
	char fname[20];
	char lname[20];
	int sapid;
	int roll_no;
};
struct dates;
{
	int day_dob;
	char month_dob[10];
	int year_dob;
	int day_doj;
	char month_doj[10];
	int year_doj;
	struct student_record stur;
};
int main()
{
	int x,i,j;
	printf(“Enter the number of students:”);
	scanf(“%d”,&x);
	struct dates list1[x];
	for(i=0;i<x;i++)
	{
		printf(“Enter the details of student %d:\n”,i+1);
		printf(“Enter the first name of the student:”);
		scanf(“%s”,&list[i].stur.fname);
		printf(“Enter the last name of the student:”);
		scanf(“%s”,&list[i].stur.lname);
    printf(“Enter the sapid of the student:”);
		scanf(“%s”,&list[i].stur.sapid);
		printf(“Enter the roll no student:”);
		printf(“Enter the day of birth:”);
		scanf (“%d”,&list[i].day_dob);
    printf(“Enter the month of birth:”);
		scanf(“%s”,&list[i].month_dob);
    printf(“Enter the yearof birth:”);
		scanf(“%d”,&list[i].year _dob);
    printf(“Enter the day of joining:”);
		scanf(“%d”,&list[i].day_doj);
    printf(“Enter the month of joining:”);
		scanf(“%s”,&list[i].month_doj);
    printf(“Enter the year of joining:”);
		scanf(“%d”,&list[i]. year_doj);
		printf(“------------\n”);
	}
	printf(“Displaying information”);
	for(j=0;j<x;j++)
	{
		printf(“------------\n”);
		printf(“Printing details of student: %d\n”j+1);
		printf(“First name:%s\n”,list1[j].stur.fname);
		printf(“Last name:%s\n”,list1[j].stur.lname);
		printf(“Sapid:%d\n”,list1[j].stur.sapid);
		printf(“Roll no:%d\n”,list1[j].stur.roll_no);
		printf(“Date of birth: %d%s%d\n”,list1[j].day_dob,list1[j].month_dob,list1[j].year_dob);
		printf(“Date of joining: %d%s%d\n”,list1[j].day_doj,list1[j].month_doj,list1[j].year_doj);
		}
		return 0;
}


//CODE 3:
#include<stdio.h>
union item
{
 char item_name[30];
 int ppu;
 int no_of_items;
};
int main()
{ 
int x, y;
 union item pro,*b;
 b = &pro;
 printf("Enter item name:");
 scanf(" %[^\n]s",pro.item_name);
 printf("Item name: %s\n",b>item_name);
 printf("Enter the price of a single unit(in rs):");
 scanf("%d",&pro.ppu);
 printf("Price of a single item: %d\n",b->ppu); 
 x=b; 
 printf("Enter the no of items u want to buy:"); 
 scanf("%d",&pro.no_of_items);

 printf("Number of items: %d\n",b->no_of_items);
 y =b;
 printf("Total amount to be paid: %d\n",x*y);
 return 0;
}

