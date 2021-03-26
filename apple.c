#include<stdio.h>
#include<GL/glut.h>
#include <GL/gl.h>
#include<math.h>
#include <stdlib.h>
#include<string.h>
#define SPEED 50.0

float i=0.0,m=0.0,n=0.0,o=0.0,c=0.0,b=0.0,l;int tt=0;int nn=0;int qqq=0;int nnn=0;int ttt=0;int nnnn=0;int tttt=0;unsigned char kk;int ccc=0;
float p=0.75,q=0.47,r=0.14;
float e=0.90,f=0.91,g=0.98;
int count=0;
void tree5();
int light=1,day=1,plane=0,comet=0,xm=900,bird=0;
char ch;
int id1,id2,id3,id4,id5,id6,id7,id8,id9,id10,id11,id12,id13,id14;
char * str="SRINIVAS INSTITUTE OF TECHNOLOGY";


void scene1();
void scene2();
void scene3();
void scene4();
void scene5();
void scene6();
void scene7();
void scene8();
void scene9();
void scene10();
void scene11();
void scene12();
void scene13();
void scene14();
void scene15();
void scene16();
void key3(unsigned char,int,int);
void delays()
{ int j=15000;
int i;
	while(j!=0)
	{	j--;
		i=15000;
		while(i!=0)
		{	i--;
		}
	}
}

void delayss()
{ int j=4000;
int i;
	while(j!=0)
	{	j--;
		i=4000;
		while(i!=0)
		{	i--;
		}
	}
}
void delaysss()
{ int j=6000;
int i;
	while(j!=0)
	{	j--;
		i=6000;
		while(i!=0)
		{	i--;
		}
	}
}


void mydisplay(void)
{
	glClearColor(0,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1000,0,1000);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glBegin(GL_POLYGON);
	glColor3f(0.502,0.502,0.502);
	glVertex2f(0,500);
	glVertex2f(500,500);
	glVertex2f(1000,500);
	glEnd();
	int i=0;
	char str1[]="SRINIVAS INSTITUTE OF TECHNOLOGY";
	glColor3f(0,0,1);
	glRasterPos2f(300,950);
	for(i=0;i<strlen(str1);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
        }

	char str2[]="VALACHIL,MANGALURU-574143";
	glColor3f(0,0,1);
	glRasterPos2f(335,900);
	for(i=0;i<strlen(str2);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[i]);
        }

	char str3[]="DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
	glColor3f(1,0,1);
	glRasterPos2f(220,820);
	for(i=0;i<strlen(str3);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[i]);
        }

	char str4[]="COMPUTER GRAPHICS AND VISUALIZATION";
	glColor3f(1,0.5,0);
	glRasterPos2f(280,770);
	for(i=0;i<strlen(str4);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4[i]);
        }

	char str5[]="MINI PROJECT";
	glColor3f(1,1,1);
	glRasterPos2f(390,690);
	for(i=0;i<strlen(str5);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5[i]);
        }

	char str6[]="ON";
	glColor3f(1,0,0);
	glRasterPos2f(440,640);
	for(i=0;i<strlen(str6);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str6[i]);
        }

	char str16[]="           GRAVITATION FORCE";
	glColor3f(1,1,0);
	glRasterPos2f(320,580);
	for(i=0;i<strlen(str16);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str16[i]);
        }

	char str7[]="TEAM MEMBERS:";
	glColor3f(1,0,0);
	glRasterPos2f(0,400);
	for(i=0;i<strlen(str7);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str7[i]);
        }

	char str8[]="CHETHAN.S 4SN17CS017";
	glColor3f(2,0.5,1);
	glRasterPos2f(0,350);
	for(i=0;i<strlen(str8);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);
        }

	char str9[]="KOUSHIK.M 4SN17CS043";
	glColor3f(2,0.5,1);
	glRasterPos2f(0,300);
	for(i=0;i<strlen(str9);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str9[i]);
        }

	char str10[]="6th SEM, 'A' SEC";
	glColor3f(0,1,1);
	glRasterPos2f(0,250);
	for(i=0;i<strlen(str10);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str10[i]);
        }

	char str11[]="PROJECT GUIDE:";
	glColor3f(1,0,0);
	glRasterPos2f(820,400);
	for(i=0;i<strlen(str11);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str11[i]);
        }

	char str12[]=" ??????";
	glColor3f(2,0.5,1);
	glRasterPos2f(820,350);
	for(i=0;i<strlen(str12);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str12[i]);
        }

	char str13[]="????????";
	glColor3f(2,0.5,1);
	glRasterPos2f(820,300);
	for(i=0;i<strlen(str13);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str13[i]);
        }


	char str14[]="DEPT OF CSE";
	glColor3f(0,1,1);
	glRasterPos2f(820,250);
	for(i=0;i<strlen(str14);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str14[i]);
        }

	char str15[]="ENTER 'A or a' TO START";
	glColor3f(0,1,0);
	glRasterPos2f(350,80);
	for(i=0;i<strlen(str15);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str15[i]);
        }
	glFlush();
}
void draw_pixel(GLint cx, GLint cy)
{

	glBegin(GL_POINTS);
		glVertex2i(cx,cy);
	glEnd();
}
void plotpixels(GLint h,GLint k, GLint x,GLint y)
{
	draw_pixel(x+h,y+k);
	draw_pixel(-x+h,y+k);
	draw_pixel(x+h,-y+k);
	draw_pixel(-x+h,-y+k);
	draw_pixel(y+h,x+k);
	draw_pixel(-y+h,x+k);
	draw_pixel(y+h,-x+k);
	draw_pixel(-y+h,-x+k);
}

