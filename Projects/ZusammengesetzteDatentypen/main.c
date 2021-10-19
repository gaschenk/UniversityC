#include "main.h"

// recursive design very useful in this case.
int binarySearch(int sortedArray[], int requestedValue, int leftIndex, int rightIndex) {

    if (rightIndex >= 1) {
        int middleIndex = leftIndex + (rightIndex - 1) / 2;

        if (requestedValue == sortedArray[middleIndex]) {
            return middleIndex;
        }

        if (requestedValue < sortedArray[middleIndex]) {
            binarySearch(sortedArray, requestedValue, leftIndex, middleIndex - 1);
        }
        return binarySearch(sortedArray, requestedValue, middleIndex + 1, rightIndex);
    }

    return -1;
}

int linearSearch(int array[], int requestedValue, int sizeOfArray) {
    for (int i = 0; i < sizeOfArray - 1; ++i) {
        if (array[i] == requestedValue)
            return i;
    }
    return -1;
}

int main() {
    int array[] = {1, 3, 5, 8, 11, 16, 19};
    int x = 5;
    printf("BS-Index: %d\n", binarySearch(array, x, 0, 6));
    printf("LS-Index: %d\n", linearSearch(array, x, 7));

    // epoch time stamps via #include <time.h>
    VorlesungsInformation vorlesungsInformationen[6] = {
            {1633938300, "Orientierungsmodul",           "Tullius",   "9-040 (176)"},
            {1634024700, "Informatik 1 Theorie",         "Schoeller", "9-040 (176)"},
            {1634031000, "Formale Methoden 1 Theorie",   "Himpel",    "9-040 (176)"},
            {1634111100, "Digital Media Design",         "Hartmann",  "9-029"},
            {1634125500, "Formale Methoden 1 Praktikum", "INF Tutor", "9-107 (36)"},
            {1634298300, "Informatik 1 Praktikum",       "Dolak",     "9-U12"},
    };

    // sizeof only works due to fixed array sizes.
    for (int i = 0; i < (sizeof vorlesungsInformationen) / (sizeof(VorlesungsInformation)); ++i) {
        // use reference to save memory.
        VorlesungsInformation *currentInformation = &vorlesungsInformationen[i];
        // automatically appends new line...
        char *currentTime = asctime(localtime(&currentInformation->Uhrzeit));
        printf("Vorlesung: %s\nDatum: %sDozent: %s\nRaum: %s\n\n", currentInformation->VorlesungsBezeichnung,
               currentTime, currentInformation->DozentenNamen, currentInformation->RaumKennzeichnung);
    }
}