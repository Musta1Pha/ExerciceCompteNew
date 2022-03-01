#ifndef COMPTEPAYANT_H
#define COMPTEPAYANT_H
#include "CompteBancaire.h"
#include "Devise.h"
class ComptePayant:public CompteBancaire
{
    private:

    public:
     ComptePayant(int NC,Client Pr,Devise* Solde);
     void ConsulterArgent()const override;
     void Add_Oper(Operation* Opr)override;
     void DeposerArgent(Devise* Solde)override;
     void TransfererArgent(CompteBancaire* C,Devise* Solde)override;
     bool RetirerArgent(Devise* Solde)override;
     virtual ~ComptePayant();

};

#endif // COMPTEPAYANT_H
