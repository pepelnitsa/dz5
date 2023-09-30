#include <string>
#include "Cat.h"

using namespace std;

class Room {
private:
    double square;
    int bed;
    string wall_color;
    int windows;
    int table;
    bool is_dark;

public:
    Room(double sq, int b, const string& wc, int w, int t);
    Room();
    Room(double sq);
    Room(double sq, int b);
    Room(double sq, int b, const string& wc);

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

