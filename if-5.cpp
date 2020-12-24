#include <iostream>

using namespace std;

void comp(int a, int b, int c) {
	if (c < a) {
		int t = a;
		a = c;
		c = t;
	}
	if (b > c) {
		int t = b;
		b = c;
		c = t;
	}
	if (a > b) {
		int t = b;
		b = a;
		a = t;
	}
}

int main()
{
	int a, b, c;
	cout << "Enter parameters of a box" << endl;
	cin >> a >> b >> c;
	int r, s, t;
	cout << "Enter parameters of a parcel" << endl;
	cin >> r >> s >> t;
	comp(a, b, c);
	comp(r, s, t);
	if (c < t && b < s && a < r) {
		cout << "Yes, you can" << endl;
	}
	else {
		cout << "No, you can't" << endl;
	}
	system("pause");
}
