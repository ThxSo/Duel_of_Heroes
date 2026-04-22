#ifndef CLASSES_H
#define CLASSES_H

#include "Character.h"

// Мечники

class SwordMan : public Character {
public:
    SwordMan(){
        Hp = 100;
        MaxHp = 100;
        Armor = 10;

        abilities.push_back(Ability("Shield Bash",12,0,1,10));
        abilities.push_back(Ability("Heavy Blow",20,0,2,15));
        abilities.push_back(Ability("Doble Hit",15,0,3,14,false,false,false,false,false,true));
    }

};

class Samurai : public Character {
public:
    Samurai(){
        Hp = 95;
        MaxHp = 95;
        Armor = 5;

        abilities.push_back(Ability("Katana Strike",18,0,1,30,false,false,false,false,false,true));
        abilities.push_back(Ability("Fatal Cut",28,0,5,35,false,false,false,false,false,true));
        abilities.push_back(Ability("Fokus",0,10,2,0));
    }

};

class LongSwordMan : public Character {
public:
    LongSwordMan(){
        Hp = 120;
        MaxHp = 120;
        Armor = 8;

        abilities.push_back(Ability("Slash",15,0,1,15,false,false,false,false,false,true));
        abilities.push_back(Ability("Heavy Strike",22,0,4,20));
        abilities.push_back(Ability("Double Slash",20,0,5,20,false,false,false,false,false,true));
    }

};

// Лучники

class FastArcher : public Character {
public:
    FastArcher(){
        Hp = 80;
        MaxHp = 80;
        Armor = 3;

        abilities.push_back(Ability("Shot",8,0,1,25));
        abilities.push_back(Ability("Doubel Shot",15,0,2,20));
        abilities.push_back(Ability("Dodge",0,0,3,0));
    }

};

class HeavyArcher : public Character {
public:
    HeavyArcher(){
        Hp = 95;
        MaxHp = 95;
        Armor= 6;

        abilities.push_back(Ability("Slow Shot",12,0,1,10));
        abilities.push_back(Ability("Power Shot",30,0,2,15));
        abilities.push_back(Ability("Fire Arrow",15,0,4,10,false,true));
    }

};

class CrossBowMan : public Character {
public:
    CrossBowMan(){
        Hp = 90;
        MaxHp = 90;
        Armor = 4;

        abilities.push_back(Ability("Shot",10,0,1,5));
        abilities.push_back(Ability("Poison Bolt",8,0,2,15,true));
        abilities.push_back(Ability("Armor Breaker",18,0,3,10,false,false,false,false,true));
    }

};

//Маги

class FireMage : public Character {
public:
    FireMage(){
        Hp = 70;
        MaxHp = 70;
        Armor = 2;

        abilities.push_back(Ability("Burning Touch",5,0,1,15,false,true));
        abilities.push_back(Ability("Fire Ball",16,0,3,20,false,true));
        abilities.push_back(Ability("Phoenix Attack",25,0,3,20,false,true));
    }

};

class IceMage : public Character {
public:
    IceMage(){
        Hp = 80;
        MaxHp = 80;
        Armor = 4;

        abilities.push_back(Ability("Punch",10,0,1,15));
        abilities.push_back(Ability("Snow Boll",15,0,3,20,false,false,true));
        abilities.push_back(Ability("Large ice floe",25,0,5,25,false,false,true));
    }

};

class ElectroMage : public Character {
public:
    ElectroMage(){
        Hp = 80;
        MaxHp = 80;
        Armor = 3;

        abilities.push_back(Ability("Punch",5,0,1,5));
        abilities.push_back(Ability("Shock",15,0,2,15,false,false,false,true));
        abilities.push_back(Ability("Lightning",20,0,5,15,false,false,false,true));
    }

};

#endif // CLASSES_H
