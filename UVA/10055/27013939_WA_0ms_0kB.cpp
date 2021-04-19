#include<iostream>
using namespace std;

int main()
{
    int hashmatArmyNum, opponentArmyNum, armyDifference = 0;

    while ( !EOF)
    {
        cin >> hashmatArmyNum >> opponentArmyNum;

        armyDifference = abs(hashmatArmyNum-opponentArmyNum);

        cout << armyDifference<<endl;
    }

    return 0;
}
