#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std;

int main() {
	int x;
	cin >> x;
	bool flag = true;
	int n = x;
	vector<int> digit;
	while (n > 0) {
		int r = n % 10;
		if (r == 0)
			flag = false;
		digit.push_back(r);
		n /= 10;
	}
	if (flag) {
		digit.push_back(0);
		digit[0] = 1;
		for (int i = 1; i < digit.size(); i++) {
			digit[i] = 0;
		}
		for (auto d : digit) 
			cout << d;
		cout << endl;
		return 0;
	}
	if (digit.size() == 1 && digit.front() == 1) {
		cout << 10 << endl;
		return 0;
	}
	for (int i = 0; i < digit.size(); i++) {
		if (digit[i] == 0) {
			digit[i] = 1;
			for (int j = 0; j < i; j++) {
				digit[j] = 0;
			}
			break;
		}
	}
	reverse(digit.begin(), digit.end());
	for (auto d : digit) 
		cout << d;
	cout << endl;
}
