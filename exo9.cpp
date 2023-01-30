#include <string>
#include <iostream>
using namespace std;


int main() {
 string nom = "Julien";
 string userName;

 while (true) {
  cout << "Entrer votre nom (or 'quit' pour quitter): ";

  cin >> userName;

  if (userName == "Julie") {
   cout << "Hi, Julie!  Bienvenue!" << endl;
    } else if (userName == "quit") {
      cout << endl;
   break;
  } else if (userName != nom) {

   cout << "Hello, " << userName << endl;
  } else {
   cout << "Oh, C'est toi, " << nom << endl;
  }
 }
 return 0;
}
