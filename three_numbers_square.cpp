#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>
#include <iterator>
using namespace std;

const int MAX_RANGE = 250;

int main(int argc, char* argv[]) {

	set<int> set_of_integers;
	set<int> result;
	vector<int> solution_set;
	bool flag;
	int max_poss_num;




	for(int number =0; number < MAX_RANGE; number ++) {
		
		max_poss_num = (int)ceil(pow(number, 0.5));

		for (int i =0; i <= max_poss_num; i++) {
			for (int j = i; j <= max_poss_num; j++) {
				for( int k =j; k <= max_poss_num; k++) {
		
					if( number == pow(i,2.0) + pow(j,2.0) + pow(k,2.0)) {
						set_of_integers.insert(number);
						flag = true;
						break;	
					}
		
				}
				if (flag) {
					break;
				}
			}
			if (flag) {
				break;
			}
		}
		if (flag) {
			flag = false;
		}
	}


	// let's have a set that contains the elements 
	set<int> full_range;
	for (int i =0; i < MAX_RANGE; i++) {
		full_range.insert(i);
	}

	// let's compute the set difference
	std::set_difference(full_range.begin(), full_range.end(), set_of_integers.begin(), set_of_integers.end(), std::inserter(result, result.end()));
	

	std::cout << "myset contains:";
	for (std::set<int>::iterator it = result.begin(); it !=result.end(); it++) {
		std::cout << ' ' << *it;
	}

	std::cout << '\n';

	return 0;
}
