#include<stdio.h>
#include<conio.h>

int main(){

    int data;
    int x=10;
    printf("Enter the number:\n");
    scanf("%d",&data);

    if(data==x){
        printf("Your data and x are same");
    }else if(data>x){
        printf("Data is bigger than x");
    }else if(data<x){
        printf("Data is smaller than x");
    }else{
        printf("Condition wrong");
    }

    getch();
    return 0;
}
