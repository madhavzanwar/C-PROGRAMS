#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0)); // Seed for random number generation
    int player, computer = (rand() % 3); // Random number between 0 and 2
    // 0 --> Snake
    // 1 --> Water  
    // 2 --> Gun

    printf("Enter 0 for Snake, 1 for Water, 2 for Gun: ");
    scanf("%d", &player);

    // Generate random number for computer's choice
    printf("Computer chose: %d\n", computer);

    if (player == 0 && computer == 1){
        printf("you win! Snakes drinks the water.\n");
    }

    else if(player ==0 && computer == 2){
        printf("you lose! Gun shoots the snake.\n");
    }

    else if(player ==1 && computer == 0){
        printf("you loose! Snake drinks the water.\n");
    }

    else if(player ==1 && computer ==2){
        printf("you win! Water douses the gun.\n");
    }

    else if(player ==2 && computer ==0){
        printf("you win! Gun shoots the snake.\n");
    }

    else if(player ==2 && computer ==1){
        printf("you lose! Water douses the gun.\n");
    }

    else if(player == computer){
        printf("It's a tie!\n");
    }

    else{
        printf("Invalid input! Please enter 0, 1, or 2.\n");
    }

    
    return 0;

}