#include<bits/stdc++.h>
#include <fstream>
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
bool isloggedin( ) {
	string username, password;
	cout << "kindly enter your username \n"; 	cin >> username;
	cout << "kindly enter your password \n";    cin >> password;

	string filename(username + ".txt");
	fstream obj(filename);

	string usn, psw;
	obj >> usn;
	obj >> psw;
	obj.close();

	if (usn == username && psw == password) return true;
	else return false;
}
int32_t main()
 {
    	//~ iostream::sync_with_stdio(false);
    	//~ cin.tie(0);
    	//~ #ifndef ONLINE_JUDGE
    	//~ freopen("input.txt", "r", stdin);
    	//~ #endif
	cout << "1.Register \n2.Login \nYour Choice\n";
	int choice; cin >> choice;

	if (choice == 1)
	{
		string username, password;
		cout << "Enter your username\n"; cin >> username;
		cout << "Enter our password\n"; cin >> password;

		ofstream obj(username + ".txt");
		obj << username << endl << password;
		obj.close();
		main();
	}
	else if(choice == 2)
	{
		if (isloggedin())
		{
			cout << "succesfully logged in\n";
		}
		else
		 {
			cout << "fatal error\n";
			return 0;
		}
	}


 }
