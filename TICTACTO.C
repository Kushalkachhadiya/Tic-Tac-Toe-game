#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int x=DETECT,y,i=0,j=1,player=1,z,choice,n,o,p,p1,p2;
	char a[10]={0,10,20,30,40,50,60,70,80,90},mark,w[50],b[50];

	initgraph(&x,&y,"c:\\turboc3\\bgi");

	while(!kbhit())
	{
		settextstyle(0,0,5);
		outtextxy(80,i,"\nTic Tac Toe\n");
		delay(5);

		i++;
		if(i>=475)
		{
			i=0;
		}
		cleardevice();
	}

	//tic tac toe box
	line(400,450,400,300);
	line(450,450,450,300);
	line(350,350,500,350);
	line(350,400,500,400);

	//Players
	printf("\nPlayer Name 1 =");
	scanf("%s",&w);
	printf("\nPlayer Name 2 =\n");
	scanf("%s",&b);

	printf("\n%s = X, %s = O",w,b);

	// Choice should from 1 to 9

	p1=1;
	p2=2;

	do
	{
		player=(player%2)?p1:p2;

		if(player==p1)
		{
			printf("\n%s: enter a choice = ",w);
		}
		else
		{
			printf("\n%s: enter a choice = ",b);
		}

		scanf("%d",&choice);

		mark=(player==1)?8:9;

		if(choice==1 && a[1]==10)
		{
			if(mark==8)
			{
				line(365,315,385,335);
				line(365,335,385,315);
				a[1]=mark;
			}
			else if(mark==9)
			{
				circle(375,325,15);
				a[1]=mark;
			}
			player++;
			j++;
		}
		else if(choice==2 && a[2]==20)
		{
			if(mark==8)
			{
				line(415,315,435,335);
				line(415,335,435,315);
				a[2]=mark;
			}
			else if(mark==9)
			{
				circle(425,325,15);
				a[2]=mark;
			}
			player++;
			j++;
		}
		else if(choice==3 && a[3]==30)
		{
			if(mark==8)
			{
				line(465,315,485,335);
				line(465,335,485,315);
				a[3]=mark;
			}
			else if(mark==9)
			{
				circle(475,325,15);
				a[3]=mark;
			}
			player++;
			j++;
		}
		else if(choice==4 && a[4]==40)
		{
			if(mark==8)
			{
				line(365,365,385,385);
				line(365,385,385,365);
				a[4]=mark;
			}
			else if(mark==9)
			{
				circle(375,375,15);
				a[4]=mark;
			}
			player++;
			j++;
		}
		else if(choice==5 && a[5]==50)
		{
			if(mark==8)
			{
				line(415,365,435,385);
				line(415,385,435,365);
				a[5]=mark;
			}
			else if(mark==9)
			{
				circle(425,375,15);
				a[5]=mark;
			}
			player++;
			j++;
		}
		else if(choice==6 && a[6]==60)
		{
			if(mark==8)
			{
				line(465,365,485,385);
				line(465,385,485,365);
				a[6]=mark;
			}
			else if(mark==9)
			{
				circle(475,375,15);
				a[6]=mark;
			}
			player++;
			j++;
		}
		else if(choice==7 && a[7]==70)
		{
			if(mark==8)
			{
				line(365,415,385,435);
				line(365,435,385,415);
				a[7]=mark;
			}
			else if(mark==9)
			{
				circle(375,425,15);
				a[7]=mark;
			}
			player++;
			j++;
		}
		else if(choice==8 && a[8]==80)
		{
			if(mark==8)
			{
				line(415,415,435,435);
				line(415,435,435,415);
				a[8]=mark;
			}
			else if(mark==9)
			{
				circle(425,425,15);
				a[8]=mark;
			}
			player++;
			j++;
		}
		else if(choice==9 && a[9]==90)
		{
			if(mark==8)
			{
				line(465,415,485,435);
				line(465,435,485,415);
				a[9]=mark;
			}
			else if(mark==9)
			{
				circle(475,425,15);
				a[9]=mark;
			}
			player++;
			j++;
		}
		else
		{
			printf("invalid move = ");
		}

		if(a[1]==a[2] && a[2]==a[3])
		{
			if(a[1]==8)
			{
				line(350,325,500,325);
				printf("\n%s Win",w);
				j=10;
			}
			else if(a[1]==9)
			{
				line(350,325,500,325);
				printf("\n%s Win",b);
				j=10;
			}
		}
		else if(a[4]==a[5] && a[5]==a[6])
		{
			if(a[4]==8)
			{
				line(350,375,500,375);
				printf("\n%s Win",w);
				j=10;
			}
			else if(a[4]==9)
			{
				line(350,375,500,375);
				printf("\n%s Win",b);
				j=10;
			}
		}
		else if(a[7]==a[8] && a[8]==a[9])
		{
			if(a[7]==8)
			{
				line(350,425,500,425);
				printf("\n%s Win",w);
				j=10;
			}
			else if(a[8]==9)
			{
				line(350,425,500,425);
				printf("\n%s Win",b);
				j=10;
			}
		}
		else if(a[1]==a[4] && a[4]==a[7])
		{
			if(a[1]==8)
			{
				line(375,300,375,450);
				printf("\n%s Win",w);
				j=10;
			}
			else if(a[1]==9)
			{
				line(375,300,375,450);
				printf("\n%s Win",b);
				j=10;
			}
		}
		else if(a[2]==a[5] && a[5]==a[8])
		{
			if(a[2]==8)
			{
				line(425,300,425,450);
				printf("\n%s Win",w);
				j=10;
			}
			else if(a[2]==9)
			{
				line(425,300,425,450);
				printf("\n%s Win",b);
				j=10;
			}
		}
		else if(a[3]==a[6] && a[6]==a[9])
		{
			if(a[3]==8)
			{
				line(475,300,475,450);
				printf("\n%s Win",w);
				j=10;
			}
			else if(a[3]==9)
			{
				line(475,300,475,450);
				printf("\n%s Win",b);
				j=10;
			}
		}
		else if(a[1]==a[5] && a[5]==a[9])
		{
			if(a[1]==8)
			{
				line(350,300,500,450);
				printf("\n%s Win",w);
				j=10;
			}
			else if(a[1]==9)
			{
				line(350,300,500,450);
				printf("\n%s Win",b);
				j=10;
			}
		}
		else if(a[3]==a[5] && a[5]==a[7])
		{
			if(a[3]==8)
			{
				line(500,300,350,450);
				printf("\n%s Win",w);
				j=10;
			}
			else if(a[3]==9)
			{
				line(500,300,350,450);
				printf("\n%s Win",b);
				j=10;
			}

		}
		else if(a[1]!=10 && a[2]!=20 && a[3]!=30 && a[4]!=40 && a[5]!=50 && a[6]!=60 && a[7]!=70 && a[8]!=80 && a[9]!=90)
		{
				printf("\nMatch Draw");
		}
	}
	while(j<=9);

	getch();
}