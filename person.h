//declarations
#include<string>
#ifndef PERSON_H
#define PERSON_H

struct person {
    std::string firstname;
    std::string lastname;
    int age;
};

int nb_char_firstname (person);

#endif