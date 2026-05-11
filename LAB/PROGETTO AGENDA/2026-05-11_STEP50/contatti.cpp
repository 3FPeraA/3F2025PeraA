#include "contatti.h"

Contatto::Contatto() {
    nome = "";
    cognome = "";
    telefono = "";
}

void Contatto::impostaContatto(string n, string c, string t) {
    nome = n;
    cognome = c;
    telefono = t;
}

string Contatto::getNome() const {
    return nome;
}

string Contatto::getCognome() const {
    return cognome;
}

string Contatto::getTelefono() const {
    return telefono;
}