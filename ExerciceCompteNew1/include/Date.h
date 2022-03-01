#ifndef DATE_H
#define DATE_H


class Date
{
    private:
     int Jour;
     int Mois;
     int Annee;
    public:
     Date(int Jour,int Mois,int Annee);
     int maxDays()const;
     void Afficher()const;
     virtual ~Date();

};

#endif // DATE_H
