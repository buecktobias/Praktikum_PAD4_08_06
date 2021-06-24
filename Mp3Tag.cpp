//
// Created by bueck on 08.06.2021.
//

#include "Mp3Tag.h"

const std::string &Mp3Tag::getTitle() const {
    return title;
}

const std::string &Mp3Tag::getInterpret() const {
    return interpret;
}

Time Mp3Tag::getLength() const {
    return length;
}

bool Mp3Tag::isCanBeCopied() const {
    return canBeCopied;
}

void Mp3Tag::setCanBeCopied(bool canBeCopied) {
    Mp3Tag::canBeCopied = canBeCopied;
}

std::ostream &operator<<(std::ostream &os, const Mp3Tag &tag) {
    os << "title: " << tag.title << " interpret: " << tag.interpret << " length: " << tag.length << " canBeCopied: "
       << tag.canBeCopied << " genre " << getGenresName(tag.genre);
    return os;
}
std::string getGenresName(const Genre& genre){
    switch(genre){
        case POP: return "POP";
        case ROCK: return "ROCK";
        case RAP: return "RAP";
        case HIPHOP: return "HIPHOP";
        case CLASSIC: return "CLASSIC";
    }
}
Genre Mp3Tag::getGenre() const {
    return genre;
}

Mp3Tag::Mp3Tag(const std::string &title, const std::string &interpret, Time length, bool canBeCopied, Genre genre) :
                    title(title),
                    interpret(interpret),
                    length(length),
                    canBeCopied(canBeCopied),
                    genre(genre){}


Time::Time(int minutes, int seconds) : minutes(minutes), seconds(seconds) {}

std::ostream &operator<<(std::ostream &os, const Time &time) {
    os << "minutes: " << time.minutes << " seconds: " << time.seconds;
    return os;
}
