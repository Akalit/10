#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
	system("chcp 1251");  system("cls");
	setlocale(LC_ALL, "Russian");
	int user =1; int vsp =0;

    do{
	cout << "���� �� ������ ������� CTRL ��� Alt ������� 0 ���� ��� 1"<< endl;   cin>>vsp;

	}while(vsp != 0 && vsp != 1);
	if(vsp == 0) { cout << "Enter ALT or CTRL + ..."<< endl;
asd: _getch();
		user = getchar();
	if(user == 10) goto asd;
	if(user < 32) {cout << "CTRL" << endl;}
		else cout << "ALT" << endl; goto asd;}
		

	 else{
		 cout << "����� �� �������) " << endl;
	 while(true){
	 user = _getch();

	 switch (user)
	 {
	 case 13: cout << "����" << endl; break;
	 case 32: cout << "������" << endl; break;
	 case 75: cout << "<-" << endl; break;
	 case 77: cout << "->" << endl; break;
	 case 72: cout << "�����" << endl; break;
	 case 80: cout << "����" << endl; break;
	 }}}}