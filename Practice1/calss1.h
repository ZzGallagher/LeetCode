#pragma once
#ifndef CALSS1_H_

#include<unordered_map>
#include<vector>
#include<string>

//std::vector<int> twoSum(std::vector<int>& nums, int target) {
//	//1.两数之和 哈希表算法
//	std::unordered_map<int, int> hashtable;
//	for (int i = 0; i < nums.size(); i++) {
//		auto it = hashtable.find(target - nums[i]);
//		if (it != hashtable.end()) {
//			return { it->second, i };
//		}
//		hashtable[nums[i]] = i;
//	}
//	return {};
//	}
//
//bool isPalindrome(int x) {
//	//9.回文数
//	if (x < 0 || (x % 10 == 0 && x != 0)) {
//		return false;
//	}
//	int revertedNumber = 0;
//	while (x > revertedNumber) {
//		revertedNumber = revertedNumber * 10 + x % 10;
//		x /= 10;
//	}
//	return x == revertedNumber || x == revertedNumber / 10;
//}
//
//int romanToInt(std::string s) {
//	//13.罗马数字转整数
//	std::unordered_map<char, int> symbolValue = { 
//		{'I',1},
//		{'V',5},
//		{'X',10},
//		{'L',50},
//		{'C',100},
//		{'D',500},
//		{'M',1000},
//	};
//	int ans = 0;
//	int n = s.length();
//	for (int i = 0; i < n; i++) {
//		int value = symbolValue[s[i]];
//		if (i < n - 1 && value < symbolValue[s[i + 1]]) {
//			ans -= value;
//		}
//		else
//		{
//			ans += value;
//		}
//	}
//	return ans;
//}
//
//int romanToInt(std::string s) {
//	//13.罗马数字转整数
//	int ans = 0;
//	int n = 0;
//	int lastn = 0;
//	for (int i = s.length() - 1; i >= 0; --i) {
//		switch (s[i])
//		{
//		case 'I':
//			n = 1;
//			break;
//		case'V':
//			n = 5; 
//			break;
//		case'X':
//			n = 10;
//			break;
//		case'L':
//			n = 50;
//			break;
//		case'C':
//			n = 100;
//			break;
//		case'D':
//			n = 500;
//			break;
//		case'M':
//			n = 1000;
//			break;
//		default:
//			break;
//		}
//		if ( n < lastn) {
//			n = -n;
//		}
//		lastn = n;
//		ans += n;
//	}
//	return ans;
//}

#include<algorithm>
//提供函数min()输出两者中最小值
//std::string longestCommonPrefix(std::vector<std::string>& strs) {
//	//14.最长公共前缀-横向比较
//	int count = strs.size();
//	if (!count) {
//		return "";
//	}
//	std::string prefix = strs[0];
//	for (int i = 1; i < count; ++i) {
//		prefix = longestCommonPrefix(prefix, strs[i]);
//		if (!prefix.size()) {
//			return "";
//		}
//	}
//	return prefix;
//}
//std::string longestCommonPrefix(const std::string str1,const std::string str2) {
//	int index = 0;
//	int length = std::min(str1.length(), str2.length());
//	while (index < length && str1[index] == str2[index]) {
//		++index;
//	}
//	return str1.substr(0, index);
//}

//std::string longestCommonPrefix(std::vector<std::string>& strs) {
//	//横向比较2
//	if (!strs.size()) {
//		return "";
//	}
//	std::string prefix = strs[0];
//	for (int i = 1; i < strs.size();i++) {
//		int j;
//		for (j = 0; j < std::min(prefix.length(), strs[i].length()) && prefix[j] == strs[i][j]; j++) {
//		}
//		prefix = prefix.substr(0, j);
//	}
//	return prefix;
//}


#endif // !CALSS1_H_