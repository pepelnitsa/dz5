#include <string>

using namespace std;

class Cat;

class Human {
private:
    double height = 1.72;
    int arms_count = 2;
    int legs_count = 2;
    string hair_color = "pink";
    string eyes_colour = "blue";
    bool is_alive = true;
    bool is_tired = false;

public:
    double GetHeight() const;
    int GetArmsCount() const;
    int GetLegsCount() const;
    string GetHairColor() const;
    string GetEyesColour() const;
    bool IsAlive() const;
    bool IsTired() const;

    void SetHeight(double height);
    void SetArmsCount(int arms_count);
    void SetLegsCount(int legs_count);
    void SetHairColor(const string& hair_color);
    void SetEyesColour(const string& eyes_colour);
    void SetAlive(bool is_alive);
    void SetTired(bool is_tired);

    void Talk();
    void Sleep();
    void Work();
    void Cook();
    void Eat();
    void Printing();
    void Pet(Cat& who);
};