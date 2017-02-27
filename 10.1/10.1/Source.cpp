#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	system("chcp 1251");  system("cls"); setlocale(LC_ALL, "Russian");
	cout.flush();

    string user;	getline(cin, user);
	string::iterator vsp = user.begin();
	for (int q =0; vsp != user.end(); vsp++,q++) { user[q] = tolower(*vsp);
		if (isalpha((unsigned char)user[q])) {}
			 else user.erase(q,1);}
	
	 
	int obtschot = (user.size()-1),schot;
	for(int q =0; q < user.size(); q++,obtschot--) { 
		if(user[q] == user[obtschot]) schot = 1;
			else { schot = 0; break;}}
		
		if(schot == 1) cout << "\n\tПалендром " << endl;
			else  cout << "\n\tНе палендром " << endl;}

