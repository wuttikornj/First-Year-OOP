//
//  One_Dice.h
//  Individual Project
//
//  Created by Wuttikorn Jiraroongrojana on 12/04/2024.
//

#ifndef One_Dice_h
#define One_Dice_h
#include "Thrown.h"

class One_Dice : public Thrown {
private:
    int oneDiceThrown;
public:
    One_Dice();
    void One();
    int giveOneThrownResult();
    ~One_Dice();
};
#endif /* One_Dice_h */
