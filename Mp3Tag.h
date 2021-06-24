//
// Created by bueck on 08.06.2021.
//

#ifndef PRAKTIKUM_PAD4_08_06_MP3TAG_H
#define PRAKTIKUM_PAD4_08_06_MP3TAG_H


#include <string>
#include <ostream>

struct Time{
    int minutes;
    int seconds;

    Time(int minutes, int seconds);

    friend std::ostream &operator<<(std::ostream &os, const Time &time);
};

enum Genre{
    POP,ROCK,RAP,HIPHOP,CLASSIC
};

std::string getGenresName(const Genre& genre);

class Mp3Tag {
private:
    std::string title;
    std::string interpret;
    Time length;
    bool canBeCopied;
    Genre genre;
public:
    friend std::ostream &operator<<(std::ostream &os, const Mp3Tag &tag);

    Mp3Tag(const std::string &title, const std::string &interpret, Time length, bool canBeCopied, Genre genre);

    void setCanBeCopied(bool canBeCopied);

    const std::string &getTitle() const;

    const std::string &getInterpret() const;

    std::string toString();

    Time getLength() const;

    bool isCanBeCopied() const;

    Genre getGenre() const;

};


#endif //PRAKTIKUM_PAD4_08_06_MP3TAG_H
