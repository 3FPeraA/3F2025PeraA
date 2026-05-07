#include "contatti.h"
#include <iostream>
#include <fstream>

using namespace std;

int caricaDaFile(Contatto rubrica[]) {
    ifstream file(NOME_FILE);
    int count = 0;
    if (file.is_open()) {
        while (count < MAX_CONTATTI && getline(file, rubrica[count].nome)) {
            getline(file, rubrica[count].cognome);
            getline(file, rubrica[count].telefono);
            count++;
        }
        file.close();
    }
    return count;
}

void salvaSuFile(Contatto rubrica[], int n) {
    ofstream file(NOME_FILE);
    if (file.is_open()) {
        for (int i = 0; i < n; i++) {
            file << rubrica[i].nome << endl;
            file << rubrica[i].cognome << endl;
            file << rubrica[i].telefono << endl;
        }
        file.close();
    }
}

void stampaListaContatti(Contatto rubrica[], int n) {
    if (n == 0) {
        cout << "\nAgenda vuota." << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << rubrica[i].nome << " " << rubrica[i].cognome 
             << " [" << rubrica[i].telefono << "]" << endl;
    }
}

void cercaContatto(Contatto rubrica[], int n) {
    string query;
    cout << "Cognome da cercare: ";
    cin >> query;
    bool trovato = false;
    for (int i = 0; i < n; i++) {
        if (rubrica[i].cognome == query) {
            cout << "Trovato: " << rubrica[i].nome << " " << rubrica[i].cognome << endl;
            trovato = true;
        }
    }
    if (!trovato) cout << "Nessun risultato." << endl;
}