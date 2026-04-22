#ifndef CHARACTER_H
#define CHARACTER_H

#include <vector>
#include "Ability.h"

class Character{
protected:
    int Hp;
    int MaxHp;
    int Armor;

    int poisonTurns = 0;
    int burnTurns = 0;
    int freezeTurns = 0;
    int bleedTurns = 0;

public:
    vector<Ability> abilities;

    virtual ~Character(){}

    int getHP(){return Hp; }

    int getMaxHP() { return MaxHp; }

    bool isAlive(){ return Hp > 0; }

    void takedamage(int dm,bool ignoreArmore){
        if(!ignoreArmore)
            dm -= Armor;

        if (dm < 0)
            dm = 0;

        Hp -= dm;

        if(Hp < 0)
            Hp = 0;
    }

    void healSelf(int value){
        Hp += value;
    }

    Effect useAbility(int indx){
        return abilities[indx].use();
    }

    void applyEffect(const Effect& e){
        takedamage(e.damage,e.ignArmor);
        healSelf(e.heal);


        if (e.poison) poisonTurns = 3;
        if (e.burn) burnTurns = 2;
        if (e.freeze) freezeTurns = 1;
        if (e.bleed) bleedTurns = 3;
    }

    bool ifFrozen(){
        return freezeTurns > 0;
    }

    void updateStatus(){
        if(poisonTurns > 0){
            Hp -=5;
            poisonTurns--;
        }

        if(burnTurns > 0){
            Hp -= 7;
            burnTurns--;
        }

        if(freezeTurns > 0){
            freezeTurns--;
        }

        if (bleedTurns > 0){
            Hp -= 6;
            bleedTurns--;
        }

        if (Hp < 0) Hp=0;

        for (auto& a : abilities)
            a.tick();
    }
};

#endif // CHARACTER_H
