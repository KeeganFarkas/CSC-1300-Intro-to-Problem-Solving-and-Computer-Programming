/*
	Title:  	lab12.cpp
	Author:  	Keegan Farkas
	Date:  		12/2/2021
	Purpose:  	This program was written to find which esports players had the
                most and least amount of hours played on esports games.
*/
#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct Player
{
    string name;
    string hometown;
    int age;
    int numGames;
};

int main()
{
    int numPlayers, mostName = 0, leastName = 0;
    long long total, most = -1, least = std::numeric_limits<long long>::max();

    cout << "How many esports players are there at TTU who major in CSC?" << endl;

    cin >> numPlayers;

    Player *playerArray = new Player[numPlayers];
    int **playerHoursArray = new int*[numPlayers];

    cout << "\nPlease enter in information about each player:" << endl;

    for (int i = 0; i < numPlayers; i++)
    {
        cout << "\nPLAYER " << i + 1 << ":\n\tNAME:   ";

        cin.ignore();
        getline(cin, playerArray[i].name);

        cout << "\tHOMETOWN:\t";

        getline(cin, playerArray[i].hometown);

        cout << "\tAGE:    ";

        cin >> playerArray[i].age;

        cout << "\tHOW MANY GAMES DOES " << playerArray[i].name << " PLAY?    ";

        cin >> playerArray[i].numGames;

        playerHoursArray[i] = new int[playerArray[i].numGames];

        total = 0;

        for (int j = 0; j < playerArray[i].numGames; j++)
        {
            cout << "\t\tNUMBER OF HOURS " << playerArray[i].name << " PLAYED GAME " << j + 1 << "\t";

            cin >> playerHoursArray[i][j];

            total += playerHoursArray[i][j];
        }
        
        if (total > most)
        {
            most = total;
            mostName = i;
        }

        if (total < least)
        {
            least = total;
            leastName = i;
        }
    }

    cout << "\n\nThe player who played the most hours (" << most << " hours) is " << playerArray[mostName].name;
    cout << "\n\nThe player who played the least hours (" << least << " hours) is " << playerArray[leastName].name;

    return 0;
}