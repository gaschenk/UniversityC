//
// Created by Rai on 09.10.2021.
//

#pragma once

#include <string.h>

struct Player {
	char Name[32];
	int Age;
};

void fillPlayerByInput(struct Player* player)
{
	printf("Geben Sie den Namen an:\n");
	char name[32];
	scanf("\n%31[0-9a-zA-Z ]s\n", &name);
	strcpy(player->Name, name);
	printf("Geben Sie das Alter an:\n");
	scanf("%d", &(player->Age));
	scanf_s("%d",)
}

struct Test {
	char* Name;
};

void createTest(struct Test* test)
{
	test->Name = malloc(sizeof(char)*25);
}
void destroyTest(struct Test* test)
{
	free(test->Name);
}