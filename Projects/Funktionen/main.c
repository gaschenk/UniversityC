#include "main.h"

int getQuersumme(int value) {
    int quersumme = 0;
    int i = 0;
    while (1) {
        int tempvalue = value / ((int) pow(10, i)) % 10;
        if (tempvalue == 0)
            break;
        quersumme += tempvalue;
        i++;
    }
    return quersumme;
}

int main() {
    printf("%d\n", getQuersumme(234));
    printf("%d\n", getQuersumme(123));
}