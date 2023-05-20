#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void sun();
void bird();
void handup();
void handdown();
void tree();
void light();
int a,b,c,d,e;
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"c://turboc3//bgi");
b=0;
c=0;
d=0;
  //road
for(i=1;i<=600;i++)
  {
   line(0,400,700,400);
   line(0,200,700,200);
   line(0,300,50,300);
   line(70,300,120,300);
   line(140,300,190,300);
   line(210,300,260,300);
   line(280,300,330,300);
   line(350,300,400,300);
   line(420,300,470,300);
   line(490,300,540,300);
   line(560,300,610,300);
   line(630,300,680,300);
   //Body of the car
   setcolor(40);
   line(50+i,220,100+i,220);
   line(50+i,220,30+i,250);
   line(100+i,220,120+i,250);
   setcolor(22);
   rectangle(0+i,250,160+i,270);
   // Tyres of the car
   setcolor(30);
   circle(30+i,285,12);
   circle(130+i,285,12);
   setfillstyle(SOLID_FILL,22);
   floodfill(30+i,285,22);
   floodfill(130+i,285,22);

/*if(i>=600)
{
break;
}
i=i+2; */
   setcolor(WHITE);
   bird();
   if(i%2==0)
   {
     handup();
   }
   else
   {

     handdown();
   }
   sun();
   tree();
   light();
   delay(50 );
   cleardevice();
   b=b+3;
  }

 getch();
 closegraph();
}
void bird()
{
//bird
circle(50+b,100,5);
line(53+b,98,60+b,100);
line(53+b,102,60+b,100);
circle(50+b,98,1);
ellipse(35+b,100,0,360,10,5);
line(28+b,100,15+b,95);
line(28+b,100,14+b,96);
line(29+b,100,13+b,97);
line(29+b,101,12+b,98);
line(29+b,102,10+b,99);
line(29+b,103,12+b,100);

}

void handdown()
{
c=b;
//handdown
ellipse(35+c,106,210,360,6,15);
line(36+c,100,30+c,110);
line(39+c,107,36+c,113);
line(36+c,107,33+c,113);

}

void handup()
{
d=b;
//handup
ellipse(35+d,94,0,150,6,15);
line(36+d,100,30+d,90);
line(36+d,87,38+d,93);
line(34+d,87,36+d,93);
}
void sun(){
	setcolor(WHITE);
	circle(20,20,20);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(20,20,WHITE);
	setcolor(WHITE);
}
void tree()
{

//tree
line(350,30,420,50);
line(350,40,425,65);
line(417,0,417,50);
line(417,63,417,200);
line(450,0,450,200);
line(500,130,450,180);
line(500,130,540,130);
line(450,125,520,100);
setfillstyle(SOLID_FILL,GREEN);
circle(580,100,50);
floodfill(590,120,WHITE);
circle(520,50,50);
floodfill(522,52,WHITE);
circle(600,50,50);
floodfill(620,20,WHITE);
circle(300,20,50);
floodfill(310,25,WHITE);
circle(320,40,50);
floodfill(325,65,WHITE);
floodfill(360,30,WHITE);
circle(240,50,50);
floodfill(230,55,WHITE);
setcolor(WHITE);
}
void light(){
line(130,140,130,200);  //1
line(130,140,140,150);
line(30,140,30,200);//2stlight
line(30,140,40,150);
line(230,140,230,200); //3ndlight
line(230,140,240,150);
line(330,140,330,200);//4
line(330,140,340,150);
line(430,140,430,200); //5light
line(430,140,440,150);
line(530,140,530,200);//6
line(530,140,540,150);
setcolor(9);
circle(140,150,5);//1
setfillstyle(SOLID_FILL,9);
floodfill(140,150,9);
setcolor(BROWN);
circle(40,150,5);    //2
setfillstyle(SOLID_FILL,BROWN);
floodfill(40,150,BROWN);
setcolor(RED);
circle(240,150,5);        //3
setfillstyle(SOLID_FILL,RED);
floodfill(240,150,RED);
setcolor(10);
circle(340,150,5); //4
setfillstyle(SOLID_FILL,10);
floodfill(340,150,10);
setcolor(12);
circle(440,150,5);        //5
setfillstyle(SOLID_FILL,12);
floodfill(440,150,12);
setcolor(13);
circle(540,150,5); //6
setfillstyle(SOLID_FILL,13);
floodfill(540,150,13);
setcolor(WHITE);
//another side
line(10,340,10,400);  //7
line(10,340,20,350);
line(110,340,110,400);//8light
line(110,340,120,350);
line(210,340,210,400); //9light
line(210,340,220,350);
line(310,340,310,400);//10
line(310,340,320,350);
line(410,340,410,400); //11light
line(410,340,420,350);
line(510,340,510,400);//12
line(510,340,520,350);
line(610,340,610,400);//12
line(610,340,620,350);
setcolor(14);
circle(20,350,5);//1
setfillstyle(SOLID_FILL,14);
floodfill(20,350,14);
setcolor(20);
circle(120,350,5);    //2
setfillstyle(SOLID_FILL,20);
floodfill(120,350,20);
setcolor(21);
circle(220,350,5);        //3
setfillstyle(SOLID_FILL,21);
floodfill(220,350,21);
setcolor(17);
circle(320,350,5); //4
setfillstyle(SOLID_FILL,17);
floodfill(320,350,17);
setcolor(18);
circle(420,350,5);        //5
setfillstyle(SOLID_FILL,18);
floodfill(420,350,18);
setcolor(19);
circle(520,350,5); //6
setfillstyle(SOLID_FILL,19);
floodfill(520,350,19);
setcolor(23);
circle(620,350,5); //6
setfillstyle(SOLID_FILL,23);
floodfill(620,350,23);
setcolor(WHITE);
}