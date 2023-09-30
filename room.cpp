#include "Room.h"
#include "Cat.h"
#include <iostream>

using namespace std;

Room::Room() {
    SetSquare(32.0);
    SetBed(2);
    SetWallColor("black");
    SetWindows(3);
    SetTable(1);
    SetIsDark(false);
}

Room::Room(double sq, int bd, string wc, int wnd, int tbl, bool dark) {
    SetSquare(sq);
    SetBed(bd);
    SetWallColor(wc);
    SetWindows(wnd);
    SetTable(tbl);
    SetIsDark(dark);
}

Room::Room(double sq, int b, const string& wc, int w, int t) : square(0.0), bed(0), wall_color("white"), windows(0), table(0) {
    SetSquare(sq);
    SetBed(b);
    SetWallColor(wc);
    SetWindows(w);
    SetTable(t);
}

Room::Room()
    : Room(0.0, 0, "white", 0, 0) {}

Room::Room(double sq)
    : Room(sq, 0, "white", 0, 0) {}

Room::Room(double sq, int b)
    : Room(sq, b, "white", 0, 0) {}

Room::Room(double sq, int b, const string& wc)
    : Room(sq, b, wc, 0, 0) {}


double Room::GetSquare() const {
    return square;
}

int Room::GetBed() const {
    return bed;
}

Room::Room(double square, int bed, const std::string& wall_color, int windows, int table, bool is_dark)
{
}

string Room::GetWallColor() const {
    return wall_color;
}

int Room::GetWindows() const {
    return windows;
}

int Room::GetTable() const {
    return table;
}

bool Room::IsDark() const {
    return is_dark;
}

void Room::SetSquare(double square) {
    this->square = square;
}

void Room::SetBed(int bed) {
    this->bed = bed;
}

void Room::SetWallColor(const string& wall_color) {
    this->wall_color = wall_color;
}

void Room::SetWindows(int windows) {
    this->windows = windows;
}

void Room::SetTable(int table) {
    this->table = table;
}

void Room::SetIsDark(bool is_dark) {
    this->is_dark = is_dark;
}

void Room::Rest() {
    if (is_dark) {
        cout << "Sleeping in the darkness\n";
    }
    else {
        cout << "Resting\n";
    }
}

void Room::Party() {
    if (!is_dark) {
        cout << "Dancing\n";
    }
    else {
        cout << "It's too dark to dance\n";
    }
}

void Room::PlayPC() {
    if (!is_dark) {
        cout << "Playing on the computer\n";
    }
    else {
        cout << "It's too dark to see the screen\n";
    }
}

void Room::TurnLightOff() {
    cout << "Turning off the lights\n";
    is_dark = true;
}

void Room::Jump(Cat& who) {
    if (who.IsAlive()) {
        cout << "The window is open\n";
        who.Jump();
    }
    else {
        cout << "The cat is not alive.\n";
    }
}
