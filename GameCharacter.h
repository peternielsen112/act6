#ifndef GAMECHARACTER_H
#define GAMECHARACTER_H

#include <string>
using std::string;

class GameCharacter {
private:
    string name;
    int health;
    int power;
    int level;

public:
    GameCharacter(const string& n, int i, int g, int j);
    GameCharacter();

    void setName(const string& n);
    void setHealth(int i);
    void setPower(int g);
    void setLevel(int j);

    string getName() const;
    int getHealth() const;
    int getPower() const;
    int getLevel() const;

    void attack(GameCharacter& target);
    void damage(int l, int p);
    void levelUp();
    void status() const;

    void printInfo() const;
};

#endif // STUDENT_H
