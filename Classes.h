#ifndef CLASSES_H
#define CLASSES_H

#include "Character.h"

// Мечники

class SwordMan : public Character {
public:
    SwordMan(){
        Hp = 130;
        MaxHp = 130;
        Armor = 12;

        abilities.push_back(Ability("Shield Bash",14,0,1,10));
        abilities.push_back(Ability("Heavy Blow",24,0,3,15));
        abilities.push_back(Ability("Doble Hit",18,0,4,14,false,false,false,false,false,true));
    }

};

class Samurai : public Character {
public:
    Samurai(){
        Hp = 115;
        MaxHp = 115;
        Armor = 7;

        abilities.push_back(Ability("Katana Strike",20,0,1,25,false,false,false,false,false,true));
        abilities.push_back(Ability("Fatal Cut",32,0,6,25,false,false,false,false,false,true));
        abilities.push_back(Ability("Fokus",0,15,4,0));
    }

};

class LongSwordMan : public Character {
public:
    LongSwordMan(){
        Hp = 150;
        MaxHp = 150;
        Armor = 10;

        abilities.push_back(Ability("Slash",17,0,1,15,false,false,false,false,false,true));
        abilities.push_back(Ability("Heavy Strike",26,0,5,20));
        abilities.push_back(Ability("Double Slash",22,0,6,20,false,false,false,false,false,true));
    }

};

// Лучники

class FastArcher : public Character {
public:
    FastArcher(){
        Hp = 90;
        MaxHp = 90;
        Armor = 4;

        abilities.push_back(Ability("Shot",10,0,1,20));
        abilities.push_back(Ability("Doubel Shot",18,0,3,20));
        abilities.push_back(Ability("Dodge",0,12,4,0));
    }

};

class HeavyArcher : public Character {
public:
    HeavyArcher(){
        Hp = 110;
        MaxHp = 110;
        Armor= 8;

        abilities.push_back(Ability("Slow Shot",14,0,1,10));
        abilities.push_back(Ability("Power Shot",32,0,4,15));
        abilities.push_back(Ability("Fire Arrow",18,0,5,15,false,true));
    }

};

class CrossBowMan : public Character {
public:
    CrossBowMan(){
        Hp = 105;
        MaxHp = 105;
        Armor = 6;

        abilities.push_back(Ability("Shot",12,0,1,10));
        abilities.push_back(Ability("Poison Bolt",10,0,3,15,true));
        abilities.push_back(Ability("Armor Breaker",22,0,5,10,false,false,false,false,true));
    }

};

//Маги

class FireMage : public Character {
public:
    FireMage(){
        Hp = 85;
        MaxHp = 85;
        Armor = 3;

        abilities.push_back(Ability("Burning Touch",7,0,1,15,false,true));
        abilities.push_back(Ability("Fire Ball",20,0,4,20,false,true));
        abilities.push_back(Ability("Phoenix Attack",28,0,6,25,false,true));
    }

};

class IceMage : public Character {
public:
    IceMage(){
        Hp = 80;
        MaxHp = 80;
        Armor = 4;

        abilities.push_back(Ability("Punch",12,0,1,15));
        abilities.push_back(Ability("Snow Boll",18,0,4,20,false,false,true));
        abilities.push_back(Ability("Large ice floe",30,0,6,25,false,false,true));
    }

};

class ElectroMage : public Character {
public:
    ElectroMage(){
        Hp = 80;
        MaxHp = 80;
        Armor = 3;

        abilities.push_back(Ability("Punch",8,0,1,10));
        abilities.push_back(Ability("Shock",18,0,3,15,false,false,false,true));
        abilities.push_back(Ability("Lightning",25,0,6,20,false,false,false,true));
    }

};

#endif // CLASSES_H
