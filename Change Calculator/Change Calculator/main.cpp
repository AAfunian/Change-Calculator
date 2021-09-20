//
//  main.cpp
//  Change Calculator
//
//  Created by Amir on 9/19/21.
//

#include <iostream>

using namespace std;

// Function which intakes amount of currency to convert and produces the number of
//     coins to return
void numCoins();

int main() {
    
    numCoins();
    return 0;
}

void numCoins() {
    int coins[6] = {500, 100, 25, 10, 5, 1};
    int curr;
    int numCoins = 0;
    cout << "Enter the amount of currency which you would like to convert to coins: ";
    if (cin >> curr) {
        for (int i = 0; i < sizeof(coins)/sizeof(coins[0]); ++i) {
            numCoins += curr / coins[i];
            curr -= coins[i] * (curr/coins[i]);
        }
        cout << "You have received " << numCoins << " coins.\n";
    }
    else cout << "Invalid input!\n";
}
