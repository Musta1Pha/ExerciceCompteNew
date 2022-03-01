#include "CompteEpargne.h"
#include <iostream>

CompteEpargne::CompteEpargne(int NC,Client Pr,Devise* Solde,double TI):CompteBancaire(NC,Pr,Solde)
{
    this->TauxInteret = (TI >=0 && TI <=100)?TI:0;
}

void CompteEpargne::ConsulterArgent()const
{
    std::cout<<this->NumCompte<<std::endl;
    this->Proprietaire.Afficher();
    std::cout<this->Solde<<std::endl;
    std::cout<<this->TauxInteret<<std::endl;
}

bool CompteEpargne::RetirerArgent(Devise* Solde)
{
    bool Etat = false;
    if(Solde < this->Solde/2){
      this->Solde -= Solde;
      Etat = true;
    }
    return Etat;
}

void CompteEpargne::Add_Opr(Operation* Opr)
{
    this->CompteBancaire::VOp.push_back(Opr);
}

void CompteEpargne::DeposerArgent(Devise* Solde)
{
    this->Solde += Solde;
}

void CompteEpargne::TransfererArgent(CompteBancaire* C,Devise* Solde)
{
    if(C->Solde >= Solde){
        this->Solde += Solde;
        C->Solde -= Solde;
    }
}

void CompteEpargne::CalculInteret()
{
    this->Solde += this->Solde * this->TauxInteret;
}

CompteEpargne::~CompteEpargne()
{
    std::cout<<"Destructeur de la classe CompteEpargne"<<std::endl;
}
