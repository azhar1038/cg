#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
void main(){
	int x, y, tx, ty, xn, yn;
	int gd = DETECT, gm; 
    initgraph(&gd, &gm, NULL);
	x=50;
	y=100;
	tx = 100;
	ty = 300;
	xn = x+tx;
	yn = y+ty;
	printf("Initial coordinates of point is: (%d,%d)\n", x, y);
	printf("Translation distance in X axis: %d\n", tx);
	printf("Translation distance in Y axis: %d\n", ty);
	printf("Initial coordinates of point is: (%d,%d)\n", xn, yn);
	putpixel(x, y, RED);
	putpixel(xn, yn, GREEN);
	delay(10000);
	closegraph();
}
