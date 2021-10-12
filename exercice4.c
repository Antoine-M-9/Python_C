#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{
    // nom du fichier que l'on créer + argument "a" = ajouter "continuer à ajouter dans un fichier"
    FILE *file = fopen("phonebook.csv", "a"); // fopen => créer le fichier

    if (file == NULL) // signifie qu'il n'y a pas de fichier
    {
        return 1;
    }

    char car[15]; // il peut y avoir jusqu'à 15 caractères
    char numberplate[15];

    printf("The car brand: ");
    scanf("%s", car); // équivalent au get_char
    printf("The registration plate: ");
    scanf("%s", numberplate);

    fprintf(file, "%s, %s \n", car, numberplate); // on imprime nos réponses dans le fichier

    fclose(file); // on ferme le fichier
}