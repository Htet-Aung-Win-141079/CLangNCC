#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int age;
    int smoney;
    int id;
    int betmoney;
    int luckynumber;
    printf("#######Welcome from lottery GAME#######\n");

    printf("Enter your age\n");
    scanf("%d",&age);
    if(age>17){

            printf("Enter your money amount:\n");
            scanf("%d",&smoney);
            printf("You current money amount is: %d\n",smoney);
        while(age>17){

            printf("Enter your game account id\n");
            scanf("%d",&id);
            while(id==111){

                printf("Enter your money(must be more than 1000):\n");
                scanf("%d",&betmoney);
                while(betmoney>999){

                    printf("Enter your lottery number\n");
                    scanf("%d",&luckynumber);
                    if(luckynumber==107){
                        printf("You won the lottery!!\n");
                        smoney=betmoney*10;
                        printf("Your current money is %d\n",smoney);
                        int num;
                        printf("Press 1 to play again And Press 2 to exit the game\n");
                        scanf("%d",&num);
                        if(num==1){
                            printf("Play Again Now\n");
                        }
                        else if(num==2){
                            printf("Good Bye");
                            exit(0);
                        }
                    }else{
                        printf("Try Again\n");
                        smoney=smoney-betmoney;
                        printf("Your remain money amount is %d\n",smoney);
                        if(smoney<1000){
                            printf("You have not enough money to play\n");
                            exit(0);
                        }
                    }
                }
            }
        }
    }else{
        printf("You are not allow to our game because of your age");
    }
    getch();
    return 0;
}
