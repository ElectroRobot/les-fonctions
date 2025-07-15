// nous déclaons ici la bibliothèque iostream pour utiliser la fonction cin pour les entrées et aussi count les sorties
#include <iostream>

//définissons par défaut le namespace à std, cela nous permettra d'éviter de le saisir à chaque fois que nous utilisons les fonctions cin et cout
using namespace std;

int main ()
{
    float Val_1, Val_2, Val_3, somme;
    cout << "entrez 3 valeurs : " << endl;
    cin >> Val_1 >> Val_2 >> Val_3;
    somme = Val_1 + Val_2 + Val_3;
    cout << "La somme des 3 valeurs est : " << somme << endl;
    return 0;
}
