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
 if(user == 0)cout << "Ноль"<< endl; 

while (vsp_user != 0) {vsp_user/=10;   size++;}   vsp_size = size;

 if (size == 4) {cout << "\tОдна тысяча " << endl; vsp_size =0;}
	if(size > 4) {cout << "\tБольше тысячи" << endl; vsp_size = 0;}

 for(int w =0; w < vsp_size;w++){
 vsp_user = user;

  for(int q=0;q < size-1;size--){
 vsp_user /=10; vsp++;}
  
	if(vsp == 0) {
		switch(vsp_user){ 
		case 1: cout << "Один ";  user--; break;
		case 2: cout << "Два ";  user--; break;
		case 3: cout << "Три ";  user--; break;
		case 4: cout << "Четыри ";  user--; break;
		case 5: cout << "Пять ";  user--; break;
		case 6: cout << "Шесть ";  user--; break;
		case 7: cout << "Семь ";  user--; break;
		case 8: cout << "Восемь ";  user--; break;
		case 9: cout << "Девять ";  user--; break;
		
		}}

		if(user > 10 && user < 20){user -= 10;{

		switch (vsp_user){
		case 1: cout << "Одиннадцать ";  vsp_size = 0; vsp_user = 0; break;
		case 2: cout << "Двенадцать ";  vsp_size = 0; vsp_user = 0; break;
		case 3: cout << "Тринадцать ";  vsp_size = 0;  vsp_user = 0; break;
		case 4: cout << "Четырнадцать ";  vsp_size = 0; vsp_user = 0; break;
		case 5: cout << "Пятнадцать ";  vsp_size = 0; vsp_user = 0; break;
		case 6: cout << "Шестнадцать";  vsp_size = 0;  vsp_user = 0; break;
		case 7: cout << "Семнадцать ";  vsp_size = 0; vsp_user = 0; break;
		case 8: cout << "Восемнадцать ";  vsp_size = 0;  vsp_user = 0; break;
		case 9: cout << "Девятнадцать ";  vsp_size = 0;  vsp_user = 0; break;
		}}}
		

		
		if (vsp == 1){
			switch (vsp_user) {
			case 1: cout << "Десять ";  user -= 20;  break;
			case 2: cout << "Двадцать ";  user -= 20;  break;
			case 3: cout << "Тридцать ";  user -= 30;  break;
			case 4: cout << "Сорок ";  user -= 40;  break;
			case 5: cout << "Пятьдесят ";  user -= 50;  break;
			case 6: cout << "Шестьдесят ";  user -= 60;  break;
			case 7: cout << "Семьдесят ";  user -= 70;  break;
			case 8: cout << "Восемьдесят ";  user -= 80;  break;
			case 9: cout << "Девяносто ";  user -= 90;  break;}}

		if (vsp  == 2) {
			switch (vsp_user) {
			case 1: cout << "Сто ";  user -= 100; size++; break;
			case 2: cout << "Двесте ";  user -= 200; size++; break;
			case 3: cout << "Триста ";  user -= 300; size++; break;
			case 4: cout << "Четыреста ";  user -= 400; size++; break;
			case 5: cout << "Пастьсот ";  user -= 500; size++; break;
			case 6: cout << "Шисот ";  user -= 600; size++; break;
			case 7: cout << "Семьсот ";  user -= 700; size++; break;
			case 8: cout << "Восемсот ";  user -= 800; size++; break;
			case 9: cout << "Девятьсот ";  user -= 900; size++; break;}}
		vsp =0;

}}
	
