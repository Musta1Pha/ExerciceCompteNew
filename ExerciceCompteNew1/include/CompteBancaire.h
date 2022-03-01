#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H
#include <vector>
#include "Client.h"
#include "Operation.h"
#include "Devise.h"
class CompteBancaire
{
    protected:
      int NumCompte;
      Client Proprietaire;
      Devise* Solde;
      vector<Operation> VOp;

    public:
      CompteBancaire(int NC,Client Pr,Devise* Solde);
      virtual void Add_Opr(Operation * Opr)=0;
      virtual void ConsulterArgent()const=0;
      virtual bool RetirerArgent(Devise* Solde)=0;
      virtual void DeposerArgent(Devise* Solde)=0;
      virtual void TransfererArgent(CompteBancaire* C,Devise* Solde)=0;
      virtual ~CompteBancaire();
};

#endif // COMPTEBANCAIRE_H
