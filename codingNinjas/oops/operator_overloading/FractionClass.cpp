class Fraction {
private:
	int numerator;
	int denominator;
public:
	Fraction() {
		//Default Constructor
	}
	Fraction(int numerator, int denominator) {
		this -> numerator = numerator;
		this -> denominator = denominator;
		//Parameterized Constructor
	}
	void print() {
		cout << this -> numerator << " / " << this -> denominator << endl;
	}
	void Simplify() {
		int j = min(this -> numerator, this -> denominator);
		int gcd = 1;
		for(int i = j; i > 0; i--) {
			if(this -> numerator % i == 0 && this -> denominator % i == 0) {
				gcd = i;
				break;
			}
		}
		this -> numerator = this -> numerator / gcd;
		this -> denominator = this -> denominator / gcd;
	}
	Fraction operator+(Fraction const &f2) const {
		int num = (this -> numerator * f2.denominator) + (this -> denominator * f2.numerator);
		int den = (this -> denominator * f2. denominator);
		Fraction fAns(num, den);
		fAns.Simplify();
		return fAns;
	}
	Fraction operator*(Fraction const &f2) const {
		int num = (this -> numerator * f2.numerator);
		int den = (this -> denominator * f2. denominator);
		Fraction fAns(num, den);
		fAns.Simplify();
		return fAns;
	}
	Fraction operator++() {
		this -> numerator = this -> numerator + this -> denominator;
		Simplify();
		return *this;
	}
};
