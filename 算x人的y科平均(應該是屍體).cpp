#include <iostream>
using namespace std;

int main()
{
	int sub, men;
	cout << "請輸入要算{幾個學生}的成績平均:\n";
	cin >> men;
	cout << "請輸入要算{幾種}科目的平均(小數點後會直接捨去):\n";
	cin >> sub;
	int num[sub][men], AL[men];
	for ( int t = 0 ; t < sub ; t ++ ){
		cout << "***請輸入第" << t+1 << "個科目的成績***\n";
		for ( int t2 = 0 ; t2 < men ; t2 ++ ){
			cout << "請輸入第" << t+1 << "個科目，第" << t2+1 << "位學生的成績:"; 
			cin >> num[t][t2];
		}
	}
	for ( int t = 0 ; t < men ; t ++ ){
		for ( int t2 = 0 ; t2 < sub ; t2 ++ ){
			AL[t] += num[t2][t];
		}
	}
	for ( int t = 0 ; t < men ; t ++ ){
		AL[t] = AL[t] / sub;
	}
	for ( int t = 0 ; t < men ; t ++ ){
		cout << "第" << t+1 << "位學生的" << sub << "科的成績平均是:" << AL[t] << "\n"; 
	}
	
	return 0;
}