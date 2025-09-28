#include <stdio.h>
#include <math.h>

void DDA(int x0, int y0, int x1, int y1) {
    int dx = x1 - x0;
    int dy = y1 - y0;

    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float Xinc = dx / (float) steps;
    float Yinc = dy / (float) steps;

    float x = x0;
    float y = y0;

    printf("DDA Line Points:\n");
    for (int i = 0; i <= steps; i++) {
        printf("(%d, %d)\n", (int)round(x), (int)round(y));
        x += Xinc;
        y += Yinc;
    }
}

int main() {
    int x0, y0, x1, y1;
    printf("Enter x0 y0: ");
    scanf("%d %d", &x0, &y0);
    printf("Enter x1 y1: ");
    scanf("%d %d", &x1, &y1);

    DDA(x0, y0, x1, y1);

    return 0;
}
