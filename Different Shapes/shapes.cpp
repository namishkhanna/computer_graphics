#include<iostream>
#include<bits/stdc++.h> //for codeblocks
#include<graphics.h>
Using Namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");

	int l=100,t=100,r=200,b=200,x=300,y=150,rad=50;
	rectangle(l,t,r,b);
	circle(x,y,rad);
	bar(l+300,t,r+300,b);
	ellipse(x,y+200,-60,300,100,50);
	line(l-10,t+150,l+140,b);
	outtextxy(x-20,y,"hello");

    getch();
	closegraph();
	return 0;
}