void idle()
{
	
if(light==0 && (i>=0 && i<=1150)) 
 {

	 i+=SPEED/10;
     m+=SPEED/150;
	n-=2;
	 o+=0.2;
	c+=2;

 }
 
 if(light==0 && (i>=2600 && i<=3000)) 
 {

	 i+=SPEED/10;
	 m+=SPEED/150;
	n-=2;
	 o+=0.2;
	c+=2;

 }

if(light==0)
 {
	 i=i;
	 m+=SPEED/150;
	n-=2;
	 o+=0.2;
	c+=2;

 }
if(count<=10)
{

glClearColor(1.0,1.0,1.0,1.0);

     i+=SPEED/10;
     b+=SPEED/10;
     m+=SPEED/150;
	n-=2;
	 o+=0.2;
	c+=2;
}
if(i>1900)
	 i=800.0;
if(m>1100)
	 m=0.0;
if( o>75)
 {
	plane=0;
 }
if(c>500)
 {
	comet=0;
 }
if(b>500)
{
	b=0.0;
	i=800.0;
	count=count+1;
	
}
//nn=nn+50;
glutPostRedisplay();

}
void draw_circle(GLint h, GLint k, GLint r)
{
	GLint d=1-r, x=0, y=r;
	while(y>x)
	{
		plotpixels(h,k,x,y);
		if(d<0) d+=2*x+3;
		else
		{
			d+=2*(x-y)+5;
			--y;
		}
		++x;
	}
	plotpixels(h,k,x,y);
}
void scene2()
{
    
    
    
   //cloud1
int xx=0;
	for(l=0;l<=20;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(160+m+xx,1100,l);

	}


	for(l=0;l<=40;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(200+m+xx,1100,l);
		draw_circle(225+m+xx,1100,l);
	}

	for(l=0;l<=20;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(265+m+xx,1100,l);
	}	

	
	
	

}
void scene12(){
char str41[]="Press w to walk";
	glColor3f(0,0,0);
	glRasterPos2f(900,1100);
	for(int i=0;i<strlen(str41);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str41[i]);
        }
}

void scene13(){
char str42[]="Press f to make apple fall";
	glColor3f(0,0,0);
	glRasterPos2f(900,1100);
	for(int i=0;i<strlen(str42);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str42[i]);
        }
}
void scene15(){
char str42[]="Press p to pick apple and think";
	glColor3f(0,0,0);
	glRasterPos2f(900,1100);
	for(int i=0;i<strlen(str42);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str42[i]);
        }
}
void scene16(){
char str42[]="I wonder what made this apple fall down not up";
	glColor3f(0,0,0);
	glRasterPos2f(305,350);
	for(int i=0;i<strlen(str42);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str42[i]);
        }
}


void scene6()
{
//cloud3
int qq=50;
	for(l=0;l<=20;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(370+m+qq,1100,l);
}




	for(l=0;l<=40;l++)
	{

		glColor3f(1.0,1.0,1.0);
		draw_circle(410+m+qq,1100,l);
		draw_circle(435+m+qq,1100,l);
		draw_circle(460+m+qq,1100,l);
	}

for(l=0;l<=20;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(500+m+qq,1100,l);
}

}





