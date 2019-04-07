#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
void screenBlue();
void loadingbar();
void spaceintro();
void mainscreen();
void main()
{
	spaceintro();
}
void spaceintro()
{
	char x;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	for(int i=50;i<400;i++)
	{
		setcolor(RED);
		line(50+i,100,150+i,100);
		line(50+i,200,150+i,200);
		line(50+i,100,50+i,200);
		line(150+i,100,150+i,200);
		delay(8);
	}
	setcolor(YELLOW);
	outtextxy(200,145,"DEVIL PATHAK PRESENTS SPACE PRO");
	for(int j=50;j<400;j++)
	{
		setcolor(GREEN);
		rectangle(100+j,200,250+j,300);
		delay(8);
	}
	setcolor(RED);
	outtextxy(200,245,"WANT YOUR HOME SWEET HOME ON OTHER PLANET..?");
	outtextxy(200,260,"PRESS Y-YES and N-NO");
	cin>>x;
	if(x=='y'||x=='Y')
	{
		for(int k=50;k<400;k++)
		{
			setcolor(YELLOW);
			rectangle(50+k,301,150+k,401);
			delay(8);
		}
		setcolor(8);
		outtextxy(150,345,"SO LETS BEGIN....!! SELECT UR HOME PLANET.....");
		outtextxy(150,360,"LOADING...");
		delay(5000);
		screenBlue();
		//getch();
	}
	else
	{
		cleardevice();
		setbkcolor(15);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		setcolor(RED);
		outtextxy(60,100,"HOPE YOU HAVE A GOOD DAY.....!!!!!");
		getch();
		exit(0);
	}
}
void screenBlue()
{
	A:
	loadingbar();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	for(int t=0;t<700;t++)
	{
		setbkcolor(3);
		setcolor(BLUE);
		line(0+t,20,0+t,40);
		setcolor(8);
		line(0+t,40,0+t,445);
	}
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	setcolor(WHITE);
	outtextxy(170,5,"*****SPACE PRO*****");
	setcolor(15);
	rectangle(10,45,630,440);
	line(400,45,400,440);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	setcolor(WHITE);
	outtextxy(25,30,"Main Menu");
	outtextxy(120,30,"Exit");
	outtextxy(30,60,"1.MERCURY");
	outtextxy(30,80,"2.VENUS");
	outtextxy(30,100,"3.EARTH");
	outtextxy(30,120,"4.MARS");
	outtextxy(30,140,"5.JUPITER");
	outtextxy(30,160,"6.SATURN");
	outtextxy(30,180,"7.URANUS");
	outtextxy(30,200,"8.NEPTUNE");
	outtextxy(30,220,"9.PLUTO");
	outtextxy(30,240,"10.EXIT");
	outtextxy(30,260,"Select Any One Choice:");
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1:
		cleardevice();
		for(int t=0;t<700;t++)
		{
			setbkcolor(3);
			setcolor(BLUE);
			line(0+t,20,0+t,40);
			setcolor(8);
			line(0+t,40,0+t,445);
		}
	setcolor(15);
	rectangle(10,45,630,440);
	line(400,45,400,440);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	setcolor(WHITE);
	outtextxy(25,30,"Main Menu");
	outtextxy(120,30,"Exit");
	outtextxy(30,60,"Mercury has surface area of 74.8 million km^2");
	outtextxy(30,80,"-----PLOT INVESTING OFFERS-----");
	outtextxy(30,100,"1.1000 m^2 = 5 crore");
	outtextxy(30,120,"2.1500 m^2 = 10 crore");
	outtextxy(30,140,"3.2000 m^2 = 15 crore");
	outtextxy(30,160,"4.2500 m^2 = 20 crore");
	outtextxy(30,220,"5.Exit");
	int ch1;
	outtextxy(30,180,"Investing Here Could Give You Huge Profit");
	outtextxy(30,200,"PROCEED WITH THE BOOKING.....");
	cin>>ch1;
	outtextxy(30,250,"WAIT...");
	delay(2000);
	outtextxy(30,270,"PROCEEDING...");
		switch(ch1)
		{
		case 1:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			char name1[20];
			cin>>name1;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name1;
			cout<<"\n\t\t\t\t| Plot Size : 1000 m^2 ";
			cout<<"\n\t\t\t\t| Total     :  5 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 2:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name1;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name1;
			cout<<"\n\t\t\t\t| Plot Size : 1500 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 10 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 3:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name1;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name1;
			cout<<"\n\t\t\t\t| Plot Size : 2000 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 15 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 4:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name1;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name1;
			cout<<"\n\t\t\t\t| Plot Size : 2500 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 20 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		default:
			exit(0);
			break;

		}

	break;
	case 2:
		for(int tk=0;tk<700;tk++)
		{
			setbkcolor(3);
			setcolor(BLUE);
			line(0+tk,20,0+tk,40);
			setcolor(8);
			line(0+tk,40,0+tk,445);
		}
		setcolor(15);
		rectangle(10,45,630,440);
		line(400,45,400,440);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		setcolor(WHITE);
		outtextxy(25,30,"Main Menu");
		outtextxy(120,30,"Exit");
		outtextxy(30,60,"Venus has surface area of 460.2 million km^2");
		outtextxy(30,80,"-----PLOT INVESTING OFFERS-----");
		outtextxy(30,100,"1.1000 m^2 = 5 crore");
		outtextxy(30,120,"2.1500 m^2 = 10 crore");
		outtextxy(30,140,"3.2000 m^2 = 15 crore");
		outtextxy(30,160,"4.2500 m^2 = 20 crore");
		outtextxy(30,220,"5.Exit");
		int ch2;
		outtextxy(30,180,"Investing Here Could Give You Huge Profit");
		outtextxy(30,200,"PROCEED WITH THE BOOKING.....");
		cin>>ch2;
		outtextxy(30,250,"WAIT...");
		delay(2000);
		outtextxy(30,270,"PROCEEDING...");
		switch(ch2)
		{
		case 1:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			char name2[20];
			cin>>name2;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name2;
			cout<<"\n\t\t\t\t| Plot Size : 1000 m^2 ";
			cout<<"\n\t\t\t\t| Total     :  5 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 2:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name2;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name2;
			cout<<"\n\t\t\t\t| Plot Size : 1500 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 10 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 3:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name2;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name2;
			cout<<"\n\t\t\t\t| Plot Size : 2000 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 15 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 4:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name2;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name2;
			cout<<"\n\t\t\t\t| Plot Size : 2500 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 20 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		default:
			exit(0);
			break;

		}

		break;
	case 3:
		for(int t3=0;t3<700;t3++)
		{
			setbkcolor(3);
			setcolor(BLUE);
			line(0+t3,20,0+t3,40);
			setcolor(8);
			line(0+t3,40,0+t3,445);
		}
		setcolor(15);
		rectangle(10,45,630,440);
		line(400,45,400,440);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		setcolor(WHITE);
		outtextxy(25,30,"Main Menu");
		outtextxy(120,30,"Exit");
		outtextxy(30,60,"Earth has a surface area of 510.1 million km^2");
		outtextxy(30,80,"-----PLOT INVESTING OFFERS-----");
		outtextxy(30,100,"1.10000 m^2 = 10 crore");
		outtextxy(30,120,"2.15000 m^2 = 20 crore");
		outtextxy(30,140,"3.20000 m^2 = 30 crore");
		outtextxy(30,160,"4.25000 m^2 = 40 crore");
		outtextxy(30,220,"5.Exit");
		int ch3;
		outtextxy(30,180,"Investing Here Could Give You Huge Profit");
		outtextxy(30,200,"PROCEED WITH THE BOOKING.....???");
		cin>>ch3;
		outtextxy(30,250,"WAIT...");
		delay(2000);
		outtextxy(30,270,"PROCEEDING...");
		switch(ch3)
		{
		case 1:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			char name3[20];
			cin>>name3;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<
			name3;
			cout<<"\n\t\t\t\t| Plot Size : 10000 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 10 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 2:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name3;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name3;
			cout<<"\n\t\t\t\t| Plot Size : 15000 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 20 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 3:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name3;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name3;
			cout<<"\n\t\t\t\t| Plot Size : 20000 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 30 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 4:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name3;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name3;
			cout<<"\n\t\t\t\t| Plot Size : 25000 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 40 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		default:
			exit(0);
			break;

		}
		break;
	case 4:
		for(int t4=0;t4<700;tk++)
		{
			setbkcolor(3);
			setcolor(BLUE);
			line(0+t4,20,0+t4,40);
			setcolor(8);
			line(0+t4,40,0+t4,445);
		}
		setcolor(15);
		rectangle(10,45,630,440);
		line(400,45,400,440);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		setcolor(WHITE);
		outtextxy(25,30,"Main Menu");
		outtextxy(120,30,"Exit");
		outtextxy(30,60,"Mars has asurface area of 144.8 million km^2");
		outtextxy(30,80,"-----PLOT INVESTING OFFERS-----");
		outtextxy(30,100,"1.1000 m^2 = 5 crore");
		outtextxy(30,120,"2.1500 m^2 = 10 crore");
		outtextxy(30,140,"3.2000 m^2 = 15 crore");
		outtextxy(30,160,"4.2500 m^2 = 20 crore");
		outtextxy(30,220,"5.Exit");
		int ch4;
		outtextxy(30,180,"Investing Here Could Give You Huge Profit");
		outtextxy(30,200,"PROCEED WITH THE BOOKING.....???");
		cin>>ch4;
		outtextxy(30,250,"WAIT...");
		delay(2000);
		outtextxy(30,270,"PROCEEDING...");
		switch(ch4)
		{
		case 1:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			char name4[20];
			cin>>name4;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name4;
			cout<<"\n\t\t\t\t| Plot Size : 1000 m^2 ";
			cout<<"\n\t\t\t\t| Total     :  5 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 2:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name4;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name4;
			cout<<"\n\t\t\t\t| Plot Size : 1500 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 10 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 3:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name4;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name4;
			cout<<"\n\t\t\t\t| Plot Size : 2000 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 15 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 4:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name4;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name4;
			cout<<"\n\t\t\t\t| Plot Size : 2500 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 20 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		default:
			exit(0);
			break;

		}
		break;
	case 5:
		for(int t5=0;t5<700;t5++)
		{
			setbkcolor(3);
			setcolor(BLUE);
			line(0+t5,20,0+t5,40);
			setcolor(8);
			line(0+t5,40,0+t5,445);
		}
		setcolor(15);
		rectangle(10,45,630,440);
		line(400,45,400,440);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		setcolor(WHITE);
		outtextxy(25,30,"Main Menu");
		outtextxy(120,30,"Exit");
		outtextxy(30,60,"Jupiter has a surface area of 61.42 billion km^2");
		outtextxy(30,80,"-----PLOT INVESTING OFFERS-----");
		outtextxy(30,100,"1.1000 m^2 = 5 crore");
		outtextxy(30,120,"2.1500 m^2 = 10 crore");
		outtextxy(30,140,"3.2000 m^2 = 15 crore");
		outtextxy(30,160,"4.2500 m^2 = 20 crore");
		outtextxy(30,220,"5.Exit");
		int ch5;
		outtextxy(30,180,"Investing Here Could Give You Huge Profit");
		outtextxy(30,200,"PROCEED WITH THE BOOKING.....???");
		cin>>ch5;
		outtextxy(30,250,"WAIT...");
		delay(2000);
		outtextxy(30,270,"PROCEEDING...");
		switch(ch5)
		{
		case 1:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			char name5[20];
			cin>>name5;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name5;
			cout<<"\n\t\t\t\t| Plot Size : 1000 m^2 ";
			cout<<"\n\t\t\t\t| Total     :  5 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 2:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name5;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name5;
			cout<<"\n\t\t\t\t| Plot Size : 1500 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 10 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 3:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name5;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name5;
			cout<<"\n\t\t\t\t| Plot Size : 2000 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 15 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 4:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name5;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name5;
			cout<<"\n\t\t\t\t| Plot Size : 2500 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 20 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		default:
			exit(0);
			break;

		}
		break;
	case 6:
		for(int t6=0;t6<700;t6++)
		{
			setbkcolor(3);
			setcolor(BLUE);
			line(0+t6,20,0+t6,40);
			setcolor(8);
			line(0+t6,40,0+t6,445);
		}
		setcolor(15);
		rectangle(10,45,630,440);
		line(400,45,400,440);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		setcolor(WHITE);
		outtextxy(25,30,"Main Menu");
		outtextxy(120,30,"Exit");
		outtextxy(30,60,"Saturn has surface area of 42.7 billion km^2");
		outtextxy(30,80,"-----PLOT INVESTING OFFERS-----");
		outtextxy(30,100,"1.1000 m^2 = 5 crore");
		outtextxy(30,120,"2.1500 m^2 = 10 crore");
		outtextxy(30,140,"3.2000 m^2 = 15 crore");
		outtextxy(30,160,"4.2500 m^2 = 20 crore");
		outtextxy(30,220,"5.Exit");
		int ch6;
		outtextxy(30,180,"Investing Here Could Give You Huge Profit");
		outtextxy(30,200,"PROCEED WITH THE BOOKING.....???");
		cin>>ch6;
		switch(ch6)
		{
		case 1:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			char name6[20];
			cin>>name6;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name6;
			cout<<"\n\t\t\t\t| Plot Size : 1000 m^2 ";
			cout<<"\n\t\t\t\t| Total     :  5 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 2:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name6;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name6;
			cout<<"\n\t\t\t\t| Plot Size : 1500 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 10 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 3:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name6;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name6;
			cout<<"\n\t\t\t\t| Plot Size : 2000 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 15 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 4:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name6;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name6;
			cout<<"\n\t\t\t\t| Plot Size : 2500 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 20 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		default:
			exit(0);
			break;

		}
		break;
	case 7:
		for(int t7=0;t7<700;t7++)
		{
			setbkcolor(3);
			setcolor(BLUE);
			line(0+t7,20,0+t7,40);
			setcolor(8);
			line(0+t7,40,0+t7,445);
		}
		setcolor(15);
		rectangle(10,45,630,440);
		line(400,45,400,440);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		setcolor(WHITE);
		outtextxy(25,30,"Main Menu");
		outtextxy(120,30,"Exit");
		outtextxy(30,60,"Uranus has surface area of 8.083 billion km^2");
		outtextxy(30,80,"-----PLOT INVESTING OFFERS-----");
		outtextxy(30,100,"1.1000 m^2 = 5 crore");
		outtextxy(30,120,"2.1500 m^2 = 10 crore");
		outtextxy(30,140,"3.2000 m^2 = 15 crore");
		outtextxy(30,160,"4.2500 m^2 = 20 crore");
		outtextxy(30,220,"5.Exit");
		int ch7;
		outtextxy(30,180,"Investing Here Could Give You Huge Profit");
		outtextxy(30,200,"PROCEED WITH THE BOOKING.....???");
		cin>>ch7;
		outtextxy(30,250,"WAIT...");
		delay(2000);
		outtextxy(30,270,"PROCEEDING...");
		switch(ch7)
		{
		case 1:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			char name7[20];
			cin>>name7;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name7;
			cout<<"\n\t\t\t\t| Plot Size : 1000 m^2 ";
			cout<<"\n\t\t\t\t| Total     :  5 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 2:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name7;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name7;
			cout<<"\n\t\t\t\t| Plot Size : 1500 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 10 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 3:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name7;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name7;
			cout<<"\n\t\t\t\t| Plot Size : 2000 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 15 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 4:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name7;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name7;
			cout<<"\n\t\t\t\t| Plot Size : 2500 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 20 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		default:
			exit(0);
			break;

		}
		break;
	case 8:
		for(int t8=0;t8<700;t8++)
		{
			setbkcolor(3);
			setcolor(BLUE);
			line(0+t8,20,0+t8,40);
			setcolor(8);
			line(0+t8,40,0+t8,445);
		}
		setcolor(15);
		rectangle(10,45,630,440);
		line(400,45,400,440);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		setcolor(WHITE);
		outtextxy(25,30,"Main Menu");
		outtextxy(120,30,"Exit");
		outtextxy(30,60,"Neptune has surface area of 7.618 billion km^2");
		outtextxy(30,80,"-----PLOT INVESTING OFFERS-----");
		outtextxy(30,100,"1.1000 m^2 = 5 crore");
		outtextxy(30,120,"2.1500 m^2 = 10 crore");
		outtextxy(30,140,"3.2000 m^2 = 15 crore");
		outtextxy(30,160,"4.2500 m^2 = 20 crore");
		outtextxy(30,220,"5.Exit");
		int ch8;
		outtextxy(30,180,"Investing Here Could Give You Huge Profit");
		outtextxy(30,200,"PROCEED WITH THE BOOKING.....???");
		cin>>ch8;
		outtextxy(30,250,"WAIT...");
		delay(2000);
		outtextxy(30,270,"PROCEEDING...");
		switch(ch8)
		{
		case 1:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			char name8[20];
			cin>>name8;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name8;
			cout<<"\n\t\t\t\t| Plot Size : 1000 m^2 ";
			cout<<"\n\t\t\t\t| Total     :  5 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 2:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name8;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name8;
			cout<<"\n\t\t\t\t| Plot Size : 1500 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 10 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 3:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name8;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name8;
			cout<<"\n\t\t\t\t| Plot Size : 2000 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 15 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 4:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name8;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name8;
			cout<<"\n\t\t\t\t| Plot Size : 2500 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 20 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		default:
			exit(0);
			break;

		}
		break;
	case 9:
		for(int t9=0;t9<700;t9++)
		{
			setbkcolor(3);
			setcolor(BLUE);
			line(0+t9,20,0+t9,40);
			setcolor(8);
			line(0+t9,40,0+t9,445);
		}
		setcolor(15);
		rectangle(10,45,630,440);
		line(400,45,400,440);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		setcolor(WHITE);
		outtextxy(25,30,"Main Menu");
		outtextxy(120,30,"Exit");
		outtextxy(30,60,"Pluto has surface area of 17.07 million km^2");
		outtextxy(30,80,"-----PLOT INVESTING OFFERS-----");
		outtextxy(30,100,"1.1000 m^2 = 5 crore");
		outtextxy(30,120,"2.1500 m^2 = 10 crore");
		outtextxy(30,140,"3.2000 m^2 = 15 crore");
		outtextxy(30,160,"4.2500 m^2 = 20 crore");
		outtextxy(30,220,"5.Exit");
		int ch9;
		outtextxy(30,180,"Investing Here Could Give You Huge Profit");
		outtextxy(30,200,"PROCEED WITH THE BOOKING.....???");
		cin>>ch9;
		outtextxy(30,250,"WAIT...");
		delay(2000);
		outtextxy(30,270,"PROCEEDING...");
		switch(ch9)
		{
		case 1:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			char name9[20];
			cin>>name9;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name9;
			cout<<"\n\t\t\t\t| Plot Size : 1000 m^2 ";
			cout<<"\n\t\t\t\t| Total     :  5 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 2:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name9;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name9;
			cout<<"\n\t\t\t\t| Plot Size : 1500 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 10 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 3:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name9;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name9;
			cout<<"\n\t\t\t\t| Plot Size : 2000 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 15 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		case 4:
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n    Enter your name:";
			cin>>name9;
			cleardevice();
			cout<<"\n\t\t\t\t|*************PLOT BILL***************\n|";
			cout<<"\n\t\t\t\t| Name      : "<<name9;
			cout<<"\n\t\t\t\t| Plot Size : 2500 m^2 ";
			cout<<"\n\t\t\t\t| Total     : 20 crores";
			cout<<"\n\t\t\t\t|*************************************\n";
			break;
		default:
			exit(0);
			break;

		}
		break;
	case 10:
		exit(0);
		break;
	default:
		for(int tm=0;tm<700;tm++)
		{
			setbkcolor(3);
			setcolor(BLUE);
			line(0+tm,20,0+tm,40);
			setcolor(8);
			line(0+tm,40,0+tm,445);
		}
		setcolor(15);
		rectangle(10,45,630,440);
		line(400,45,400,440);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		setcolor(WHITE);
		outtextxy(25,30,"Main Menu");
		outtextxy(120,30,"Exit");
		outtextxy(60,60,"You entered the wrong option....!!!");
		delay(8);
		outtextxy(60,80,"Exiting....");
		delay(3000);
		break;
	}
	getch();
	closegraph();
}
void loadingbar()
{
	cleardevice();
	setbkcolor(BLUE);
	delay(1);
	for(int n=0;n<650;n++)
	{
		settextstyle(BOLD_FONT,HORIZ_DIR,3);
		setcolor(WHITE);
		outtextxy(5,220,"Loading...");
		setcolor(GREEN);
		line(0+n,225,0+n,275);
		delay(3);
	}
	cleardevice();

}
