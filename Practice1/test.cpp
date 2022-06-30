#include<iostream>
#include<vector>
#include<algorithm>
#include"calss1.h"
int main() {
	using namespace std;
	vector <string>strs = {"flower","flow","flight"};
	string ans;
	ans = longestCommonPrefix(strs);
	cout<< ans <<endl;
	return 0;
}