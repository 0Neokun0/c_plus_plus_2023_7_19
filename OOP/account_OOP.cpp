// Declare classes and Objects
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    public:
    // attributes
    string name;
    int health;
    int xp;

    // methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl;};
    bool is_dead(); // this method give true or false
};

class Account {
    public:
    // attributes
    string name {"Account"};
    double balance {0.0};

    // methods
    bool deposite(double bal) {balance += bal; cout << " In deposti" << endl; };
    bool withdraw(double bal) {balance -= bal; cout << " In withdraw" << endl; };

};

int main ()
{
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 50000.0;

    frank_account.deposite(1000.0);
    frank_account.withdraw(500.0);


    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there");

    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy -> xp = 15;

    enemy->talk("I will destroy you!");


    return 0;
}