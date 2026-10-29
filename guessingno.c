#include<stdio.h>
int main()
{
int secret=25;
int guess;
int attempt = 0;

printf("===== NUMBER GUESSING GAME =====\n");
printf("guess a number between 1 and 50:");
scanf("%d", &guess);

while(guess != secret)
{
    attempts++;
    if (guess > secret)
{
    printf("Too High!Try Again.\n");

}
else
{
    printf(" Too low! Try again");
}
printf("\nGuess a number between 1 and 50:");
scanf("%d", &guess);
}
attempt++;
printf("\nCongratulations! You guessed the correct number."\n);
printf("Total Attempts: %d\n", attempts);

printf("===== GAME OVER =====");
return 0;

}