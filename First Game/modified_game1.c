#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    //Initialize random number generator
    srand(time(0));



//generate random number betwenn 1 to 100
int randomNumber = (rand() % 100) + 1;
int no_of_guesses=0, guessed;
//Print the random number
// printf("Random number: %d\n", randomNumber);


do{
    printf("guess the number: ");
    scanf("%d", &guessed);
    if(guessed>randomNumber){
        printf("Lower number please \n");
    }
    else{
        printf("Higher number please \n");
    }

    no_of_guesses++;
}
while(guessed != randomNumber);

printf("you guessed the number in %d guesses \n", no_of_guesses);

return 0;

}

