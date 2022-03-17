#include "date.h"
#include <iostream>

using namespace std;

date::date()
{

    this->day = 0;
    this->month = 0;
    this->year = 0;


}

date::date(int d, int m, int y)
{

    this->day = d;
    this->month = m;
    this->year = y;

}

date::date(const date& d)
{


    this->day = d.day;
    this->month = d.month;
    this->year = d.year;

}

void date::afficher() const
{

    cout << this->day << " / ";

    cout << this->month << " / ";

    cout << this->year << endl;

}

bool date::bissexitile() const
{

    if (this->year % 4 == 0)
    {
        if (this->year % 100 == 0)
        {
            if (this->year % 400 == 0)


                return true;

            else
                return false;
        }
        else
            return true;
    }
    else
        return false;

}

void date::nbr_de_jour() const
{




    if (this->month == 1 || this->month == 3 || this->month == 5 || this->month == 7 || this->month == 8 || this->month == 10 || this->month == 12) {

        cout << "le nombre des jour du mois entree : 31  " << endl;

    }

    else if (this->month == 2) {


        if (!this->bissexitile()) {

            cout << "le nombre des jour du mois entree : 28" << endl;

        }

        else
        {

            cout << "le nombre des jour du mois entree : 29" << endl;

        }

    }

    else {


        cout << "le nombre des jour du mois entree : 30" << endl;

    }


}

bool date::valide() const
{

    if (this->day >= 1 && this->day <= 31) {


        if (this->month >= 1 && this->month <= 12) {


            if (this->year > 1) {


                return true;


            }
            else return false;

        }
        else return false;

    }

    else return false;
}

date date::operator=(const date& d)
{
    if (this != &d) {

        this->day = d.day;
        this->month = d.month;
        this->year = d.year;



    }

    return *this;
}

bool date::operator==(date& d) const
{

    if (this->day == d.day) {



        if (this->month == this->month) {



            if (this->year == this->year) {



                return true;

            }
            else return false;
        }

        else return false;
    }

    else return false;

}

date date::operator+(const date& d)
{
    date da;

    da.day = this->day + d.day;
    da.month = this->month + d.month;
    da.year = this->year + d.year;

    return da;
}