void scene3()   //SKY
{
glColor3f(0.0,0.9,0.9);
	glBegin(GL_POLYGON);
	glVertex2i(0,400);
	glVertex2i(0,1900);
	glVertex2i(4000,4000);
	glVertex2i(0,-4000);
	glEnd();

	glColor3f(0.6,0.8,0.196078);   //GROUND
	glBegin(GL_POLYGON);
	glVertex2i(0,250);
	glVertex2i(0,0);
	glVertex2i(2600,0);
	glVertex2i(1200,250);                                                                          
	glEnd();

	//sun


	for(l=0;l<=37;l++)
{
		glColor3f(1.0,0.9,0.0);
		draw_circle(55,1100,l);
}

}
void scene4()//tree
{

//tree3
int aa=115;
int oo=95;
glColor3f(0.5,0.0,0.0);  //trunk
	glBegin(GL_POLYGON);
	glVertex2f(200+aa,300/2+oo);
	glVertex2f(200+aa,685/2+oo);
	glVertex2f(250+aa,685/2+oo);
	glVertex2f(250+aa,300/2+oo);
	glEnd();

				//leaves
	for(l=0;l<=55;l++){
		glColor3f(0.0,0.7,0.0);
		draw_circle(215+aa,810/2+oo,l);

		draw_circle(120+aa,680/2+oo,l);
		draw_circle(190+aa,690/2+oo,l);
		draw_circle(250+aa,690/2+oo,l);
		draw_circle(330+aa,680/2+oo,l);

		draw_circle(165+aa,740/2+oo,l);
		draw_circle(275+aa,740/2+oo,l);
	}
				//APPLE
	for(l=0;l<=10;l++)
	{
		glColor3f(0.9,0.0,0.0);

		draw_circle(220+aa,850/2+oo,l);
		draw_circle(230+aa,850/2+oo,l);

		draw_circle(250+aa,750/2+oo,l);
		draw_circle(260+aa,750/2+oo,l);

		draw_circle(150+aa,750/2+oo,l);
		draw_circle(160+aa,750/2+oo,l);

		draw_circle(250+aa,750/2+oo,l);
		draw_circle(260+aa,750/2+oo,l);

		draw_circle(100+aa,650/2+oo,l);
		draw_circle(110+aa,650/2+oo,l);

		draw_circle(300+aa,650/2+oo,l);
		draw_circle(310+aa,650/2+oo,l);

	}	
	
	



//tree1
glColor3f(0.5,0.0,0.0);  //trunk
	glBegin(GL_POLYGON);
	glVertex2f(200,200);
	glVertex2f(200,585);
	glVertex2f(240,585);
	glVertex2f(240,200);
	glEnd();

				//leaves
	for(l=0;l<=55;l++){
		glColor3f(0.0,0.7,0.0);
		draw_circle(215,710,l);

		draw_circle(120,580,l);
		draw_circle(190,590,l);
		draw_circle(250,590,l);
		draw_circle(330,580,l);

		draw_circle(165,640,l);
		draw_circle(275,640,l);
	}
				//APPLE
	for(l=0;l<=10;l++)
	{
		glColor3f(0.9,0.0,0.0);

		draw_circle(220,750,l);
		draw_circle(230,750,l);

		draw_circle(250,650,l);
		draw_circle(260,650,l);

		draw_circle(150,650,l);
		draw_circle(160,650,l);

		draw_circle(250,650,l);
		draw_circle(260,650,l);

		draw_circle(100,550,l);
		draw_circle(110,550,l);

		draw_circle(300,550,l);
		draw_circle(310,550,l);

	}
	
	
//tree2
int ll=850;
glColor3f(0.5,0.0,0.0);  //trunk
	glBegin(GL_POLYGON);
	glVertex2f(200+ll,200);
	glVertex2f(200+ll,585);
	glVertex2f(240+ll,585);
	glVertex2f(240+ll,200);
	glEnd();

				//leaves
	for(l=0;l<=55;l++){
		glColor3f(0.0,0.7,0.0);
		draw_circle(215+ll,710,l);

		draw_circle(120+ll,580,l);
		draw_circle(190+ll,590,l);
		draw_circle(250+ll,590,l);
		draw_circle(330+ll,580,l);

		draw_circle(165+ll,640,l);
		draw_circle(275+ll,640,l);
	}
				//APPLE
	for(l=0;l<=10;l++)
	{
		glColor3f(0.9,0.0,0.0);

		draw_circle(220+ll,750,l);
		draw_circle(230+ll,750,l);

		draw_circle(250+ll,650,l);
		draw_circle(260+ll,650,l);

		draw_circle(150+ll,650,l);
		draw_circle(160+ll,650,l);

		draw_circle(250+ll,650,l);
		draw_circle(260+ll,650,l);

		draw_circle(100+ll,550,l);
		draw_circle(110+ll,550,l);

		draw_circle(300+ll,550,l);
		draw_circle(310+ll,550,l);

	}}
	
	
			
	




//apple in ground
void scene10(){
int cc=4;
int bb=670;
int hh=190;
int uu=385;
if(ccc==2){
glColor3f(0.8,0.2,0);  //apple
	glBegin(GL_POLYGON);
	glVertex2f(1*cc+bb-uu+2,3*cc+hh);
	glVertex2f(2*cc+bb-uu,1*cc+hh);
	glVertex2f(6*cc+bb-uu,1*cc+hh);
	glVertex2f(7*cc+bb-uu-2,3*cc+hh);
	glVertex2f(6*cc+bb-uu,5*cc+hh+10);
	glVertex2f(4*cc+bb-uu,4*cc+hh+10);
	glVertex2f(2*cc+bb-uu,5*cc+hh+10);
	glEnd();
	glColor3f(0.5,0,0);  //apple
	glBegin(GL_LINE_LOOP);
	glVertex2f(1*cc+bb-uu+2,3*cc+hh);
	glVertex2f(2*cc+bb-uu,1*cc+hh);
	glVertex2f(6*cc+bb-uu,1*cc+hh);
	glVertex2f(7*cc+bb-uu-2,3*cc+hh);
	glVertex2f(6*cc+bb-uu,5*cc+hh+10);
	glVertex2f(4*cc+bb-uu,4*cc+hh+10);
	glVertex2f(2*cc+bb-uu,5*cc+hh+10);
	glEnd();
	
	glColor3f(0,0.8,0);//LEAF
	glBegin(GL_POLYGON);
	glVertex2f(4*cc+bb-uu-2,4*cc+hh+10);
	glVertex2f(6*cc+bb-uu,6*cc+hh+1);
	glVertex2f(4*cc+bb-uu,6*cc+hh+10);
	glEnd();
	glColor3f(0,0.5,0);//LEAF
	glBegin(GL_LINE_LOOP);
	glVertex2f(4*cc+bb-uu-2,4*cc+hh+10);
	glVertex2f(6*cc+bb-uu,6*cc+hh+10);
	glVertex2f(4*cc+bb-uu,6*cc+hh+10);
	glEnd();
	ccc=3;
	}
	//scene14();

}


