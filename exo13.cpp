#include <iostream>
#include <cstring>
    using namespace std;

int main() {
    char str1[] = "France";
    char str2[] = "Pays-Bas";

    char str3[] = "Espagne";
    char str4[] = "Espagne";

    // str2 est plus grande que str1 (puisque M > F )
    cout << "str1 et str2 : "<<strcmp(str1,str2)<<endl;

    // str3 est plus grande que str2 (caractère miniscule est plus grand que le majiscule )
    cout << "str2 et str3 : "<<strcmp(str3,str2)<<endl;

    // str3 et str4 sont égales
    cout << "str3 et str4 : "<<strcmp(str3,str4)<<endl;

    return 0;

}
