#include<bits/stdc++.h>
using namespace std;
int main() {
	unordered_map<string, int> ourMap;
	ourMap["abc"] = 1;
	ourMap["dec"] = 2;
	ourMap["qbc"] = 3;
	ourMap["rec"] = 6;
	ourMap["apc"] = 9;
	ourMap["dmc"] = 4;

	unordered_map<string, int>::iterator it = ourMap.begin();
	while(it != ourMap.end()) {
		cout << "Key: " << it->first << " Value: " << it->second << endl;
		it++;
	}
}