//apple fall
void scene8()
{
int cc=4;
int bb=630;
int hh=510;
int uu=385;
if(ttt>=7){
scene10();
}

if(ttt<7){
glColor3f(0.8,0.2,0);  //apple
	glBegin(GL_POLYGON);
	glVertex2f(1*cc+bb-uu+2,3*cc+hh-nnn);
	glVertex2f(2*cc+bb-uu,1*cc+hh-nnn);
	glVertex2f(6*cc+bb-uu,1*cc+hh-nnn);
	glVertex2f(7*cc+bb-uu-2,3*cc+hh-nnn);
	glVertex2f(6*cc+bb-uu,5*cc+hh+10-nnn);
	glVertex2f(4*cc+bb-uu,4*cc+hh+10-nnn);
	glVertex2f(2*cc+bb-uu,5*cc+hh+10-nnn);
	glEnd();
	glColor3f(0.5,0,0);  //apple
	glBegin(GL_LINE_LOOP);
	glVertex2f(1*cc+bb-uu+2,3*cc+hh-nnn);
	glVertex2f(2*cc+bb-uu,1*cc+hh-nnn);
	glVertex2f(6*cc+bb-uu,1*cc+hh-nnn);
	glVertex2f(7*cc+bb-uu-2,3*cc+hh-nnn);
	glVertex2f(6*cc+bb-uu,5*cc+hh+10-nnn);
	glVertex2f(4*cc+bb-uu,4*cc+hh+10-nnn);
	glVertex2f(2*cc+bb-uu,5*cc+hh+10-nnn);
	glEnd();
	
	glColor3f(0,0.8,0);//LEAF
	glBegin(GL_POLYGON);
	glVertex2f(4*cc+bb-uu-2,4*cc+hh+10-nnn);
	glVertex2f(6*cc+bb-uu,6*cc+hh+10-nnn);
	glVertex2f(4*cc+bb-uu,6*cc+hh+10-nnn);
	glEnd();
	glColor3f(0,0.5,0);//LEAF
	glBegin(GL_LINE_LOOP);
	glVertex2f(4*cc+bb-uu-2,4*cc+hh+10-nnn);
	glVertex2f(6*cc+bb-uu,6*cc+hh+10-nnn);
	glVertex2f(4*cc+bb-uu,6*cc+hh+10-nnn);
	glEnd();
      ttt=ttt+1;
	nnn=nnn+20;
	delayss();

}
}
		
//bird		
void scene11(){
int cc=6;
int bb=1430;
int hh=810;
int uu=385;

//if(tttt>=68){
//scene8();
//}
if(ccc==1){scene13();}
if(ccc==3){scene15();}
if(ccc==4){scene16();}
glutKeyboardFunc(key3);
if(kk=='f'||kk=='F'){ ccc=2; scene8();}
if(kk=='p'||kk=='P'){ccc=4;scene14();}
if(tttt<68){
        glColor3f(0,0,0);  //fly
	glBegin(GL_POLYGON);
	glVertex2f(1*cc+bb-uu-nnnn,3*cc+hh);
	glVertex2f(2*cc+bb-uu-nnnn,3*cc+hh);
	glVertex2f(2*cc+bb-uu-nnnn,2*cc+hh);
	glVertex2f(6*cc+bb-uu-nnnn,2*cc+hh);
	glVertex2f(6*cc+bb-uu-nnnn,1*cc+hh);
	glVertex2f(1*cc+bb-uu-nnnn,1*cc+hh);
	glEnd();
	glColor3f(0,0,0);  //fly
	glBegin(GL_POLYGON);
	glVertex2f(3*cc+bb-uu-nnnn,2*cc+hh);
	glVertex2f(4*cc+bb-uu-nnnn,5*cc+hh);
	glVertex2f(6*cc+bb-uu-nnnn,5*cc+hh);
	glEnd();
	glColor3f(0,0,0);  //fly
	glBegin(GL_POLYGON);
	glVertex2f(3*cc+bb-uu-nnnn,2*cc+hh);
	glVertex2f(7*cc+bb-uu-nnnn,4*cc+hh);
	glVertex2f(8*cc+bb-uu-nnnn,3*cc+hh);
	glEnd();
         tttt=tttt+1;	
	 nnnn=nnnn+20;
	 delaysss();
}
}		
		
		//newton sit
