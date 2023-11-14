#include<stdio.h>
#include<conio.h>

int multiply(int h);

int main(){

    int number;
    printf("Enter the number to power up:");
    scanf("%d",&number);
    printf("Your result of power number is %d",multiply(number));


    getch();
    return 0;
}

int multiply(int h){
    return h*h;
}
