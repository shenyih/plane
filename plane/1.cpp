// ConsoleApplication12.cpp : 定义控制台应用程序的入口点。
//
#include<iostream>
using namespace std;
void print_space(int x){
	for (int i = 0; i <= x; i++){

		cout << " ";
	}

}
int main()
{
	for (int i = 1; i <= 35; i++){
		cout << "_";
	}

	cout << endl<<"score:108";
	int c;
	for (int c = 2; c <= 14; c++){
		cout << endl;
	}

		print_space(13);
	cout << "0"<<endl;
	print_space(12);
	cout << "000"<<endl;
	print_space(13);
	cout << "0"<<endl;
	for (int z = 0; z <= 6; z++){
		print_space(13); 
		cout << ":" << endl;
	
	}
	print_space(13);
	cout << "A" << endl;
	print_space(13);
	cout << "A" << endl;
	print_space(11);
	cout << "AAAAA" << endl;
	print_space(12);
	cout << "A A" << endl;


	

	
	system("pause");
	return 0;
}