void scene9(){
int cc=1.5;
int bb=600;
int hh=210;
int uu=385;
scene2();
scene6();
glColor3f(0,0,0);  //hairaaaaaaaaaaaaa
	glBegin(GL_POLYGON);
	glVertex2f(100*cc+bb-uu,200*cc+hh);
	glVertex2f(20*cc+bb-uu,170*cc+hh);
	glVertex2f(80*cc+bb-uu,170*cc+hh);
	glEnd();
	glColor3f(0,0,0);  //hair
	glBegin(GL_POLYGON);
	glVertex2f(60*cc+bb-uu,220*cc+hh);
	glVertex2f(40*cc+bb-uu,170*cc+hh);
	glVertex2f(80*cc+bb-uu,170*cc+hh);
	glEnd();
	glColor3f(0,0,0);  //hair
	glBegin(GL_POLYGON);
	glVertex2f(20*cc+bb-uu,210*cc+hh);
	glVertex2f(20*cc+bb-uu,170*cc+hh);
	glVertex2f(80*cc+bb-uu,170*cc+hh);
	glEnd();
	glColor3f(0,0,0);  //hair
	glBegin(GL_POLYGON);
	glVertex2f(10*cc+bb-uu,180*cc+hh);
	glVertex2f(40*cc+bb-uu,130*cc+hh);
	glVertex2f(40*cc+bb-uu,180*cc+hh);
	glEnd();
	glColor3f(0,0,0);  //hair
	glBegin(GL_POLYGON);
	glVertex2f(10*cc+bb-uu,140*cc+hh);
	glVertex2f(40*cc+bb-uu,130*cc+hh);
	glVertex2f(40*cc+bb-uu,180*cc+hh);
	glEnd();


//face
glColor3f(1,0.5,0);  
	glBegin(GL_POLYGON);
	glVertex2f(40*cc+bb-uu,170*cc+hh);
	glVertex2f(80*cc+bb-uu,170*cc+hh);
	glVertex2f(80*cc+bb-uu,130*cc+hh);
	glVertex2f(40*cc+bb-uu,130*cc+hh);
	glEnd();


//neck
glColor3f(0.8,0.3,0);  
	glBegin(GL_POLYGON);
	glVertex2f(40*cc+bb-uu,130*cc+hh);
	glVertex2f(70*cc+bb-uu,130*cc+hh);
	glVertex2f(70*cc+bb-uu,120*cc+hh);
	glVertex2f(40*cc+bb-uu,120*cc+hh);
	glEnd();



///body
glColor3f(1,0,0);  
	glBegin(GL_POLYGON);
	glVertex2f(40*cc+bb-uu,120*cc+hh);
	glVertex2f(80*cc+bb-uu,120*cc+hh);
	glVertex2f(80*cc+bb-uu,20*cc+hh);
	glVertex2f(40*cc+bb-uu,20*cc+hh);
	glEnd();
		
//leg
glColor3f(1,1,0);  
	glBegin(GL_POLYGON);
	glVertex2f(40*cc+bb-uu,20*cc+hh);
	glVertex2f(80*cc+bb-uu,20*cc+hh);
	glVertex2f(140*cc+bb-uu,15*cc+hh);
	glVertex2f(140*cc+bb-uu,1*cc+hh-10);
	glVertex2f(40*cc+bb-uu,1*cc+hh-10);
	glEnd();		
		
//hand
glColor3f(1,0.5,0);  
	glBegin(GL_POLYGON);
	glVertex2f(40*cc+bb-uu,120*cc+hh);
	glVertex2f(70*cc+bb-uu,120*cc+hh);
	glVertex2f(80*cc+bb-uu,40*cc+hh);
	glVertex2f(60*cc+bb-uu,40*cc+hh);
	glEnd();
		
		if(ccc==1){
		scene13();
		}
		//scene8();
		scene11();
		}
		
		
//take apple		
void scene14(){
int cc=1.5;
int bb=600;
int hh=210;
int uu=385;
scene2();
scene6();
glutKeyboardFunc(key3);
glColor3f(0,0,0);  //hairaaaaaaaaaaaaa
	glBegin(GL_POLYGON);
	glVertex2f(100*cc+bb-uu,200*cc+hh);
	glVertex2f(20*cc+bb-uu,170*cc+hh);
	glVertex2f(80*cc+bb-uu,170*cc+hh);
	glEnd();
	glColor3f(0,0,0);  //hair
	glBegin(GL_POLYGON);
	glVertex2f(60*cc+bb-uu,220*cc+hh);
	glVertex2f(40*cc+bb-uu,170*cc+hh);
	glVertex2f(80*cc+bb-uu,170*cc+hh);
	glEnd();
	glColor3f(0,0,0);  //hair
	glBegin(GL_POLYGON);
	glVertex2f(20*cc+bb-uu,210*cc+hh);
	glVertex2f(20*cc+bb-uu,170*cc+hh);
	glVertex2f(80*cc+bb-uu,170*cc+hh);
	glEnd();
	glColor3f(0,0,0);  //hair
	glBegin(GL_POLYGON);
	glVertex2f(10*cc+bb-uu,180*cc+hh);
	glVertex2f(40*cc+bb-uu,130*cc+hh);
	glVertex2f(40*cc+bb-uu,180*cc+hh);
	glEnd();
	glColor3f(0,0,0);  //hair
	glBegin(GL_POLYGON);
	glVertex2f(10*cc+bb-uu,140*cc+hh);
	glVertex2f(40*cc+bb-uu,130*cc+hh);
	glVertex2f(40*cc+bb-uu,180*cc+hh);
	glEnd();


//face
glColor3f(1,0.5,0);  
	glBegin(GL_POLYGON);
	glVertex2f(40*cc+bb-uu,170*cc+hh);

	glVertex2f(80*cc+bb-uu,170*cc+hh);
	glVertex2f(80*cc+bb-uu,130*cc+hh);
	glVertex2f(40*cc+bb-uu,130*cc+hh);
	glEnd();


//neck
glColor3f(0.8,0.3,0);  
	glBegin(GL_POLYGON);
	glVertex2f(40*cc+bb-uu,130*cc+hh);
	glVertex2f(70*cc+bb-uu,130*cc+hh);
	glVertex2f(70*cc+bb-uu,120*cc+hh);
	glVertex2f(40*cc+bb-uu,120*cc+hh);
	glEnd();



///body
glColor3f(1,0,0);  
	glBegin(GL_POLYGON);
	glVertex2f(40*cc+bb-uu,120*cc+hh);
	glVertex2f(80*cc+bb-uu,120*cc+hh);
	glVertex2f(80*cc+bb-uu,20*cc+hh);
	glVertex2f(40*cc+bb-uu,20*cc+hh);
	glEnd();
		
//leg
glColor3f(1,1,0);  
	glBegin(GL_POLYGON);
	glVertex2f(40*cc+bb-uu,20*cc+hh);
	glVertex2f(80*cc+bb-uu,20*cc+hh);
	glVertex2f(140*cc+bb-uu,15*cc+hh);
	glVertex2f(140*cc+bb-uu,1*cc+hh-10);
	glVertex2f(40*cc+bb-uu,1*cc+hh-10);
	glEnd();		
		
//hand
glColor3f(1,0.5,0);  
	glBegin(GL_POLYGON);
	glVertex2f(40*cc+bb-uu,120*cc+hh);
	glVertex2f(70*cc+bb-uu,120*cc+hh);
	glVertex2f(110*cc+bb-uu,40*cc+hh);
	glVertex2f(90*cc+bb-uu,40*cc+hh);
	glEnd();
	
	
	
cc=4;
bb=685;
hh=245;
uu=385;	
	
	
	
	
glColor3f(0.8,0.2,0);  //apple
	glBegin(GL_POLYGON);
	glVertex2f(1*cc+bb-uu+2,3*cc+hh);
	glVertex2f(2*cc+bb-uu,1*cc+hh);
	glVertex2f(6*cc+bb-uu,1*cc+hh);
	glVertex2f(7*cc+bb-uu-2,3*cc+hh);
	glVertex2f(6*cc+bb-uu,5*cc+hh+10);
	glVertex2f(4*cc+bb-uu,4*cc+hh+10);
	glVertex2f(2*cc+bb-uu,5*cc+hh+10);
	glEnd();
	glColor3f(0.5,0,0);  //apple
	glBegin(GL_LINE_LOOP);
	glVertex2f(1*cc+bb-uu+2,3*cc+hh);
	glVertex2f(2*cc+bb-uu,1*cc+hh);
	glVertex2f(6*cc+bb-uu,1*cc+hh);
	glVertex2f(7*cc+bb-uu-2,3*cc+hh);
	glVertex2f(6*cc+bb-uu,5*cc+hh+10);
	glVertex2f(4*cc+bb-uu,4*cc+hh+10);
	glVertex2f(2*cc+bb-uu,5*cc+hh+10);
	glEnd();
	
	glColor3f(0,0.8,0);//LEAF
	glBegin(GL_POLYGON);
	glVertex2f(4*cc+bb-uu-2,4*cc+hh+10);
	glVertex2f(6*cc+bb-uu,6*cc+hh+1);
	glVertex2f(4*cc+bb-uu,6*cc+hh+10);
	glEnd();
	glColor3f(0,0.5,0);//LEAF
	glBegin(GL_LINE_LOOP);
	glVertex2f(4*cc+bb-uu-2,4*cc+hh+10);
	glVertex2f(6*cc+bb-uu,6*cc+hh+10);
	glVertex2f(4*cc+bb-uu,6*cc+hh+10);
	glEnd();	
	
	
	
	
	
	
	
	
		
		}		
		
		
