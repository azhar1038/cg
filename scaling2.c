#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
void main(){
	float x1, y1, x2, y2, s;
	float x1n, y1n, x2n, y2n;
	int gd = DETECT, gm; 
    initgraph(&gd, &gm, NULL);
    x1=50;
    y1=50;
    x2=200;
    y2=200;
    s=2;
    x1n=x1*s;
    y1n=x1*s;
    x2n=x2*s;
    y2n=x2*s;
    setcolor(RED);
	rectangle(x1, y1, x2, y2);
	delay(2000);
	setcolor(GREEN);
	rectangle(x1n, y1n, x2n, y2n);
	delay(10000);
	closegraph();
}


