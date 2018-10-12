#include "Solution.h"
#include <vector>
#include <map>
#include <iostream>
#include<algorithm>
using std::vector;
using std::map;

Solution::Solution()
{
}


Solution::~Solution()
{
}

struct number_pair {
	int index;
	int value;
};

bool comp(const number_pair &a, const number_pair &b) {
	     return a.value < b.value;
	
}

vector<int> Solution::twoSum(vector<int>& nums, int target) {
	vector<int> vec(2);
	map<int, int> map;
	int index = 0;
	int vec_len = nums.size();
	vector<number_pair> num_pairs;
	for (auto it = nums.begin(); it != nums.end(); it++,index++) {
		number_pair m_pair;
		m_pair.index =index;
		m_pair.value = *it;
		//std::cout << m_pair.index << "-> " << m_pair.value << std::endl;
		num_pairs.push_back(m_pair);
	}
	sort(num_pairs.begin(), num_pairs.end(), comp);
	//for (auto it = num_pairs.begin(); it != num_pairs.end(); it++) {
		//std::cout << it->value << " " << it->index << std::endl;
	//}
	auto begin = num_pairs.begin();
	auto end = num_pairs.end()-1;
	while (begin < end) {
		while ((begin->value + end->value) > target) {
			end--;
		}
		if ((begin->value + end->value) == target) {
			vec[0] = begin->index;
			vec[1] = end->index;
			break;
		}
		begin++;
	}
	return vec;
}


