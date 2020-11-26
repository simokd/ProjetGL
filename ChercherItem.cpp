#include<stdio.h>
#include<stdlib.h>

#define tailleTableau 15
#define Malloc(type) (type*)malloc(sizeof(type))

typedef struct _item{
	   	char* nom;
	   	char* tel;
	   	struct _item * suivant;
	   }item;
	   
		
		void chercherItem(char* nom, item * HashTable[tailleTableau])
	{  
		bool Trouver = false;
		int index;
		item * it;
		for(index=0 ; index<tailleTableau ; index++){
			it = HashTable[index];
			if(it != NULL){
				do{
					if(it -> nom == nom){
						Trouver = true;
						printf("Le nom est trouve dans l'index %d :\n",index);
						printf("Son Tel est : %s \n",it -> tel);
						return ;
					}
				it = it->suivant;
			}while(it != NULL);
			}
			
		}
		free(it);
		if(Trouver==false){
			printf("Le nom %s ne figure pas dans la liste \n",nom);
		}
		}
	   
/*	main()
	{
	item * HashTable[tailleTableau] = {NULL};
	item *it1,*it2,*it3;
	it1 = Malloc(item); it2 = Malloc(item); it3 = Malloc(item);
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
	chercherItem("Hamid Ennasiri", HashTable);
//	chercherItem("Hajar", HashTable);
		}
*/
		
		
