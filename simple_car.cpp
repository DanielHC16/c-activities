#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    // Car body
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(100, 200, 300, 250);
    floodfill(110, 210, BLUE);
    // Car top
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    rectangle(150, 150, 250, 200);
    floodfill(160, 160, RED);
    // Wheels
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, BLACK);
    circle(130, 250, 20);
    floodfill(130, 250, WHITE);
    circle(270, 250, 20);
    floodfill(270, 250, WHITE);
    outtextxy(140, 280, "My Car");
    getch();
    closegraph(0);
    return 0;
}

