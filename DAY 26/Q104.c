#include<stdio.h>
int main(){
    int score = 0;
    char answer;

    printf("----- QUIZ APPLICATION -----\n\n");

    printf("1. What is the capital of India?\n");
    printf("a) Mumbai\nb) Delhi\nc) Kolkata\n");
    printf("Enter answer: ");
    scanf(" %c", &answer);

    if(answer == 'b' || answer == 'B')
        score++;

    printf("\n2. How many days are there in a week?\n");
    printf("a) 5\nb) 6\nc) 7\n");
    printf("Enter answer: ");
    scanf(" %c", &answer);

    if(answer == 'c' || answer == 'C')
        score++;

    printf("\n3. Which language is used for system programming?\n");
    printf("a) C\nb) HTML\nc) CSS\n");
    printf("Enter answer: ");
    scanf(" %c", &answer);

    if(answer == 'a' || answer == 'A')
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}