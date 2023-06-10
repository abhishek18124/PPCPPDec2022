#include<iostream>
#include<unordered_map>

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
	}

	string uniquePrefix(string word) {
		node* cur = root;
		string prefix = "";
		for (char ch : word) {
			prefix += ch;
			cur = cur->childMap[ch];
			if (cur->freq == 1) {
				return prefix;
			}
		}
		return "";
	}


};

int main() {

	// assume length of word sequence is 'm' and each word has a length 'n'
	// then using a trie you'll take m.n time for insertion and m.n time
	// for getting unique prefix for each word therefore total time is
	// mn + mn = 2mn  ~ O(mn)

	string words[] = {"code", "coder", "coding", "new", "neon"};

	trie t;
	for (string word : words) {
		t.insert(word);
	}

	for (string word : words) {
		cout << t.uniquePrefix(word) << endl;
	}

	cout << endl;

	return 0;
}