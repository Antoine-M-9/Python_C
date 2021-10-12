#include <stdio.h>
#include <math.h>

void swap (int *a, int *b); // important de déclarer la fonction au début
int main(void)
{
    int x, y;
    printf("x: ");
    scanf("%i", &x); // on choisit notre numéro 
    printf("y: ");
    scanf("%i", &y);
    
    printf("x is %i, y is %i \n", x, y);
    swap(&x, &y); // la fonction swap
    printf("x is %i, y is %i \n", x, y);
}

void swap(int *a, int *b) // fonction qui permet de faire l'échange grâce à tmp 
{
    int tmp = *a; // tmp permet de stocker a 
    *a = *b; // afin que b donne son nombre à a 
    *b = tmp; // enfin b prend celui de tmp 
}