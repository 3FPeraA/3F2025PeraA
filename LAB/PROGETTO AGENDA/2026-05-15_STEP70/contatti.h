#ifndef CONTATTI_H
#define CONTATTI_H

#include <string>

using namespace std;

class Contatto {

private:

    string nome;
    string cognome;
    string telefono;

public:

    Contatto();

    void impostaContatto(
        string n,
        string c,
        string t
    );

    string getNome() const;

    string getCognome() const;

    string getTelefono() const;
};

#endif