#include <stdio.h>
#include <string.h>
#include <stdlib.h>



char bus[][130] = {"Hanif Enterprice","Shohagh Enterprice","Lalon Shah Enterprice","Rozina Enterprice","Green Line Travells"};
char time[][120] = {"07.00 AM","10.00 AM","12.00 PM","03.00 PM","06.00 PM","09.00 PM"};
char destiny[][50] = {"Dhaka", "Chattogram", "Khulna", "Rajshahi", "Sylhet", "Barishal", "Rangpur", "Mymensingh"};



void menu(){
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("     BUS TICKET RESERVATION SYSTEM");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");

    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  MAIN MENU  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("   [1] View Bus Info\n\n");
    printf("   [2] Book Tickets\n\n");
    printf("   [3] Cancel Booking\n\n");
    printf("   [4] Booking History\n\n");
    printf("   [5] Exit\n\n");

    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   ENTER YOUR CHOICE: ");
    //scanf("%d",&num);
}

void buslist(){
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("     BUS TICKET RESERVATION SYSTEM");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");

    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  BUS LIST  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n\n");
    
    for(int i=0; i<(sizeof(bus)/sizeof(bus[0])); i++){
        printf("   [%d]    %s\n\n", (i+1), bus[i]);
    }

    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   ENTER YOUR CHOICE: ");
    //scanf("%d",&num);
}

void timef()
{
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("     BUS TICKET RESERVATION SYSTEM");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");

    printf("   \xcd\xcd\xcd\xcd\xcd\xcd  BUS BOARDING TIME  \xcd\xcd\xcd\xcd\xcd\xcd \n\n");

    for(int i=0; i<(sizeof(time)/sizeof(time[0])); i++){
        printf("   [%d]    %s\n\n", (i+1), time[i]);
    }

    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   ENTER YOUR CHOICE: ");
    //scanf("%d",&num);
}

void destination(){
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("     BUS TICKET RESERVATION SYSTEM");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");

    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  DESTINATION  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");

    for(int i=0; i<(sizeof(time)/sizeof(time[0])); i++){
        printf("   [%d]    %s\n\n", (i+1), destiny[i]);
    }

    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   ENTER YOUR CHOICE: ");
}

void login(){
	int a=0, i=0;
    char uname[10], c=' ';
    char pword[10], code[10];
    char user[10]="user";
    char pass[10]="user";
    do{
        system("cls");
        printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        printf("     BUS TICKET RESERVATION SYSTEM");
        printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");

        printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  LOGIN FORM  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  ");

        printf("\n\n   ENTER USERNAME: ");
        scanf("%s", uname);
        printf(" \n   ENTER PASSWORD: ");
        while(i<10)
        {
            scanf("%c", &pword[i]);
            c=pword[i];
            if(c==13) break;
            else printf("*");
            i++;
        }
        pword[i]='\0';
        //char code=pword;
        i=0;
        //scanf("%s",&pword);
        if(strcmp(uname,"user")==0 && strcmp(pword,"user")==0){
            printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
            printf("  \n\n   WELCOME USER !!!!");
            printf("\n\n\n   Press any key to continue...");
            char t;
            scanf("%c", &t);//holds the screen
            break;
        }
        else{
            printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
            printf("\n\n   LOGIN IS UNSUCESSFUL...PLEASE TRY AGAIN...");
            a++;

            char t;
            scanf("%c", &t);//holds the screen
        }
    }while(a<=2);

	if(a>2){
	    printf("\nSorry you have entered the wrong username and password for four times!!!");
	}
	system("cls");
}

// void seat(int trno)
// {
//     printf("Your Bus Number is %d ********** %s", trno, ch[trno-1]);
//     system("cls");
//     printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
//     printf("     BUS TICKET RESERVATION SYSTEM");
//     printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");

//     int i, index=0, j;
//     j=read_number(trno);
//     read_name(trno);
//     char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
//     for(i=0; i<j; i++){
//         strcpy(tempname[num1[i]], name[i]);
//     }
//     for(i=0; i<8; i++){
//         printf("   ");
//         for(j=0; j<4; j++){
//             printf("%d.%s\t",index+1,tempname[index+1]);
//             index++;
//         }
//         printf("\n");
//     }
// }

int main(){
    destination();
}