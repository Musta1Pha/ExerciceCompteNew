#ifndef CLIENT_H
#define CLIENT_H
#include <vector>
#include "CompteBancaire.h"
#include <iostream>

class Client
{
    private:
      string Nom;
      string Prenom;
      string Cin;
      vector<CompteBancaire*> VCB;
    public:
      Client(string Nom,string Prenom,string Cin);
      void Afficher()const;
      void Add(CompteBancaire* c);
      virtual ~Client();


};

#endif // CLIENT_H
