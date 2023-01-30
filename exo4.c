#include <iostream>
using namespace std;

int n, somme = 0;
int i = 0;
cout << "Quand on le demande, tapez un entier suivi de <entr´ee>\n";
while (i < 10) {
    cout << "Entr´ee ? ";
    cin >> n;
    somme += n;
    i++;
}
cout << "La moyenne est " << somme / 10.0;
