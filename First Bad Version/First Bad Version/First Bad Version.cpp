// First Bad Version.cpp : Defines the entry point for the console application.
//

/*
You are a product manager and currently leading a team 
to develop a new product. Unfortunately, the latest version
of your product fails the quality check. Since each 
version is developed based on the previous version, 
all the versions after a bad version are also bad.

Suppose you have n versions [1, 2, ..., n] and you 
want to find out the first bad one, which causes all the
following ones to be bad.

You are given an API bool isBadVersion(version) which 
will return whether version is bad. Implement a function
to find the first bad version. You should minimize the 
number of calls to the API.
*/
#include "stdafx.h"

bool isBadVersion(int version);

class Solution {
public:
	int firstBadVersion(int n) {
		/*
		int i = 1;
		while (i < n && !isBadVersion(i))
		{
			++i;
		}
		return i;
		*/
		int left = 1;
		int right = n;
		int mid = 0;
		while (left < right)
		{
			mid = left + (right - left) / 2;
			if (!isBadVersion(mid))
				left = mid + 1;
			else
				right = mid;
		}
		return left;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

