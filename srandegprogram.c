#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int SysNum;
    int HumanNum;

    do{
      srand(time(NULL));
      SysNum=1+(rand()%10);
      printf("Enter the number to compare with system number:\n");
      scanf("%d",&HumanNum);

      if(SysNum>HumanNum){
        printf("SysNum - %d and YourNum - %d | System Number is greater than your number\n",SysNum,HumanNum);
        exit(0);
      }else if(SysNum<HumanNum){
        printf("SysNum - %d and YourNum - %d | System Number is lower than your number\n",SysNum,HumanNum);
        exit(0);
      }

    }while(SysNum!=HumanNum);
    printf("Your number is same with system number");

    getch();
    return 0;
}
