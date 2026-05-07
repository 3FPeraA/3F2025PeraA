#include <iostream>
#include <string>
#include "contatti.h"

using namespace std;

int main() {
    Contatto rubrica[MAX_CONTATTI];
    int n = caricaDaFile(rubrica);
    string comando;

    cout << "=== RUBRICA STEP 30 (Classe Contatto) ===" << endl;

    do {
        cout << "\n>> "; cin >> comando;

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
                string nome, cognome, tel;
                cout << "Nome: "; cin >> nome;
                cout << "Cognome: "; cin >> cognome;
                cout << "Telefono: "; cin >> tel;
                
                rubrica[n].impostaContatto(nome, cognome, tel);
                n++;
                salvaSuFile(rubrica, n);
                cout << "Contatto creato come oggetto della classe.";
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