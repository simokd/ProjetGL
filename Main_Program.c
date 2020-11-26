int main(int argc, char *argv[])
{
structure tab[taille];


     for (int i = 0; i<taille; i++){
        tab[i].nom = "vide";
        tab[i].tel = "vide";
        tab[i].suivant = NULL;
     }
    ajouterItem("ilyas", "063476671",tab);
    nombreItems(46,tab);
    afficherItemsDansIndex(46,tab);



}
