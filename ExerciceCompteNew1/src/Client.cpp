#include "Client.h"
#include <iostream>

using namespace std;

Client::Client(string Nom,string Prenom,string Cin)
{
    this->Nom = Nom;
    this->Prenom = Prenom;
    this->Cin = Cin;
    this->VCB = new vector<CompteBancaire*>();
}

void Client::Afficher()const
{
   std::cout<<this->Nom<<std::endl;
   std::cout<<this->Prenom<<std::endl;
   std::cout<<this->Cin<<std::endl;
   for(int i=0;i<this->VCB.size();i++){
      this->VCB[i]->Afficher();
}
}

void Client::Add(CompteBancaire* c)
{
    this->VCB.push_back(c);
}

Client::~Client()
{
    std::cout<<"Destructeur de la classe Client"<<std::endl;
}
