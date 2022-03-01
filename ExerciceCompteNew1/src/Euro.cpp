#include "Euro.h"
#include <iostream>

Euro::Euro(double Valeur):Devise(Valeur)
{
    std::cout<<"Constructeur de la classe Euro"<<std::endl;
}

Euro::~Euro()
{
    std::cout<<"Destructeur de la classe Euro"<<std::endl;
}
