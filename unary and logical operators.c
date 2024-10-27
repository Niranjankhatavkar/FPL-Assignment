#include <stdio.h>
 
 int main()
 {
    // 1. Unary minus ( - )
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
    printf("Pre-Decrementing a = 5%d\n", --c);
    printf("Post-Decrementing b = %d", d--);

    // 4. NOT (!)
    int e = 10;
    int f = 5;
    if (!(e > f))
    {
        printf("f is greater than e\n");
    }
    else
    {
        printf("e is greater than f");
    }

    // 5. Address of operator ( & )
    int g = 20;
    printf("Address of a = %p", &g); 
    // 6. sizeof()
    printf("size of double: %d\n", sizeof(double));
    printf("size of int: %d\n", sizeof(int));

    return 0;

 }