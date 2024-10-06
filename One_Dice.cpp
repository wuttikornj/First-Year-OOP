//
//  One_Dice.cpp
//  Individual Project
//
//  Created by Wuttikorn Jiraroongrojana on 12/04/2024.
//

#include <stdio.h>
#include "One_Dice.h"

using namespace std;

One_Dice::One_Dice(): Thrown(6){
};

void One_Dice::One(){
    oneDiceThrown = giveAnumber();
};

int One_Dice::giveOneThrownResult(){
    return oneDiceThrown;
}
One_Dice::~One_Dice(){
    
}
