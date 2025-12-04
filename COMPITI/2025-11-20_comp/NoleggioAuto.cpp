#include <iostream>
using namespace std;

int main() {
    string nomeCliente;
    float kmIniziali, kmFinali, kmPercorsi, prezzo;
    cout<<"Nome cliente: ";
    cin>>nomeCliente;
    cout<<"Km iniziali macchina: ";
    cin>>kmIniziali;
    cout<<"Km finali macchina: ";
    cin>>kmFinali;
    kmPercorsi = kmFinali - kmIniziali;
    if (kmPercorsi > 0) {
        prezzo = kmPercorsi * 1.20; // 1,20€ prezzo al km
        cout<<"\nIl cliente "<<nomeCliente<<" ha percorso "<<kmPercorsi<<" KM e deve pagare "<<prezzo<<"€";
    } else {
        cout<<"\nErrore nei km inseriti.";
    }
}