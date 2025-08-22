#include <graphics.h>
#include <conio.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setbkcolor(WHITE);
    cleardevice();
    // Ground
    setcolor(LIGHTGRAY);
    line(0, 360, 639, 360);
    // Head (white)
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(300, 180, 80, 55);           // head
    // Ear (black)
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(235, 175, 22, 35);           // ear
    // Snout (white)
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(350, 195, 45, 25);
    // Nose (black)
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(385, 198, 7, 5);
    // Eye (black)
    fillellipse(315, 170, 4, 4);
    // Collar (red)
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    fillellipse(300, 230, 40, 8);
    // Body (white)
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(300, 270, 55, 35);
    // Legs/feet (white)
    fillellipse(270, 310, 22, 12);
    fillellipse(325, 310, 22, 12);
    // Tail (thin line)
    setcolor(BLACK);
    arc(245, 268, 240, 320, 25);
    // Outline accents
    ellipse(300, 180, 0, 360, 80, 55);  // head outline
    ellipse(350, 195, 0, 360, 45, 25);  // snout outline
    ellipse(300, 270, 0, 360, 55, 35);  // body outline
    outtextxy(260, 340, "Snoopy (simplified)");
    getch();
    closegraph(0);
    return 0;
}

