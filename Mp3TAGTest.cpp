//
// Created by bueck on 08.06.2021.
//

#include <sstream>
#include "Mp3TAGTest.h"
#include "Mp3Tag.h"

bool runTest() {
    Mp3Tag mp3 = {Mp3Tag("Pitbulls & AKs", "Kollegah", {3, 20}, false, RAP)};

    std::ostringstream stream;
    stream << mp3;
    std::string str =  stream.str();
    return str == "title: Pitbulls & AKs interpret: Kollegah length: minutes: 3 seconds: 20 canBeCopied: 0 genre RAP";
}

bool failTest(){
    try {
        return false;
    }catch(const std::exception& e){
        return true;
    }
}
