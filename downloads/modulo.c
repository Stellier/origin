#include<stdio.h>
#include<unistd.h>

void ft_putchar(void)
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int i;
    
    a = 99;
    b = 99;
    
    c = '0' + (a / 10);
    d = '0' + (b / 10);
    e = '0' + (a % 10);
    f = '0' + (b % 10);
    
    while (i < 10)
    {
        if (i == 9)
        {
            write(1, &c, 1);
            write(1, &d, 1);
            write(1, " ", 1);
            write(1, &e, 1);
            write(1, &f, 1);
            write(1, " ", 1);
           // break;
        }
        else
        {
            write(1, &c, 1);
            write(1, &d, 1);
            write(1, " ", 1);
            write(1, &e, 1);
            write(1, &f, 1);
            write(1, ", ", 2);
            
        }
        i++;
    }
}

int main(void)
{
    ft_putchar();
}