#include<iostream>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        long sqrt = 0;
        long i;
        for (i = 0; i <= x; i++) {
            sqrt = i * i;

            if (sqrt == x) {
                break;
            }
            else if (sqrt > x) {
                i--;
                break;
            }
        }
        return i;
    }
};

int main()
{
	Solution sol;

	cout << sol.mySqrt(4) << endl;
	cout << sol.mySqrt(8) << endl;
	cout << sol.mySqrt(9) << endl;
	cout << sol.mySqrt(10) << endl;
	cout << sol.mySqrt(16) << endl;
	cout << sol.mySqrt(25) << endl;
	cout << sol.mySqrt(36) << endl;
	cout << sol.mySqrt(49) << endl;

    return 0;
}