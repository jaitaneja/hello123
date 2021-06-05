#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<process.h>
const int width=225,height=255;
int main()
{
 clrscr();
 ofstream img("picture.jpg");
 img<<"p3"<<endl;
 img<<width<<" "<<height<<endl;
 img<<"255"<<endl;
 for(int y=0;y<height;y++)
   {
    for(int x=0;x<width;x++)
     {
      int r=x%255;
      int g=y%255;
      int b=y*x%255;
      img<<r<<" "<<g<<" "<<b<<endl;
     }
   }
   system("open picture.jpg");
   return 0;
}