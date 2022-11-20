#include<graphics.h>
#include<iostream>
using namespace std;

int main(){
int gd=DETECT,gm,i;
initgraph(&gd,&gm,NULL);
for(i=1;i<500;i++){
line(0,300,700,300);
circle(100+i,285,15); 
circle(200+i,285,15);
circle(100+i,285,5);  
circle(200+i,285,5);

line(65+i,285,85+i,285);
line(115+i,285,185+i,285);
line(215+i,285,235+i,285);
line(65+i,285,65+i,260);
line(235+i,285,235+i,260);

line(65+i,260,100+i,255);
line(235+i,260,200+i,255);

line(100+i,255,115+i,235);
line(200+i,255,185+i,235);

line(115+i,235,185+i,235);


line(106+i,255,118+i,238);
line(118+i,238,118+i,255);
line(106+i,255,118+i,255);

line(194+i,255,182+i,238);
line(182+i,238,182+i,255);
line(194+i,255,182+i,255);

line(121+i,238,121+i,255);
line(121+i,238,148+i,238);
line(121+i,255,148+i,255);
line(148+i,255,148+i,238);


line(179+i,238,179+i,255);
line(179+i,238,152+i,238);
line(179+i,255,152+i,255);
line(152+i,255,152+i,238);
setcolor(4);
delay(10);
cleardevice();
}
getch();
closegraph();
}
