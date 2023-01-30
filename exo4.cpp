#include <iostream>
using namespace std;

int main() {
int n, somme = 0;
int i = 0;

cout << "Quand on le demande, tapez un entier suivi de <entree>\n" << endl;

while (i < 10) {
    cout << "Entree ? ";
    cin >> n;
    somme += n;
    i++;
}
cout << "La moyenne est " << somme / 10.0;
return 0;
}
