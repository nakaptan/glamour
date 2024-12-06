#include<iostream>
using namespace std;

char before(char x) {
    if (x >= 'B' && x <= 'Z') {
        return x - 1; // ลดค่าตัวอักษรลง 1
    } 
    else if (x == 'A') {
        return 'Z'; // ก่อนหน้า 'A' คือ 'Z'
    } 
    else {
        return '0';
    }
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
