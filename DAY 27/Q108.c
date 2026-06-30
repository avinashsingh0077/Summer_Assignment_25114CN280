#include<stdio.h>
int main(){
    char name[50];
    int m1, m2, m3, m4, m5, total;
    float percentage;
    char grade;

    //Asking user to enter student name and marks
    printf("Enter Student Name : ");
    scanf("%s", name);

    printf("Enter marks of 5 subjects :");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    //Finding total and percentage
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    //Printing grade according to percentage
    if(percentage >= 90)
        grade = 'A';
    else if(percentage >= 75)
        grade = 'B';
    else if(percentage >= 60)
        grade = 'C';
    else if(percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    //Printing student details
    printf("\n----- MARKSHEET -----\n");
    printf("Name       : %s\n", name);
    printf("Total      : %d\n", total);
    printf("Percentage : %.2f\n", percentage);
    printf("Grade      : %c\n", grade);

    return 0;
}