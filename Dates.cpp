//
// Created by bueck on 09.06.2021.
//

#include "Dates.h"

bool Dates::isSchaltJahr(Date date) {
    auto y = date.getYear();
    return (y % 4 == 0 && y % 100 != 0) || (y % 4 == 0 && y % 400 == 0);
}