//WALK	
		
void scene5(){
glutKeyboardFunc(key3);
int cc=1.5;
int bb=600;
int hh=275;

scene2();
scene6();
//for(int ii=0;ii<8;ii++){
	if(tt>8){
	scene9(); }
	if(kk=='w'||kk=='W'){
	ccc=1;
	if(tt==0||tt==2||tt==4||tt==6||tt==8){
///glutPostRedisplay();
	glColor3f(0,0,0);  //hairaaaaaaaaaaaaa
	glBegin(GL_POLYGON);
	glVertex2f(20*cc+bb-nn,200*cc+hh);
	glVertex2f(100*cc+bb-nn,170*cc+hh);
	glVertex2f(40*cc+bb-nn,170*cc+hh);
	glEnd();
	glColor3f(0,0,0);  //hair
	glBegin(GL_POLYGON);
	glVertex2f(60*cc+bb-nn,220*cc+hh);
	glVertex2f(80*cc+bb-nn,170*cc+hh);
	glVertex2f(40*cc+bb-nn,170*cc+hh);
	glEnd();
	glColor3f(0,0,0);  //hair
	glBegin(GL_POLYGON);
	glVertex2f(100*cc+bb-nn,210*cc+hh);
	glVertex2f(100*cc+bb-nn,170*cc+hh);
	glVertex2f(40*cc+bb-nn,170*cc+hh);
	glEnd();
	glColor3f(0,0,0);  //hair
	glBegin(GL_POLYGON);
	glVertex2f(110*cc+bb-nn,180*cc+hh);
	glVertex2f(80*cc+bb-nn,130*cc+hh);
	glVertex2f(80*cc+bb-nn,180*cc+hh);
	glEnd();
	glColor3f(0,0,0);  //hair
	glBegin(GL_POLYGON);
	glVertex2f(110*cc+bb-nn,140*cc+hh);
	glVertex2f(80*cc+bb-nn,130*cc+hh);
	glVertex2f(80*cc+bb-nn,180*cc+hh);
	glEnd();


//face
glColor3f(1,0.5,0);  
	glBegin(GL_POLYGON);
	glVertex2f(40*cc+bb-nn,170*cc+hh);
	glVertex2f(80*cc+bb-nn,170*cc+hh);
	glVertex2f(80*cc+bb-nn,130*cc+hh);
	glVertex2f(40*cc+bb-nn,130*cc+hh);
	glEnd();


//neck
glColor3f(0.8,0.3,0);  
	glBegin(GL_POLYGON);
	glVertex2f(50*cc+bb-nn,130*cc+hh);
	glVertex2f(80*cc+bb-nn,130*cc+hh);
	glVertex2f(80*cc+bb-nn,120*cc+hh);
	glVertex2f(50*cc+bb-nn,120*cc+hh);
	glEnd();


//handfrontbbbbbbbbbbbb
glColor3f(1,0.5,0);  
	glBegin(GL_POLYGON);
	glVertex2f(50*cc+bb-nn,120*cc+hh);
	glVertex2f(80*cc+bb-nn,120*cc+hh);
	glVertex2f(10*cc+bb-nn,70*cc+hh);
	glVertex2f(0*cc+bb-nn,70*cc+hh);
	glEnd();

///body
glColor3f(1,0,0);  
	glBegin(GL_POLYGON);
	glVertex2f(40*cc+bb-nn,120*cc+hh);
	glVertex2f(80*cc+bb-nn,120*cc+hh);
	glVertex2f(80*cc+bb-nn,20*cc+hh);
	glVertex2f(40*cc+bb-nn,20*cc+hh);
	glEnd();
///backhand
glColor3f(1,0.5,0);  
	glBegin(GL_POLYGON);
	glVertex2f(50*cc+bb-nn,120*cc+hh);
	glVertex2f(80*cc+bb-nn,120*cc+hh);
	glVertex2f(120*cc+bb-nn,70*cc+hh);
	glVertex2f(110*cc+bb-nn,70*cc+hh);
	glEnd();	
	
	
	
//backleg
glColor3f(0.7,0.7,0);  
	glBegin(GL_POLYGON);
	glVertex2f(40*cc+bb-nn,20*cc+hh);
	glVertex2f(80*cc+bb-nn,20*cc+hh);
	glVertex2f(100*cc+bb-nn,0*cc+hh-40);
	glVertex2f(80*cc+bb-nn,0*cc+hh-40);
	glEnd();
///front leg	
glColor3f(1,1,0);  
	glBegin(GL_POLYGON);
	glVertex2f(40*cc+bb-nn,20*cc+hh);
	glVertex2f(80*cc+bb-nn,20*cc+hh);
	glVertex2f(30*cc+bb-nn,0*cc+hh-40);
	glVertex2f(10*cc+bb-nn,0*cc+hh-40);
	glEnd();
	tt=tt+1;
	nn=nn+50;
	delays();
goto A;
//	continue;
	}
	 if(tt==1||tt==3||tt==5||tt==7){
	//glutPostRedisplay();
	glColor3f(0,0,0);  //hairaaaaaaaaaaaaa
	glBegin(GL_POLYGON);
	glVertex2f(20*cc+bb-nn,200*cc+hh);
	glVertex2f(100*cc+bb-nn,170*cc+hh);
	glVertex2f(40*cc+bb-nn,170*cc+hh);
	glEnd();
	glColor3f(0,0,0);  //hair
	glBegin(GL_POLYGON);
	glVertex2f(60*cc+bb-nn,220*cc+hh);
	glVertex2f(80*cc+bb-nn,170*cc+hh);
	glVertex2f(40*cc+bb-nn,170*cc+hh);
	glEnd();
	glColor3f(0,0,0);  //hair
	glBegin(GL_POLYGON);
	glVertex2f(100*cc+bb-nn,210*cc+hh);
	glVertex2f(100*cc+bb-nn,170*cc+hh);
	glVertex2f(40*cc+bb-nn,170*cc+hh);
	glEnd();
	glColor3f(0,0,0);  //hair
	glBegin(GL_POLYGON);
	glVertex2f(110*cc+bb-nn,180*cc+hh);
	glVertex2f(80*cc+bb-nn,130*cc+hh);
	glVertex2f(80*cc+bb-nn,180*cc+hh);
	glEnd();
	glColor3f(0,0,0);  //hair
	glBegin(GL_POLYGON);
	glVertex2f(110*cc+bb-nn,140*cc+hh);
	glVertex2f(80*cc+bb-nn,130*cc+hh);
	glVertex2f(80*cc+bb-nn,180*cc+hh);
	glEnd();


//face
glColor3f(1,0.5,0);  
	glBegin(GL_POLYGON);
	glVertex2f(40*cc+bb-nn,170*cc+hh);
	glVertex2f(80*cc+bb-nn,170*cc+hh);
	glVertex2f(80*cc+bb-nn,130*cc+hh);
	glVertex2f(40*cc+bb-nn,130*cc+hh);
	glEnd();


//neck
glColor3f(0.8,0.3,0);  
	glBegin(GL_POLYGON);
	glVertex2f(50*cc+bb-nn,130*cc+hh);
	glVertex2f(80*cc+bb-nn,130*cc+hh);
	glVertex2f(80*cc+bb-nn,120*cc+hh);
	glVertex2f(50*cc+bb-nn,120*cc+hh);
	glEnd();

///backhand
glColor3f(1,0.5,0);  
	glBegin(GL_POLYGON);
	glVertex2f(50*cc+bb-nn,120*cc+hh);
	glVertex2f(80*cc+bb-nn,120*cc+hh);
	glVertex2f(120*cc+bb-nn,70*cc+hh);
	glVertex2f(110*cc+bb-nn,70*cc+hh);
	glEnd();


///body
glColor3f(1,0,0);  
	glBegin(GL_POLYGON);
	glVertex2f(40*cc+bb-nn,120*cc+hh);
	glVertex2f(80*cc+bb-nn,120*cc+hh);
	glVertex2f(80*cc+bb-nn,20*cc+hh);
	glVertex2f(40*cc+bb-nn,20*cc+hh);
	glEnd();
	
//handfrontbbbbbbbbbbbb
glColor3f(1,0.5,0);  
	glBegin(GL_POLYGON);
	glVertex2f(50*cc+bb-nn,120*cc+hh);
	glVertex2f(80*cc+bb-nn,120*cc+hh);
	glVertex2f(10*cc+bb-nn,70*cc+hh);
	glVertex2f(0*cc+bb-nn,70*cc+hh);
	glEnd();	
	
	

///front leg	
glColor3f(0.7,0.7,0);  
	glBegin(GL_POLYGON);
	glVertex2f(40*cc+bb-nn,20*cc+hh);
	glVertex2f(80*cc+bb-nn,20*cc+hh);
	glVertex2f(30*cc+bb-nn,0*cc+hh-40);
	glVertex2f(10*cc+bb-nn,0*cc+hh-40);
	glEnd();
//backleg
glColor3f(1,1,0);  
	glBegin(GL_POLYGON);
	glVertex2f(40*cc+bb-nn,20*cc+hh);
	glVertex2f(80*cc+bb-nn,20*cc+hh);
	glVertex2f(100*cc+bb-nn,0*cc+hh-40);
	glVertex2f(80*cc+bb-nn,0*cc+hh-40);
	glEnd();
	tt=tt+1;
	nn=nn+50;
	delays();
	glutPostRedisplay();
	//	continue;
	goto A;
	}
	
	
	
A: ;	
	

}}






