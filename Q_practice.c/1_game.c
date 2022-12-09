#include<stdio.h>
#include<stdlib.h>//for rand();
#include<time.h>//for srand(time(0));
int main(){
    int number,guess,attempt=1;
    char ch;
    srand(time(0));//srand(time(0)) ye function hai ;
    number=rand()%100+1;// %100+1 ne bataya random number 100 to 1 k beech mai generate hoga;
    printf("\n\tWelcome to our new game\n");
          kai:
          well:
    printf("Press E for play \t Press Q for Quit \n");
    scanf(" %c",&ch);
         if(ch=='E'||ch=='e'){
            printf("\t\tINSTRUCTIONS\n");
            printf("In this game computer will generate a random number which you have to Guess\n");
            printf("If you can guess at least 6 steps then you will be the winner.\n \n");
            printf("\tLets start the game\n");

            lavel:
            printf("Press Y\n");
            scanf(" %c",&ch);
            if(ch=='y'||ch=='Y'){       
            
    printf("guess A number between 1 to 100\n");
    do{
        scanf("%d",&guess);
       
        if(guess<number){
            printf("guess upper number please\n");
        }
        else if(guess>number){
            printf("guess lower number please\n");
        }
        else{
            if(attempt==1){
                printf("\n\tOut standing performance\n");
            }else if(attempt==2){
                printf("\n\tExcellent \n");
            }else if(attempt==3){
                printf("\n\tvery good\n");
            }else if(attempt==4||attempt==5||attempt==6){
                printf("\n\tgood\n");
            }
            else{
                printf("\n\tSorry you lose the game\n");
            }
            printf("you took %d attempts\n \a",attempt);
        }
        attempt++;
    }
    while(guess!=number);
    } 
    else{
        goto lavel;
    }
    }
    else if(ch =='Q'||ch=='q'){
        printf("Have a good Day\n ");
    }else{
        printf("Enter valid key\n");
        goto kai;
    }

      printf("\tPress R for restart or S for stop\n \n");
      scanf(" %c",&ch);
      if(ch=='R'||ch=='r'){
       goto well;
      }else{
        printf("have a nice day");
      }

    
    return 0;
}