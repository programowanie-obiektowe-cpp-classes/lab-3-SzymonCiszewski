#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    int przetransportowany_towar = 0;
    int wyprodukowane_zaglowce  = 0;
    if (towar > 0) {
        while (1) {
            Stocznia Gdynia;
            auto statek = Gdynia();
            przetransportowany_towar += statek->transportuj();
            if (dynamic_cast< Zaglowiec* >(statek))
                wyprodukowane_zaglowce++;

            delete statek;
            if (przetransportowany_towar >= towar)
                break;

        }
    }

    return wyprodukowane_zaglowce;
}