void scene1()
{

 //home
glColor3f(0.5,0,0.5);  //square
	glBegin(GL_POLYGON);
	glVertex2f(800,200);
	glVertex2f(1000,200);
	glVertex2f(1000,400);
	glVertex2f(800,400);
	glEnd();

glColor3f(0.5,0,0);  //roof
	glBegin(GL_POLYGON);
	glVertex2f(1000,400);
	glVertex2f(800,400);
	glVertex2f(750,550);
	glVertex2f(950,550);

	glEnd();
	
	
glColor3f(0.5,0.5,0);  //doorwall
	glBegin(GL_POLYGON);
	glVertex2f(800,400);
	glVertex2f(750,550);
	glVertex2f(700,400);
	glVertex2f(700,250);
	glVertex2f(800,200);
	glEnd();	
	
glColor3f(0.5,0,0);  //door
	glBegin(GL_POLYGON);
	glVertex2f(730,400);
	glVertex2f(780,380);
	glVertex2f(780,215);
	glVertex2f(730,235);
	glEnd();	
	

}


void mouse(int btn, int state, int x, int y)
{
//x=x/2;
//x=x+250+35;
///y=(1200-y)/2;
//y=y+110;
//printf("%d\t%d\n",x,y);

}


void display3(void)
{

    int i;
    int zz;
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glPointSize(0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1200,0,1200);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glutMouseFunc(mouse);
	
	scene3();
	scene4();
	scene2();
        scene1();
        scene6();
        if(ccc==0){
       scene12();}
       scene5(0);
        glColor3f(1,1,1);
	glRasterPos2f(390,30);

	//glutPostRedisplay();
	glutSwapBuffers();
}




