#include<stdio.h>
#include<conio.h>
int main(){

    int data;
    printf("Enter the number:");
    scanf("%d",&data);

    while(data<20){
        printf("I love Yoon\n");
        data++;
    }

    getch();
    return 0;
}
