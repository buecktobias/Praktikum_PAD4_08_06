#include <iostream>
#include <utility>
#include <vector>
#include "Mp3Tag.h"
#include "Mp3TAGTest.h"
#include "Date.h"

std::vector<Mp3Tag> vmp3tags {};
void fill(const std::vector<Mp3Tag>& vector){
    vmp3tags = vector;
}

void fillMp3Tags(){
    fill({
                 {Mp3Tag("Pitbulls & AKs", "Kollegah", {3,20}, false,RAP)},
                 {Mp3Tag("Baby", "Justin Bieber", {4,10}, true,POP)},
                 {Mp3Tag("Hotline Bling", "Drake", {3,40}, true,HIPHOP)},
                 {Mp3Tag("Nothing Else Matters", "Metallica", {4,32}, true,ROCK)},
                 {Mp3Tag("Nocturne Op. 9 No. 1", "Chopin", {5,32}, true,CLASSIC)},
                 {Mp3Tag("Stiernackenkommando", "Kollegah & Farid Bang", {2,32}, true,RAP)},
                 {Mp3Tag("No Joke", "Shindy", {2,32}, false,RAP)},
                 {Mp3Tag("Hotel California", "Eagles", {3,2}, false,ROCK)},
                 {Mp3Tag("AKs im Wandschrank", "Kollegah", {3,21}, false,RAP)},
                 {Mp3Tag("King", "Kollegah", {3,41}, false,RAP)}
         });
}
int main() {
    Date date{2000,Date::Month::Feb, 29};
    Date date2{2000,Date::Month::Feb, 29};
    std::cout << date.compareTo(date2);
    return 0;
}
