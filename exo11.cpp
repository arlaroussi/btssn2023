#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main( ) {
    string nom;

    cout<<"Entrer votre nom :  ";
    getline(cin,nom);

    for( int i = 0; i < nom.size() ; i++) {

          if (islower(nom[i]) )
            //convertir en maj
            nom[i] = toupper(nom[i]);
        else
            //convertir en minu
            nom[i] = tolower(nom[i]);
    }
//Résultat
cout << "La conversion : ";
cout << nom << endl;
}
