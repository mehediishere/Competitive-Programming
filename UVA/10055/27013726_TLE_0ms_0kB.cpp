#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int hashmatArmyNum, opponentArmyNum, armyDifference = 0;

    while ( !(cin>>hashmatArmyNum>>opponentArmyNum).eof())
    {
        armyDifference = abs(hashmatArmyNum-opponentArmyNum);
        
        cout << armyDifference<<endl;
    }

    return 0;
}
