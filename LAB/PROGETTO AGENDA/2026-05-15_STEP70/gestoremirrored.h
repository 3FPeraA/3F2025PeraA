#ifndef GESTOREMIRRORED_H
#define GESTOREMIRRORED_H

#include "gestorecontattiabc.h"
#include "contatti.h"

const int MAX_CONTATTI = 100;

const string NOME_FILE = "rubrica.txt";

class GestoreMirroredRAM : public GestoreContattiABC {

private:

    Contatto rubrica[MAX_CONTATTI];

    int n;

public:

    GestoreMirroredRAM();

    ~GestoreMirroredRAM();

    void caricaDaFile();

    void salvaSuFile();

    void stampaListaContatti();

    void cercaContatto();

    void creaContatto();
};

#endif
