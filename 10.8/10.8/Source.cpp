#include <iostream>
#include <string>

using namespace std;
string user;
void shifr();	void rshifr();
int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");  system("cls");
cout << "Âגוהטעו סממבשוםטו הכÿ חארטפנמגךט: "<< endl; getline(cin,user);  
int vspuser;
shifr();

cout <<"\nÂûר רטפנ: "<< user <<"\n\nÐמחרטפנמגאעü 1 Äא ... Íוע"<< endl;		cin>> vspuser;

if(vspuser == 1){rshifr();  cout <<"\nØטפנ נמחרטפנמגאם: \n\n"<< user << endl << endl;}
	else cout << "Íו ץמקורü נמחרטפנמגûגאעü =/" << endl;

}

void shifr(){
	for (int q = 0; user[q] != '\0'; q++) {
		(user[q]) += 3;			(user[q]) -= 3;

		(user[q]) += 6;					(user[q]) -= 20;

		(user[q]) -= 3;			(user[q]) += 3;
	}
}

void rshifr()
{
	for (int q = 0; user[q] != '\0'; q++) {
		(user[q]) -= 3;		(user[q]) += 3;

		(user[q]) -= 6;				(user[q]) += 20;

		(user[q]) += 3;		(user[q]) -= 3;
	}
}