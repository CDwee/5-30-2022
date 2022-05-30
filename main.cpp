// Started at 12:05 5-30-2022

// Section 13
// Default Constructors
#include <iostream>
#include <string>

using namespace std;

class Player
{
private: 
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string name_val) {
        name = name_val;
    }
    std::string get_name() {
        return name;
    }
    Player() {
        name = "None";
        health = 100;
        xp = 3;
    }
    Player(std::string name_val, int health_val, int xp_val) {
        name = name_val;
        health = health_val;
        xp = xp_val;
    }
    
};

int main() {
    Player hero;
    Player frank {"Frank", 100, 13};
    frank.set_name("Frank");
    cout << frank.get_name() << endl;
    return 0;
}


// Coding Exercise 31

#ifndef __DOG_H__
#define __DOG_H__
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;
public:
//---- WRITE YOUR NO-ARGS CONSTRUCTOR BELOW THIS LINE----

Dog() {
    name = "None";
    age = 0;
}

//---- WRITE YOUR NO_ARGS CONSTRUCTOR ABOVE THIS LINE----
//---- DO NOT MODIFY THE CODE BELOW THIS LINE


    string get_name() {return name; }
    void set_name(string n) {name = n; }
    int get_age() {return age; }
    void set_age(int a) { age = a;}
    int get_dog_years() { return age * 7; }
    string speak() { return "Woof";}
};


#endif 


// Coding Exercise 32

#ifndef __DOG_H__
#define __DOG_H__
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;
public:

//---- WRITE YOUR OVERLOADED CONSTRUCTOR BELOW THIS LINE

Dog(std::string n, int a) {
    name = n;
    age = a;
}

//---- WRITE YOUR OVERLOADED CONSTRUCTOR ABOVE THIS LINE
    string get_name() {return name; }
    void set_name(string n) {name = n; }
    int get_age() {return age; }
    void set_age(int a) { age = a;}
    int get_dog_years() { return age * 7; }
    string speak() { return "Woof";}
};
#endif


// Section 13
// Constructor Initialization
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    std::string name {"XXXXXXXX"};
    int health;
    int xp;
public:
// Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string, int health_val, int xp_val);
};

Player::Player() 
    : name{"None"}, health{0}, xp {0} {
}

Player::Player(std::string name_val) 
    : name{name_val}, health{0}, xp {0} {
}

Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp {xp_val}{
}

int main() {
    
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    
    return 0;
}


// Section 13
// Delegating Constructors
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;
public:
// Overloading Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

Player::Player()
    : Player{"None",0,0} {
        cout << "No-args constructor" << endl;
}

Player::Player(std::string name_val)
    : Player{name_val,0,0} {
        cout << "One-arg constructor" << endl;
}

Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
        cout << "Three-args constructor" << endl;
}

int main() {
    
    Player empty;
    Player frank {"Frank"};
    Player Villain {"Villain", 100, 55};
    
    return 0;
}

// Section 13
// Default Constructor Parameters
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;
public:
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    Player() {};
};


Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
        cout << "Three-args constructor" << endl;
}


int main() {
    
    Player empty;
    Player frank {"Frank"};
    Player hero {"Hero", 100};
    Player Villain {"Villain", 100, 55};
    
    return 0;
}

// Section 13
// Copy Constructor
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;
public:
    std::string get_name() { return name; }
    int get_health() { return health; }
    int get_xp() { return xp; }
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    // Copy Constructor
    Player(const Player &source);
    // Destructor
    ~Player() { cout << "Destructor called for: " << name << endl; }
};

Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
        cout << "Three-args constructor for " + name << endl;
}

Player::Player(const Player &source) 
//    : name{source.name}, health{source.health}, xp{source.xp} {
    : Player {source.name, source.health, source.xp} {
        cout << "Copy constructor - made copy of: " << source.name << endl;
}

void display_player(Player p) {
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() << endl;
}

int main() {
    Player empty {"XXXXXX", 100, 50};
    
    Player my_new_object {empty};
    
    display_player(empty);
    
    Player frank {"Frank"};
    Player hero {"Hero", 100};
    Player Villain {"Villain", 100, 55};
    
    return 0;
}


// Coding Exercise 33

#ifndef __DOG_H__
#define __DOG_H__
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;
public:
        Dog(string name, int age) : name{name}, age{age} { }

//---- WRITE YOUR COPY CONSTRUCTOR BELOW THIS LINE

Dog(const Dog &d)
: name{d.name}, age{d.age} {
    cout << "Copy Constructor";
}

//---- WRITE YOUR COPY CONSTRUCTOR ABOVE THIS LINE
    string get_name() {return name; }
    void set_name(string n) {name = n; }
    int get_age() {return age; }
    void set_age(int a) { age = a;}
    int get_dog_years() { return age * 7; }
    string speak() { return "Woof";}
};
#endif


// Section 13
// Copy Constructor - Shallow Copy
#include <iostream>

using namespace std;

class Shallow {
private:
    int *data;
public: 
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    // Constructor
    Shallow(int d);
    // Copy Constructor
    Shallow(const Shallow &source);
    // Destructor
    ~Shallow();
};

Shallow::Shallow(int d) {
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source) 
    : data(source.data) {
    cout << "Copy Constructor - shallow copy" << endl;
}

Shallow::~Shallow() {
    delete data;
    cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s) {
    cout << s.get_data_value() << endl;
}

int main() {
    
    Shallow obj1 {100};
    display_shallow(obj1);
    
    Shallow obj2 {obj1};
    obj2.set_data_value(1000);
    
    return 0;
}

// Ended at 3:05 5-30-2022
