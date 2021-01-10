#include <iostream>
using namespace std;

int main()
{
	int angka;
	
	cout<<"input: ";cin>>angka;
	for (int i = 1; i <= angka; i++)
	{
		for (int j = 1; j <= angka; j++)
		{
			
			if(i<j)
				cout<<i<<" ";
			else cout<<j<<" ";
			
		}
		
		cout<<endl;
		
	}
	
	return 0;
}




























