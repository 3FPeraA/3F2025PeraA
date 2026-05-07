#include "contatti.h"
#include <iostream>
#include <fstream>

using namespace std;

Contatto::Contatto() {
    nome = ""; cognome = ""; telefono = "";
}

void Contatto::impostaContatto(string n, string c, string t) {
    nome = n; cognome = c; telefono = t;
}

string Contatto::getNome() const { return nome; }
string Contatto::getCognome() const { return cognome; }
string Contatto::getTelefono() const { return telefono; }



int caricaDaFile(Contatto rubrica[]) {
    ifstream file(NOME_FILE);
    int count = 0;
    string n, c, t;
    if (file.is_open()) {
        while (count < MAX_CONTATTI && getline(file, n)) {
            getline(file, c);
            getline(file, t);
            rubrica[count].impostaContatto(n, c, t);
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
            file << rubrica[i].getNome() << endl;
            file << rubrica[i].getCognome() << endl;
            file << rubrica[i].getTelefono() << endl;
        }
        file.close();
    }
}

void stampaListaContatti(Contatto rubrica[], int n) {
    if (n == 0) { cout << "\nAgenda vuota." << endl; return; }
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << rubrica[i].getNome() << " " 
             << rubrica[i].getCognome() << " [" << rubrica[i].getTelefono() << "]" << endl;
    }
}

void cercaContatto(Contatto rubrica[], int n) {
    string query;
    cout << "Cognome da cercare: "; cin >> query;
    bool trovato = false;
    for (int i = 0; i < n; i++) {
        if (rubrica[i].getCognome() == query) {
            cout << "Trovato: " << rubrica[i].getNome() << " " << rubrica[i].getCognome() << endl;
            trovato = true;
        }
    }
    if (!trovato) cout << "Nessun risultato." << endl;
}