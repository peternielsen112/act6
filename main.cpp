#include <iostream>
#include "GameCharacter.h"
using namespace std;

int main() {
    GameCharacter a;
    a.setName("Zelda");
    a.setHealth(100);
    a.setPower(2);
    a.setLevel(4);
    
    GameCharacter b;
    b.setName("Link");
    b.setHealth(100);
    b.setPower(1);
    b.setLevel(2);

    a.status();
    b.status();

    cout << "Modifying... " << endl;

    a.attack(b);
    b.attack(a);
    a.levelUp();
    b.levelUp();

    cout << "Health: " << a.getHealth() << " Level: " << a.getLevel() << " Power: " << a.getPower() << " Name: " << a.getName() << endl;
    cout << "Health: " << b.getHealth() << " Level: " << b.getLevel() << " Power: " << b.getPower() << " Name: " << b.getName() << endl;

    return 0;
}