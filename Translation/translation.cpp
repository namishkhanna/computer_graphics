#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;

    int rect()
    {
        int x1,x2,y1,y2,sx,sy;
        cout<<"     For Rectangle       \n";
        cout<<"Enter First point Coordinates : ";
        cin>>x1>>y1;
        cout<<"Enter Second point Coordinates : ";
        cin>>x2>>y2;
        cout<<"Enter Translation Coordinates : ";
        cin>>sx>>sy;

        rectangle(x1,y1,x2,y2);
        rectangle(x1+sx,y1+sy,x2+sx,y2+sy);

        return 0;
    }

    int tri()
    {
        cout<<"       For Triangle      \n";
        int x1,x2,x3,y1,y2,y3,sx,sy;
        cout<<"Enter First point Coordinates : ";
        cin>>x1>>y1;
        cout<<"Enter Second point Coordinates : ";
        cin>>x2>>y2;
        cout<<"Enter Third point Coordinates : ";
        cin>>x3>>y3;
        cout<<"Enter Translation Coordinates : ";
        cin>>sx>>sy;

        line(x1,y1,x2,y2);
        line(x2,y2,x3,y3);
        line(x3,y3,x1,y1);

        line(x1+sx,y1+sy,x2+sx,y2+sy);
        line(x2+sx,y2+sy,x3+sx,y3+sy);
        line(x3+sx,y3+sy,x1+sx,y1+sy);

        return 0;
    }

    int main()
    {
        int gd=DETECT,gm;
        initgraph(&gd,&gm,"");

        int s;
        cout<<"Enter 1 to Translate Rectangle \n";
        cout<<"Enter 2 to Translate Triangle \n";
        cout<<"Enter your Choice : ";
        cin>>s;
        cout<<"\n";
        switch(s)
            {
            case 1:
                rect();
                break;
            case 2:
                tri();
                break;
            default:
                cout<<"Enter Valid Number !!!";
                break;
            }

        getch();
    }

