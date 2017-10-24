#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int n, c=0;
    printf("digite um numero");
    scanf("%d", &n);
    printf("PAR  /  IMPAR\n");
    while(c<=n)
    {
        if(c%2==0)
            printf("%d\t", c);
        else
            printf("%d\t\n", c);
    c++;
    }
}

