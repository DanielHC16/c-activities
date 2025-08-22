#include <graphics.h>
#include <conio.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Head
    circle(200, 100, 40);
    // Body
    line(200, 140, 200, 250);
    // Arms
    line(200, 160, 150, 200);
    line(200, 160, 250, 200);
    // Legs
    line(200, 250, 150, 300);
    line(200, 250, 250, 300);
    outtextxy(180, 320, "Cartoon Character");
    getch();
    closegraph(0);
    return 0;
}

