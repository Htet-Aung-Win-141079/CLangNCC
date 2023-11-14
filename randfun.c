#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

    int i;
    for(i=0;i<20;i++){ //total 20 numbers
        printf("%7d\n",1+(rand()%99)); //1 to 99
        if(i%5==0){
            puts("");
        }
    }
    getch();
    return 0;
}
