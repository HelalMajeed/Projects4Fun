#include <iostream> 
#include <vector> 
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (i & 1 && a[i] & 1 ^ 1) {
			for (int j = i + 1; j < n; j++) {
				if (a[j] & 1) swap(a[i], a[j]);
			}
		}
		else if (i & 1 ^ 1 && a[i] & 1) {
			for (int j = i + 1; j < n; j++) {
				if (a[j] & 1 ^ 1) swap(a[i], a[j]);
			}
		}
	}
	bool ans = true;
	for (int i = 0; i < n; i++) {
		if (a[i] & 1 ^ 1 && a[i+1] & 1 ^ 1) {
			ans = false;
			break;
		}
		else if (a[i] & 1 && a[i+1] & 1) {
			ans = false;
			break;
		}
	}
	cout << (ans ? "YES" : "NO") << '\n';
	for (int A : a)
		cout << A << " ";
	cout << '\n';
}
