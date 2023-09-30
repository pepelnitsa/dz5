#include "Cat.h"
#include <iostream>
#include <string>
using namespace std;

Cat::Cat() {
    SetTailLength(0.5);
    SetEarsCount(2);
    SetFurColor("");
    SetNick("");
    SetEyesColor("");
    SetAlive(true);
    SetHungry(true);
}

Cat::Cat(double tail_length, int ears_count, const string& fur_color, const string& nick, const string& eyes_color, bool is_hungry, bool is_alive) {
    SetTailLength(tail_length);
    SetEarsCount(ears_count);
    SetFurColor(fur_color);
    SetNick(nick);
    SetEyesColor(eyes_color);
    SetAlive(is_alive);
    SetHungry(is_hungry);
}

double Cat::GetTailLength() const {
    return tail_length;
}

int Cat::GetEarsCount() const {
    return ears_count;
}

string Cat::GetFurColor() const {
    return fur_color;
}

string Cat::GetNick() const {
    return nick;
}

string Cat::GetEyesColor() const {
    return eyes_color;
}

bool Cat::IsAlive() const {
    return is_alive;
}

bool Cat::IsHungry() const {
    return is_hungry;
}

void Cat::SetTailLength(double tail_length) {
    this->tail_length = tail_length;
}

void Cat::SetEarsCount(int ears_count) {
    this->ears_count = ears_count;
}

void Cat::SetFurColor(const string& fur_color) {
    this->fur_color = fur_color;
}

void Cat::SetNick(const string& nick) {
    this->nick = nick;
}

void Cat::SetEyesColor(const string& eyes_color) {
    this->eyes_color = eyes_color;
}

void Cat::SetAlive(bool is_alive) {
    this->is_alive = is_alive;
}

void Cat::SetHungry(bool is_hungry) {
    this->is_hungry = is_hungry;
}

void Cat::MakeNoize() {
    if (is_alive) {
        cout << "MEOW!\n";
    }
    else {
        cout << "The cat is not alive.\n";
    }
}

void Cat::Walk() {
    if (is_alive) {
        cout << "The cat is walking!\n";
    }
    else {
        cout << "The cat is not alive.\n";
    }
}

void Cat::Eat(const string& meal) {
    if (is_alive) {
        if (is_hungry) {
            cout << "The cat is eating " << meal << "\n";
            is_hungry = false;
        }
        else {
            cout << "The cat is not hungry.\n";
        }
    }
    else {
        cout << "The cat is not alive.\n";
    }
}

void Cat::Jump() {
    if (is_alive) {
        cout << "Jumped out of the window\n\n";
    }
    else {
        cout << "The cat is not alive.\n";
    }
}


bool Cat::operator==(const Cat& other) const
{
    return false;
}
