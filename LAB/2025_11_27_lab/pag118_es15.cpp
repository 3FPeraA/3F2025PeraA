/* PAG 118 ES. 15
Su alcuni voli aerei il bagaglio fino a 20kg non si paga.
Oltre questo limite si deve pagare, per ogni chilogrammo in più, il 2% della tariffa del biglietto aereo.
Scrivi un programma che, ricevuti in input la tariffa del biglietto aereo e il peso in chilogrammi del bagaglio, stampi il prezzo totale del biglietto.
*/

#include <iostream>
using namespace std;

int main() {
    const float pesoMax = 20, percAdd = 0.02; // 0.02 = 2%
    float pesoBagaglio, prezzoBiglietto, prezzoFinale;
    cout<<"CALCOLO COSTO AEREO";
    cout<<"\nInserire il prezzo del biglietto aereo: ";
    cin>>prezzoBiglietto;
    cout<<"Inserire il peso del bagaglio: ";
    cin>>pesoBagaglio;
    prezzoFinale = prezzoBiglietto;
    if (pesoBagaglio>pesoMax) {
        float pesoDiff = pesoBagaglio-pesoMax;
        float prezzoAggiuntivo = (prezzoBiglietto * percAdd) * pesoDiff;
        prezzoFinale = prezzoFinale + prezzoAggiuntivo;
    }
    cout<<"Il cliente dovrà pagare "<<prezzoFinale<<"€ e avrà a suo carico un bagaglio che pesa "<<pesoBagaglio<<" kg.";
}