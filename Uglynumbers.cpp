// Ugly numbers in cpp language
//Ugly numbers are numbers whose only prime factors are 2, 3 or 5.
//The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included. 


#include <bits/stdc++.h>
using namespace std;

// Print nth Ugly number
int nthUglyNumber(int n)
{

int pow[40] = { 1 };
for (int i = 1; i <= 30; ++i)
	pow[i] = pow[i - 1] * 2;

// Initialized low and high
int l = 1, r = 2147483647;

int ans = -1;

// Applying Binary Search
while (l <= r) {


	int mid = l + ((r - l) / 2);
	int cnt = 0;

	// Iterate from 1 to mid
	for (long long i = 1; i <= mid; i *= 5)

	{

	for (long long j = 1; j * i <= mid; j *= 3)
		cnt += upper_bound(pow, pow + 31,
						mid / (i * j)) - pow;
	}
	}

	// to mid is less than n we update l
	if (cnt < n)
	l = mid + 1;
	else
	r = mid - 1, ans = mid;
}

return ans;
}


int main()
{
	int n = 150;
	cout << nthUglyNumber(n);
	return 0;
}
