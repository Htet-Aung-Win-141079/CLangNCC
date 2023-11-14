#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int One=0;
int Two=0;
int Three=0;
int Four=0;
int Five=0;

int main(){

    int i;
    int number;
    srand(time(NULL));
    number=(1+(rand()*5));
    for(i=0;i<5000;i++){

        switch(number){
        case 1:
        One++;
        break;
        case 2:
        Two++;
        break;
        case 3:
        Three++;
        break;
        case 4:
        Four++;
        break;
        case 5:
        Five++;
        break;
        }
    }
    printf("%s%s","Number","Frequent");
    printf("%d%d",1,One);




    getch();
    return 0;
}
