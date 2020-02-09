#include<iostream>
using namespace std;
class test {
	int mfg_yr;
	int exp_yr;
	int life;
public:
	void getValue() {
		cout << "Enter manufacture and expiry year" << endl;
		cin >> mfg_yr >> exp_yr;
	}
	void printValue(test*);
};
void test::printValue(test *tm) {
	life = tm->exp_yr - tm->mfg_yr;
	cout << "life of product is: " << life << endl;
}
int main() {
	test t1;
	t1.getValue();
	t1.printValue(&t1);
}
