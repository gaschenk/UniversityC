#pragma once
// CMakeList.txt:
/*
cmake_minimum_required(VERSION 3.21)
project(GrundlagenProgrammierung C)

set(CMAKE_C_STANDARD 23)

add_executable(GrundlagenProgrammierung main.c)
 */
#include <stdio.h>
#include <math.h>
#include "Player.h"

void grundlagen_programmierung_a1() {
    struct Player player1, player2;

    printf("Es ist der 1. Spieler dran:\n");
    fillPlayerByInput(&player1);

    printf("Es ist der 2. Spieler dran:\n");
    fillPlayerByInput(&player2);

#ifdef __DEBUG
    printf("1. Spieler: %s - %d\n",player1.Name,player1.Age);
    printf("2. Spieler: %s - %d\n",player2.Name,player2.Age);
#endif
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
    scanf_s("%d", &start);
    printf("Geben Sie den Endwert ein:\n");
    scanf_s("%d", &end);
    printf("Geben Sie den Schrittwert ein:\n");
    scanf_s("%d", &step);
    grundlagen_programmierung_a2(start, end, step);
    return 0;
}
