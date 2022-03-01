#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include "CompteBancaire.h"

class CompteEpargne:CompteBancaire
{
    private:
     double TauxInteret;
    public:
     CompteEpargne(int NC,Client Pr,double Solde,double TI);
     void ConsulterArgent()const override;
     void Add_Opr(Operation* Opr) override;
     bool RetirerArgent(Devise* Solde)override;
     void DeposerArgent(Devise* Solde)override;
     void TransfererArgent(CompteBancaire* C,Devise* Solde)override;
     void CalculInteret();
     virtual ~CompteEpargne();


};

#endif // COMPTEEPARGNE_H
