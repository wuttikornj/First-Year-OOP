//
//  Wuttikorn_Jiraroongrojana.cpp
//  Individual Project
//
//  Created by Wuttikorn Jiraroongrojana on 09/04/2024.
//  ID : 40432127

#include <iostream>
#include "Thrown.h"
#include "Coin.h"
#include "One_Dice.h"
#include "Two_Dice.h"
#include <string.h>
using namespace std;

// Functions to tell roll how many times.
int count(int ID_CAL){
    //splitting the studetn number into two equal part
    string IDNum;
    IDNum = to_string(ID_CAL);
    unsigned long length = IDNum.length();
    string first_half_ID;
    string second_half_ID;
    
    // divide the number into two equal parts
    if (length % 2 == 0) {
        first_half_ID = IDNum.substr(0, length/ 2);
        second_half_ID = IDNum.substr(length/ 2, length/ 2);
    } else { //where number is odd
        first_half_ID = IDNum.substr(0, length/ 2);
        second_half_ID = IDNum.substr(length/ 2+1, length/ 2);
    }
    
    // converting the string to an array
    int first_half = stoi(first_half_ID);
    int second_half = stoi(second_half_ID);
    
    // math
    int combine = 0;
    
    while (first_half > 0 && second_half > 0) {
        int digit1 = first_half % 10;
        int digit2 = second_half % 10;
            
        combine += (digit1 * digit2);
        
        first_half /= 10;
        second_half /= 10;
    }
    
    ID_CAL = (combine % 50)+20;
    
    return ID_CAL;
};


int main() {
    int ID;
    int IDdiv;
    
    cout<< "Insert your ID : ";
    //inserting an input
    cin >> ID;
    // limiting the digits allowed
    if (ID < 9 || ID > 99999999){
        cout << " This condition does not respect the program, program will no abort..." << endl;
        exit(0);
    }else{
        cout << "Program will continue now ..." << endl;
    }
    //calculating the reminder of diing the student number
    IDdiv = ID % 3;
    
    //calling Functions
    
    int IDcount = count(ID);
    int* ans = new int[IDcount];
    int** dice2ans = new int*[IDcount];

    //simulate tossing coin
    if (IDdiv == 0)
    {
        cout << "Coin Flip ... "<< endl;
        coinToss TossingCoin;
        for (int i =0; i < IDcount ; i++){
            TossingCoin.ThrownOneCoin();
            ans[i] = TossingCoin.giveOneCoinThrownResult();
        }
        for (int i =0; i < IDcount; i++){
            cout << ans[i] << endl;
        }
    }else if (IDdiv == 1)
    {
        cout << "One Dice ... "<< endl;
        One_Dice TossingDiceOne;
        for (int i=0; i< IDcount; i++){
            TossingDiceOne.One();
            ans[i] = TossingDiceOne.giveOneThrownResult();
        }
        for (int i =0; i < IDcount; i++){
            cout << ans[i] << endl;
        }
    }//simulate tossing two dice
    else if (IDdiv == 2)
    {
        Two_Dice TossingDiceTwo;
        cout << "Two Dice ... "<< endl;
        for (int i=0; i < IDcount; i++){
            TossingDiceTwo.thrownTwoDices();
            dice2ans[i] = new int[2];
            dice2ans[i][0] = TossingDiceTwo.giveOneThrownResult();
            dice2ans[i][1] = TossingDiceTwo.giveSecondThrownResult();
        }
        for(int i=0;i<IDcount;i++){
            cout<< dice2ans[i][0] << " "<< dice2ans[i][1];
            cout<<"\n";
        }
        
    }
    
    //deleteing heap memory
    if (IDdiv == 0 || IDdiv == 1){
            delete [] ans;
    }
    else {
        for(int i = 0; i< IDcount; i++){
            delete [] dice2ans[i];
        }
    }delete [] dice2ans;
    return 0;
};
