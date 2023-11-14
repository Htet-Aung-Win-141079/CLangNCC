#include<stdio.h>
#include<conio.h>

int main(){
    int a;
    int b;
    int c;
    int total;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("Enter the third number:\n");
    scanf("%d",&c);
    total=a+b+c;
    printf("Your result number is: %d",total);

    getch();
    return 0;
}
