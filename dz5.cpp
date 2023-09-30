#include <iostream>
#include <string>
#include "Cat.h"
#include "Human.h"
#include "Room.h"
#include "Phone.h"
#include "Table.h"
#include "Printer.h"
using namespace std;

int main() {
    Human h; 
    Human h(1.80, 2, 2, "brown", "green"); 

    Room r; 
    Room r(40, 3, "blue", 5, 1); 

    Phone p; 
    Phone p2(6, 0.6, "black", 1, 2); 

    Table t; 
    Table t(1.2, 2.0, "white", 10, 0); 

    Cat c; 
    Cat c("Whiskers", 3, "gray", true, true); 

    Printer pr; 
    Printer pr("rectangle", "white", 10, 2, 50, false); 

    c.Eat("fish");
    c.Walk();
    c.Jump();
    c.Eat("mouse");

    h.Sleep();
    h.Work();
    h.Cook();
    h.Eat();
    h.Pet(c);

    r.Rest();
    r.TurnLightOff();
    r.Rest();
    r.Party();
    r.PlayPC();
    r.Jump(c);

    p.Call(h);
    p.SurfInternet();
    p.TikTok();
    p.Games();
    p.Telegram();

    t.PlayPC();
    t.Remove(h);
    t.Move();
    t.Break();
    t.Repair();

    pr.Print(h);
    pr.Scan();
    pr.Jam();
    pr.Sit();
    pr.Error();


    return 0;
}
