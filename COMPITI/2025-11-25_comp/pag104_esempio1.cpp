// Pag. 104 primo esempio
#include <iostream>
using namespace std;

int main() {
    int St;
    cout<<"Inserisci stagione (1,2,3,4) : ";
    cin>>St;
    switch(St) {
        case 1:
        cout<<"Inverno";
        break;
        case 2:
        cout<<"Primavera";
        break;
        case 3:
        cout<<"Estate";
        break;
        case 4:
        cout<<"Autunno";
        break;
        default:
        cout<<"Stagione non valida";
        break;
    }
    return 0;
}