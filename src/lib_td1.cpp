#include "lib_td1.hpp"

//----------------------------------------------------------------------------
#ifdef  WITH_OVERLOAD
void    DireBonjour(void){
    std::cout << "Bonjour" << std::endl;
}

void    DireBonjour(std::string Nom){
    std::cout << "Bonjour " << Nom << std::endl;
}
#endif /*  WITH_OVERLOAD  */
//----------------------------------------------------------------------------
#ifdef  WITH_DEFAULT_VALUE

void    DireBonjour(std::string Nom){
    std::cout << "Bonjour " << Nom << std::endl;
}

#endif  /*  WITH_DEFAULT_VALUE  */
//----------------------------------------------------------------------------
double  CalculerSortieCapteur(double Entree, double Sensibilite, double Offset){
    return (Entree * Sensibilite) + Offset;
}
//----------------------------------------------------------------------------
void    Swap(int* pa, int *pb){
    /*
    int tmp;

    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
    */
   std::swap(*pa,*pb);
}
//----------------------------------------------------------------------------






