#include <graphics.h>
#include <conio.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setbkcolor(BLACK);
    cleardevice();
    // Desk line
    setcolor(DARKGRAY);
    line(0, 360, 639, 360);
    // Monitor frame
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, DARKGRAY);
    bar(120, 120, 420, 260);
    rectangle(120, 120, 420, 260);
    // Screen
    setfillstyle(SOLID_FILL, BLUE);
    bar(140, 140, 400, 240);
    rectangle(140, 140, 400, 240);
    // Monitor stand
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    bar(255, 260, 285, 300);
    rectangle(255, 260, 285, 300);
    bar(220, 300, 320, 315);
    rectangle(220, 300, 320, 315);
    // CPU tower
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    bar(450, 170, 560, 320);
    rectangle(450, 170, 560, 320);
    // Drive bay and power button
    setcolor(BLACK);
    rectangle(460, 180, 550, 205);
    circle(505, 300, 6);
    // Keyboard
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, DARKGRAY);
    bar(150, 320, 380, 345);
    rectangle(150, 320, 380, 345);
    // Keyboard keys (simple grid)
    for (int x = 160; x <= 370; x += 20) {
        for (int y = 325; y <= 340; y += 10) {
            rectangle(x, y, x + 15, y + 7);
        }
    }
    // Mouse
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    bar(400, 330, 430, 345);
    rectangle(400, 330, 430, 345);
    line(415, 330, 415, 338); // mouse split
    arc(395, 330, 180, 270, 10); // cord curve

    outtextxy(220, 100, "Computer Desktop Set");
    getch();
    closegraph(0);
    return 0;
}

