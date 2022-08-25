#include<iostream>
using namespace std;


class FRACTION{
	int num, den;
	public:
	
		void input(){
			cout << "Enter the numerator: ";
			cin >> num;
			cout << "Enter the denominator: ";
			cin >> den;
		}
		
//		void print(){
//			cout << num << "+" << den << "i" << endl; 
//		}
		
		void sum(FRACTION c1, FRACTION c2){
			int res1 = (c1.num * c2.den) + + (c2.num * c1.den);
			int res2 = c1.den * c2.den;
			
		}

		void sub(FRACTION c1, FRACTION c2){
			num = c1.num + c2.num;
			den = c1.den + c2.den;
		}

		void mul(FRACTION c1, FRACTION c2){
			num = c1.num + c2.num;
			den = c1.den + c2.den;
		}
};





int main(){
	FRACTION c1, c2, c3;
	cout << "Enter first FRACTION number: \n";
	c1.input();
	cout << "Enter second FRACTION number: \n";
	c2.input();
	
	cout << "Sum is: ";
	c3.sum(c1, c2);
	c3.print();
	 

	return 0;
}
