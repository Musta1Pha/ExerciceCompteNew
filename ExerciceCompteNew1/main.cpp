#include <iostream>
#include "Client.h"
#include "CompteBancaire.h"
#include "CompteCourant.h"
#include "CompteEpargne.h"
#include "ComptePayant.h"

using namespace std;

int main()
{
    Client* C = new Client("Azerty","Qwerty","BE2121");
    Devise* D = new Devise(20000);
    MAD* M = new MAD(D);
    Date D(25,2,2020)
    Operation* Opr1 = new Operation(Date,10000,"Operation1");

    CompteCourant* C1 = new CompteCourant(1,C,D,2000);
    C1->Add_Opr(Opr1);
    C1->ConsulterArgent();

    return 0;
}
