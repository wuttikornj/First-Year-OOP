//
//  Coin.h
//  Individual Project
//
//  Created by Wuttikorn Jiraroongrojana on 11/04/2024.
//

#ifndef Coin_h
#define Coin_h
#include "Thrown.h"

class coinToss : public Thrown {
private:
    int coinThrown;
public:
    coinToss();
    void ThrownOneCoin();
    int giveOneCoinThrownResult();
    ~coinToss();
};

#endif /* Coin_h */
