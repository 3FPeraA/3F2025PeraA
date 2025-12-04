// Pag. 208 es. 1
#include <iostream>
using namespace std;

float Area;
void Triangolo() {
    float base,altezza;
    cout<<"\nInserire base: ";
    cin>>base;
    cout<<"Inserire altezza: ";
    cin>>altezza;
    Area=base*altezza/2;
}
void Quadrato() {
    float lato;
    cout<<"\nInserire lato: ";
    cin>>lato;
    Area=lato*lato;
}
void Rettangolo() {
    float base,altezza;
    cout<<"\nInserire base: ";
    cin>>base;
    cout<<"Inserire altezza: ";
    cin>>altezza;
    Area=base*altezza;
}
void Rombo() {
    float diag1,diag2;
    cout<<"\nInserire diagonale 1: ";
    cin>>diag1;
    cout<<"Inserire diagonale 2: ";
    cin>>diag2;
    Area=diag1*diag2/2;
}
void Stampa() {
    cout<<"Area: "<<Area<<" cm";
}

int main() {
    int Scelta;
    do {
        cout<<"1: TRIANGOLO\n2: QUADRATO\n3: RETTANGOLO\n4: ROMBO\n5: USCITA\nScelta: ";
        cin>>Scelta;
        if (Scelta==1) {
            Triangolo();
        } else if (Scelta==2) {
            Quadrato();
        } else if (Scelta==3) {
            Rettangolo();
        } else if (Scelta==4) {
            Rombo();
        }
        Stampa();
        cout<<"\n\n";
    } while (Scelta!=5);
    return 0;
}