#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct book
{
	char code[20];
	char name[100];
	int date;
	int cost;
};
struct old
{
    char nam[20];
    char mob[10];
    char moviename[100];
    int total;
    int seats;
};


int seat = 60 ;

void insert_details();//for inserting movie details
void viewAll(); // for view all data
void find(); // for finding data
void book_ticket(); //for booking tickets
void old_record(); //for view old recorrds of users,booked tickets

int main(void)
{

	 int ch;
 	do{
	printf("\n====================================================================");
	printf("\n");
	printf("\t Movie Ticket booking ");
	printf("\n");
	printf("\n====================================================================");

	printf("\nPress <1> Insert Movie");
   	printf("\nPress <2> View All Movie");
	printf("\nPress <3> Find Movie ");
	printf("\nPress <4> Book Ticket");
	printf("\nPress <5> View All Transactions");
   	printf("\nPress <0> Exit ");

   	printf("\nEnter your Choice ::");
   	scanf("%d",&ch);

   	switch (ch)
   	{
    		case 1 :
    		insert_details();
   		break;
		case 2:
    		viewAll();
   		break;

		case 3:
    		find();
   		break;

		case 4:
		book_ticket();
		break;

		case 5:
		old_record();
		break;

    		case 0:
    		exit(0);
    		break;

    		default:
    		printf("Wrong choice !");
    		break;
   	}
 }while(ch!=0);

}


void insert_details()
{

	FILE *fp;
	struct book b;
	printf("Enter movie code :- ");
	scanf("%s",b.code);
	printf("Enter  name :- ");
	gets(b.name);
	gets(b.name);
	printf("Enter Release Date:- ");
	scanf("%d",&b.date);
	printf("Enter Ticket Price:- ");
	scanf("%d",&b.cost);

	fp=fopen("data.txt","a+b");

	if(fp == NULL)
	{
		printf("File not Found");
	}
	else
	{
		fwrite(&b,sizeof(struct book),1,fp);
		printf("Record insert Successful");
	}
		printf("\n");
	fclose(fp);
}
void find() //find details
{
	struct book b;
	FILE *fp;
	int tempprice;
    char ch[20];
	printf("Enter movie code :");
	scanf("%s",ch);
	//system("clear");
	fp = fopen("data.txt","r+b");
	if(fp == NULL)
	{
		printf("file not found !");
		exit(1);

	}
	else
	{
		    system("cls");
		    while(fread(&b, sizeof(struct book), 1, fp))
	    {
		  if(strcmp(ch,b.code)==0)
          {
				printf("%Movie Code:%s\t",b.code);
		        printf("Movie Name: %s\t",b.name);
		        printf("Movie Release Date: %d\t",b.date);
                printf("Ticket Price:NRs %d\t",b.cost);
                printf("\n");
                printf("\n");
          }
            }
}

	fclose(fp);
}
void viewAll()
{
    struct book b;
	char ch;
	FILE *fp;

	fp = fopen("data.txt","r+b");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
	    system("cls");
	    while(fread(&b, sizeof(struct book), 1, fp))
	    {
		        printf("%Movie Code:%s\t",b.code);
		        printf("Movie Name: %s\t",b.name);
		        printf("Movie Release Date: %d\t",b.date);
                printf("Ticket Price:NRs %d\t",b.cost);
                printf("\n");
                printf("\n");
            }
	}
	fclose(fp);
}
//for ticket booking
void book_ticket()
{
 struct book b;
 struct old o;
	FILE *fp;

	FILE *ufp;

	int total_seat,total_amount;
	char mobile[50];
	int m,i,j,seat[20],tempprice;
	char name[50],tempname[50];
	char ch; //used in display all movies
	char movie_code[20]; //for searching

	// disply all moives by default for movie code
	fp = fopen("data.txt","r");
 while(fread(&b, sizeof(struct book), 1, fp))
	    {
		        printf("%Movie Code:%s\t",b.code);
		        printf("Movie Name: %s\t",b.name);
		        printf("Movie Release Date: %d\t",b.date);
                printf("Ticket Price:NRs %d\t",b.cost);
                printf("\n");
                printf("\n");
            }


	//display ends
	printf("\n For booking Ticket choose Movie.\n");
	printf("\n Enter movie code :");
	scanf("%s",movie_code);
	//system("clear");
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
	    system("cls");
		 while(fread(&b, sizeof(struct book), 1, fp))
	    {
	        if(strcmp(movie_code,b.code)==0)
            {
		        printf("%Movie Code:%s\t",b.code);
		        printf("Movie Name: %s\t",b.name);
		        strcpy(tempname,b.name);
		        printf("Movie Release Date: %d\t",b.date);
                printf("Ticket Price:NRs %d\t",b.cost);
                tempprice=b.cost;
                printf("\n");
                printf("\n");
            }
            }

	}
	printf("\n* Fill Details  *");
	printf("\n Please Enter Your name :");
	gets(name);
	gets(name);
	printf("\n Mobile number :");
	gets(mobile);
	printf("\n Total number of tickets :");
	scanf("%d",&total_seat);
	system("cls");
	printf("\n");
	printf("\t\t\t\t\tSCREEN\n\n");
	{
for(i=0; i<100; i=i+10)
{
    for(j=i; j<i+10; j++)
    {
        printf("\t%d",j+1);
    }
    printf("\n");
    printf("\n");
}
}

    printf("\n Please Choose the Seat Number:\n");
    for(i=0; i<total_seat; i++)
    {
        printf("Seat %d:",i+1);
        scanf("%d",&seat[i]);
    }
	total_amount = tempprice * total_seat;


	printf("\n ***** ENJOY THE MOVIE ****\n");
	printf("\n-------Costumer Details:-------\n");
	printf("\nName : %s\n",name);
	printf("\nMobile Number:");
	puts(mobile);
	printf("\nMovie Name:");
	puts(tempname);
	printf("\nTotal Seats : %d\n",total_seat);
	printf("\nCost per ticket : %d\n",tempprice);
	printf("\nTotal Amount : %d\n",total_amount);
	printf("\nSeats Chosen:\n");
    for(i=0; i<total_seat; i++)
    {
        printf("\t%d",seat[i]);
    }
    strcpy(o.nam,name);
    strcpy(o.mob,mobile);
    strcpy(o.moviename,tempname);
    o.seats=total_seat;
    o.total=total_amount;

	ufp=fopen("oldTransaction.txt","a+b");
	if(ufp == NULL)
	{
		printf("File not Found");
	}
	else
	{
		fwrite(&o,sizeof(struct old),1,ufp);
		printf("\nRecord insert Successful");
	}
    printf("\n");
	fclose(ufp);
	fclose(fp);

}
//for view all user transactions
void old_record()
{
    struct old o;
	char ch;
	int i;
	FILE *fp;
     fp=fopen("oldTransaction.txt","r+b");
	 system("cls");
	    while(fread(&o, sizeof(struct old), 1, fp))
	    {
    printf("\nName : %s\n",o.nam);
	printf("\nMobile Number:");
    printf("%s",o.mob);
	printf("\nMovie Name:");
	puts(o.moviename);
	printf("\nTotal Seats : %d\n",o.seats);
	printf("\nTotal Amount : %d\n",o.total);
	printf("Selected Seats:");
	      }
	fclose(fp);
}
