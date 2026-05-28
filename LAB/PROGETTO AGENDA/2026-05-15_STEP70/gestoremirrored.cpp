#include "gestoremirrored.h"

#include <iostream>
#include <fstream>

using namespace std;

GestoreMirroredRAM::GestoreMirroredRAM() {

    n = 0;

    ifstream file(NOME_FILE);

    if (!file.is_open()) {

        string nomi[] = {"Marco","Giulia","Luca","Sofia","Francesco","Anna","Alessandro","Elena","Roberto","Chiara"};
        string cognomi[] = {"Rossi","Bianchi","Ferrari","Esposito","Ricci","Conti","Marino","Greco","Bruno","Gallo"};
        string telefoni[] = {"3471234567","3387654321","3201122334","3494455667","3339988776","3405544332","3482233445","3456677889","3290011223","3318899001"};

        for (int i = 0; i < 10 && n < MAX_CONTATTI; i++) {
            rubrica[n].impostaContatto(nomi[i], cognomi[i], telefoni[i]);
            n++;
        }

        salvaSuFile();

    } else {

        file.close();

        caricaDaFile();
    }
}

GestoreMirroredRAM::~GestoreMirroredRAM() {

    salvaSuFile();
}

void GestoreMirroredRAM::caricaDaFile() {

    ifstream file(NOME_FILE);

    string nome;
    string cognome;
    string telefono;

    if (file.is_open()) {

        while (n < MAX_CONTATTI && getline(file, nome)) {

            getline(file, cognome);

            getline(file, telefono);

            rubrica[n].impostaContatto(nome, cognome, telefono);

            n++;
        }

        file.close();
    }
}

void GestoreMirroredRAM::salvaSuFile() {

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

void GestoreMirroredRAM::stampaListaContatti() {

    if (n == 0) {

        cout << "Rubrica vuota." << endl;

        return;
    }

    for (int i = 0; i < n; i++) {

        cout << i + 1 << ". " << rubrica[i].getNome() << " " << rubrica[i].getCognome() << " [" << rubrica[i].getTelefono() << "]" << endl;
    }
}

void GestoreMirroredRAM::cercaContatto() {

    string query;

    cout << "Cognome da cercare: ";

    cin >> query;

    bool trovato = false;

    for (int i = 0; i < n; i++) {

        if (rubrica[i].getCognome() == query) {

            cout << "Trovato: " << rubrica[i].getNome() << " " << rubrica[i].getCognome() << " [" << rubrica[i].getTelefono() << "]" << endl;

            trovato = true;
        }
    }

    if (!trovato) cout << "Nessun risultato." << endl;
}

void GestoreMirroredRAM::creaContatto() {

    if (n >= MAX_CONTATTI) {

        cout << "Rubrica piena." << endl;

        return;
    }

    string nome;
    string cognome;
    string telefono;

    cout << "Nome: ";

    cin >> nome;

    cout << "Cognome: ";

    cin >> cognome;

    cout << "Telefono: ";

    cin >> telefono;

    rubrica[n].impostaContatto(nome, cognome, telefono);

    n++;

    salvaSuFile();

    cout << "Contatto creato." << endl;
}
