#include<iostream>
using namespace std;

int main()
{
    long long int hashmatArmyNum, opponentArmyNum, armyDifference = 0;

    while ( (cin >> hashmatArmyNum >> opponentArmyNum) =! EOF)
    {

        armyDifference = abs(hashmatArmyNum-opponentArmyNum);

        cout << armyDifference<<endl;
    }

    return 0;
}
