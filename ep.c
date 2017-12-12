#include<graphics.h>
#include<math.h>
void show_screen( );
void midpoint_ellipse(constint,constint,constint,constint);
int main( )
    {
       int driver=VGA;
       int mode=VGAHI;
       int h=0;
       int k=0;
       int rx=0;
       int ry=0;
       do
      {
         show_screen( );
         gotoxy(8,10);
         cout<<"Central Point of the Ellipse : (h,k) :";
         gotoxy(8,11);
         cout<<"ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ";
         gotoxy(12,13);
         cout<<"Enter the value of h = ";
         cin>>h;
         gotoxy(12,14);
         cout<<"Enter the value of k = ";
         cin>>k;
         gotoxy(8,18);
         cout<<"Radius of the Ellipse : (rx,ry) :";
         gotoxy(8,19);
         cout<<"ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ";
         gotoxy(12,21);
         cout<<"Enter the radius along x-axis : rx = ";
         cin>>rx;
         gotoxy(12,22);
         cout<<"Enter the radius along y-axis : ry = ";
         cin>>ry;
         initgraph(&driver,&mode,"..\\Bgi");
         setcolor(15);
           midpoint_ellipse(h,k,rx,ry);
         setcolor(15);
           outtextxy(110,460,"Press<Enter>to continue or any other key to exit.");
        int key=int(getch( ));
       if(key!=13)
        break;
      }
       while(1);

       return 0;
    }

   {
       int color=getcolor( );
       float aa=(a*a);
       float bb=(b*b);
       float aa2=(aa*2);
       float bb2=(bb*2);
       float x=0;
       float y=b;
       float fx=0;
       float fy=(aa2*b);
       float p=(int)(bb-(aa*b)+(0.25*aa)+0.5);
       putpixel((h+x),(k+y),color);
       putpixel((h+x),(k-y),color);
       putpixel((h-x),(k-y),color);
       putpixel((h-x),(k+y),color);
       while(fx<fy)
      {
         x++;
         fx+=bb2;
        if(p<0)
        p+=(fx+bb);
        else
        {
           y--;
           fy-=aa2;
           p+=(fx+bb-fy);
        }
         putpixel((h+x),(k+y),color);
         putpixel((h+x),(k-y),color);
         putpixel((h-x),(k-y),color);
         putpixel((h-x),(k+y),color);
      }
       p=(int)((bb*(x+0.5)*(x+0.5))+(aa*(y-1)*(y-1))-(aa*bb)+0.5);
       while(y>0)
      {
         y--;
         fy-=aa2;
         if(p>=0)
        p+=(aa-fy);
       else
        {
           x++;
           fx+=bb2;
           p+=(fx+aa-fy);
        }
         putpixel((h+x),(k+y),color);
         putpixel((h+x),(k-y),color);
         putpixel((h-x),(k-y),color);
         putpixel((h-x),(k+y),color);
      }
    }
{
       restorecrtmode( );
       textmode(C4350);
       cprintf("\n********************************************************************************");
       cprintf("************************-                              -************************");
       cprintf("*------------------------ ");
       textbackground(1);
       cprintf(" MidPoint Ellipse Algorithm ");
       textbackground(8);
       cprintf(" ------------------------*");
       cprintf("*-**********************-                              -**********************-*");
       cprintf("*-****************************************************************************-*");
       for(int count=0;count<42;count++)
       cprintf("*-*                                                                          *-*");
       gotoxy(1,46);
       cprintf("*-****************************************************************************-*");
       cprintf("*------------------------------------------------------------------------------*");
       cprintf("********************************************************************************");
       gotoxy(1,2);
    }

