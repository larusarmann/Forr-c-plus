#include <iostream>
#include "Bilastaedi.h"
#include "Bill.h"
#include <string>
using namespace std;

int main() { 
    Bilastaedi bs;
    bs.prenta();
    cout << "\n----------------------------------------------------------------------------\n\n";
    Bill tesla = Bill(101, "Tesla", "Hvítur");
    bs.leggja(tesla);
    bs.leggja(Bill(102, "Toyota", "Rauður"));
    bs.leggja(104,"Suzuky", "Grænn");
    bs.prenta();
    cout << "\n----------------------------------------------------------------------------\n\n";
    bs.afleggja(305);
    bs.afleggja(101);
    bs.prenta();
    cout << "\n----------------------------------------------------------------------------\n\n";
    bs.leggja(999, "Volvo", "Rauður");
    bs.prenta();
    cout << "\n----------------------------------------------------------------------------\n\n";
    for(int i = 0; i < 1000; i++){
        bs.leggja(1000 + i, "almennur", "allskonar");
    }
    bs.prenta();
    
    return 0;
}