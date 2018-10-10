// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include  "solution.h"

using namespace std;
int main()
{
	Solution* solution = new Solution();
	int a[4] = { 2, 7, 11, 15 };
	int len = sizeof(a) / sizeof(a[0]);
	vector<int> vec(a,a+len);
	vector<int> result = solution->twoSum(vec,9);
	cout << result[0]<<" "<<result[1] << endl;
    return 0;
}

