#include<bits/stdc++.h>
using namespace std;
int ispalin(string str,int a,int b){
	
while(a<b){
	
if(str[a]!=str[b])
return 0;
a++,b--;


}
return 1;

}
void printpart(string str,string out,int l,int n){
	
	if(l==n)
	{
	cout<<out<<endl;
	return;
	}
	for(int i=l;i<n;i++)
	{
	if(ispalin(str,l,i))
	{
	printpart(str,out+"("+str.substr(l,i-l+1)+")",i+1,n);
	}

	}
}


int main()
{
	string str="nitin";
string out;
	printpart(str,out,0,5);
	return 0;



}