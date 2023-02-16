#include <iostream>
#include <string>
#include <sys/types.h>
#include <type_traits>
#include <math.h>

using namespace std;

class Punkt
{
    private:
    string nazwa;
    float x, y;
    public:
    void wyswietl()
    {
        cout << "nazwa: " << nazwa << endl;
        cout << "punkt x: " << x << " punkt y: " << y << endl;
        return;
    }
    Punkt(string n="S", float xx=0, float yy=0)
    {
        nazwa = n;
        x = xx;
        y = yy;
    }
};

class Kolo :public Punkt
{
    private:
    float r;
    string nazwa;

    public:
    void wyswietl()
    {
        cout << nazwa << " promień " << r << endl;
        Punkt::wyswietl();
        cout << "pole koła: " << M_PI*r*2 << endl;
    }
    Kolo(float rr=1, string nk="none", string np="S", float px=0, float py=0)
    :Punkt(np, px, py)
    {
        nazwa = nk;
        r = rr;
    }
};

int main()
{
    Kolo k1;
    k1.wyswietl();
    return 0;
}