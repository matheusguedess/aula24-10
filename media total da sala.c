#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int x, c=1;
    float total=0, mAluno;
    printf("Numero de alunos na sala: ");
    scanf("%d", &x);

    while(c<=x)
    {
        printf("Digite a media do aluno %d : ", c);
        scanf("%f", &mAluno);

        total=total+mAluno;
        c++;
    }
        total=total/x;
        printf("Media da sala: %f", total);

    }


