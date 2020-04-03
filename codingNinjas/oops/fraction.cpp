class fraction {
private:
	int numerator;
	int denominator;
public:
	fraction(int num, int den) {
		this -> numerator = num;
		this -> denominator = den;
	}
	void simplify() {
		int gcd = 1;
		int j = min(this -> numerator, this -> denominator);
		for(int i = 0; i <= j; i++) {
			if(this -> numerator % i == 0 && this -> denominator % i == 0) {
				gcd = i;
			}
		}
		this -> numerator /= gcd;
		this -> denominator /= gcd;
	}
	void add(fraction f2) {
		int lcm = this -> denominator * f2.denominator;
		int x = this -> numerator * f2.denominator;
		int y = this -> denominator * f2.numerator;
		this -> numerator = (x + y);
		this -> denominator = lcm;
		simplify();
	}
	void print() {
		cout << "numerator / denominator: " << this -> numerator << " / " << this -> denominator << endl;
	}
};
