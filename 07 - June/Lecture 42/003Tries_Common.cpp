#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

class node {

public :

	char ch;
	bool terminal;
	unordered_map<char, node*> childMap;
	int freq;

	node(char ch) {
		this->ch = ch;
		this->terminal = false;
		this->freq = 0;
	}

};

class trie {
	node* root;
	int m; // to store num. of words in the trie

public :

	trie() {
		root = new node('\0');
	}

	void insert(string str) {
		node* cur = root;
		for (char ch : str) {
			if (cur->childMap.find(ch) == cur->childMap.end()) {
				node* n = new node(ch);
				cur->childMap[ch] = n;
			}
			cur = cur->childMap[ch];
			cur->freq++;
		}
		cur->terminal = true;
		m++;
	}

	string longestCommonPrefix(string word) {
		node* cur = root;
		string lcp = "";
		for (char ch : word) {
			cur = cur->childMap[ch];
			if (cur->freq != m) {
				break;
			}
			lcp += ch; // cur->ch
		}
		return lcp;
	}


};


int main() {

	vector<string> words = {"flower", "flow", "flight"};


	string lcp = "";
	string word = words[0];
	for (int i = 0; i < word.size(); i++) {
		char ch = word[i];
		bool flag = true; // assume ith char of other words is equal to ch
		for (int j = 1; j < words.size(); j++) {
			string temp = words[j];
			if (temp[i] != ch) {
				flag = false;
				break;
			}
		}
		if (flag == true) {
			lcp += ch;
		} else {
			break;
		}
	}

	cout << lcp << endl;

	// trie t;
	// for (string word : words) {
	// 	t.insert(word);
	// }

	// cout << t.longestCommonPrefix(words[0]) << endl;

	return 0;
}