#include "Operation.h"
#include <iostream>

int Operation::Cpt=0;
Operation::Operation(Date Data,double Montant,string Libelle):NumOpr(++Operation::Cpt)
{
    this->Data = Data;
    this->Montant = Montant;
    this->Libelle = Libelle;
}

Operation::~Operation()
{
    std::cout<<"Detstructeur de la classe Operation"<<std::endl;
}
