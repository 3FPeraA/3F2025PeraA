/* Pag. 78 es. 1
Calcolo costo fotocopie.
Prezzo bianco e nero: 0,10€
Prezzo colore: 0,80€
Rilegare fascicolo: 1,30€
Calcolare: numero di fotocopie totali acquistate, costo fotocopie bianco e nero, 
costo fotocopie colori e costo totale fascicolo di fotocopie rilegato.
*/
#include <iostream>
using namespace std;

void calcoloImporto() {
    cout<<"CALCOLO COSTO FOTOCOPIE";
    const float prezzoBN = 0.10, prezzoC = 0.80, prezzoR = 1.30; //prezzoR: prezzo rilegatura
    int numBN, numC, rilegare;
    float costoBN, costoC, costoTot;
    inizio:
    cout<<"\nInserisci numero di fotocopie in bianco e nero: ";
    cin>>numBN;
    cout<<"Inserisci numero di fotocopie a colori: ";
    cin>>numC;
    if (numBN>0 && numC>0) {
        costoBN = numBN * prezzoBN;
        costoC = numC * prezzoC;
        costoTot = costoBN + costoC;
        cout<<"Desideri rilegare fotocopie? (1: SI, 0: NO) : ";
        cin>>rilegare;
        if (rilegare==1) {
            costoTot = costoTot + prezzoR;
        }
        cout<<"\nHai acquistato "<<numBN<< " fotocopie in bianco e nero, prezzo: "<<costoBN<<"€";
        cout<<"\nHai acquistato "<<numC<< " fotocopie a colori, prezzo: "<<costoC<<"€";
        cout<<"\nFotocopie TOTALI acquistate: "<<numBN+numC;
        cout<<"\nIl costo TOTALE è di "<<costoTot<<"€";
    } else {
        cout<<"\nErrore nell'inserimento dati. Riprova.\n";
        goto inizio;
    }
}

int main() {
    calcoloImporto();
    return 0;
}