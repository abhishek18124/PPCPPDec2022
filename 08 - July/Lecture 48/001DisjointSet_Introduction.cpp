/*

	Implementation of the disjoint set union data structure.

*/

#include<iostream>
#include<unordered_map>

using namespace std;

template <typename T>
class disjointSet {

	unordered_map<T, T> parentMap; // to store a mapping b/w vertices & their parents

public :

	void createSet(T x) {
		parentMap[x] = x;
	}

	T findSet(T x) {
		// base case
		if (parentMap[x] == x) {
			return x;
		}

		// recursive case
		return findSet(parentMap[x]);
	}

	void unionSet(T x, T y) {
		T l_x = findSet(x);
		T l_y = findSet(y);
		if (l_x != l_y) {
			parentMap[l_x] = l_y; // or parentMap[l_y] = l_x;
		}
	}

};

int main() {

	disjointSet<int> ds;

	ds.createSet(1);
	ds.createSet(2);
	ds.createSet(3);
	ds.createSet(4);

	ds.unionSet(2, 3);

	cout << ds.findSet(2) << " " << ds.findSet(3) << endl;

	ds.unionSet(1, 4);

	cout << ds.findSet(1) << " " << ds.findSet(4) << endl;

	ds.unionSet(3, 4);

	cout << ds.findSet(2) << endl;

	return 0;
}