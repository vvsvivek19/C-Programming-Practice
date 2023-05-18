#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    int x=5;
    int y;
    int *px; /* pointer to an integer */
    int *py; /* pointer to an integer */
    px=&x; /* assign address of x to px */
    y=*px; /* assign value of x to y */
    py=&y; /* assign address of y to py */
    printf("\nx=%d &x=%u px=%u *px=%d, *(&x)=%d", x, &x, px, *px, *(&x));
    printf("\ny=%d &y=%u py=%u *py=%d", y, &y, py, *py);
    return 0;
}