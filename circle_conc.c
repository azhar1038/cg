#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
void circleMidpoint(int, int, int);
void drawCircle(int, int, int, int);
void main(){
	int xc, yc, r;
	int gd = DETECT, gm; 
    	initgraph(&gd, &gm, NULL);
	xc=100;
	yc=100;
	r=50;
	printf("Center Coordinates of outer circle is: (%d,%d)\n", xc, yc);
	printf("radius of outer circle is: %d", r);
	circleMidpoint(xc, yc, r);
	circleMidpoint(xc, yc, r-20);
	delay(10000);
	closegraph();
}
void circleMidpoint(int xc, int yc, int r){
	int x=0, y=r;
	int p = 1-r;
	while(x<y){
		drawCircle(xc, yc, x, y);
		x++;
		if(p<0) p = p+2*x+1;
		else {
			y--;
			p = p+2*(x-y)+1;
		}
		drawCircle(xc, yc, x, y);
		delay(50);
	}
}
void drawCircle(int xc, int yc, int x, int y){
	putpixel(xc+x, yc+y, RED);
	putpixel(xc+x, yc-y, RED);
	putpixel(xc-x, yc+y, RED);
	putpixel(xc-x, yc-y, RED);
	putpixel(xc+y, yc+x, RED);
	putpixel(xc-y, yc+x, RED);
	putpixel(xc+y, yc-x, RED);
	putpixel(xc-y, yc-x, RED);
}
