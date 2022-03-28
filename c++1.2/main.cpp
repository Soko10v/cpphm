#include<iostream>
#include<cstring>
#include<optional>
using namespace std;

struct Person {
string surname;
string name;
//string middlename;
optional<string> middlename;
    string getsurname()  const { return surname ; }
    string getname()const { return name; }
    optional<string> getmiddlename() const {
        if(middlename != 0)
            return middlename;
        return nullopt;
    }
};

ostream& operator<<(ostream &os, const Person& n) {
    return os  << ' ' << n.getsurname() << ' ' << n.getname()
    << ' ' << *getmiddlename << ')' << endl;
}
   
struct PhoneNumber {
    int country;
    int city;
    string nomber;
    optional<int> addnum;
    int getcountry() {return country;};
    int getcity() {return city;};
    string getnomber() {return nomber;};
    optional<int> getaddnum() {return addnum;};
    
};

ostream& operator<<(ostream &os, PhoneNumber& tel) {
    return os  << '+' << tel.getcountry() << '(' << tel.getcity()
    << ')' << tel.getnomber() << ') ' << tel.getaddnum() << endl;
}

class PhoneBook{
    
};


int main() {
return 0;
}
