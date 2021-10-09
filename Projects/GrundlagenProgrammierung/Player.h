//
// Created by Rai on 09.10.2021.
//

#pragma once

#include <string.h>

struct Player {
    char Name[32];
    int Age;
};

void fillPlayerByInput(struct Player *player) {
    printf("Geben Sie den Namen an:\n");
    char name[32];
    scanf_s("%s", &name, 32);
    strcpy_s(player->Name, 32, name);
    printf("Geben Sie das Alter an:\n");
    scanf_s("%d", &(player->Age));
}