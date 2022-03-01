#include "ComptePayant.h"
#include <iostream>

ComptePayant::ComptePayant(int NC,Client Pr,Devise* Solde):CompteBancaire(NC,Pr,Solde)
{

}

void ComptePayant::DeposerArgent(Devise* Solde)
{
    this->Solde += Solde * 0.95;
}

void ComptePayant::TransfererArgent(CompteBancaire* C,Devise* Solde)
{
    if(C->Solde >= Solde){
        this->Solde += Solde * 0.95;
        C->Solde -= Solde;
    }
}

void CompteEpargne::Add_Opr(Operation* Opr)
{
    this->CompteBancaire::VOp.push_back(Opr);
}

void CompteCourant::ConsulterArgent()const
{
    std::cout<<this->NumCompte<<std::endl;
    this->Proprietaire.Afficher();
    std::cout<this->Solde<<std::endl;
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

ComptePayant::~ComptePayant()
{
   std::cout<<"Destructeur de la classe ComptePayant"<<std::endl;
}
