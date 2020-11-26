#include <stdio.h>
#include <stdlib.h>
#define taille 100
typedef struct _structure {
    char* nom;
    char* tel;
    struct _structure* suivant;
}structure;

int Index(char *name)
{
    int i = 0, nombre = 0;

    for (i = 0 ; name[i] != '\0' ; i++)
    {
        nombre += name[i];
    }
    nombre %= taille;

    return nombre;
}
void ajouterItem(char* nom, char* tel, struct _structure HashTable[taille])
{

    int index = Index(nom);
    if (HashTable[index].nom == "vide" && HashTable[index].tel == "vide")
    {
        HashTable[index].nom = nom;
        HashTable[index].tel = tel;
    }
    else
    {
        structure *elements = HashTable[index].suivant;
        structure precedent=HashTable[index];

        while (elements != NULL)
        {
            precedent= *elements;
            elements = elements->suivant;
        }

        elements->nom = nom;
       elements->tel = tel;
        elements->suivant = NULL;
        precedent.suivant=elements;
    }
   printf("votre enregeistrement est bien effectue a l'indexe :%d \n",index);
}

