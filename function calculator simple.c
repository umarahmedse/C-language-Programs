#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void subf();
void addf();
void divf();
void multif();
int sub,add,division,multi;
int option;
int a, b, c, d;

int main()
{
    printf("Enter the first number?:\n");
    scanf("%d", &a);
    printf("Enter the second number?:\n");
    scanf("%d", &b);
    printf("What do you want to do?\n1:Sum\n2:Diffeence\n3:Division\n4:Multiplication\n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        addf();
        break;
    case 2:
        subf();
        break;
    case 3:
        divf();
        break;
    case 4:
        multif();
        break;
    default:
        printf("No Correct Option!\n");
        break;
    }
    return 0;
}

void addf()
{

    if (option == 1)
    {
        add = a + b;
        printf("The sum is %d\n", add);
    }
}
void subf()
{
    if (option == 2)
    {
        sub = a - b;
        printf("The difference is %d\n", sub);
    }
}
void divf()
{
    if (option == 3)
    {
        division = a / b;
        printf("The quotient is %d\n", division);
    }
}
void multif()
{
    if (option == 4)
    {
        multi = a * b;
        printf("The product is %d\n", multi);
    }
}