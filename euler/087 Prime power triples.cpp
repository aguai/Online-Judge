#include <iostream>
#include <vector>
#include <set>
#include "PrimeSieve.hpp"

long pow_2(long);
long pow_3(long);
long pow_4(long);

int main(){
	int cap = 50000000;
	auto primes = pe::PrimeSieve<7072>::make_vector();
	std::set<long> ans;
	for (auto i : primes) {
        auto p1 = pow_2(i);
 		for (auto j : primes) {
            auto p2 = pow_3(j);
			for (auto k : primes) {
				auto tmp = p1 + p2 + pow_4(k);
				if(tmp > cap)
                    break;
                else
                    ans.insert(tmp);
			}
		}
	}
	std::cout << ans.size() << std::endl;
	return 0;
}

long pow_2(long x){
	return x * x;
}
long pow_3(long x){
	return x * pow_2(x);
}
long pow_4(long x){
	return x * pow_3(x);
}
