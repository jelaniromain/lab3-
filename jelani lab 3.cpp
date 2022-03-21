//============================================================================
// Name        : jelani.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : lab3
//============================================================================

#include <iostream>
using namespace std;

	float FindMyMax ( float Myarray[]);
	float FindMyMini( float Myarray[]);
	void Result(float MyMax, float MyMini, char Input );

	int main()
	 {
		float Myarray[ 5 ];
		float MyMax;
		float MyMini;
		cout<<"Enter a float value for MyArray"<<endl;
		for (int a=0; a<5; a++)
		{
			cin>> Myarray[a];
		}
		MyMax=FindMyMax(Myarray);
		MyMini=FindMyMini(Myarray);
		char Input;
		cout<<"Input 0 to 9 to show the Max/Min Value"<<endl;
		cin>>Input;
		Result( MyMax, MyMini , Input);
		return 0;
	 }
	float FindMyMini(float Myarray[])
	{
		float MyMini=Myarray[0];
		for (int a=0; a<5; a++)
		{
		   if(MyMini>Myarray[a])
			{
			  MyMini=Myarray[a];
			}
		}
	return MyMini;
	}
	float FindMyMax(float Myarray[])
	{
		float MyMax=Myarray[0];
		for (int a=0; a<5; a++)
		{
			if(MyMax>Myarray[a])
			{
				MyMax=Myarray[a];

		}
		}
		return MyMax;
	}
	void  Result(float MyMax, float MyMini, char Input ){
		switch (Input){
		case '0':
			cout << "Minimum is " << MyMini << endl;
			break;
		case '9':
			cout << "Maximum is " << MyMax << endl;
			break;
		default:
			cout << "Invalid" << endl;
		}
	}



