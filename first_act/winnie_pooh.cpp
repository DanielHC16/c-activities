#include <graphics.h>
#include <conio.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setbkcolor(LIGHTCYAN);
    cleardevice();
    // Head (bear yellow)
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(320, 180, 60, 55);
    // Ears
    fillellipse(280, 135, 15, 15);
    fillellipse(360, 135, 15, 15);
    // Eyes (small black dots)
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(300, 180, 4, 6);
    fillellipse(340, 180, 4, 6);
    // Nose & muzzle
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(320, 200, 8, 6);         // nose
    arc(320, 210, 210, 330, 18);         // smile
    // Body (yellow)
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(320, 270, 70, 50);
    // Shirt (red)
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    bar(250, 245, 390, 270);
    // Arms (yellow)
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(260, 260, 18, 10);
    fillellipse(380, 260, 18, 10);

    outtextxy(280, 340, "Winnie the Pooh (simplified)");
    getch();
    closegraph(0);
    return 0;
}

