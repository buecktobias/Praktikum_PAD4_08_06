//
// Created by bueck on 08.06.2021.
//

#ifndef PRAKTIKUM_PAD4_08_06_DATE_H
#define PRAKTIKUM_PAD4_08_06_DATE_H

#include <string>
#include <ostream>

class Date
{
public:
    enum Month { Jan=1, Feb, Mrz, Apr, Mai, Jun, // sym. Konst.
        Jul, Aug, Sep, Okt, Nov, Dez }; // fuer Monate
    std::string getMonthsText() const;
    Date( int year, Month month, int d ); // ein Konstruktor
    int getYear() const;

    Month getMonth() const;

    int getDay() const;
// …
    bool check() const;

    std::string getDayLeadingZero() const;

    int compareTo(const Date &rhs) const;

    long getComparisonValue() const;

    void incrementDay();

    friend std::ostream &operator<<(std::ostream &os, const Date &date);

private:
    int year;
    Month month;
    int day;
};


#endif //PRAKTIKUM_PAD4_08_06_DATE_H
