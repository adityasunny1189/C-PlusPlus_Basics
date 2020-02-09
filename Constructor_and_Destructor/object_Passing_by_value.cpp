#include<iostream>
using namespace std;
class test {
	int mfg_yr;
	int exp_yr;
	int life;
public:
	void getValue() {
		cout << "Enter mfg_yr and exp_yr" << endl;
		cin >> mfg_yr >> exp_yr;
	}
	void printValue(test)
};

void test::printValue(test t1) {
	life = t1.mfg_yr - t1.exp_yr;
	cout << "Life of product is: " << life << endl;
}
int main() {
	test t1;
	t1.getValue();
	t1.printValue();
}
