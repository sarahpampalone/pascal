//Sarah Pampalone
//ECE 2620 001

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

int main()
{
	int value;
	cout << "Pick a method:";
	cin >> value;
	cout << "Pascal's Triangle :" << endl;
	
	switch(value){

	case 1: //part 1
	for(int n = 0; n <= 16; n++){
		for(int p = 0; p < n+1; p++){
			long int number = calc(n,p); //using formula
			cout.width(6);
			cout << number << " ";
		}
		cout << endl;
	}
		break;

	case 2: //part 2
	for(int row = 1; row <= 17; row++){
		int start = 1;
		for(int i = 1; i <= row; i++)
		{
			cout.width(6);
			cout << start << " ";
			start = start * (row - i) / i; //recursive
		}
		cout << "\n";

	}
}

}
