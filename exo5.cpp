#include <iostream>
using namespace std;

#include <math.h>

int main() {
int n, somme = 0;
int i = 0;

cout << "Quand on le demande, tapez un entier suivi de <entree>\n" << endl;

while (i < 10) {
    cout << "Entree ? ";
    cin >> n;
    cout << "Le carre = " << pow(n,2) << endl;
}

return 0;
}
