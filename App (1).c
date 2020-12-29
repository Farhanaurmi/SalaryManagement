#include<stdio.h>
#include<conio.h>
void admin();
void user();
void log_in();
void salary();
void rank();
void user_info();
void copyright();

char name[100];
int age,rank_num, pass=0,count=0;
int password=123456,R1=1000,R2=800,R3=600,R4=400;

int main()
{
    int click;

     while(1)
     {
         system("cls");
         printf("\tMAIN MENU");
          printf("\nEnter any number:\n1.Admin \n2.User\n3.Exit\n");
         scanf("%d",&click);
         switch(click)
     {
     case 1:
        admin();
        break;
     case 2:
        user();
        break;
     case 3:
        exit(1);
        default:
        printf("\nplease try again\n");
     }
     }
  getch();

}
void log_in()
{
    system("cls");

    while(1)
    {
        printf("\tLOG IN");
        if(pass==password)
        {
            break;
        }
        printf("\nEnter your password: ");
        scanf("%d",&pass);
        if(password==pass)
        {
            break;
        }

    }
}
 void admin()
 {

     int click;
     log_in();

     while(1)
     {
          system("cls");
                 printf("\tADMIN\n");

          printf("\nEnter any number:\n1.Rank details\n2.Copyright\n3.return to menu\n");
         scanf("%d",&click);
         switch(click)
     {
     case 1:
        rank(1);
        break;
     case 2:
        copyright();
        break;
     case 3:
        main();
        break;

      default:
       printf("\nplease enter again\n");
     }
     }

 }

 void user()
 {
     system("cls");
     if(count==0)
            {
                 printf("\tUSER VARIFICATION\n");

     printf("Enter your name:\n");
     scanf("\n");
     gets(name);
     printf("Enter your age: \n");
     scanf("%d",&age);
     printf("Enter your rank: \n");
     scanf("%d",&rank_num);
     count++;

            }
     int click;

     while(1)
     {
         system("cls");
                 printf("\tUSER MENU\n");

          printf("\nEnter any number:\n1.Rank details\n2.calculate salary\n3.Copyright\n4.user information\n5.return to menu\n");
         scanf("%d",&click);
         switch(click)
     {
     case 1:
        rank(2);
        break;
     case 2:
        salary();
        break;
     case 3:
        copyright();
        break;
     case 4:
        user_info();
        break;
     case 5:
        main();
        break;

      default:
       printf("\nplease enter again\n");
     }
     }


 }

 void rank(int n)
 {
     system("cls");
             printf("\tRANK DETAILS\n");

     int select;
   if(n==1)
   {
       printf("Rank '1':%d \nRank '2':%d \nRank '3':%d \nRank '4':%d\n",R1,R2,R3,R4);
       printf("Do you want to edit rank?\n1.Yes\n2.No\n ");
       scanf("%d",&select);
       system("cls");
       if(select==1)
    {
       int click,temp;

     while(1)
     {
         printf("\nChange rank value:\n1.rank'1'= %d\n2.rank'2'=%d \n3.rank'3'=%d \n4.rank'4'=%d\n",R1,R2,R3,R4);
         scanf("%d",&click);
         printf("enter new value\n");
         scanf("%d",&temp);
         system("cls");
         switch(click)
     {
     case 1:
       R1=temp;
       break;

     case 2:
       R2=temp;
        break;

     case 3:
       R3=temp;
        break;

     case 4:
       R4=temp;
        break;

      default:
       printf("\nplease enter again\n");
     }
     break;
     }
    }
     else if(select==2)
   {
       admin();
   }
   }

   printf("Rank '1':%d \nRank '2':%d \nRank '3':%d \nRank '4':%d\n",R1,R2,R3,R4);
   if(n==1)
        {
            printf("do you want return to admin menu?\n1.Yes\n2.No\n");
   scanf("%d",&select);
   if(select!=1)
   {
       rank(n);
   }
   else
   {
       admin();
   }
        }
else
{
 printf("do you want return to user menu?\n1.Yes\n");
   scanf("%d",&select);
   if(select==1)
   {
       user();
   }
}
   }


 void salary()
 {
     system("cls");
             printf("\tSALARY\n");

     int total_salary,days;
     printf("Enter your work days in this month: ");
     scanf("%d",&days);
     if(days<32)
     {
         if(rank_num==1)
     {
         total_salary=days*R1;
     }
     else if(rank_num==2)
     {
         total_salary=days*R2;
     }
     else if(rank_num==3)
     {
         total_salary=days*R3;
     }
     else if(rank_num==4)
     {
         total_salary=days*R4;
     }
     printf("\nYour total salart: %d",total_salary);
     }
     else
     {
         printf("Error!");

     }
     int count1;
    printf("\ndo you want return to user menu?\n1.Yes\n");
    scanf("%d",&count1);
   if(count1==1)
   {
       user();
   }
 }

 void user_info()
 {
     system("cls");
             printf("\tUSER INFORMATION\n");

     printf("user name: %s\n",name);
     printf("user age: %d\n",age);
     printf("user rank: %d\n",rank_num);
     getch();
     printf("\n");
 }

 void copyright()
 {
     system("cls");
             printf("\t\t\tCOPYRIGHT\n");

     printf("\n\t\tALL RIGHTS RESERVED\n\t\tTO FARHANA ISLAM URMI\n\t\tE-MAIL:farhanaurmi123@gmail.com\n");
     getch();
       printf("\n");
 }


