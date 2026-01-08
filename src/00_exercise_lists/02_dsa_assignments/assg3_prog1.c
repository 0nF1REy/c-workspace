#include <stdio.h>

struct emp
{
    char gen[10];
    char name[50];
    char desg[30];
    char dept[30];
    float salary;
    float grossTotal, DA, HRA;
};

void input(struct emp p[], int n)
{
    printf("Digite as informacoes do funcionario\n");
    for (int i = 0; i < n; i++)
    {
        printf("Digite o nome\n");
        scanf("%s", &p[i].name);
        printf("Digite o genero\n");
        scanf("%s", &p[i].gen);
        printf("Digite o cargo\n");
        scanf("%s", &p[i].desg);
        printf("Digite o departamento\n");
        scanf("%s", &p[i].dept);
        printf("Digite o salario\n");
        scanf("%f", &p[i].salary);
    }
}

void gross(struct emp p[], int n)
{

    for (int i = 0; i < n; i++)
    {
        p[i].DA = (p[i].salary * 75) / 100.0;
        p[i].HRA = (p[i].salary * 25) / 100.0;
        p[i].grossTotal = p[i].salary + p[i].DA + p[i].HRA;
    }
}

void display(struct emp p[], int n)
{
    gross(p, n);
    printf("\n Informacoes do Funcionario\n");
    for (int i = 0; i < n; i++)
    {
        printf("Nome= %s\n", p[i].name);
        printf("Genero= %s\n", p[i].gen);
        printf("Cargo= %s\n", p[i].desg);
        printf("Salario = %f\n", p[i].salary);
        printf("Salario Bruto = %f\n", p[i].grossTotal);
    }
}

int assg3prog1()
{
    int n;
    printf("Informe o valor de n\n");
    scanf("%d", &n);
    struct emp p[n];
    input(p, n);
    display(p, n);
    
    return 0;
}
