#include <stdio.h>
#include <string.h>

#ifndef MAX_STUDENTI
#define MAX_STUDENTI 10
#endif

struct Studente {
    char nome[30];
    char cognome[30];
    float voto;
};

void stampaStudenti(struct Studente studenti[], int totale) {
    for (int i=0; i<totale;i++) {
        printf("------ STUDENTE %d ------\nNome: %s\nCognome: %s\nVoto: %.1f\n", i+1, studenti[i].nome, studenti[i].cognome, studenti[i].voto);
    }
}
float mediaVoti(struct Studente studenti[], int totale) {
    float somma = 0.0;
    for (int i=0; i<totale;i++) {
        somma += studenti[i].voto;
    }
    return somma/totale;
}
void stampaStudenteMaxVoto (struct Studente studenti[], int totale) {
    int migliorstudente = 0;
    float maxvoto = 0.0;
    for (int i=0; i<totale;i++) {
        if (studenti[i].voto > maxvoto) {
            maxvoto = studenti[i].voto;
            migliorstudente = i;
        }
    }
    printf("------ STUDENTE %d ------\nNome: %s\nCognome: %s\nVoto: %.1f\n", migliorstudente+1, studenti[migliorstudente].nome, studenti[migliorstudente].cognome, studenti[migliorstudente].voto);
}
int numeroStudentiSufficienti (struct Studente studenti[], int totale) {
    int numstudenti = 0;
    for (int i=0; i<totale;i++) {
        if (studenti[i].voto >= 6.0) {
            numstudenti++;
        }
    }
    return numstudenti;
}
void stampaPerCognome (struct Studente studenti[], int totale, char input_cognome[]) {
    int i_studente = -1;
    for (int i=0; i<totale;i++) {
        if (strcmp(studenti[i].cognome, input_cognome) == 0) {
            i_studente = i;
        }
    }
    if (i_studente != -1) {
        printf("------ STUDENTE %d ------\nNome: %s\nCognome: %s\nVoto: %.1f\n", i_studente+1, studenti[i_studente].nome, studenti[i_studente].cognome, studenti[i_studente].voto);
    } else { 
        printf("Studente non trovato\n"); 
    }
}
void ordinaPerVoto(struct Studente studenti[], int totale) {
    struct Studente temp;
    for (int i = 0; i < totale - 1; i++) {
        for (int j = 0; j < totale - i - 1; j++) {
            if (studenti[j].voto < studenti[j+1].voto) {
                temp = studenti[j];
                studenti[j] = studenti[j+1];
                studenti[j+1] = temp;
            }
        }
    }
    printf("Studenti ordinati per voto decrescente\n");
}

int main() {
    int num_studenti;
    printf("Quanti studenti vuoi inserire? (max 10) : ");
    scanf("%d", &num_studenti);
    if (num_studenti < 1) {
        num_studenti = 1;
    } else if (num_studenti > MAX_STUDENTI) {
        num_studenti = MAX_STUDENTI;
    }
    struct Studente studenti[num_studenti];
    for (int i=0; i<num_studenti;i++) {
        printf("\n------ STUDENTE %d ------\nNome: ", i+1);
        scanf("%s", studenti[i].nome);
        printf("Cognome: ");
        scanf("%s", studenti[i].cognome);
        printf("Voto: ");
        scanf("%f", &studenti[i].voto);
    }
    
    do {
        printf("\n>>: ");
        char comando[20];
        scanf("%s", comando);
        
        if (strcmp(comando, "stampastudenti") == 0) {
            stampaStudenti(studenti, num_studenti);
            printf("----\n");
        } else if (strcmp(comando, "mediavoti") == 0) {
            printf("La media dei voti e': %.1f\n", mediaVoti(studenti, num_studenti));
            printf("----\n");
        } else if (strcmp(comando, "migliorstudente") == 0) {
            stampaStudenteMaxVoto(studenti, num_studenti);
            printf("----\n");
        } else if (strcmp(comando, "numerosufficienze") == 0) {
            printf("Numero studenti sufficienti: %d\n", numeroStudentiSufficienti(studenti, num_studenti));
            printf("----\n");
        } else if (strcmp(comando, "ricercacognome") == 0) {
            char input_cognome[30];
            printf("Inserisci cognome da ricercare: ");
            scanf("%s", input_cognome);
            stampaPerCognome(studenti, num_studenti, input_cognome);
            printf("----\n");
        } else if (strcmp(comando, "ordina") == 0) {
            ordinaPerVoto(studenti, num_studenti);
            printf("----\n");
        } else if (strcmp(comando, "esci") == 0) {
            return 0;
        }
    }
    while (1);
}