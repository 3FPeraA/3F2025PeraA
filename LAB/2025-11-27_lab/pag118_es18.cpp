/* PAG 118 ES. 18
Un residence vuole un sistema per calcolare il costo per soggiornare nelle sue camere,
che possono essere affittate solo per una o due settimane. Scrivi un programma che,
ricevuti in input il numero di settimane di soggiorno e un indicatore che chieda se
si desidera un supplemento di lenzuola, effettui il calcolo del costo totale di
soggiorno, considerando le seguenti tariffe:
- quota fissa: 100€
- una settimana: 600€
- due settimane: 1100€
- eventuale supplemento lenzuola: 20€ a settimana
*/

#include <iostream>
using namespace std;

int main() {
    const float quotaFissa = 100, oneWeek = 600, twoWeek = 1100, supplLenzuola = 20;
    float prezzoFinale = 0;
    int weeks, suppl;

    cout<<"CALCOLO SOGGIORNO RESIDENCE";
    ask:
    cout<<"\n\nInserisci il numero di settimane di soggiorno (1 o 2): ";
    cin>>weeks;
    if (weeks<1 || weeks>2) {
        cout << "Errore: Numero di settimane non valido. Inserire 1 o 2 settimane.";
        goto ask;
    }

    cout<<"Supplemento lenzuola? (1: si, 0: no) -> ";
    cin>>suppl;

    // Calcolo del prezzo finale
    switch (weeks) {
        case 1:
        prezzoFinale = quotaFissa + oneWeek;
        break;
        case 2:
        prezzoFinale = quotaFissa + twoWeek;
        break;
    }
    if (suppl == 1) {
        prezzoFinale = prezzoFinale + (supplLenzuola * weeks);
    }

    cout<<"\nIl prezzo finale da pagare per il soggiorno è di "<<prezzoFinale<<"€";
    return 0;
}