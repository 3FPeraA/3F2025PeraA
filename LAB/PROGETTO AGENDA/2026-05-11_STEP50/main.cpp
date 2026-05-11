#include <iostream>
#include <string>

#include "gestorecontatti.h"

using namespace std;

int main() {

    GestoreContatti gestore;

    string comando;

    cout << "=== RUBRICA STEP 50 ===" << endl;

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
            gestore.stampaListaContatti();
        }

        else if (comando == "creacontatto") {
            gestore.creaContatto();
        }

        else if (comando == "cercacontatto") {
            gestore.cercaContatto();
        }

        else if (comando == "esci") {
            break;
        }

    } while (true);

    return 0;
}