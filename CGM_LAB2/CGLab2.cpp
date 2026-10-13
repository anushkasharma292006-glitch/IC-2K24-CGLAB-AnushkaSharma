
#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int x1, y1, x2, y2;

    cout << "Enter starting point (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Enter ending point (x2, y2): ";
    cin >> x2 >> y2;

    int dx = x2 - x1;
    int dy = y2 - y1;

    int steps = max(abs(dx), abs(dy));

    float xinc = 0, yinc = 0;

    if (steps != 0)
    {
        xinc = (float)dx / steps;
        yinc = (float)dy / steps;
    }

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    float x = x1;
    float y = y1;

    for (int i = 0; i <= steps; i++)
    {
        putpixel(round(x), round(y), WHITE);

        x = x + xinc;
        y = y + yinc;
    }

    getch();
    closegraph();

    return 0;
}
