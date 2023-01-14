/*
Purpose of the program: To check wheter character entered by a user is vowel or consonent
Author: Vivek Singh (Roll Number- 2214504608)
Date: 31/12/2022
*/
#include <stdio.h>
int main()
{
    char c;
    
    //taking the character input from the user
    scanf("%c", &c); 
    
    //if block begins and checks the character
    if (c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U') 
    {
        printf("Vowel.\n");
    }
    else
    {
        printf("Consonent.\n"); 
    }
    //End of if block
    return 0;
}