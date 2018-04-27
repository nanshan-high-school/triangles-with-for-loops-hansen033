#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "please input the num:";
	cin >> x;
	cout << "type 1:\n";
	for ( int t = 0 ; t < x ; t ++ ){
		for ( int t2 = 0 ; t2 < t + 1 ; t2 ++ ){
			cout << "*";
		}
		cout << "\n";
	}
	cout << "type 2:\n";
	for ( int t = x ; t > 0 ; t -- ){
		for ( int t2 = t ; t2 > 0 ; t2 -- ){
			cout << "*";
		}
		cout << "\n";
	}
	cout << "type 3:\n";
	for ( int t = 0 ; t < x ; t ++ ){
		for ( int t2 = x - t ; t2 > 1 ; t2 -- ){
			cout << " ";
		}for ( int t3 = 0 ; t3 < t + 1 ; t3 ++ ){
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
} 
