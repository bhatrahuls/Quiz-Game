 #include<stdio.h>
 #include<conio.h>
 #include<graphics.h>
 #include<ctype.h>
 #include<time.h>
 #include<dos.h>
 #include<string.h>

 int question(char* filename,char *score)
 {
	int x=0,y=100;
	int i=0;
	
	clock_t st,end;
	 int time;
	char answer,c;
	char A[30],B[30],C[30],D[30];
	FILE *fp;
    char str[100];
    fp = fopen(filename, "r");
	settextstyle(1,0,3);
    while (fgets(str, 100, fp)!=NULL)
	{

		if(i==0)
		{
			outtextxy(x,y,str);
			i++;
			continue;
		}

		if(i==1)
		{
			strcpy(A,str);
			outtextxy(x+20,y+100,str);
			i++;
			continue;
		}
		if(i==2)
		{
			strcpy(B,str);
			outtextxy(x+320,y+100,str);
			i++;
			continue;
		}
		if(i==3)
		{
			strcpy(C,str);
			outtextxy(x+20,y+200,str);
			i++;
			continue;
		}
		if(i==4)
		{
			strcpy(D,str);
			outtextxy(x+320,y+200,str);
			i++;
			continue;;
		}
		if(i==5)
		{
		answer=str[0];
		break;
		}

	}
	 fclose(fp);
	 st=clock();
	 cscanf(" %c",&c);
	 end=clock() ;
	 time=(int)(end-st)/CLK_TCK;
	if(time<30)
	{
	 c=toupper(c);
	 if(c=='A'||c=='B'||c=='C'||c=='D')
	 {
			 if(c=='A')
		 {
			 if(c==answer)
			 {
				setcolor(GREEN);
				outtextxy(x+20,y+100,A);
			
			 }
			 else
			 {
				 setcolor(RED);
			 outtextxy(x+20,y+100,A);
			 sleep(2);
			 setcolor(GREEN);
			 if(answer=='B')
				 outtextxy(x+320,y+100,B);
			 if(answer=='C')
				 outtextxy(x+20,y+200,C);
			 if(answer=='D')
				 outtextxy(x+320,y+200,D);
			 sleep(2);
			 cleardevice();
			 setcolor(5);
			 setbkcolor(RED);
			 bar3d(145,400,500,200,10,10);
			 outtextxy(245,250,"Wrong Answer!!!");
			 outtextxy(250,300,"Your score is:");
			 outtextxy(320,350,score);
			 getch();
			 return 100;
			 }
		 }
		 else if(c=='B')
		 {
			 if(c==answer)
			 {
				setcolor(GREEN);
				outtextxy(x+320,y+100,B);
			
			 }
			 else
			 {
				setcolor(RED);
			 outtextxy(x+320,y+100,B);
			 sleep(2);
			 setcolor(GREEN);
			 if(answer=='A')
				 outtextxy(x+20,y+100,A);
			 if(answer=='C')
				 outtextxy(x+20,y+200,C);
			 if(answer=='D')
				 outtextxy(x+320,y+200,D);
			 sleep(2);
			 cleardevice();
			 setbkcolor(RED);
			 setcolor(5);
			 bar3d(145,400,500,200,10,10);
			 outtextxy(245,250,"Wrong Answer!!!");
			 outtextxy(250,300,"Your score is:");
			 outtextxy(320,350,score);
			 getch();
			 return 100;
			 }

		 }
		 else if(c=='C')
		 {
			 if(c==answer)
			 {
				setcolor(GREEN);
				outtextxy(x+20,y+200,C);
			 }
			 else
			 {
				 setcolor(RED);
			 outtextxy(x+20,y+200,C);
			 sleep(2);
			 setcolor(GREEN);
			 if(answer=='A')
				 outtextxy(x+20,y+100,A);
			 if(answer=='B')
				 outtextxy(x+320,y+100,B);
			 if(answer=='D')
				 outtextxy(x+320,y+200,D);
			 sleep(2);
			 cleardevice();
			 setbkcolor(RED);
			 setcolor(5);
			 bar3d(145,400,500,200,10,10);
			 outtextxy(245,250,"Wrong Answer!!!");
			 outtextxy(250,300,"Your score is:");
			 outtextxy(320,350,score);
			 getch();
			 return 100;
			 }
		 }
		 else if(c=='D')
		 {
			 if(c==answer)
			 {
				setcolor(GREEN);
				outtextxy(x+320,y+200,D);
			 }
			 else
			 {
				setcolor(RED);
			 outtextxy(x+320,y+200,D);
			 sleep(2);
			 setcolor(GREEN);
			 if(answer=='A')
				 outtextxy(x+20,y+100,A);
			 if(answer=='B')
				 outtextxy(x+320,y+100,B);
			 if(answer=='C')
				 outtextxy(x+20,y+200,C);
			 sleep(2);
			 cleardevice();
			 setcolor(5);
			 setbkcolor(RED);
			 bar3d(145,400,500,200,10,10);
			 outtextxy(245,250,"Wrong Answer!!!");
			 outtextxy(250,300,"Your score is:");
			 outtextxy(320,350,score);
			 getch();
			 return 100;
			 }
		 }
	setcolor(15);
	outtextxy(260,400,"Hit Enter!");
	getch();
	return time;
	}

	else
	{
		settextstyle(1,0,3);
			if(A[0]==answer)
				setcolor(GREEN);
			else
				setcolor(RED);
			outtextxy(x+20,y+100,A);
			
			if(B[0]==answer)
				setcolor(GREEN);
			else
				setcolor(RED);
			outtextxy(x+320,y+100,B);

			if(C[0]==answer)
				setcolor(GREEN);
			else
				setcolor(RED);
			outtextxy(x+20,y+200,C);
	
			if(D[0]==answer)
				setcolor(GREEN);
			else
				setcolor(RED);
			outtextxy(x+320,y+200,D);
			sleep(2);
			cleardevice();
			setbkcolor(RED);
			 setcolor(5);
			 bar3d(145,400,500,200,10,10);
			 outtextxy(245,250,"Wrong Answer!!!");
			 outtextxy(250,300,"Your score is:");
			 outtextxy(320,350,score);
			 getch();
			 return 100;
		
	}
 }
 else
 {
	 cleardevice();
	 setcolor(5);
	 setbkcolor(11);
	 bar3d(145,400,500,200,10,10);
	 outtextxy(205,250,"Time limit exceeded!!!");
	 outtextxy(250,300,"Your score is:");
	 outtextxy(320,350,score);
	 getch();
	 closegraph();
	 return 100;
 }
 }
 
 char* next(char *filename)
 {
	 filename[17]=filename[17]+1;
	 return filename;
 }
 
