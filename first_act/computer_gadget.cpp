#include <graphics.h>
#include <conio.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    // Monitor
    rectangle(150, 100, 400, 250);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    floodfill(160, 120, WHITE);
    // Screen
    rectangle(170, 120, 380, 230);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(200, 150, WHITE);
    // Stand
    rectangle(250, 250, 300, 280);
    floodfill(260, 260, WHITE);
    // Base
    rectangle(200, 280, 350, 300);
    floodfill(210, 290, WHITE);
    outtextxy(230, 310, "Computer");
    getch();
    closegraph(0);
    return 0;
}

