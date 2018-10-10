#include "Solution.h"
#include <vector>
#include <map>
#include <iostream>
using std::vector;
using std::map;

Solution::Solution()
{
}


Solution::~Solution()
{
}

vector<int> Solution::twoSum(vector<int>& nums, int target) {
	vector<int> vec(2);
	map<int, int> map;
	int index = 0;
	int vec_len = nums.size();
	for (auto it = nums.begin(); it != nums.end(); it++,index++) {
		map[*it]=index;
		std::cout <<"map"<< *it << ": " << index << std::endl;
	}
	index = 0;
	for (auto it = nums.begin(); index<vec_len; it++, index++) {
		int left = target - *it;
		std::cout << *it << " " << left << std::endl;
		auto result = map.find(left);
		if (result != map.end()) {
			vec[0] = index;
			vec[1] = result->second;
			std::cout << vec[0] << ": " << vec[1] <<"?"<<*it<< std::endl;
			break;
		}
	}
	return vec;
}
