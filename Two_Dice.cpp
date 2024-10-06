//
//  Two_Dice.cpp
//  Individual Project
//
//  Created by Wuttikorn Jiraroongrojana on 12/04/2024.
//

#include <stdio.h>
#include "Two_Dice.h"

Two_Dice::Two_Dice(){
};
void Two_Dice::thrownTwoDices(){
    One();
    secondThrown = giveAnumber();
};

int Two_Dice::giveFirstThrownResult(){
    return giveOneThrownResult();
};

int Two_Dice::giveSecondThrownResult(){
    return secondThrown;
};

Two_Dice::~Two_Dice(){
};
