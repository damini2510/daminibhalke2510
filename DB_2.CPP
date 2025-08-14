#include<iostream.h>
int main()
{
int m,n,power,i;
cout<<"Enter numbers to compute";
cin>>m>>n;
power=1;i=1;
do
{power=power*m;
i++;
}
while(i<=n);
cout<<"power of"<<m<<"to"<<n<<"is=";
cout<<power;
 return 0;
 }