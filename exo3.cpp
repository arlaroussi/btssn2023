#include <iostream> // sorties standards
#include <conio.h>     // les commentaires s'écrivent derrière 2 barres
using namespace std;

main()
{
char u,v,w;
int i;
u = 'A';
v = 67;
w = 0x45;
cout<<"Voici u : "<< u << "\n";
cout<<"Voici v : "<< v <<"\n";
cout<<"Voici w : "<< w <<"\n";
i = u; // conversion automatique de type
// pour obtenir le code ascii de la lettre A en base 10
cout<<"Voici i : "<< i << "\n";
// pour obtenir le code ascii de la lettre A en hexadécimal
cout<<"Voici i : "<< hex << i << "\n";
cout<<"Pour continuer frapper une touche...";
getch(); // Attente d'une saisie clavier
}
