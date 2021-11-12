#include "Bill.h"


Bill::Bill(){ // deafault constructor (smiður)
    this->id = 0;
    this->litur = "";
    this->tegund = "";
}

Bill::Bill(int id, std::string tegund, std::string litur){
    this->id = id;
    this->tegund = tegund;
    this->litur = litur;
}

int Bill::getID(){
    return this->id;
}

void Bill::setID(int id){
    this->id = id;
}

std::string Bill::getTegund(){
    return this->tegund;
}

void Bill::setTegund(std::string tegund){
    this->tegund = tegund;
}

std::string Bill::getLitur(){
    return this-> litur;
}

void Bill::setLitur(std::string litur){
    this-> litur = litur;
}

void Bill::prenta(){
    std::cout << "Bíll: ID: " << this->id << ", Tegund: " << this->tegund <<", Litur: " << this->litur << std::endl;
}
