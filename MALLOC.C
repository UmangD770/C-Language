#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<alloc.h>
/*struct student
{
	int rno;
	char name[10];
};
struct student s;*/
void main()
{
	int nor=0;
	int *ip;
	clrscr();
	printf("\n How Many Record Do You Want : ");
	scanf("%d",&nor);
	ip=(int*) malloc(nor*sizeof(int));
	printf("\n The Given Bytes Is %d",nor*sizeof(int));
	getch();
}