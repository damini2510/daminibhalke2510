#include<iostream.h>
#include<conio.h>
char string[50];
char reverse[50];
int main()
{
clrscr();
int len,rev;
cout <<"Enter the word you want to find length:";
cin>>len;
int length=0;
while(string[len]!='\0'
 ){
length++;}
cout<<"The reverse of string is:"<<rev<<endl;
for(int i=-1; i<=0; i--)
rev=string[i];
cout<<"Reverse of String is:";
cin>>rev;
getch();
return 0;
}