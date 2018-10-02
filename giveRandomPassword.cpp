#include <giveRandom.hpp>
#include <string>

std::string giveRandomPassword(int length)
{
    std::string password{};
    for(auto i = 0; i != length; ++i)
    {
        //depending on the result of the expression, will put a certain character to the password
        //there are more chances to have a letter or a number than a symbole
        //it can be changed by changing the value of the max in the range of giveRandom
        switch(giveRandom(0,4) % 3)
        {
            //adds a random letter
            case 0:
                password += giveRandChar();
                break;
            //adds a random number
            case 1:
                password += std::to_string(giveRandom(0,9));
                break;
            //adds a random symbole
            case 2:
                password += giveRandSymbole();
                break;
        }        
    }
    
    return password;
}
