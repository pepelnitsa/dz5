#include <string>
#include "Human.h"

using namespace std;

class Phone {
private:
    int screen_diagonal = 12;
    int weight = 0.5;
    string color = "grey";
    int power_button = 1;
    int volume_button = 2;

public:
    int GetScreenDiagonal() const;
    int GetWeight() const;
    string GetColor() const;
    int GetPowerButton() const;
    int GetVolumeButton() const;

    void SetScreenDiagonal(int screen_diagonal);
    void SetWeight(int weight);
    void SetColor(const string& color);
    void SetPowerButton(int power_button);
    void SetVolumeButton(int volume_button);

    void Call(Human& who);
    void SurfInternet();
    void TikTok();
    void Games();
    void Telegram();
};
