#pragma once

#include <iostream>
#include <string>

#include "Bill.h"

class Bilastaedi {
    private:
        Bill* bilar;
        int staerd;
    public:
        Bilastaedi();
        Bilastaedi(int staerd);
        int finnaLaustStaedi();
        void leggja(Bill b);
        void leggja(int id, std::string tegund, std::string litur);
        void afleggja(int id);
        void skodaBil(int id);
        void prenta();
        void prentaLausStaedi();
        ~Bilastaedi();
};