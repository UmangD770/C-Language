#include<stdio.h>
#include<conio.h>
#include<string.h>
#define sz 2
int searchid,nor,flag;
int i;
struct faculty
{
	int fid;
	char fname[15];
}f[sz];
void insert()
{
	printf("\n Enter What Do You Want To Enter Record :");
	scanf("%d",&nor);
	if(nor==0)
	{
		printf("\n Record Not Found !");
	}
	else
	{
		for(i=0;i<nor;i++)
			{
				printf("\n enter fid :");
				scanf("%d",&f[i].fid);
				printf("\n Enter Faculty Name :");
				scanf("%s",f[i].fname);
			}
	}
}
void update()
{
	if(nor==0)
	{
		printf("\n No Record Found !!");
	}
	else
	{
	int sfid;
	printf("\n Enter Faculty ID What do You want to change Name :");
	scanf("%d",&sfid);
	for(i=0;i<sz;i++)
	{
		if(sfid==f[i].fid)
		{
			strcpy(f[i].fname," ");
			printf("\n Enter A New Name :");
			scanf("%s",f[i].fname);
		}
	}
	}
}
void search()
{
	if(nor==0)
	{
		printf("\n No Record Found !!");
	}
	else
	{
	printf("\n Enter Faculty Id You Want To Search :");
	scanf("%d",&searchid);
	for(i=0;i<sz;i++)
	{
		if(searchid==f[i].fid)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\n Search Faculty Id Is Found");
		printf("\n Faculty Id \t\t Faculty Name");
		printf("\n %d  \t\t %s  ",f[i].fid,f[i].fname);
	}
	else
	{
		printf("\n Search Faculty Is Not Found");
	}
	}
}
void display()
{
	if(nor==0)
	{
		printf("\n No Record Found !!");
	}
	else
	{
	printf("\n================================================================================");
	printf("\nFaculty Id\t\t Faculty Name");
	for(i=0;i<nor;i++)
	{
		printf("\n%d\t\t\t\t%s",f[i].fid,f[i].fname);
	}
	}
}
void main()
{
    /*	clrscr();
	insert();
	display();
	search();
	getch();    */
	int choice=0;
	do
	{
		printf("\n Press 1 to Insert Data");
		printf("\n Press 2 to Display Data");
		printf("\n Press 3 For A Searc Faculty ID");
		printf("\n Press 0 for Exit ");
		printf("\n Press 4 for Re-Enter Name");
		printf("\n Enter Your Choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					insert();
					break;
			case 2:
					display();
					break;
			case 3:
					search();
					break;
			case 4:
					update();
					break;
			case 0:
					getch();
					break;
			default:
					printf("Enter Propper Choice !!");
		}
	}while(choice!=0);
}