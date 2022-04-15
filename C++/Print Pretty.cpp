#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
		/* Enter your code here */
        	cout <<showbase << nouppercase << left << hex << long(A) << endl;
        	cout << setfill('_') << setw(15) << right << showpos << fixed << setprecision(2) << B << endl;
        	cout << noshowpos << scientific << setprecision(9) << uppercase << C << endl;
	}
	return 0;

}