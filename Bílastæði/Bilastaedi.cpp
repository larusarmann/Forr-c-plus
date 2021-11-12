#include "Bilastaedi.h"

Bilastaedi::Bilastaedi(){
    this->staerd = 2;
    this->bilar = new Bill[this->staerd];

}

Bilastaedi::Bilastaedi(int staerd){
    this->staerd = staerd;
    this->bilar = new Bill[this->staerd];
}

int Bilastaedi::finnaLaustStaedi(){
    for(int i = 0; i < this->staerd; i++){
        if(this->bilar[i].getID() == 0){
            return i;
        }
    }
    return -1;
}

void Bilastaedi::leggja(Bill b){
    int laustStaedi = finnaLaustStaedi();
    if(laustStaedi != -1){
        this->bilar[laustStaedi] = b;
    } else {
        Bill* tempStaedi = new Bill[this->staerd + 2];
        for(int i = 0; i < this->staerd; i++){
            tempStaedi[i] = this->bilar[i];
        }
        delete [] this->bilar;
        this->bilar = tempStaedi;
        this->bilar[this->staerd] = b;
        this->staerd += 2;
    }
}

void Bilastaedi::leggja(int id, std::string tegund, std::string litur){
    // Bill bill(id, tegund, litur);
    // this->leggja(bill);
    this->leggja(Bill(id, tegund, litur));
}

void Bilastaedi::afleggja(int id){
    for(int i = 0; i < this->staerd; i++){
        if(this->bilar[i].getID() == id){
            this->bilar[i] = Bill();
            return;
        }
    }
    std::cout << "Enginn bíll fannst með id: " << id << "á stæðinu!!\n";
}

void Bilastaedi::skodaBil(int id){
    for(int i = 0; i < this->staerd; i++){
        if(this->bilar[i].getID() == id){
            this->bilar[i].prenta();
            return;
        }
    }
    std::cout << "Enginn bíll fannst með id: " << id << "á stæðinu!!\n";
}

void Bilastaedi::prenta(){
    for(int i = 0; i < this->staerd; i++){
        if(this->bilar[i].getID() != 0){
            this->bilar[i].prenta();
        } else {
            std::cout << "Laust\n";
        }
    }
}

void Bilastaedi::prentaLausStaedi(){
    int lausStaedi = 0;
    for(int i = 0; i <this->staerd; i++){
        if(this->bilar[i].getID() == 0){
            lausStaedi++;
        }
    }
    std::cout << "Fjöldi lausra stæða: " <<lausStaedi << std::endl;
}

Bilastaedi::~Bilastaedi(){
    delete [] this->bilar;
}
