#include<stdio.h>
#include<conio.h>

int main(){

    int data;
    printf("Enter the number\n");
    scanf("%d",&data);
    switch(data){
    case 1:
        printf("One for one reason");
        break;
    case 2:
        printf("Two for together");
        break;
    case 3:
        printf("Three for third-party");
        break;
    default:
        printf("Number is : %d",data);
    }



    getch();
    return 0;
    }
