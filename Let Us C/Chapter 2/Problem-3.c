#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int count = 1, amount,  rem;
    int hundreds, fifties, tens, fives, twos, ones;
    printf("Enter a amount: ");
    scanf("%d",&amount);
    for (int i=1;i<=6;i++){
        switch(count){
        case 1:
            hundreds = amount / 100;
            if (hundreds == 0)
            {
                ++count;
                continue;
            }
            else {
                rem = amount % 100;
                amount = rem;
                ++count;
            }
        case 2:
            fifties = amount / 50;
            if (fifties == 0)
            {
                ++count;
                continue;
            }
            else {
                rem = amount % 50;
                amount = rem;
                ++count;
            }
         case 3:
            tens = amount / 10;
            if (tens == 0)
            {
                ++count;
                continue;
            }
            else {
                rem = amount % 10;
                amount = rem;
                ++count;
            }
         case 4:
            fives = amount / 5;
            if (fives == 0)
            {
                ++count;
                continue;
            }
            else {
                rem = amount % 5;
                amount = rem;
                ++count;
            }
        case 5:
            twos = amount / 2;
            if (twos == 0)
            {
                ++count;
                continue;
            }
            else {
                rem = amount % 2;
                amount = rem;
                ++count;
            }
        case 6:
            ones = amount / 1;
            if (ones == 0)
            {
                break;
            }
    }
    }
    printf("Hundreds are: %d\n", hundreds);
    printf("Fifties are: %d\n", fifties);
    printf("Tens are: %d\n", tens);
    printf("Fives are: %d\n", fives);
    printf("Twos are: %d\n", twos);
    printf("Ones are: %d\n", ones);
    return 0;
}