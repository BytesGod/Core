#include<iostream>
#include<conio.h>

using namespace std;

class humidity;

class temperature
{
    private:
        int temp;

    public:
        void SetTemperature(int n)
        {
            temp = n;
        }

        friend void PrintWeather(temperature t,humidity h);
};

class humidity
{
    private:
        int humu;

    public:
        void SetHumidity(int n)
        {
            humu = n;
        }

        friend void PrintWeather(temperature t,humidity h);
};

void PrintWeather(temperature t,humidity h)
{
    cout << "The temperature is " << t.temp << " and the humidity is " << h.humu;
}

int main()
{
    temperature t1;
    t1.SetTemperature(32);
    humidity h1;
    h1.SetHumidity(28);
    PrintWeather(t1,h1);
    getch();
    return 0;
}
