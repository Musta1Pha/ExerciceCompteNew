#include "CompteCourant.h"
#include <iostream>

CompteCourant::CompteCourant(int NC,Client Pr,Devise* Solde,double Decouvert):CompteBancaire(NC,Pr,Solde)
{
    this->Decouvert = Decouvert;
}

void CompteCourant::ConsulterArgent()const
{
    std::cout<<this->NumCompte<<std::endl;
    this->Proprietaire.Afficher();
    std::cout<this->Solde<<std::endl;
    std::cout<<this->Decouvert<<std::endl;
}

void CompteEpargne::CalculInteret()
{
    this->Solde += this->Solde * this->TauxInteret;
}

void CompteEpargne::Add_Opr(Operation* Opr)
{
    this->CompteBancaire::VOp.push_back(Opr);
}

bool CompteCourant::RetirerArgent(Devise* Solde)
{
    bool Etat = false;
    if(this->Solde - Solde > this->Decouvert){
       Etat = true;
       this->Solde -= Solde;
    }
    return Etat;
}

void CompteCourant::DeposerArgent(Devise* Solde)
{
    this->Solde += Solde;
}

void CompteCourant::TransfererArgent(CompteBancaire* C,Devise* Solde)
{
    if(C->Solde >= Solde){
        this->Solde += Solde;
        C->Solde -= Solde;
    }
}

CompteCourant::~CompteCourant()
{
    std::cout<<"Destructeur de la classe CompteCourant"<<std::endl;
}
