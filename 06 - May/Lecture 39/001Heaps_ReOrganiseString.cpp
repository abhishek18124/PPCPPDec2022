
#include<iostream>
#include<queue>

using namespace std;

string reOrganise(string str) {

    // 1. build a frequency array
    int freq[26] = {0};
    for (char ch : str) {
        freq[ch - 'a']++;
    }

    // 2. build a maxheap to track characters and their frequencies
    priority_queue<pair<int, char>> maxHeap; // by default maxHeap of pair is built according to the first element of the pair

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            maxHeap.push({freq[i], i + 'a'}); // or maxHeap.push(make_pair(freq[i], i+'a'))
        }
    }

    // while (!maxHeap.empty()) {
    //     pair<int, char> maxPair = maxHeap.top();
    //     maxHeap.pop();

    //     cout << maxPair.first << " " << maxPair.second << endl;
    // }

    string out = "";

    while (!maxHeap.empty()) {
        if (maxHeap.size() == 1) {
            pair<int, char> maxPair = maxHeap.top();
            maxHeap.pop();

            if (maxPair.first == 1) {
                out += maxPair.second;
            } else {
                // reorganisation is not possible
                out = "";
            }

        } else {
            pair<int, char> firstMaxPair = maxHeap.top();
            maxHeap.pop();

            out += firstMaxPair.second;
            firstMaxPair.first--;

            pair<int, char> secondMaxPair = maxHeap.top();
            maxHeap.pop();

            out += secondMaxPair.second;
            secondMaxPair.first--;

            if (firstMaxPair.first > 0) {
                maxHeap.push(firstMaxPair);
            }

            if (secondMaxPair.first > 0) {
                maxHeap.push(secondMaxPair);
            }
        }
    }

    return out;

}

int main() {

    string str = "aaab";

    cout << reOrganise(str) << endl;

    return 0;
}