#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
int j = 0;
for(i = 0; i < 100 ; i++){
for(j = 0; j < 100 ; j++){
if ((i+i%10) != (j+j%10) && i<j )
{
putchar((i/10)+'0');
putchar((i%10)+'0');
putchar(' ');
putchar((j/10)+'0');
putchar((j%10)+'0'); 
if(i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
    putchar('\n');

return (0);
}

