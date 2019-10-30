#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

    int main()
    {
        int gd=DETECT,gm;
        initgraph(&gd,&gm,"");

        float wxmin=10,wxmax=150,wymin=10,wymax=350;
        float vxmin=200,vxmax=600,vymin=10,vymax=250;
        float wx1=30,wy1=50,wx2=100,wy2=180;

        float sx=(vxmax-vxmin)/(wxmax-wxmin);
        float sy=(vymax-vymin)/(wymax-wymin);

        line(wx1,wy1,wx2,wy2);

        float vx1,vx2,vy1,vy2;
        vx1=sx*(wx1-wxmin)+vxmin;
        vy1=sy*(wy1-wymin)+vymin;
        vx2=sx*(wx2-wxmin)+vxmin;
        vy2=sy*(wy2-wymin)+vymin;

        line(vx1,vy1,vx2,vy2);

        outtextxy(300,200,"window");
        outtextxy(36,260,"viewport");

        getch();
    }



