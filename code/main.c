#include <stdio.h>
#include <stdlib.h>

void    ft_putchar(char c);
int     math(float pG, float pE);

int main(void)
{
    char *str1 = "CONTROL FUEL";
    char *str2 = "What is the gasoline price?";
    char *str3 = "What is the ethanol price?";
    char *str4 = "It's better to fill with gasoline";
    char *str5 = "It's better to fill with ethanol";
    char *str6 = "Gasoline and ethanol are the same price"; 
    char n = '\n';
    int i = 0;
    int result;
    float pG;
    float pE;

    while (str1[i] != '\0')
    {
        ft_putchar(str1[i]);
        i++;
    }
    ft_putchar(n);
    ft_putchar(n);
    i = 0;
    while (str2[i] != '\0')
    {
        ft_putchar(str2[i]);
        i++;
    }
    ft_putchar(n);
    scanf("%f", &pG);
    ft_putchar(n);
    i = 0;
    while (str3[i] != '\0')
    {
        ft_putchar(str3[i]);
        i++;
    }
    ft_putchar(n);
    scanf("%f", &pE);
    ft_putchar(n);
    result = math(pG, pE);
    i = 0;
    if (result == 0)
    {
        while (str4[i] != '\0')
        {
            ft_putchar(str4[i]);
            i++;
        }
        ft_putchar(n);
    }
    else if (result == 1)
    {
         while (str5[i] != '\0')
        {
            ft_putchar(str5[i]);
            i++;
        }
        ft_putchar(n);
    }
    else if (result == 2)
    {
        while (str6[i] != '\0')
        {
            ft_putchar(str6[i]);
            i++;
        }
        ft_putchar(n);
    }
    return (0);
}
