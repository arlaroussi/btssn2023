#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main( ) {
    string nom, prenom;

    cout << "Entrer votre nom :  ";
    cin >> nom;

    cout << "Entrer votre prenom :  ";
    cin >> prenom;

    nom.swap(prenom);

    //prenom.append(3,'*');

    prenom.append("xxx",1,3);
    cout << nom << " " << prenom;
}
