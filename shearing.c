#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
//void newPoint(int *x, int *y, int sh){
	
//}
void main(){
	int x1, y1, x2, y2, shx;
	int x1n, y1n, x2n, y2n;
	int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    x1=50;
    y1=50;
    x2=200;
    y2=200;
    int arr1[] = {x1, y1, x2, y1, x2, y2, x1, y2, x1, y1};
    setcolor(RED);
	drawpoly(5, arr1);
	delay(2000);
    shx=2;
    x1n=x1 + shx*y1;
    x2n=x2 + shx*y1;
    int arr2[] = {x1n, y1, x2n, y1, x2, y2, x1, y2, x1n, y1};
	setcolor(GREEN);
	drawpoly(5, arr2);
	delay(10000);
	closegraph();
}


