#ifndef OPERATION_H
#define OPERATION_H
#include "Date.h"

class Operation
{
    private:
     int NumOpr;
     static int Cpt;
     Date Data;
     double Montant;
     string Libelle;

    public:
     Operation(Date Data,double Montant,string Libelle);
     virtual ~Operation();

};

#endif // OPERATION_H
