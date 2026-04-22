#ifndef ABILITY_H
#define ABILITY_H

#include <string>
#include <cstdlib>

using namespace std;

struct Effect
{
    int damage;
    int heal;

    bool crit;
    bool poison;
    bool burn;
    bool freeze;
    bool electro;
    bool ignArmor;
    bool bleed;
};

class Ability{
public:
    string name;
    int damage;
    int heal;
    int cooldown;
    int currentCooldown;
    int critChance;

    bool poison;
    bool burn;
    bool freeze;
    bool electro;
    bool ignArmor;
    bool bleed;

    Ability(string n,int d, int h,int cd,int cr, bool p=false, bool b=false,bool f=false,bool e=false,bool ig=false,bool bl=false)
        :name(n), damage(d),heal(h),cooldown(cd),critChance(cr),currentCooldown(0),poison(p),burn(b),freeze(f),electro(e),ignArmor(ig),bleed(bl) {}

    Effect use(){
        if (currentCooldown != 0){
            return {0,0,false,false,false,false,false,false,false};
        }
            currentCooldown = cooldown;

            Effect e;
            e.damage = damage;
            e.heal = heal;
            e.crit = false;
            e.ignArmor = ignArmor;

            if (rand() % 100 < critChance){
                e.damage *=2;
                e.crit = true;
            }

            e.poison = poison;
            e.burn = burn;
            e.freeze = freeze;
            e.electro = electro;
            e.bleed = bleed;

            return e;
        }
            void tick(){
            if(currentCooldown > 0) currentCooldown--;
        }
};

#endif // ABILITY_H
