#include <iostream>
#include <cmath>
using namespace std;

long int fact( int n ){
	long int sum = 1;
	for(int i = 1; i <= n; i++){
		sum = sum * i; //calculates factorial
	}
	return sum;
}

long int calc(int n, int p){
	long int x = fact(n);
	long int y = fact(p);
	long int z = fact(n - p);
	long int number = x / (y * z); //pascal's equation
	return number;
}

void formula(int lines){
	for(int n = 0; n <= lines; n++){
		for(int p = 0; p < n+1; p++){
			long int number = calc(n,p); //using formula
			cout.width(6);
			cout << number << " ";
		}
		cout << endl;
	}
}

void recursion(int lines){
	for(int row = 1; row <= lines+1; row++){
		int start = 1;
		for(int i = 1; i <= row; i++){
			cout.width(6);
			cout << start << " ";
			start = start * (row - i) / i; //recursive
		}
		cout << "\n";
	}
}

int main(){
	int value, lines;
	cout << "Pick a method:" << endl << "(1) Pascal's Formula" << endl << "(2) Recursion" << endl;
	cin >> value;
	cout << "How many lines would you like to see?" << endl;
	cin >> lines;
	
	switch(value){
		case 1: //part 1
			cout << "Pascal's Triangle :" << endl;
			formula(lines);
			break;
		case 2: //part 2
			cout << "Pascal's Triangle :" << endl;
			recursion(lines);
			break;
		default :
			cout << "Invalid input.";
	}
}
