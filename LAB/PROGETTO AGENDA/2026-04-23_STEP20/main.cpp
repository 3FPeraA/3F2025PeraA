#include <iostream>
#include <string>
#include "contatti.h"

using namespace std;

int main() {
    Contatto rubrica[MAX_CONTATTI];
    int n = caricaDaFile(rubrica);
    
    string comando;

    cout << "=== RUBRICA STEP 20 (Persistenza su File) ===" << endl;
    if (n > 0) cout << "Caricati " << n << " contatti dal file." << endl;

    do {
        cout << "\n>> ";
        cin >> comando;

        if (comando == "help") {
            cout << "--- MENU AIUTO ---\n"
            << "help          -> Mostra i comandi\n"
            << "contatti      -> Elenca tutta la rubrica\n"
            << "creacontatto  -> Aggiunge un nuovo record\n"
            << "cercacontatto -> Cerca per cognome\n"
            << "esci          -> Chiude il programma\n"
            << "------------------\n";
        }
        else if (comando == "contatti") {
            stampaListaContatti(rubrica, n);
        } 
        else if (comando == "creacontatto") {
            if (n < MAX_CONTATTI) {
                cout << "Nome: "; cin >> rubrica[n].nome;
                cout << "Cognome: "; cin >> rubrica[n].cognome;
                cout << "Telefono: "; cin >> rubrica[n].telefono;
                n++;
                salvaSuFile(rubrica, n);
                cout << "Salvato.";
            }
        } 
        else if (comando == "cercacontatto") {
            cercaContatto(rubrica, n);
        } 
        else if (comando == "esci") {
            break;
        }
    } while (true);

    return 0;
}