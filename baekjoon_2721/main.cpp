#include <iostream>
using namespace std;

int t, i1;
int f = 2, tmps = 1, pre = 1,  psum=3;
int sum[300] = { 3 };

int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> i1;
		if(sum[i1-1] != 0) cout << sum[i1-1]<<endl;
		else {
			for (; pre < i1; pre++) {
				tmps += f;
				psum += 3 * tmps;
				sum[pre] = sum[pre - 1] + psum;
				f++;
			}
			cout << sum[pre-1] << endl;
		}
	}
	return 0;
}