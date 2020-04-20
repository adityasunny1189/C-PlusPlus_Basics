class Fraction {
    private:
        int numerator;
        int denominator;
    public:
        Fraction() {
            //Default Constructor Called
            cout << "Default Constructor Called" << endl;
        }
        Fraction(int num, int den) {
            //Parameterised Constructor
            cout << "Parameterised Constructor Called" << endl;
            this -> numerator = num;
            this -> denominator = den;
        }

        //Getter Function
        void Getter(int num, int den) {
            this -> numerator = num;
            this -> denominator = den;
        }

        //Print Function to print the fraction
        void Print() const {
            cout << "Fraction: " << this -> numerator << " / " << this -> denominator << endl;
        }

        ~Fraction() {
            //Destructor Called
            cout << "Destructor Called" << endl;
        }
};