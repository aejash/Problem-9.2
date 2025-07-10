/**** Problem 9.2 - Chapter 9, Project B
*---------------------------------------------
***** A Person has a name (just a first name for simplicity) and friends.
***** Store the names of the friends in a string, separated by spaces.
***** Provide a constructor that constructs a person with a given name and no friends.
***** Provide member functions
*---------------------------------------------
***** void befriend(Person p)
***** void unfriend(Person p)
***** string get_friend_names()
*---------------------------------------------
// Programmer - Ashley Jacobson
// Tester - Heily Cabrera Guerrero

// Group Project B //
/***** Members *****/
/***** Ashley Jacobson *****/
/***** Giannfranco Brance *****/
/***** Audrey Tapia *****/
/***** Heily Cabrera Guerrero *****/

#include <iostream>
#include "Person.h"

using namespace std;
int main()
{
    cout << "Adding first person..." << endl;
    Person p1("Rachel");

    cout << p1.get_name() << " has been added." << endl;

    cout << "Adding second person..." << endl;
    Person p2("George");
    cout << p2.get_name() << " has been added." << endl;

    cout << "Adding third person..." << endl;
    Person p3("Richard");
    cout << p3.get_name() << " has been added." << endl;

    cout << "Check error handling if Person does not have a friend..." << endl;
    cout << p1.get_friend_names();
    cout << "Befriending person2 to person1..." << endl;
    p1.befriend(p2);
    cout << p1.get_name() << " is now friends with " << p1.get_friend_names() << ". " << endl;

    cout << "Check error handling if Person does not have this specific friend to unfriend..." << endl;
    p1.unfriend(p3);

    cout << "Befriending person3 to person1..." << endl;
    p1.befriend(p3);
    cout << p1.get_name() << " is now friends with " << p1.get_friend_names() << ". " << endl;

    cout << "Unfriending person3 from person1..." << endl;
    p1.unfriend(p3);
    cout << p1.get_name() << " friends is " << p1.get_friend_names() << ". " << endl;

    return 0;
}

