#include <iostream>
#include "loading.h"
#include <string>
#include <Windows.h>
#include "adminFunction.h"

using namespace std;

void passwordVerification(void);
void mainMenu(void);


void passwordVerification()
{
    system("cls");
    string password;

    cout << "\nEnter Password : ";

    do
    {
        cin >> password;

        if(password != "password"){
            cout << "Hey! You are enter wrong password \n" ;
            cout << "Print Quit to Exit ..\n  " ;
            continue;
        }

        if (password == "Quit" || password == "quit" || password == "exit" || password == "Exit" || password == "QUIT" || password == "EXIT")
        {
            system("cls");
            cout << "\tQuitting The Program...";
            Sleep(1000) ;
            exit(0);
        }

    }

    while (password != "password");
    mainMenu(); //going to the adminFunctionFile 
}

int main()
{

    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    loadingBar(); 
    system("color 9F");

    passwordVerification();
    return 0;
}
