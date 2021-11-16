#include <iostream>
#include <string>
using namespace std;

class Position
{
public:
    float X;
    float Y;
    float Z;

    Position()
    {
        X = 0;
        Y = 0;
        Z = 0;
    }
};

class Player
{
public:
    string Name;
    int Age;
    float Fitness;
    string Dominant_Foot;
    int Number = 1;
    Position Pos;

    Player()
    {
        Name = "Kevin Spacey";
        Age = 83;
        Fitness = 117.9f;
        Dominant_Foot = "Left";
        Number = 1;
        Pos.X = 5.0f;
        Pos.Y = 5.0f;
        Pos.Z = 5.0f;
    }
};

class Team
{
public:
    string Name;
    int Size;
    string Manager;
    int Wins;
    int Losses;
    int Goals_Scored;
    Player Player1;
    Player Player2;
    Player Player3;

    Team()
    {
        Name = "Republic of Gamers";
        Size = 3;
        Manager = "Joe Mama";
        Wins = 23534;
        Losses = 0;
        Goals_Scored = 15;
        Player1.Name = "Bob Ross";
        Player2.Name = "Rob Boss";
        Player3.Name = "Nigel Farage";
    }
};

class Stadium
{
public:
    string Name;
    int Seating_Capacity;
    string Address;
    float Minutes_left;
    Position Pos;
    float Ball_Speed;
    Team Team1;
    Team Team2;

    Stadium()
    {
        Name = "Dimmadome";
        Seating_Capacity = 55000;
        Address = "123 Gaming Street";
        Minutes_left = 53.7f;
        Pos.X = 100.0f;
        Pos.Y = 100.0f;
        Pos.Z = 100.0f;
        Ball_Speed = 1500.5f;
        Team1.Name = "Gaming United";
        Team2.Name = "Gaming Republic";
    }
};

int main()
{
    Stadium MyStadium;
    MyStadium.Team1.Player2.Age = 107;
    cout << MyStadium.Team1.Player2.Age << endl;
}
