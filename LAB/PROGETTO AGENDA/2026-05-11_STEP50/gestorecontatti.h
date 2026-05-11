#ifndef GESTORECONTATTI_H
#define GESTORECONTATTI_H

#include "contatti.h"

const int MAX_CONTATTI = 100;
const string NOME_FILE = "rubrica.txt";

class GestoreContatti {
private:
    Contatto rubrica[MAX_CONTATTI];
    int n;

public:
    GestoreContatti();

    void caricaDaFile();
    void salvaSuFile();

    void stampaListaContatti();
    void cercaContatto();

    void creaContatto();
};

#endif