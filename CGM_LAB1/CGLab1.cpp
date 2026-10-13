#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // Straight Line
    line(50, 50, 250, 50);

    // Circle
    circle(150, 150, 50);

    // Rectangle
    rectangle(300, 50, 500, 150);

    // Triangle
    line(300, 300, 400, 200);
    line(400, 200, 500, 300);
    line(500, 300, 300, 300);

    getch();
    closegraph();

    return 0;
}
