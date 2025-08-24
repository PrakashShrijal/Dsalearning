#include <iostream>
#include <string>
using namespace std;

// Define a class named Pubg
class Pubg {
private:
    // Private data members
    int health;
    int age;
    int score;
    int ammo;
    int damage;
    bool alive;

public:
    // Constructor to initialize the data members
    Pubg(int h, int a, int s, int am, int d, bool al) 
        : health(h), age(a), score(s), ammo(am), damage(d), alive(al) {}

    // Member function to get health
    int getHealth() {
        return health;
    }

    // Member function to get age
    int getAge() {
        return age;
    }

    // Member function to get score
    int getScore() {
        return score;
    }

    // Member function to check if alive
    bool isAlive() {
        return alive;
    }

    // Member function to display player information
    void displayInfo() {
        cout << "Health: " << health << endl;
        cout << "Age: " << age << endl;
        cout << "Score: " << score << endl;
        cout << "Ammo: " << ammo << endl;
        cout << "Damage: " << damage << endl;
        cout << "Alive: " << (alive ? "Yes" : "No") << endl;
    }
};

int main() {
    // Create an array of Pubg objects
    Pubg players[3] = {
        Pubg(100, 25, 1500, 30, 20, true),
        Pubg(80, 30, 2000, 25, 25, true),
        Pubg(50, 22, 500, 10, 15, false)
    };

    // Loop through the array and display information for each player
    for (int i = 0; i < 3; i++) {
        cout << "Player " << (i + 1) << " Info:" << endl;
        players[i].displayInfo();
        cout << endl; // Add a blank line for better readability
    }

    return 0;
}