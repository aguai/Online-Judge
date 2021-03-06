#include <iostream>
#include <unordered_map>
#include <algorithm>
#include "BigInteger.hpp"

#define LIMIT 10000

int main(){
	std::unordered_map<std::string, std::pair<std::string, int>> perms;
	for (int i = 0; i < LIMIT; i++){
		BigInteger x(i);
		x = x * x * x;
		std::string s = x.to_string();
		std::sort(s.begin(), s.end());
		perms.insert({s, {x.to_string(), 0}});
        auto c = ++perms[s].second;
		if (c == 5) {
			std::cout << perms[s].first << std::endl;
			break;
		}
	}
	return 0;
}
