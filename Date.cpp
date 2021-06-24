//
// Created by bueck on 08.06.2021.
//

#include <map>
#include "Date.h"
#include "Dates.h"
Date::Date(int y, Date::Month m, int d): year(y), month(m), day(d) {

}

bool Date::check() const {
// Jahr einschraenken:
        if(year < 1800 || 2200 < year ) return false;
// falsche Monate verhindern, was passieren kann, z.B. durch Date::Month(13)
        if(month < Jan || Dez < month ) return false;
// Tageswerte unter 1 verhindern:
        if(day < 1 ) return false;
// zu grosse Tageswerte verhindern:
        switch( month )
        {
            case Feb: // noch ohne Schaltjahre
                if(Dates::isSchaltJahr(*this) && day > 29 || !Dates::isSchaltJahr(*this) && day > 28){
                    return false;
                }
            case Apr: case Jun: case Sep: case Nov:
                if(day > 30 ) return false;
            default:
                if(day > 31 ) return false;
        }
        return true;
}

int Date::getYear() const {
    return year;
}

Date::Month Date::getMonth() const {
    return month;
}

int Date::getDay() const {
    return day;
}

std::string Date::getMonthsText() const {
    std::map<Month,std::string> monthsText;
    monthsText[Month::Jan] = "Jan";
    monthsText[Month::Feb] = "Feb";
    monthsText[Month::Mrz] = "Mrz";
    monthsText[Month::Apr] = "Apr";
    monthsText[Month::Mai] = "Mai";
    monthsText[Month::Jun] = "Jun";
    monthsText[Month::Jul] = "Jul";
    monthsText[Month::Aug] = "Aug";
    monthsText[Month::Sep] = "Sep";
    monthsText[Month::Okt] = "Okt";
    monthsText[Month::Nov] = "Nov";
    monthsText[Month::Dez] = "Dez";
    return monthsText.find(month)->second;
}

std::ostream &operator<<(std::ostream &os, const Date &date) {
    os << date.year << "-" << date.getMonthsText() << "-" << date.getDayLeadingZero();
    return os;
}

std::string Date::getDayLeadingZero() const{
    if(day < 10){
        return "0" + std::to_string(day);
    }
    return std::to_string(day);
}

int Date::compareTo(const Date &rhs) const {
    if(this->getComparisonValue() == rhs.getComparisonValue()){
        return 0;
    }else if(this->getComparisonValue() > rhs.getComparisonValue()){
        return 1;
    }else{
        return -1;
    }
}

long Date::getComparisonValue() const{
    return year * 1000000 + month * 1000 + day;
}

void Date::incrementDay() {

}


