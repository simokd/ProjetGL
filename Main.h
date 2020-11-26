#ifndef Main_H
#define Main_H

#declaration de  notre structure
typedef struct _structure {
    char* nom;
    char* tel;
    struct _structure* suivant;
}structure;

int Index(char *name);
void ajouterItem(char* nom, char* tel, struct _structure HashTable[taille]);
void afficherItemsDansIndex(int index, structure * HashTable[tailleTableau]);
void chercherItem(char* nom, structure * HashTable[tailleTableau]);


#endif  
