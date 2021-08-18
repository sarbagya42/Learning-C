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
    char nam[100];
    char mob[100];
    char moviename[100];
    int total;
    int seats;
    int booked[20];
};
struct logon
{
    char fname[90];
    char username[90];
    char password[90];
};
char ma[10]="master";
int loginn();
int registration ();
void loginsystem(int);
int seat = 60 ;
void insert_details();//for inserting movie details
void viewAll(); // for view all data
void find(); // for finding data
void book_ticket(); //for booking tickets
void old_record(); //for view old recorrds of users,booked tickets
void adminmode();
int main()
{
    system("color 2");
    int ch;
    int d=1;
  	do
    {
        printf("\n");
        printf("\n\t\t\t====================================================================\n");
        printf("\n");
        printf("\t\t\t\t\t\tMOVIE TICKET BOOKING SYSTEM ");
        printf("\n");
        printf("\n\t\t\t====================================================================");
        printf("\n\t\t\t\t\tPress <1> LOGIN OR REGISTER TO BOOK A MOVIE\n");
        printf("\n\t\t\t\t\tPress <2> ADMIN MODE\n");
        printf("\n\t\t\t\t\tPress <3> VIEW ALL MOVIES\n");
        printf("\n\t\t\t\t\tPress <4> FIND MOVIE\n");
        printf("\n\t\t\t\t\tPress <0> EXIT\n");
        printf("\n\t\t\tEnter your Choice ::");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1 :
                loginsystem(d);
            break;
            case 2 :
                adminmode();
            break;
            case 3:
                viewAll();
            break;
            case 4:
                find();
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
void adminmode()
{
    int p;
    char ok[10];
    system("cls");
    printf("\n\t\t\tType the Admin Password:");
    gets(ok);
    gets(ok);
    if(strcmp(ok,ma)==0)
    {
    printf("\nTYPE '1' to INSERT MOVIE\n\nTYPE '2' TO VIEW ALL TRANSACTIONS:\n");
    scanf("%d",&p);
    if(p==1)
    {
        system("cls");
        printf("\n\t\t\t\t\tENTER NEW MOVIE DETAILS:\n");
        insert_details();
    }
    else if(p==2)
    {
        system("cls");
        old_record();
    }
    else
    {
     system("cls");
     main();
    }
}
else
{
system("cls");
printf("\t\t\t\t\tWRONG ADMIN PASSWORD!");
main();
}
}
void loginsystem(int m)
{
    int v=1;
    system("cls");
    printf("\n");
    printf("\n\t\t\t====================================================================\n");
    printf("\n");
    printf("\t\t\t\t\t\tMOVIE TICKET BOOKING SYSTEM ");
    printf("\n");
    printf("\n\t\t\t====================================================================");
    int option;
    if(m==5)
    {
        printf("\n\n\n\t\t\tWRONG CREDENTIALS!! KINDLY REGISTER FIRST OR TRY AGAIN\n");
    }
    printf("\n\t\t\tPress '1' to REGISTER\n\t\t\tPress '2' to LOGIN\n\n");
    printf("\t\t\tPRESS (1 / 2):");
    scanf("\t\t\t%d",&option);
    getchar();
    if(option == 1)
    {
        system("CLS");
        registration();
    }
    else if(option == 2)
    {
        system("CLS");
        loginn();
    }
    else
    {
        printf("WRONG OPTION TRY AGAIN !!");
        loginsystem(v);
    }
}

int registration()
{
    printf("\n\t\t\t\t\tTHE THEATRE C REGISTRATION PORTAL\n");
    struct logon a;
    FILE *app;
    app=fopen("loginn.txt","a+b");
    printf("\n\n\t\t\t\t\tPlease Type Your FULL NAME:");
    gets(a.fname);
    printf("\n\t\t\t\t\tPlease Choose a USERNAME and a STRONG PASSWORD:\n");
    printf("\n\t\t\t\t\tType USERNAME:");
    gets(a.username);
    printf("\n\t\t\t\t\tType PASSWORD:");
    gets(a.password);
    fwrite(&a,sizeof(struct logon),1,app);
    fclose(app);
    system("cls");
    printf("\t\t\t\t\t\tREGISTRATION SUCCESSFUL");
}
int loginn()
{
    printf("\n\t\t\t\t\tTHE THEATRE C LOGIN PORTAL\n");
    char usernam[90];
    char pass[90];
    int k=0;
    struct logon a;
    printf("\n\t\t\tUSER NAME:");
    gets(usernam);
    printf("\n\t\t\tPASSWORD:");
    gets(pass);
    FILE *bpp;
    bpp=fopen("loginn.txt","r+b");
    while(fread(&a,sizeof(struct logon),1,bpp))
    {
        if(strcmp(a.username,usernam)==0 && strcmp(a.password,pass)==0)
        {
            printf("\n\t\tLOGIN SUCCESSFUL\n");
            k=k+1;
            book_ticket();
        }
    }
    if(k==0)
    {
    k=k+5;
    loginsystem(k);
    }
    fclose(bpp);
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
void viewAll()
{
    struct book b;
	char ch;
	FILE *fp;
	fp = fopen("data.txt","r+b");
	if(fp == NULL)
	{
		printf("file not found !");
		exit(1);
	}
	else
	{
	    system("cls");
	    printf("\n\t\t\t\t\t||TRENDING MOVIES ON THE THEATRE C||\n\n");
	    while(fread(&b, sizeof(struct book), 1, fp))
	    {
            printf("%Movie Code:%s\t",b.code);
            printf("Movie Name: %s\t",b.name);
            printf("Movie Release Date: %d\t",b.date);
            printf("Per Ticket Price:NRs %d\t",b.cost);
            printf("\n");
            printf("\n");
        }
	}
	fclose(fp);
}
//for ticket booking
void book_ticket()
{
    system("cls");
    struct book b;
    struct old o;
    int c=0,d=0;
	FILE *fp;
    FILE *ufp;
	int total_seat,total_amount;
	char mobile[50];
	int m,i,j,k,seat[20],tempprice;
	int store[100];
	char name[50],tempname[50];
	char ch; //used in display all movies
	char movie_code[20]; //for searching
	// disply all moives by default for movie code
	//cant we just use void viewall() ??
	fp = fopen("data.txt","r+b");
	ufp=fopen("oldTransaction.txt","r+b");
	printf("\n");
    printf("\n\t\t\t\t\t||TRENDING MOVIES ON THE THEATRE C||\n\n");
    while(fread(&b, sizeof(struct book), 1, fp))
	{
        printf("%Movie Code:%s\t",b.code);
        printf("Movie Name: %s\t",b.name);
        printf("Movie Release Date: %d\t",b.date);
        printf("Per Ticket Price:NRs %d\t",b.cost);
        printf("\n");
        printf("\n");
    }
	//display ends
	printf("\n For booking Ticket choose Movie.\n");
	printf("\n Enter movie code :");
	scanf("%s",movie_code);
	//system("clear");
	//cant we use void find() ??
	fp = fopen("data.txt","r");
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
	        if(strcmp(movie_code,b.code)==0)
            {
                printf("%Movie Code:%s\t",b.code);
		        printf("Movie Name: %s\t",b.name);
		        strcpy(tempname,b.name);
		        printf("Movie Release Date: %d\t",b.date);
                printf("Per Ticket Price:NRs %d\t",b.cost);
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
    fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file not found !");
		exit(1);
	}
	else
	{
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
    printf("\t\t\t\t\t||SCREEN||\n\n");
    fclose(ufp);
    fclose(fp);
    ufp=fopen("oldTransaction.txt","r+b");
    while(fread(&o, sizeof(struct old), 1, ufp))
    {
        if(strcmp(o.moviename,tempname)==0)
        {
            for(i=0; i<o.seats; i++)
            {
                store[c]=o.booked[i];
                c=c+1;
            }
        }
    }
    for(i=0; i<100; i=i+10)
    {
        for(j=i; j<i+10; j++)
        {
            for(k=0; k<c; k++)
            {
                if(store[k]==j+1)
                {
                    printf("\t*");
                    d=d+1;
                }
            }
            if(d!=1)
            {
                printf("\t%d",j+1);
            }
            d=0;
        }
        printf("\n");
        printf("\n");
    }
    fclose(ufp);
    printf("\n\n\t\t\t\t *-->NOT AVILABLE\n\n\n");
    printf("\n Please Choose the Seat Number:\n");
    for(i=0; i<total_seat; i++)
    {
        printf("Seat %d:",i+1);
        scanf("%d",&seat[i]);
    }
	total_amount = tempprice * total_seat;
    system("cls");
	printf("\n\t\t\t\t\t\t ***** ENJOY THE MOVIE ****\n");
	printf("\n\t\t\t\t\t\t-------Costumer Details:-------\n");
	printf("\n\t\t\t\t\t\tName : %s\n",name);
	printf("\n\t\t\t\t\t\tMobile Number:");
	puts(mobile);
	printf("\n\t\t\t\t\t\tMovie Name:");
	puts(tempname);
	printf("\n\t\t\t\t\t\tTotal Seats : %d\n",total_seat);
	printf("\n\t\t\t\t\t\tCost per ticket : %d\n",tempprice);
	printf("\n\t\t\t\t\t\tTotal Amount : %d\n",total_amount);
	printf("\n\t\t\t\t\t\tSeats Chosen:\n");
	printf("\t\t\t\t\t\t\t");
    for(i=0; i<total_seat; i++)
    {
        printf("%d\t",seat[i]);
        o.booked[i]=seat[i];
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
		printf("\n\n\t\t\t\t\t\t||SUCCESSFULLY RECORDED||");
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
     printf("\n\n\t\t\t\t\t ALL TRANSACTIONS\n\n");
	while(fread(&o, sizeof(struct old), 1, fp))
	{
        printf("_________________________________");
        printf("\nName : %s\n",o.nam);
        printf("\nMobile Number:");
        printf("%s",o.mob);
        printf("\n\nMovie Name:");
        puts(o.moviename);
        printf("\nTotal Seats : %d\n",o.seats);
        printf("\nTotal Amount : %d\n",o.total);
        printf("\nSelected Seats:\n");
        for(i=0; i<o.seats; i++)
        {
            printf("\t%d",o.booked[i]);
        }
        printf("\n");
        printf("__________________________________");
    }
	fclose(fp);
}
