#include "gestoreramordinata.h"

#include <iostream>
#include <fstream>

using namespace std;

GestoreRAMOrdinata::GestoreRAMOrdinata() {

    n = 0;

    caricaDaFile();
}

void GestoreRAMOrdinata::caricaDaFile() {

    ifstream file(NOME_FILE);

    string nome;
    string cognome;
    string telefono;

    if (file.is_open()) {

        while (
            n < MAX_CONTATTI &&
            getline(file, nome)
        ) {

            getline(file, cognome);

            getline(file, telefono);

            rubrica[n].impostaContatto(
                nome,
                cognome,
                telefono
            );

            n++;
        }

        file.close();
    }
}

void GestoreRAMOrdinata::salvaSuFile() {

    ofstream file(NOME_FILE);

    if (file.is_open()) {

        for (int i = 0; i < n; i++) {

            file
                << rubrica[i].getNome()
                << endl;

            file
                << rubrica[i].getCognome()
                << endl;

            file
                << rubrica[i].getTelefono()
                << endl;
        }

        file.close();
    }
}

void GestoreRAMOrdinata::stampaListaContatti() {

    if (n == 0) {

        cout << "Rubrica vuota." << endl;

        return;
    }

    for (int i = 0; i < n; i++) {

        cout
            << i + 1
            << ". "
            << rubrica[i].getNome()
            << " "
            << rubrica[i].getCognome()
            << " ["
            << rubrica[i].getTelefono()
            << "]"
            << endl;
    }
}

void GestoreRAMOrdinata::cercaContatto() {

    string query;

    cout << "Cognome da cercare: ";

    cin >> query;

    bool trovato = false;

    for (int i = 0; i < n; i++) {

        if (rubrica[i].getCognome() == query) {

            cout
                << "Trovato: "
                << rubrica[i].getNome()
                << " "
                << rubrica[i].getCognome()
                << " ["
                << rubrica[i].getTelefono()
                << "]"
                << endl;

            trovato = true;
        }
    }

    if (!trovato) {

        cout << "Nessun risultato." << endl;
    }
}

void GestoreRAMOrdinata::creaContatto() {

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

    rubrica[n].impostaContatto(
        nome,
        cognome,
        telefono
    );

    n++;

    salvaSuFile();

    cout << "Contatto creato." << endl;
}