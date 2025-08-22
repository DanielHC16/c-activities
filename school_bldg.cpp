#include <graphics.h>
#include <conio.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    // Main building
    rectangle(100, 150, 400, 350);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(110, 160, WHITE);
    // Roof
    line(100, 150, 250, 80);
    line(400, 150, 250, 80);
    setfillstyle(SOLID_FILL, RED);
    floodfill(250, 100, WHITE);
    // Door
    rectangle(220, 250, 280, 350);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(230, 260, WHITE);
    // Windows
    rectangle(130, 180, 180, 220);
    floodfill(135, 185, WHITE);
    rectangle(320, 180, 370, 220);
    floodfill(325, 185, WHITE);
    outtextxy(200, 360, "SCHOOL");
    getch();
    closegraph(0);
    return 0;
}

