#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");  system("cls");
 
 float user;
 cin>>user;
 int vsp_user = user,size =0,vsp_size =0,vsp =0;
 if(user == 0)cout << "����"<< endl; 

while (vsp_user != 0) {vsp_user/=10;   size++;}   vsp_size = size;

 if (size == 4) {cout << "\t���� ������ " << endl; vsp_size =0;}
	if(size > 4) {cout << "\t������ ������" << endl; vsp_size = 0;}

 for(int w =0; w < vsp_size;w++){
 vsp_user = user;

  for(int q=0;q < size-1;size--){
 vsp_user /=10; vsp++;}
  
	if(vsp == 0) {
		switch(vsp_user){ 
		case 1: cout << "���� ";  user--; break;
		case 2: cout << "��� ";  user--; break;
		case 3: cout << "��� ";  user--; break;
		case 4: cout << "������ ";  user--; break;
		case 5: cout << "���� ";  user--; break;
		case 6: cout << "����� ";  user--; break;
		case 7: cout << "���� ";  user--; break;
		case 8: cout << "������ ";  user--; break;
		case 9: cout << "������ ";  user--; break;
		
		}}

		if(user > 10 && user < 20){user -= 10;{

		switch (vsp_user){
		case 1: cout << "����������� ";  vsp_size = 0; vsp_user = 0; break;
		case 2: cout << "���������� ";  vsp_size = 0; vsp_user = 0; break;
		case 3: cout << "���������� ";  vsp_size = 0;  vsp_user = 0; break;
		case 4: cout << "������������ ";  vsp_size = 0; vsp_user = 0; break;
		case 5: cout << "���������� ";  vsp_size = 0; vsp_user = 0; break;
		case 6: cout << "�����������";  vsp_size = 0;  vsp_user = 0; break;
		case 7: cout << "���������� ";  vsp_size = 0; vsp_user = 0; break;
		case 8: cout << "������������ ";  vsp_size = 0;  vsp_user = 0; break;
		case 9: cout << "������������ ";  vsp_size = 0;  vsp_user = 0; break;
		}}}
		

		
		if (vsp == 1){
			switch (vsp_user) {
			case 1: cout << "������ ";  user -= 20;  break;
			case 2: cout << "�������� ";  user -= 20;  break;
			case 3: cout << "�������� ";  user -= 30;  break;
			case 4: cout << "����� ";  user -= 40;  break;
			case 5: cout << "��������� ";  user -= 50;  break;
			case 6: cout << "���������� ";  user -= 60;  break;
			case 7: cout << "��������� ";  user -= 70;  break;
			case 8: cout << "����������� ";  user -= 80;  break;
			case 9: cout << "��������� ";  user -= 90;  break;}}

		if (vsp  == 2) {
			switch (vsp_user) {
			case 1: cout << "��� ";  user -= 100; size++; break;
			case 2: cout << "������ ";  user -= 200; size++; break;
			case 3: cout << "������ ";  user -= 300; size++; break;
			case 4: cout << "��������� ";  user -= 400; size++; break;
			case 5: cout << "�������� ";  user -= 500; size++; break;
			case 6: cout << "����� ";  user -= 600; size++; break;
			case 7: cout << "������� ";  user -= 700; size++; break;
			case 8: cout << "�������� ";  user -= 800; size++; break;
			case 9: cout << "��������� ";  user -= 900; size++; break;}}
		vsp =0;

}}
	
