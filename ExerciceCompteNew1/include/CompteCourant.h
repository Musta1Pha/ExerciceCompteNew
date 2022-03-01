#ifndef COMPTECOURANT_H
#define COMPTECOURANT_H
#include "CompteBancaire.h"
#include "Devise.h"

class CompteCourant:CompteBancaire
{
    private:
     double Decouvert;

    public:
     CompteCourant(int NC,Client Pr,Devise* Solde,double Decouvert);
     void ConsulterArgent()const override;
     void Add_Opr(Operation* Opr) override;
     bool RetirerArgent(Devise* Solde)override;
     void DeposerArgent(Devise* Solde)override;
     void TransfererArgent(CompteBancaire* C,Devise* Solde)override;
     virtual ~CompteCourant();


};

#endif // COMPTECOURANT_H
