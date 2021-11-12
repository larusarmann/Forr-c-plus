#pragma once

#include <string>
#include <iostream>

class Bill {
    private:
        int id;
        std::string tegund;
        std::string litur;
    public:
        Bill();
        Bill(int id, std::string tegund, std::string litur);
        int getID();
        void setID(int id);
        std::string getTegund();
        void setTegund(std::string tegund);
        std::string getLitur();
        void setLitur(std::string litur);
        void prenta();
};