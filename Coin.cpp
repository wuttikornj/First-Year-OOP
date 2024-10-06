//
//  Coin.cpp
//  Individual Project
//
//  Created by Wuttikorn Jiraroongrojana on 11/04/2024.
//

#include "Coin.h"
using namespace std;

coinToss::coinToss(): Thrown(2){
};

void coinToss::ThrownOneCoin(){
    coinThrown = giveAnumber();
};

int coinToss::giveOneCoinThrownResult(){
    return coinThrown;
};

coinToss::~coinToss(){
    
};
