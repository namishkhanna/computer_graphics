#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");

    int x1,y1,len;
    cout<<"x1 : ";
    cin>>x1;
    cout<<"y1 : ";
    cin>>y1;
    cout<<"Length : ";
    cin>>len;

    //square
    line(x1,y1,x1,y1+len);
    line(x1,y1,x1+len,y1);
    line(x1+len,y1,x1+len,y1+len);
    line(x1+len,y1+len,x1,y1+len);

    //triangle
    line(x1,y1,x1+(len/2),y1-(len/2));
    line(x1+(len/2),y1-(len/2),x1+len,y1);

    //upper base
    line(x1+(len/2),y1-(len/2),x1+(2*len),y1-(len/2));
    line(x1+(len/2)+2*len,y1,x1+(2*len),y1-(len/2));
    line(x1+len,y1,x1+(len/2)+(2*len),y1);
    line(x1+(len/2)+2*len,y1,x1+(len/2)+(2*len),y1+len);
    line(x1+(len/2)+2*len,y1+len,x1+len,y1+len);

    //door
    line(x1+(0.33*len),y1+len,x1+(0.33*len),y1+(0.33*len));
    line(x1+(0.33*len),y1+(0.33*len),x1+(0.66*len),y1+(0.33*len));
    line(x1+(0.66*len),y1+(0.33*len),x1+(0.66*len),y1+len);
    circle(x1+(0.6*len),y1+(0.7*len),(len/20));
    circle(x1+(0.6*len),y1+(0.7*len),(len/40));

    //window
    line(x1+(1.33*len),y1+(0.33*len),x1+(1.99*len),y1+(0.33*len));
    line(x1+(1.33*len),y1+(0.33*len),x1+(1.33*len),y1+(0.66*len));
    line(x1+(1.33*len),y1+(0.66*len),x1+(1.99*len),y1+(0.66*len));
    line(x1+(1.99*len),y1+(0.66*len),x1+(1.99*len),y1+(0.33*len));

    line(x1+(1.65*len),y1+(0.33*len),x1+(1.65*len),y1+(0.66*len));
    line(x1+(1.67*len),y1+(0.33*len),x1+(1.67*len),y1+(0.66*len));
    line(x1+(1.33*len),y1+(0.48*len),x1+(1.99*len),y1+(0.48*len));
    line(x1+(1.33*len),y1+(0.50*len),x1+(1.99*len),y1+(0.50*len));

    //upper lines
    line(x1+(0.6875*len),y1-(len/2),x1+(1.1875*len),y1);
    line(x1+(0.875*len),y1-(len/2),x1+(1.375*len),y1);
    line(x1+(1.0625*len),y1-(len/2),x1+(1.5625*len),y1);
    line(x1+(1.25*len),y1-(len/2),x1+(1.75*len),y1);
    line(x1+(1.4375*len),y1-(len/2),x1+(1.9375*len),y1);
    line(x1+(1.625*len),y1-(len/2),x1+(2.125*len),y1);
    line(x1+(1.8125*len),y1-(len/2),x1+(2.3125*len),y1);

	getch();
	closegraph();
	return 0;
}
