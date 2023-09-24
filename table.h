#include <string>
#include "Human.h"

using namespace std;

class Table {
private:
    double height = 1.50; // m
    double length = 3.50; // m
    string color = "yellow";
    double weight = 70; // kg
    int pc_on_table = 1;

public:
    double GetHeight() const;
    double GetLength() const;
    string GetColor() const;
    double GetWeight() const;
    int GetPCOnTable() const;

    void SetHeight(double height);
    void SetLength(double length);
    void SetColor(const string& color);
    void SetWeight(double weight);
    void SetPCOnTable(int pc_on_table);

    void PlayPC();
    void Remove(Human& who);
    void Move();
    void Break();
    void Repair();
};
