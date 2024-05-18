#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h> // Include per la funzione sleep

int main() {
    // Definisci l'array con i nomi delle squadre
    char *squadre[10] = {"Roma", "Milan", "Inter", "Napoli", "Juventus", "Genoa", "Lazio", "Fiorentina", "Torino", "Sampdoria"};

    // Inizializza il generatore di numeri casuali
    srand(time(0));

    // Array per tenere traccia delle squadre già selezionate per una partita
    int selezionate[10] = {0};
    int partite[5][2]; // Array per memorizzare le partite

    // Genera le partite senza ripetizioni
    for (int i = 0; i < 5; i++) { // 5 partite per 10 squadre, ognuna gioca una volta
        int squadra1, squadra2;

        // Seleziona la prima squadra non ancora selezionata
        do {
            squadra1 = rand() % 10;
        } while (selezionate[squadra1]);

        // Marca la prima squadra come selezionata
        selezionate[squadra1] = 1;

        // Seleziona la seconda squadra non ancora selezionata
        do {
            squadra2 = rand() % 10;
        } while (selezionate[squadra2]);

        // Marca la seconda squadra come selezionata
        selezionate[squadra2] = 1;

        // Memorizza la partita
        partite[i][0] = squadra1;
        partite[i][1] = squadra2;
    }

    // Stampa l'intestazione e le partite che si giocheranno
    printf("\tPartite programmate:\n\n\n");
    for (int i = 0; i < 5; i++) {
        printf("\t%s vs %s\n", squadre[partite[i][0]], squadre[partite[i][1]]);
    }

    // Attendi 15 secondi prima di iniziare le partite
    sleep(15);
    printf("\n");
    
    // Stampa il messaggio delle partite in corso
    printf("\n\tPartite giocate...\n\n");

    // Genera e stampa i risultati delle partite
    for (int i = 0; i < 5; i++) {
        int squadra1 = partite[i][0];
        int squadra2 = partite[i][1];

        // Genera risultati casuali per la partita
        int risultato1 = rand() % 5; // Genera un risultato casuale per la prima squadra (da 0 a 4)
        int risultato2 = rand() % 5; // Genera un risultato casuale per la seconda squadra (da 0 a 4)

        // Stampa il risultato della partita
        printf("\t%s %d - %d %s\n", squadre[squadra1], risultato1, risultato2, squadre[squadra2]);
    }

    return 0;
}
