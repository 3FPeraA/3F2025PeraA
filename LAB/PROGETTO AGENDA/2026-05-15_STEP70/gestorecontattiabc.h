#ifndef GESTORECONTATTIABC_H
#define GESTORECONTATTIABC_H

class GestoreContattiABC {

public:

    virtual void caricaDaFile() = 0;

    virtual void salvaSuFile() = 0;

    virtual void stampaListaContatti() = 0;

    virtual void cercaContatto() = 0;

    virtual void creaContatto() = 0;

    virtual ~GestoreContattiABC() {}
};

#endif