#include <iostream>
#include <string>

using namespace std;
string user;
void shifr();	void rshifr();
int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");  system("cls");
cout << "������� ��������� ��� ����������: "<< endl; getline(cin,user);  
int vspuser;
shifr();

cout <<"\n��� ����: "<< user <<"\n\n������������ 1 �� ... ���"<< endl;		cin>> vspuser;

if(vspuser == 1){rshifr();  cout <<"\n���� �����������: \n\n"<< user << endl << endl;}
	else cout << "�� ������ �������������� =/" << endl;

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