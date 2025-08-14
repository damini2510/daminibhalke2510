#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char str1[100],str2[100],reverse[100],combine[200];
int i,len=0,ispalin,false;
cout<<"Enter first string:";
cin>>str1;
for(i=0;str1[i]!='\0';i++)
{
len++;}
cout<<"length:"<<len<<endl;
for(i=0;i<len;i++)
{
reverse[i]=str1[len-1-i];
}
reverse[len]='/0';
cout<<"reverse:"<<reverse<<endl;
//bool ispalin=true;
for(i=0;i<len;i++){
if(str1[i]!=reverse[i]){
   ispalin=false;
   break;
}
}
if(ispalin)
    cout<<"palindrome:yes"<<endl;
else
    cout<<"palindrome:no"<<endl;
getch();
}
