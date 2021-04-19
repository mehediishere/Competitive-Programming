#include<iostream>
using namespace std;

int main()
{
    long long int hashmatArmyNum, opponentArmyNum, armyDifference = 0;

    while ( !(cin >> hashmatArmyNum >> opponentArmyNum).eof())
    {
        armyDifference = abs(hashmatArmyNum-opponentArmyNum);

        cout << armyDifference<<endl;
    }

    return 0;
}
