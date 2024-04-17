
#include <iostream>
#include <cstdint>
#include "lib_td1.hpp"


int main(){
    std::cout << "-- TD1 --\n";  /** Affichage */
    //-------------------------------------------------------------------------
    DireBonjour();
    DireBonjour("Toto");
    //-------------------------------------------------------------------------
    double Sortie{0};
    Sortie = CalculerSortieCapteur(25, 10e-3, 0);
    std::cout << "Sortie = " << std::to_string(Sortie) << std::endl;
    //-------------------------------------------------------------------------
    int a{42}, b{66};
    std::cout << "Avant swap a = " << std::to_string(a) << " et b = " << std::to_string(b) << std::endl;
    Swap(&a,&b);
    std::cout << "Après swap a = " << std::to_string(a) << " et b = " << std::to_string(b) << std::endl;  
    //-------------------------------------------------------------------------
    int Size;

    uint8_t byteA{11}, byteB{22};
    std::cout << "Avant swap a = " << std::to_string(byteA) << " et b = " << std::to_string(byteB) << std::endl;
    Size = templateSwap<uint8_t>(&byteA,&byteB);
    std::cout << "Après swap a = " << std::to_string(byteA) << " et b = " << std::to_string(byteB) << std::endl;
    std::cout << "Taille <T> : " << std::to_string(Size) << std::endl;

    double doubleA{11.11}, doubleB{22.22};
    std::cout << "Avant swap a = " << std::to_string(doubleA) << " et b = " << std::to_string(doubleB) << std::endl;
    Size = templateSwap<double>(&doubleA,&doubleB);
    std::cout << "Après swap a = " << std::to_string(doubleA) << " et b = " << std::to_string(doubleB) << std::endl;
    std::cout << "Taille <T> : " << std::to_string(Size) << std::endl;
    //-------------------------------------------------------------------------
    
    return 0;
}


