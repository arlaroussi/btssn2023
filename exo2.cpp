#include <iostream> // sorties standards
#include <conio.h>     // les commentaires s'�crivent derri�re 2 barres
using namespace std;

main()
{
int a, b, calcul ; //d�claration de 3 variables
cout<<"BONJOUR";//affichage d'un message sur l'�cran
a = 10 ; // affectation
b = 50 ; // affectation
calcul = (a + b)*2 ; //
cout <<" Affichage de a : "<< a<<"\n";
cout <<" Affichage de b : "<< b<<"\n";
cout <<" Voici le r�sultat : "<< calcul<<"\n";
cout<<"Pour continuer frapper une touche...";
getch(); // Attente d'une saisie clavier
}
