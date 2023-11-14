#include<stdio.h>
#include<conio.h>

int main(){

    int data;
    int total;
    int remainder;
    printf("The number we have is 10\n");
    printf("Enter the number to divide our number:\n");
    scanf("%d",&data);
    total=10/data;
    remainder=10%data;
    printf("The result of dividing : %d\n",total);
    printf("The remainder of result: %d\n",remainder);
    getch();
    return 0;
}
