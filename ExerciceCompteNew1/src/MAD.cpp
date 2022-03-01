#include "MAD.h"
#include <iostream>

MAD::MAD(double Valeur):Devise(Valeur)
{
    std::cout<<"constructeur de la classe MAD"<<std::endl;
}

MAD::~MAD()
{
    std::cout<<"Destructeur de la classe MAD"<<std::endl;
}
