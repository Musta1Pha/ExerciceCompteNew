#include "Devise.h"
#include <iostream>

Devise::Devise(double Valeur)
{
    this->Valeu = Valeur;
}

Devise::~Devise()
{
    std::cout<<"Destructeur de la classe Devise"<<std::endl;
}
