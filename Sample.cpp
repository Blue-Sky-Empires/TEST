#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string signal;
	cin>>signal;
	int count=0;
	int n=signal.length();
	char c[n+1];
	strcpy(c,signal.c_str());
	/*for(int i=0;i<n;i++)
	{
		cout<<c[i]<<endl;
	}*/
	for(int i=0;i<n;i++)
	{
		if(c[i]!='S'||c[i+2]!='S')
		{
			count++;
			
			}
			else if(c[i+1]!='O' || c[i+3]!='O')
			{
				count++;
				}
				
			//	else if()	
	}
	cout<<cout;
}
