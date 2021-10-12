#include <stdio.h>

int main(void)
{
    int a, b, c;
    
    printf("Choose 3 numbers \n");
    printf("Number 1: ");
    scanf("%i", &a); // est égal à un get_int
    printf("Number 2: ");
    scanf("%i", &b);
    printf("Number 3: ");
    scanf("%i", &c);
    
    if (a > b && a > c) // vérifie si a est le plus grand nombre
    {
        printf("%i est le plus grand nombre \n", a);
    }
    else if (b > a && b > c)
    {
        printf("%i est le plus grand nombre \n", b);
    }
    else if (c > a && c > b)
    {
        printf("%i est le plus grand nombre \n", c);
    }
    else // si aucun des cas précédent sont correct alors ils sont égaux
    {
        printf("Ils sont égaux \n");
    }
}