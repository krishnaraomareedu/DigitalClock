#include<graphics.h>
#include<time.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<stdlib.h>
int digital_clock()
{
  int gd=DETECT;
  int gm;
  initgraph(&gd,&gm,"C:\\Dev-Cpp\\lib");

  time_t rawTime;
  struct tm * currentTime;
  char a[100];

  while(1)
  {
    rawTime=time(NULL);
    currentTime=localtime(&rawTime);
    strftime(a,50,"%I:%M:%S",currentTime);

    setcolor(11);
    settextstyle(3,HORIZ_DIR,10);
    outtextxy(1,100,a);

    strftime(a,100,"%p",currentTime);
    settextstyle(3,HORIZ_DIR,2);
    outtextxy(600,8,a);

    strftime(a,100,"%a, %d %b,%Y",currentTime);
    settextstyle(3,HORIZ_DIR,5);
    outtextxy(200,310,a);

    delay(1000);
  }



  getch();
  closegraph();
}
