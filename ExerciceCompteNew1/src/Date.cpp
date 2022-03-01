#include "Date.h"
#include <iostream>

Date::Date(int Jour,int Mois,int Annee)
{
   this->Jour = (Jour >= 1 && Jour <= maxDays())? Jour:1;
   this->Mois = (Mois >= 1 && Mois <= 12)? Mois:1;
   this->Annee = (Annee > 1990)? Annee:1990;
}

bool DateH::isbis() const
{
    return (this->annee % 4 == 0);
}

int Date::maxDays() const
{
    int maxjour;

    if (this->mois == 2) {
        maxjour = (this->isbis()) ? 29 : 28;
    }
    else {

    maxjour = ((this->mois > 7 && this->mois % 2 == 1)
            || (this->mois < 7 && this->mois % 2 == 0)) ? 30 : 31;

    }
    return maxjour;
}

void Date::Afficher()const
{
    std::cout<<this->Jour<<"/"<<this->Mois<<"/"<<this->Jour<<std::endl;
}

Date::~Date()
{
   std::cout<<"Destructeur de la classe Date"<<std::endl;
}
