//
// Created by Rai on 11.10.2021.
//
#pragma once

#include <time.h>

// Strings zu char* und eine Funktion zur Konstruktion und Destruktion von dem Datentyp "VorlesungsInformation".
// Konstruktion durch malloc; Destruktion durch free; strlen für die Länge des Strings
typedef struct VorlesungsInformation {
    time_t Uhrzeit;
    char VorlesungsBezeichnung[32];
    char DozentenNamen[32];
    char RaumKennzeichnung[32];
} VorlesungsInformation;