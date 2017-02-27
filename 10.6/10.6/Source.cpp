#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");  system("cls");

	float user;
	cin >> user;
	int vsp_user = user, size = 0, vsp_size = 0, vsp = 0;

	while (vsp_user != 0) { vsp_user /= 10;   size++; }   vsp_size = size;

	for (int w = 0; w < vsp_size; w++) {
		vsp_user = user;

		for (int q = 0; q < size - 1; size--) {
			vsp_user /= 10; vsp++;
		}

		if (vsp == 0) {
			switch (vsp_user) {
			case 1: cout << "Ичи ";  user--; break;
			case 2: cout << "Ни ";  user--; break;
			case 3: cout << "Сан ";  user--; break;
			case 4: cout << "Си ";  user--; break;
			case 5: cout << "Го ";  user--; break;
			case 6: cout << "Року ";  user--; break;
			case 7: cout << "Сити ";  user--; break;
			case 8: cout << "Хвати ";  user--; break;
			case 9: cout << "Ку ";  user--; break;}}

		if (vsp == 3) {
				switch (vsp_user) {
				case 1: cout << "Ичи сен ";  user -= 1000;  size+=2; break;
				case 2: cout << "Ни сен";  user -= 2000;  size += 2; break;
				case 3: cout << "Сан сен ";  user -= 3000;  size += 2; break;
				case 4: cout << "Си сен ";  user -= 4000; size += 2;  break;
				case 5: cout << "Го сен ";  user -= 5000;  size += 2; break;
				case 6: cout << "Року сен ";  user -= 6000;  size += 2; break;
				case 7: cout << "Сити сен ";  user -= 7000;  size += 2; break;
				case 8: cout << "Хвати сен ";  user -= 8000;  size += 2; break;
				case 9: cout << "Ку сен ";  user -= 9000;  size += 2; break;}}



		if (vsp == 1) {
			switch (vsp_user) {
			case 1: cout << "Ичи дзю ";  user -= 10;  break;
			case 2: cout << "Ни дзю ";  user -= 20;  break;
			case 3: cout << "Сан дзю ";  user -= 30;  break;
			case 4: cout << "Си дзю ";  user -= 40;  break;
			case 5: cout << "Го дзю ";  user -= 50;  break;
			case 6: cout << "Року дзю ";  user -= 60;  break;
			case 7: cout << "Сити дзю ";  user -= 70;  break;
			case 8: cout << "Хвати дзю ";  user -= 80;  break;
			case 9: cout << "Ку дзю ";  user -= 90;  break;}}

		if (vsp == 2) {
			switch (vsp_user) {
			case 1: cout << "Ичи хяку ";  user -= 100; size++; break;
			case 2: cout << "Ни хяку ";  user -= 200; size++; break;
			case 3: cout << "Сан хяку ";  user -= 300; size++; break;
			case 4: cout << "Си хяку ";  user -= 400; size++; break;
			case 5: cout << "Го хяку ";  user -= 500; size++; break;
			case 6: cout << "Року хяку ";  user -= 600; size++; break;
			case 7: cout << "Сити хяку ";  user -= 700; size++; break;
			case 8: cout << "Хвати хяку ";  user -= 800; size++; break;
			case 9: cout << "Ку хяку ";  user -= 900; size++; break;}}

		if (vsp == 4) {
			switch (vsp_user) {
			case 1: cout << "Ичи ман ";  user -= 10000;  size += 3; break;
			case 2: cout << "Ни ман ";  user -= 20000;  size += 3; break;
			case 3: cout << "Сан ман ";  user -= 30000;  size += 3; break;
			case 4: cout << "Си ман ";  user -= 40000; size += 3;  break;
			case 5: cout << "Го ман ";  user -= 50000;  size += 3; break;
			case 6: cout << "Року ман ";  user -= 60000;  size += 3; break;
			case 7: cout << "Сити ман ";  user -= 70000;  size += 3; break;
			case 8: cout << "Хвати ман ";  user -= 80000;  size += 3; break;
			case 9: cout << "Ку ман ";  user -= 90000;  size += 3; break;
			}
		}



		vsp = 0;

	}

}