#include<iostream.h>
#include<conio.h>
#include<string.h>
class stock
 {
   char author[50];
   char title[50];
   char pub[50];
   double price;
   int numcopies;
   public:
	   int access_title(char a[]);
	   void input();
	   void getdata(int);
 };
 int stock::access_title(char a[])
  {
    if(strcmp(title,a))
	return 0;
    else return 1;
  }
  void stock::getdata(int num)
   {
     if(numcopies>=num)
	cout<<"\nCost of "<<num<<"books is Rs. "<<(price*num);
     else
	cout<<"\nSorry! These many copies are unavailable!";
   }
   void stock::input()
    {
     cout<<"\nTitle: ";
     cin>>title;
     cout<<"Author:";
     cin>>author;
     cout<<"\nPublisher:";
     cin>>pub;
     cout<<"\nPrices:";
     cin>>price;
     cout<<"\ncopies availabe";
     cin>>numcopies;
    }

    void main()
     {
       clrscr();
       stock obj[2];
       int n;
       char title[50];

       cout<<"enter details of 2 books";
       for(int i=0;i<2;i++)
	{
	  obj[i].input();
	}
	cout<<endl;
	cout<<"\n Enter title of required books\n";
	cin>>title;
	for(i=0;i<2;i++)
	 {
	   if(obj[1].access_title(title))
		{
		  cout<<"\nHow many copies? ";
		  cin>>n;
		  obj[i].getdata(n);
		}
	   else
		  cout<<"\Books unavailable";
	 }
       getch();
     }