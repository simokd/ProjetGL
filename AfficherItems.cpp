#include<stdio.h>
#include<stdlib.h>
#include "AfficherItems.h"

#define tailleTableau 15
#define Malloc(type) (type*)malloc(sizeof(type))

//Pour tester le fichier en utilisant cette branche uniquement, il suffit de rendre les codes en commentaires sans commentaires
/*typedef struct _structure{
	   	char* nom;
	   	char* tel;
	   	struct _structure * suivant;
	   }structure;*/
	   
	   	void afficherItemsDansIndex(int index, structure * HashTable[tailleTableau])
	{
		structure * it = HashTable[index];
		if(it == NULL){
			printf("Pas d'item dans l'indexe %d \n\n", index);		
		}
		else{
			int i = 1;
			printf("Les items de l'indexe %d sont:\n", index);
			while(it != NULL){
				printf("L'item numero %d :\n",i);
				printf("Nom: %s ,Tel: %s \n",it -> nom,it -> tel);
				i++;
				it = it->suivant;
			}
			printf("\n");
		}
		}
	   
/*	void main()
	{
	structure * HashTable[tailleTableau] = {NULL};
	structure *it1,*it2,*it3;
	it1 = Malloc(structure); it2 = Malloc(structure); it3 = Malloc(structure);
	it1 -> nom = "Hamid Ennasiri" ;
	it1 -> tel = "0650525358" ;
	it1 -> suivant = it2 ;
	
	it2 -> nom = "Nazih Said" ;
	it2 -> tel = "0615288932" ;
	it2 -> suivant = NULL ;
	
	it3 -> nom = "Khadija Aboulkassim" ;
	it3 -> tel = "0790949380" ;
	it3 -> suivant = NULL ;
	
	HashTable[1] = it1;
	HashTable[5] = it3;
	afficherItemsDansIndex(1,HashTable);
	afficherItemsDansIndex(3,HashTable);
	afficherItemsDansIndex(5,HashTable);
		}*/
