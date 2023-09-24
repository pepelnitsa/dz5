#include <string>
#include "Cat.h"

using namespace std;

class Room {
private:
    double square = 32; // m^2
    int bed = 2;
    string wall_color = "black";
    int windows = 3;
    int table = 1;
    bool is_dark = false;

public:
    double GetSquare() const;
    int GetBed() const;
    string GetWallColor() const;
    int GetWindows() const;
    int GetTable() const;
    bool IsDark() const;

    void SetSquare(double square);
    void SetBed(int bed);
    void SetWallColor(const string& wall_color);
    void SetWindows(int windows);
    void SetTable(int table);
    void SetIsDark(bool is_dark);

    void Rest();
    void Party();
    void PlayPC();
    void TurnLightOff();
    void Jump(Cat& who);
};

