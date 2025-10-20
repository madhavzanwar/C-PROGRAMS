//making first game ever
//number guessing simple game

#include<stdio.h>
int main(){
    int guess_num, correct_num;

    correct_num = 13; // ✅ Use = for assignment, not ==

    printf("Enter your guess(between 1 to 100): \n");
    scanf("%d", &guess_num);

    if(guess_num == correct_num){
        printf("The number you entered is correct!! \n");
    }

    else if(guess_num < correct_num){
        printf("Try a higher number \n");
    }

    else {
        printf("Try a lower number \n");
    }

    return 0;
}