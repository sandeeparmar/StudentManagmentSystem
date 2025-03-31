#include<iostream>
#include<windows.h>

using namespace std;

void loadingBar()
{ 
	system("cls"); // clear the Screen 
	system("color 9F"); // 9 - light blue text and F - white Board 
	
	char a = 177, b = 219;
	cout<<endl;
	cout<<"\t\t\t\t\t";
	
	for(int i = 0;i<26;i++)
	cout<<a;

	cout<<"\r";
	cout<<"\t\t\t\t\t";
	for(int i = 0; i < 26 ; i++)
	{
		cout<<b;
		Sleep(200);
	}
}


