#include<iostream.h>
#include<conio.h>
#include<process.h>
void print();
int check();
int draw();
char mark();
void show();
void play(char);
int p=1;
char pos;
char a[9]={'1','2','3','4','5','6','7','8','9'};
char t[9]={'1','2','3','4','5','6','7','8','9'};
int main()
{clrscr();
cout<<"                        TIC TAC TOE     \n ";
 print();
  show();


  getch();
  return 0;
 }

/*----------------------------------------------*/


void show()
{ label:
{cout<<"Player "<<p<<" - Enter the position : " ;
cin>>pos;
}

 if(a[pos-49]==pos)
  { play (pos);
  }
  else
  {cout<<"Invaid selection\n";
  goto label;
  }

}
void play(char m)
{
int a1,a2;
for(int i=0;i<9;i++)
 {
  if (m==a[i])
  a[i]=mark();
 }
 print();
	a1= check();
	if(a1==1)
	{ print();
	cout<<"Congratulations...!!\nPlayer "<<p<<" has won the game.";
	getch();
	exit(0);
	}
 else
 {a2= draw();
 if(a2==0)
  {print();
  cout<<"The game is draw... ";
  getch();
  exit(0);
  }
 }
 p=(p==1)?2:1;
 show();
}

/*---------------------------------------*/

int check()
{
if(a[0]==a[1] && a[1]==a[2])
return 1;
else if(a[3]==a[4] && a[4]==a[5])
return 1;
else if (a[6]==a[7] && a[7]==a[8])
return 1;
else if (a[0]==a[3] && a[3]==a[6])
return 1;
else if (a[1]==a[4] && a[4]==a[7])
return 1;
else if (a[2]==a[5] && a[5]==a[8])
return 1;
else if (a[0]==a[4] && a[4]==a[8])
return 1;
else if (a[2]==a[4] && a[4]==a[6])
return 1;
else
return 0;
}

/*------------------------------------------*/

int draw()
{  int c=0;
for(int i=0;i<9;i++)
{
if(a[i]==t[i])
 c++;
}
return c;
}

/*-------------------------------------------*/

char mark()
{
if(p==1)
return 'o';
else
return 'x';
}

/*-------------------------------------------*/

void print()
{
cout<<" "<<a[0]<<" | "<<a[1]<<" | "<<a[2]<< "\n";
cout<<" "<<a[3]<<" | "<<a[4]<<" | "<<a[5]<<" \n";
cout<<" "<<a[6]<<" | "<<a[7]<<" | "<<a[8]<<" \n";
}
