#include <stdio.h>
/**
 * main - jajaj
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
int num;
char ch;

for (num = '0'; num <= '9'; num++)
for (ch = 'a'; ch <= 'f'; ch++)

putchar(num);
putchar(ch);

putchar('\n');

return (0);
}
