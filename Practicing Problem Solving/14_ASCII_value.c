#include <stdio.h>
#include <stdlib.h>
/*
ASCII - American Standard Code for Information Interchange
character encoding standard that assigns a unique numerical value to all characters including special symbols. 
In C programming, the ASCII value of the character is stored instead of the character itself.
*/

int main()
{
    system ("cls");
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    //Below is implicit data type conversion where %c is promoted to %d
    // This happens because of the integer promotion where the character is converted to the corresponding ASCII value when some integer operation is performed on it.
    printf("ASCII value of the %c is: %d",c,c);
    return 0;
}