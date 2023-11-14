#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int number;

int main(){

    srand(time(NULL));
    number=1+(rand()*5);
    printf("%d",number);

    getch();
    return 0;
}
