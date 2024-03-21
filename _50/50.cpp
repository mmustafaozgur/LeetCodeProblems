#include<iostream>

using namespace std;

class Solution {
public:
	double myPow(double x, long n) {
		if (x == 0) {
			return 0.0;
		}
		if (n == 0) {
			return 1.0;
		}
		if (n < 0) {
			x = 1 / x;
			n = -n;
		}

		double result = 1.0;

		while (n > 0) {
			if (n % 2 == 1) {
				result *= x;
			}
			x *= x;
			n /= 2;
		}
		return result;
	}
};

int main() {
	Solution solution;
	cout << solution.myPow(2.0, 10) << endl;
	return 0;
}

