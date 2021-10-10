//
// Created by Rai on 09.10.2021.
//
#pragma once

#include <stdio.h>
#include <string.h>

void getStringFromStdIn(char *outString) {
    char string[32];
    scanf_s("\n%[^\n]s", &string, 32);
    strcpy_s(outString, 32, string);
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
            strcpy_s(out, 32, "maennlich");
            break;
        case 'w':
            strcpy_s(out, 32, "weiblich");
            break;
        case 'd':
            strcpy_s(out, 32, "divers");
            break;
        default:
            strcpy_s(out, 32, "Unknown");
    }
}

void fillStudentByInput(struct Student *student) {
    printf("Geben Sie den Namen an:\n");
    getStringFromStdIn(student->Name);
    printf("Geben Sie ihr Geschlecht(m/w/d) an:\n");
    char genderKey;
    scanf_s(" %c", &genderKey, 1);
    getStudentGender(genderKey, student->Geschlecht);

    printf("Geben Sie die Studiengang an:\n");
    getStringFromStdIn(student->Studiengang);

    printf("Geben Sie die MatrikelNummer an:\n");
    scanf_s("\n%d", &student->MatrikelNummer);
}

void outputStudentInformation(struct Student *student) {
    printf(">>>>> Student <<<<<\n");
    printf("\t->Name: %s\n", student->Name);
    printf("\t->Geschlecht: %s\n", student->Geschlecht);
    printf("\t->Studiengang: %s\n", student->Studiengang);
    printf("\t->MatrikelNummer: %d\n", student->MatrikelNummer);
}