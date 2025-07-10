//
// Created by Ashley Jacobson on 7/10/25.
//
#include <iostream>
#include <string>
#ifndef PERSON_H
#define PERSON_H



class Person {
  public:

    // Default Constructor
    Person();

    // Constructor with given name
    Person(std::string name);

    //***** Mutators *****//

    // Add friend to Person object from another Person object
    void befriend(Person p);

    // Remove person object from string list of friends
    void unfriend(Person p);

    //***** Accessors *****//

    // Return friends' names as a string
    std::string get_friend_names() const;

    // Return person object's name
    std::string get_name() const;

    private:
    std::string name;
    std::string friend_names;
};



#endif //PERSON_H
