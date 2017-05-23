#ifndef POKEGRASS_H
#define POKEGRASS_H

#include "Pokemon.h"

class PokeGrass : public Pokemon
{
public:
	// Add your public methods/attributes here.
    PokeGrass(int pokemonID, const std::string& name);
    void attackTo(Pokemon* target, Arena currentArena);
    void levelUp();
    void setRooted(bool rooted);
    void Info();
    void Reset();
    void setArenaEff(Arena arena);
protected:
	// Add your protected methods/attributes here.
    void setEffDamage();
    virtual void getLevelBonus();
private:
	// Add your private methods/attributes here.
	
};

#endif