#include <stdio.h>
#include <locale.h>
//trabalhar com while a condição tem que ser verdadeira


int main()
{
    int op;
    do
    {
    system ("cls");
    setlocale(LC_ALL, "");
    int x, c=0, r;
    printf("-Tabuada-\n");
    printf("Digite para ver a tabuada: ");
    scanf("%d", &x);
    while(c<=10)
    {
        r=x*c;
        printf("%d X %d = %d\n", c, x, r);
        c++;
    }
    printf("Digite [1] para sair: ");
    scanf ("%d", &op);
    }while(op!=1);
}

