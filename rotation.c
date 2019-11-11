#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>
void circleMidpoint(int, int, int);
void drawCircle(int, int, int, int);
void main(){
	float x1, y1, x2, y2, theta;
	double x1n, y1n, x2n, y2n;
	int gd = DETECT, gm; 
    initgraph(&gd, &gm, NULL);
    x1=0;
    y1=0;
    x2=200;
    y2=00;
    theta=90*3.141/180;
    x1n=x1*cos(theta)-y1*sin(theta);
    y1n=x1*sin(theta)+y1*cos(theta);
    x2n=x2*cos(theta)-y2*sin(theta);
    y2n=x2*sin(theta)+y2*cos(theta);
    setcolor(RED);
	line(x1, y1, x2, y2);
	setcolor(GREEN);
	line(x1n, y1n, x2n, y2n);
	delay(10000);
	closegraph();
}


