#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>  // Нужна для bool
#include <time.h>  

int main(){

          system("chcp 65001 > nul");

    srand(time(NULL)); 
     printf("Здравствуйте Это игра Угадай число 1,100");
     bool game_is=true;
     int secret_namber=rand()% 100+1;
     int histor[11];
     int coinc=0;
     printf("s");

     while(game_is)
     {
         printf("введите своё предположение\n");
         int player_namber;
         
         
         scanf("%d",&player_namber);
         
         if(player_namber==secret_namber)
         {
             printf("Вы угадали");
             game_is=false;
         }
         else if(player_namber<secret_namber)
         {
            histor[coinc] =player_namber;
            coinc++;
             printf("Вы не угадали число больше");
         }
          else if(player_namber>secret_namber)
         {
             histor[coinc] =player_namber;
            coinc++;
             printf("Вы не угадали число меньше");
         }
         if (coinc==10)
         {
            game_is = false;
         }
         

     }
    for (int i = 0; i <= coinc; i++)
    {
        printf("%d\n",histor[i]);
    }
    
    return 0;

        
    }//2235756
