#include<stdio.h>
#include<conio.h>

int multiply(int a,int b);
int plus(int h,int y);

int main(){

    int fnum;
    int snum;
    printf("Enter the first number:");
    scanf("%d",&fnum);
    printf("Enter the second number:");
    scanf("%d",&snum);
    printf("The multiplication of two numbers is: %d\n",multiply(fnum,snum));
    printf("The plusing of two numbers is: %d\n",plus(fnum,snum));

    getch();
    return 0;
}
int multiply(int a,int b){
    return a*b;
}
int plus(int h,int y){
    return h+y;
}
