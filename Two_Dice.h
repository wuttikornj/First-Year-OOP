//
//  Two_Dice.h
//  Individual Project
//
//  Created by Wuttikorn Jiraroongrojana on 12/04/2024.
//

#ifndef Two_Dice_h
#define Two_Dice_h
#include "Thrown.h"
#include "One_Dice.h"

class Two_Dice : public One_Dice{
private:
    int secondThrown;
public:
    Two_Dice();
    void thrownTwoDices();
    int giveFirstThrownResult();
    int giveSecondThrownResult();
    ~Two_Dice();
    
};

#endif /* Two_Dice_h */
