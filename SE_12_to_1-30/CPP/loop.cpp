//loops in c++

#include<iostream>
using namespace std;

int main()
{
	
	//array n C++

	int a[3][3];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Enter element : ";
			cin>>a[i][j];
		}
	}
	
	cout<<"\n==========Your Array==============\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
//			cout<<"element a["<<i<<"]["<<j<<"]= "<<a[i][j]<<endl;

			cout<<a[i][j]<<" ";
			
		}
		cout<<endl;
	}
	
	return 0;
}
