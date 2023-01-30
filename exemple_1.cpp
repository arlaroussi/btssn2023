#include <iostream>
using namespace std;

const double prix du litre = 0.89;  //déclaration du prix du litre de gazole (en euros) comme constante
int reserve = 10000;                //déclaration de la réserve de la pompe, en litres

double prix(int nb)  {               // définition d’une fonction appelée "prix" : Ellerenvoie le prix de nb litres de gazole
     return nb * prix du litre;
}

int delivre(int nb)  { //Cette fonction renvoie 0 si la réserve est insuffisante, 1 sinon et délivre alors nb litres

    if (nb > reserve)
        return 0;
    reserve -= nb;
return 1;
}

int main() {

int possible;
do {
    int quantite;
    cout << "Bonjour. Combien voulez-vous de litres de gazole ? ";
    cin >> quantite;
    possible = delivre(quantite);
if (possible)
cout << "Cela fait " << prix(quantite) << " euros.\n";
}
