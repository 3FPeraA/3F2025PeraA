#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

struct Contatto {
    string nome;
    string cognome;
    string telefono;
};

vector<Contatto> InizializzaContatti(bool nomiRealistici) {
    vector<Contatto> rubrica;
    string nomi[] = {"Marco", "Giulia", "Luca", "Sofia", "Francesco", "Anna", "Alessandro", "Elena", "Roberto", "Chiara"};
    string cognomi[] = {"Rossi", "Bianchi", "Ferrari", "Esposito", "Ricci", "Conti", "Marino", "Greco", "Bruno", "Gallo"};
    string telefoni[] = {"347 1234567", "338 7654321", "320 1122334", "349 4455667", "333 9988776", "340 5544332", "348 2233445", "345 6677889", "329 0011223", "331 8899001"};

    for (int i = 0; i < 10; i++) {
        Contatto nuovoContatto;
        if (nomiRealistici) {
            nuovoContatto.nome = nomi[i];
            nuovoContatto.cognome = cognomi[i];
            nuovoContatto.telefono = "+39 " + telefoni[i];
        } else {
            nuovoContatto.nome = "A " + to_string(i+1);
            nuovoContatto.cognome = "B " + to_string(i+1);
            nuovoContatto.telefono = "+39 " + to_string(i+1);
        }
        
        rubrica.push_back(nuovoContatto);
    }
    return rubrica;
}
void stampaListaContatti(vector<Contatto> rubrica) {
    cout<<"LISTA CONTATTI";
    for (int i=0;i<rubrica.size();i++) { // scorrimento e stampa per controllrre
        cout<<"\n------- CONTATTO "<<i+1<<" -------";
        cout<<"\nNome: "<<rubrica[i].nome;
        cout<<"\nCognome: "<<rubrica[i].cognome;
        cout<<"\nTelefono: "<<rubrica[i].telefono;
    }
}
void cercaContatto(vector<Contatto> rubrica) {
    string query;
    cout << "Inserisci il COGNOME da cercare: ";
    cin >> query;
    bool trovato = false;

    for (const auto& c : rubrica) {
        if (c.cognome == query) { // Ricerca sequenziale semplice
            cout << "Trovato: " << c.nome << " " << c.cognome << " - Tel: " << c.telefono;
            trovato = true;
        }
    }
    if (!trovato) cout << "Nessun contatto trovato con cognome: " << query;
}

int main() {
    vector<Contatto> rubrica = InizializzaContatti(true);
    string comando;
    askComando: // da ussre con goto
    cout<<"\n---------------\n\n>>: "; cin>>comando;
    if (comando=="help") {
        cout<<"HELP COMANDI:\n-> help : Visualizza comandi\n-> contatti : Lista contatti\n-> creacontatto : Crea un contatto\n-> cercacontatto : Ricerca per cognome\n-> exit/esci/quit : Esci dal programma";
        goto askComando;
    } else if (comando=="contatti") {
        stampaListaContatti(rubrica);
        goto askComando;
    } else if (comando == "creacontatto") {
        Contatto nuovoContatto;
        cout << "Nome: "; cin >> nuovoContatto.nome;
        cout << "Cognome: "; cin >> nuovoContatto.cognome;
        cout << "Telefono: "; cin >> nuovoContatto.telefono;
        rubrica.push_back(nuovoContatto);
        cout << "Contatto salvato.";
        goto askComando;
    } else if (comando == "cercacontatto") {
        cercaContatto(rubrica);
        goto askComando;
    } else if (comando=="exit"||comando=="esci"||comando=="quit") {
        return 0;
    } else {
        cerr<<"Errore: Comando non valido.";
        goto askComando;
    }
}