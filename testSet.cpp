#include <iostream>
#include <set>
#include <vector>
using namespace std;

bool  func(vector<int>&  vec)
{
	return true;
}

bool containsDuplicate(vector<int>& nums) 
{
	set<int> myset(nums.begin(), nums.end());
	if (myset.size() < nums.size())
		cout << myset.size();
		return true;
	return false;
}

int main(int argc, char** argv)
{
	vector<int> vec{ 1,2,3,4,5,2,6,7,8 };
	std::cout << containsDuplicate(vec) << std::endl;
	return 0;
}