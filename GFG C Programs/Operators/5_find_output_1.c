#include <stdio.h>
int foo(int* a, int* b)
{
    int sum = *a + *b;
    *b = *a;
    return *a = sum - *b;
}
int main()
{
    int i = 0, j = 1, k = 2, l;
    //The foo function will evaluate only if the first condition in OR is false
    l = i++ || foo(&j, &k); 
    printf("%d %d %d %d", i, j, k, l);
    return 0;
}


