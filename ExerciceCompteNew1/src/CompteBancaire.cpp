#include "CompteBancaire.h"
#include <iostream>

CompteBancaire::CompteBancaire(int NC,Client Pr,Devise* Solde)
{
    this->NumCompte = NC;
    this->Proprietaire = Pr;
    this->Solde = Solde;
    this->VOp = new vector<Operation>();
}

CompteBancaire::ConsulterArgent()const
{
    std::cout<<this->NumCompte<<std::endl;
    this->Proprietaire.Afficher();
    std::cout<this->Solde<<std::endl;
}

CompteBancaire::~CompteBancaire()
{
    std::cout<<"Destructeur de la classe CompteBancaire"<<std::endl;
}
