//
// Created by Rai on 08.10.2021.
//

#include <stdio.h>
#include <ctype.h>
#include "Student.h"

void einundausgabe_a1_a() {
    struct Student student;
    fillStudentByInput(&student);
    outputStudentInformation(&student);
}

void einundausgabe_a1_b() {
    char continueloop = 1;
    char result = 0;
    while (continueloop == 1) {
        printf("Moechten Sie weitermachen?(Y/N)\n");
        scanf_s(" %c", &result, 1);

        switch (tolower(result)) {
            case 'n':
                continueloop = 0;
                break;
            case 'y':
            default:
                einundausgabe_a1_a();
                break;
        }
    }
}

void einundausgabe_a2(char *string, int amountOfRepetitions) {
    for (int i = 0; i < amountOfRepetitions; ++i) {
        for (int j = 0; j < i; j++)
            printf("\t");
        printf("%s\n", string);
    }
}

int main() {
    einundausgabe_a1_b();
    einundausgabe_a2("Test", 4);
}