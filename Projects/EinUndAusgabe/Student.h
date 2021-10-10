//
// Created by Rai on 09.10.2021.
//
#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void getStringFromStdIn(char *outString) {
    char string[32];
    fgets(string, 32, stdin);
    strcpy(outString, string);
}

struct Student {
    char Name[32];
    int MatrikelNummer;
    char Studiengang[32];
    char Geschlecht[32];
};

void getStudentGender(char genderKey, char *out) {
    switch (tolower(genderKey)) {
        case 'm':
            strcpy(out, "maennlich");
            break;
        case 'w':
            strcpy(out, "weiblich");
            break;
        case 'd':
            strcpy(out, "divers");
            break;
        default:
            strcpy(out, "Unknown");
    }
}

void fillStudentByInput(struct Student *student) {
    printf("Geben Sie den Namen an:\n");
    getStringFromStdIn(student->Name);
    printf("Geben Sie ihr Geschlecht(m/w/d) an:\n");
    char genderKey;
    scanf(" %c", &genderKey);
    fflush(stdin);
    getStudentGender(genderKey, student->Geschlecht);

    printf("Geben Sie die Studiengang an:\n");
    getStringFromStdIn(student->Studiengang);

    printf("Geben Sie die MatrikelNummer an:\n");
    char matrikelNummer[6];
    fgets(matrikelNummer, 6, stdin);
    student->MatrikelNummer = atoi(matrikelNummer);

    // Remove Trailing Whitespaces.
    student->Studiengang[strcspn(student->Studiengang, "\n")] = 0;
    student->Name[strcspn(student->Name, "\n")] = 0;
}

void outputStudentInformation(struct Student *student) {
    printf(">>>>> Student <<<<<\n");
    printf("\t->Name: %s\n", student->Name);
    printf("\t->Geschlecht: %s\n", student->Geschlecht);
    printf("\t->Studiengang: %s\n", student->Studiengang);
    printf("\t->MatrikelNummer: %d\n", student->MatrikelNummer);
}