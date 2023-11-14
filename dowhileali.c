#include<stdio.h>
#include<conio.h>
#include<stdlib.h>



int main(){
int result;
int count=1;
int number;

printf("Enter the number to get ali:\n");
scanf("%d",&number);

    do{
        result= number * count;
        printf("%d * %d = %d\n",number,count,result);
        count++;
    }while(count<=10);


    printf("This is terminating code");




    getch();
    return 0;
}
