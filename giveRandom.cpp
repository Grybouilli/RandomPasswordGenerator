#include <random>

#include <iostream>
#include <random>
#include <string>
//generate a random integer in the range [min;max]
int giveRandom(int min, int max)
{
	  std::random_device rd{};
    int r{};
    do r = rd() / (RAND_MAX/max);
    while ( r < min || r > max);
    
    return r;
}
//give a random letter, randomly upper or lower cased
char giveRandChar() 
{
    char c{'a' + giveRandom(0,25)};
    if(giveRandom(0,100) % 2 == 0)
    {
        c = toupper(c);
    }
    
    return c;
}
//give a random symbole among the following list : {'*', '/', '-', '&', '<', '>', '%' }
char giveRandSymbole()
{
    static const char symboles[7] = {'*', '/', '-', '&', '<', '>', '%' };
    
    return symboles[giveRandom(0,7)];
}
