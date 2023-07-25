/*___________ WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL _____________*/

/*-------------- C++ PROGRAM TO CREATE HEART ANIMATION -------------------*/

#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>

void text(int,int);
void main()
{
int gd=DETECT,gm,x=60,y=300;
initgraph(&gd,&gm,"c:\\tc\\bgi");

 for(int i=1;i<=350;i++)
 {
 text(x,y-i);

 // 1th heart
  setcolor(10);
 circle(50,50+i,40);
 setfillstyle(1,10);
 floodfill(50,50+i,10);

 circle(110,50+i,40);
 setfillstyle(1,10);
 floodfill(110,50+i,10);

 line(22,80+i,80,140+i);
 line(80,140+i,138,80+i);
 setfillstyle(1,10);
 floodfill(80,110+i,10);

 // 2nd heart
 setcolor(13);
circle(200,50+i,40);
setfillstyle(1,13);
floodfill(200,50+i,13);

circle(260,50+i,40);
setfillstyle(1,13);
floodfill(260,50+i,13);

line(172,80+i,230,140+i);
line(230,140+i,288,80+i);
setfillstyle(1,13);
floodfill(230,110+i,13);

//3rd heart

circle(350,50+i,40);
setfillstyle(1,13);
floodfill(350,50+i,13);

circle(410,50+i,40);
setfillstyle(1,13);
floodfill(410,50+i,13);

line(322,80+i,380,140+i);
line(380,140+i,438,80+i);
setfillstyle(1,13);
floodfill(380,110+i,13);

//4th heart
setcolor(10);
circle(500,50+i,40);
setfillstyle(1,10);
floodfill(500,50+i,10);

circle(560,50+i,40);
setfillstyle(1,10);
floodfill(560,50+i,10);

line(472,80+i,530,140+i);
line(530,140+i,588,80+i);
setfillstyle(1,10);
floodfill(530,110+i,10);

delay(10);
cleardevice();
}

getch();
closegraph();
}

void text(int x,int y)
{
setcolor(11);
settextstyle(7,0,5);
outtextxy(x-20,y," I LOVE PROGRAMMING ");
setcolor(10);
settextstyle(8,0,3);
outtextxy(y,x,"ROHIT TECH STUDY");
}


/*................. I HOPE YOU LIKE THIS PROGRAMMING ..................*/

/*......... LIKE >>>>>>>>>>> SHARE <<<<<<<<<<< SUBSCRIBE ................*/



