#include<iostream>
using namespace std;
int score = 0;
int coordinates[2] = {50,24};
int results = 1;


void print_space(int x){
	for (int y = 0; y <= x; y++)
		cout << " ";

}

void print_plane(){
	
	system("cls");

	for (int x = 0; x <= coordinates[1]; x++)
		cout << endl;
	print_space(coordinates[0]);
	cout << "A" << endl;
	print_space(coordinates[0]);
	cout << "A" << endl;
	print_space(coordinates[0]-2);
	cout << "AAAAA" << endl;
	print_space(coordinates[0]-1);
	cout << "A A" << endl;

}


int main(){
	

	system("color f3");
	while (1){
		print_plane();
		
		if (_kbhit()){
			switch (_getch()){
			case 'a':if (coordinates[0] == 0)break; coordinates[0]--; break;
			case 'A':if (coordinates[0] == 0)break; coordinates[0]--; break;
			case 'D':if (coordinates[0] == 110)break; coordinates[0]++; break;
			case 'd':if (coordinates[0] == 110)break; coordinates[0]++; break;
			case 'S':if (coordinates[1] == 24)break; coordinates[1]++; break;
			case 's':if (coordinates[1] == 24)break; coordinates[1]++; break;
			case 'W':if (coordinates[1] == 1)break; coordinates[1]--; break;
			case 'w':if (coordinates[1] == 1)break; coordinates[1]--;  break;
			
			}
		
		}

	
	}
	system("pause");
}