char *strnext(char *str)
{
	str[1]+=1;
	return str;
}

 void main()
 {
	 int gd=DETECT,gm,i,time,j=0;
	 char *str="00",*score="10";
	char* filename = "c:\\TURBOC3\\BIN\\q01.txt";
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	
	setbkcolor(11);
	setcolor(MAGENTA);
	settextstyle(0,0,3);
	outtextxy(150,100,"WELCOME TO QUIZ");
	settextstyle(1,0,3);
	outtextxy(50,200,"RULE:");
	outtextxy(50,250,"Time Limit :30 sec per question");
	outtextxy(280,400,"ENJOY!");
	outtextxy(210,350,"Hit Enter to start!");
	getch();
	setbkcolor(0);
	label:for(i=0;i<=9;i++)
	{
	setcolor(15);
	cleardevice();
	if(j<10)
	{
	time=question(filename,str);
	if(time==100)
	{
		closegraph();
		exit(0);
	}
	j++;
	if(time<15 && i==2)
	{
		if(time<10)
			filename="c:\\TURBOC3\\BIN\\q15.txt";
		else
			filename="c:\\TURBOC3\\BIN\\q10.txt";
		continue;
	}
	if(time<15 && i==5)
	{
		filename="c:\\TURBOC3\\BIN\\q20.txt";
		continue;
	}
	str=strnext(str);
	filename=next(filename);
	}
	else
	{
		bar3d(145,400,500,200,10,10);
		setcolor(4);
		setbkcolor(10);
		outtextxy(280,250,"Winner!!!");
		outtextxy(250,300,"Your score is:");
		outtextxy(320,350,score);
		getch();
		closegraph();
		exit(0);
	}
	}
	goto label;
}

