#include <stdio.h>

int main()
{
    // 1. Unary minus ( – )
    int positiveInteger = 100;
    int negativeInteger = -positiveInteger;
    printf("Positive Integer = %d\n", positiveInteger);
    printf("Negative Integer = %d", negativeInteger);

    // 2. Increment ( ++ )
    int a = 5;
    int b = 5;
    printf("\nPre-Incrementing a = %d", ++a);
    printf("\nPost-Incrementing b = %d", b++);

    // 3. Decrement
    int c = 5;
    int d = 5;
    printf("\nPre-Decrementing a = %d", --c);
    printf("\nPost-Decrementing b = %d", d--);

    // 4. NOT ( ! )
    int e = 10;
    int f = 5;
    if (!(e > f))
    {
        printf("\nf is greater than e\n");
    }
    else
    {
        printf("\ne is greater than f");
    }

    // 5. Addressof operator ( & )
    int g = 20;
    printf("\nAddress of a = %p", &g);

    // 6. sizeof()
    printf("\nSize of double: %d\n", sizeof(double));
    printf("Size of int: %d\n", sizeof(int));

    return 0;
}