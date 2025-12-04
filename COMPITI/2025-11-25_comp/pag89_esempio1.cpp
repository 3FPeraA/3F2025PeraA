// Pag 89/90 primo esempio
#include <iostream>
using namespace std;

void controllo() {
    string name;
    int age;
    cout<<"Inserisci nome: ";
    cin>>name;
    cout<<"Inserisci eta: ";
    cin>>age;
    if (age>=18) {
        cout<<name<<" è maggiorenne.";
    }
}

int main() {
    controllo();
    return 0;
}