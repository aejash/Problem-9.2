#include "Person.h"

using namespace std;

Person::Person()
{
    name = "";
    friend_names = "";
}
Person::Person(string name)
{
    this->name = name;
    friend_names = "";
}
std::string Person::get_name() const
{
    return this->name;
}
std::string Person::get_friend_names() const
{
    if (this->friend_names.size() == 0)
    {
        cout << this->name + " does not have any friends listed." << endl;
        return "";
    }
    return this->friend_names;
}
void Person::befriend(Person p)
{
    this->friend_names += p.get_name() + " ";
}
void Person::unfriend(Person p)
{
    string friend_name = p.get_name();

    size_t found = friend_names.find(friend_name);
    if (found != string::npos)
    {
        friend_names.erase(found);
    }
    else
    {
        cout << this->get_name() << " doesn't have " << p.get_name() << " as a friend" << endl;
    }
}
