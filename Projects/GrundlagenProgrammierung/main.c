#include "main.h"

void grundlagen_programmierung_a1() {
    struct Player player1, player2;

    printf("Es ist der 1. Spieler dran:\n");
    fillPlayerByInput(&player1);

    printf("Es ist der 2. Spieler dran:\n");
    fillPlayerByInput(&player2);

    if (abs(player1.Age - player2.Age) > 10)
        printf("Es ist nur ein Trainingsspiel möglich\n");
    else
        printf("Das Spiel zwischen Spieler %s und Spieler %s beginnt\n", player1.Name, player2.Name);
}

void grundlagen_programmierung_a2(int start, int end, int step) {
    for (int i = start; i < end; i += step) {
        printf("%d\n", i);
    }
}

int main() {
    grundlagen_programmierung_a1();
    int step, start, end;
    printf("Geben Sie den Startwert ein:\n");
    scanf("%d", &start);
    printf("Geben Sie den Endwert ein:\n");
    scanf("%d", &end);
    printf("Geben Sie den Schrittwert ein:\n");
    scanf("%d", &step);
    grundlagen_programmierung_a2(start, end, step);
    return 0;
}
