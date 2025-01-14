#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int rules();//functions
int  round1();///funnctions
int main()
{
rules();
printf("\n \n");

round1();
return  0;
}
int round1()
{
    char name[55];
    printf("Enter  your name:  ");
    scanf("%s",name);
    printf("\n \n");

    int deposit;
    printf("Enter your  deposite  amount");
    scanf("%d",&deposit);
    printf("\n \n");

    printf("Your current blance is $%d",deposit);
    printf("\n \n");

    int bet1;
    printf("Enter your bet amount");
    scanf("%d",&bet1);
    printf("\n \n");

    if(bet1>deposit)
    {
        printf("money is not enough");
        printf("enter  again:  $");
        scanf("%d",&bet1);
    }

        int computer1;
        computer1 = rand()%10;

        int guess1;
        printf("Enter your guess number  1  to  10");
        scanf("%d",&guess1);
        printf("\n \n");

        if(guess1>10)
        {
            printf("number is not in range");
            printf("enter  again:  ");
            scanf("%d",&guess1);
        }
        printf("\n \n");

        if(guess1  ==  computer1)
        {
            printf("you won &%d",bet1);
            printf("\n \n");

            int bet2;
            bet2=bet1*10;

            int  new_won;
            if(bet1==deposit)
            {
                new_won=bet2+0;
            }
            else{
                new_won=bet2+deposit;
            }
            printf("you won $%d",new_won);
        }
        else if(guess1!=computer1)
        {
            printf("You loss $%d",bet1);
            printf("\n \n");

            printf("the correct no is  %d",computer1);
            printf("\n \n");

        int new_loss;
        new_loss=deposit-bet1;
        printf("your new balance is $%d",new_loss);
        printf("\n  \n");

        if(new_loss==0)
        {
            printf("BKL,you have $0  as a  blannce\n");
            printf("game over");
        }
        else  
        {
            int decision;
            printf("press  1 to play again\n");
            printf("press 2 to exit\n");

            printf("Do you want to play again?");
            scanf("%d",&decision);
            printf("\n  \n");

            if(decision==1)
            {
                rules();
                round1();
              /**/  printf("\n  \n");

                printf("you have $%d as a balance\n",new_loss);
                printf("\n  \n");

                int bet3;
                printf("%s,enter your bet\n",name);
                scanf("%d",&bet3);

                printf("\n  \n");

                if(bet3>new_loss)
                {
                    printf("you dont have enough balance\n");
                    printf("enter again :  $");
                    scanf("%d",&bet3);
                }
                int  guess2;
                printf("enter your guess  1   to 10\n");
                scanf("%d",&guess2);
                printf("\n  \n");

                int computer2;
                computer2=9;

                if(guess2>10)
                {
                    printf("number is not in range");
            printf("enter  again:  ");
            scanf("%d",&guess2);
            printf("\n   \n");

                }
                if(guess2==computer2){
                    printf("you win $%d\n",bet3);
                     printf("the correct no is  %d",computer2);
                    printf("\n  \n");

                    int  b;
                    b= bet3*10;

                    int b1;
                    if(bet3==new_loss)
                    {
                        b1=b+0;
                    }
                    else
                    {
                        b1=b+new_loss;
                    }
                    printf("You won $%d as a total",b1);
                }
                else if(guess2!=computer2)
                {
                    printf("you lose $%d\n",bet3);
                    printf("\n  \n");

                    int  b2;
                    b2=new_loss -  bet3;
                    printf("You have $%d as a total",b2);
                     printf("the correct no is  %d",computer2);
                    printf("\n  \n");

                    if(b2==0)
                    {
                        printf("you are out of money\n");
                        printf("Game over ");
                        printf("\n  \n");
                    

                    }
                    
                }

            }
            else if (decision==2)
            {
                printf("Have A Good Day\n");
            }
        }
        
    }

}
int rules()
{
    printf("----------------------------------------------------------------------\n");
    printf("  Rules of the game: \n");
    printf("----------------------------------------------------------------------\n");
    printf("1. Choose number betn 1 to 10 \n");
    printf("2. If you win you will get 10X of your money \n");
    printf("3.  If you bet on wrong  no  you will  lose your  betting  amounnt \n");
    printf("----------------------------------------------------------------------\n");

}
