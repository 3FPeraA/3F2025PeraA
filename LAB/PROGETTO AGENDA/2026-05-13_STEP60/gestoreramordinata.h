#ifndef GESTORERAMORDINATA_H
#define GESTORERAMORDINATA_H

#include "gestorecontattiabc.h"
#include "contatti.h"

const int MAX_CONTATTI = 100;

const string NOME_FILE = "rubrica.txt";

class GestoreRAMOrdinata : public GestoreContattiABC {

private:

    Contatto rubrica[MAX_CONTATTI];

    int n;

public:

    GestoreRAMOrdinata();

    void caricaDaFile();

    void salvaSuFile();

    void stampaListaContatti();

    void cercaContatto();

    void creaContatto();
};

#endif