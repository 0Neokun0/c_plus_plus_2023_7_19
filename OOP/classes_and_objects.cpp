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
    // attributes
    string name {"Account"};
    double balance {0.0};

    // methods
    bool deposite(double ball);
    bool withdraw(double ball);

};

int main ()
{
    // Account frank_account;
    // Account jim_account;

    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there");

    // Player hero;

    // Player players[]{frank, hero};

    // vector<Player> player_vec{frank};
    // player_vec.push_back(hero);

    // Player *enemy {nullptr};
    // enemy = new Player;

    // delete enemy;

    return 0;
}