#include "Main.h"
int nombreItems(int index,struct _structure HashTable[taille]){
    int count = 1;
    structure *elements = HashTable[index].suivant;
    while (elements != NULL)
    {
        count++;
        elements = elements->suivant;
    }
    printf("le nombre des items dans la position %d est %d \n",index, count) ;
    return count ;
}
void afficherItemsDansIndex(int index,struct _structure HashTable[taille]){

    printf( "Le nom est :%s ", HashTable[index].nom ) ;
    printf("le numero de telephone est : %s \n" , HashTable[index].tel ) ;
    structure *elements = HashTable[index].suivant;
    while (elements != NULL)
    {
        printf( "Le nom est : %s" , elements->nom)  ;
        printf( "le numero de telephone est :%s \n" , elements->tel ) ;
        elements = elements->suivant;
    }
}
