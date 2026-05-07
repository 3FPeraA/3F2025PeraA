#ifndef CONTATTI_H
#define CONTATTI_H

#include <string>
using namespace std;

const int MAX_CONTATTI = 100;
const string NOME_FILE = "rubrica.txt";

struct Contatto {
    string nome;
    string cognome;
    string telefono;
};

int caricaDaFile(Contatto rubrica[]);
void salvaSuFile(Contatto rubrica[], int n);
void stampaListaContatti(Contatto rubrica[], int n);
void cercaContatto(Contatto rubrica[], int n);

#endif