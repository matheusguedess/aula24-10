#include <stdio.h>
#include <locale.h>

int main(void)
{
    int c=0;
    printf("impar de 1 a 100: \n");
    while(c<=100)
    {
    if(c%2==1)
    printf("\n%d",c);
    c++;
    }

}
