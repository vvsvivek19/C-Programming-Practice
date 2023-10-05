/*If the marks obtained by a student in five different subjects are
input through the keyboard, write a program to find out the
aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student
in each subject is 100.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int marks[5], aggregate = 0;
    float percentage;
    printf("Please enter marks of 5 subjects:\n");
    for (int i=0; i<5; i++){
        scanf("%d", &marks[i]);
    }
    for (int j=0; j<5; j++){
        aggregate = aggregate + marks[j];
    }
    percentage =  (aggregate * 100)/500;
    printf("Aggregate marks of the student: %d\n", aggregate);
    printf("Percentage of the student: %.2f\n", percentage);
    return 0;
}