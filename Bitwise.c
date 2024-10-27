#include <stdio.h>

int main()
{
// 1. Bitwise AND
int a = 12, b = 25;
printf("Output = %d", a & b);

// 2. Bitwise OR
int c = 12, d = 25;
printf("Output = %d", c | d);

// 3. Bitwise XOR
int e = 12, f = 25;
printf("Output = %d", e ^ f );

// 4. Bitwise complement
printf("Output = %d\n", ~35);
printf("Output =%d\n",~-12);

// 5. Shift Operators
int num=212, i;
for (i=0; i <= 2; ++i)
{
    printf("Right shift by %d: %d\n", i, num >> i);
}
printf("\n");
for  (i = 0; i <= 2; ++i)
{
    printf("Left shift by %d: %d\n", i, num << i);
}
return 0;
}