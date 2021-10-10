//
// Created by Rai on 11.10.2021.
//
#pragma once

#include <time.h>

struct VorlesungsInformation {
    time_t Uhrzeit;
    char VorlesungsBezeichnung[32];
    char DozentenNamen[32];
    char RaumKennzeichnung[32];
};