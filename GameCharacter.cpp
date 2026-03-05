#include "GameCharacter.h"
#include <iostream>
using std::cout; using std::string;

GameCharacter::GameCharacter(const string& n, int i, int g, int j) : name(n), power(1), level(j) {
  setHealth(i);
  setPower(g);
}

GameCharacter::GameCharacter() : name("Unnamed"), health(50), power(1), level(1) {}

void GameCharacter::setName(const string& n) {
  name = n;
}
void GameCharacter::setHealth(int i) {
  if (i < 0) {
    health = 1;
    cout << "Invalid Health Level. Setting to 1\n";
  }
  else {
    health = i;
    cout << "Health of " << name << "is now " << i << " / " << health << std::endl;
  }
}
void GameCharacter::setPower(int g) {
  if (g >= 0.0 && g <= 10.0) power = g;
  else {
    power = 0.0;
    cout << "Invalid Power Level. Setting to 0.0\n";
  }
}
void GameCharacter::setLevel(int b) {
  level = b;
}

string GameCharacter::getName() const { return name; }
int GameCharacter::getHealth() const { return health; }
int GameCharacter::getPower() const { return power; }
int GameCharacter::getLevel() const { return level; }

void GameCharacter::attack(GameCharacter j) { j.damage(level, power); }
void GameCharacter::damage(int l, int p) {
  health -= (l*p);
//  setHealth((health - (l*p)));
  cout << l*p << std::endl << health << std::endl;
}
void GameCharacter::levelUp() { setLevel((level+1)); }
void GameCharacter::status() const { printInfo(); }

void GameCharacter::printInfo() const {
    cout << "Name: " << name
         << ", Health: " << health
         << ", Power: " << power
         << ", Level: " << level << '\n' << std::endl;
}