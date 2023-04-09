#include<iostream>
#include<vector>

using namespace std;

void generatePermutations(int t, vector<int> c, vector<int> perm) {

	// base case

	if(t == 0) {
		for(int x : perm) {
			cout << x << " ";
		}
		cout << endl;
		return;
	}

	// recursion case

	// generate permutations of 'c' that sums up to 't'

	// decide the next candidate
	
	for(int j=0; j<c.size(); j++) {
		if(c[j] <= t) {
			// we can choose 'cj' as the next candidate
			perm.push_back(c[j]);
			generatePermutations(t-c[j], c, perm);
			perm.pop_back(); // back-tracking step
		}
	}

}

int main() {

	vector<int> c = {2, 3, 5, 7};
	int t = 7;

	vector<int> perm; // to track the permutation that sums up to 't'

	generatePermutations(t, c, perm);
	
	return 0;
}