void key3(unsigned char key,int x,int y)
{
kk=key;
	if(key=='B'||key=='b')
	{
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutDestroyWindow(id2);
		glutInitWindowSize(3200,1200);
		id2=glutCreateWindow("Gravitatin Force");
		glutDisplayFunc(display3);
	}
	if(key=='p'||key=='P')
	{ccc=4;}
	
}



void display2()
{
    int i=0;
	glClearColor(0.2,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1200,0,1200);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	char str2[]="A young Issac Newton is sitting beneath an apple tree contemplating the mysterious universe.";
	glColor3f(1,1,1);
	glRasterPos2f(170,750);
	for(i=0;i<strlen(str2);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[i]);
	}
	char str3[]="Suddenly -boink!-an apple hits on his head,  ""Ahaaaaa !" "he shouts,";
	glColor3f(1,1,1);
	glRasterPos2f(170,700);
	for(i=0;i<strlen(str3);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[i]);
	}
	char str4[]="In a flash he understands that the very same force that brought the apple crashing the ground";
	glColor3f(1,1,1);
	glRasterPos2f(170,650);
	for(i=0;i<strlen(str4);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4[i]);
	}
	char str5[]="also keeps the moon toward the Earth and the Earth falling toward the sun: Gravity";
	glColor3f(1,1,1);
	glRasterPos2f(170,600);
	for(i=0;i<strlen(str5);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5[i]);
	}
	char str6[]="PRESS 'B or b' FOR THE ANIMATION";
	glColor3f(1,1,1);
	glRasterPos2f(390,90);
	for(i=0;i<strlen(str6);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str6[i]);
        }
	glFlush();
	glFlush();
	glutKeyboardFunc(key3);
	glFlush();
	glutPostRedisplay();
}


void key2(unsigned char key,int x,int y)
{
	if(key=='A'||key=='a')
	{
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutDestroyWindow(id1);
		glutInitWindowSize(3200,1200);
		id2=glutCreateWindow("Gravitation force");
		glutDisplayFunc(display2);
	}
}
void myinit()
{
glClearColor(1.0,1.0,1.0,1.0);
glColor3f(0.0,0.0,1.0);
glPointSize(2.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,1000.0,0.0,1000.0);
}
void display()
{

glClear(GL_COLOR_BUFFER_BIT);
//draw_object();
glFlush();
}





int main(int argc,char ** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(3200,1200);
	glutInitWindowPosition(0,0);
	id1=glutCreateWindow("Gravitation Force");
	myinit();
	glutDisplayFunc(mydisplay);
	glutIdleFunc(idle);
	glutKeyboardFunc(key2);
	//c_menu=glutCreateMenu(main_menu);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glFlush();
	glutPostRedisplay();
	glutMainLoop();
	return 0;
}

