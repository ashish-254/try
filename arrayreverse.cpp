//reversing of array
#include<iostream>
#include<conio.h>
using namespace std;
void traverse(int,int,int[],int);
//void reverse(int,int,int[],int);
void reverse(int,int,int[],int);
void traverse(int lb,int ub,int list[],int max)
{
 if(lb>ub)
 return;

 if(ub>max)
 return;

 for(int i=0;i<max;i++)
 {
 cout<<'\t'<<list[i];
 }
}

 void reverse(int lb,int ub,int list[],int max)
 {          if(lb>ub)
		 		{
				 cout<<"error";
				return;}

		if(ub>max)
		{
		cout<<"error";
		return;}
		
		cout<<"before deletion:"<<endl;
		traverse(lb,ub,list,max);

		int temp;
		for(int i=lb;i<=ub/2;i++)
		{
		temp=list[i];
		list[i]=list[ub-i-1];
		list[ub-i-1]=temp;
		}

		cout<<endl<<"after deletion:"<<endl;
		traverse(lb,ub,list,max);
		}

int main()
{
       //clrscr();
       int lb,ub,list[5],max;
       cout<<"enter the array:"<<endl;
       for(int i=0;i<5;i++)
       {
	cin>>list[i];
	}
	cout<<"enter lb, ub, max:"<<endl;
	cin>>lb>>ub>>max;
	reverse(lb,ub,list,max);
	//getch();
	return 0;
}

