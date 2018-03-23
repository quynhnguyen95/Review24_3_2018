#include <iostream>
#include <cmath>

using namespace std;

int main (){
	/* Addition 2 so A va B
	float numberA, numberB, total;
	cout<< "enter number a: ";
	cin >> numberA;
	cout<< "\nenter number b: ";
	cin >> numberB;
	total = numberA + numberB;
	cout<< "A + B = " << total;

	
	/*swapping a and b;
	float a, b, temp;
	cout << "Before swapping." << endl;
		cout<< "enter number a: ";
		cin >> a;
		cout<< "enter number b: ";
		cin >> b;
		temp = a;
		a = b;
		b = temp;
	cout << "After swapping." << endl;
	    cout << "a = " << a << ", b = " << b << endl;*/
	    
	    
	/*check Whether Number is Even or Odd 
	int a;
	cout<< "enter number a: ";
	cin >> a;
	if (a % 2 == 0) cout<<a <<" is even";
	else cout<<a << " is old";*/
	
	
	/*finding Largest Number
	float a, b, c;
	cout<< "enter number a, b, c: ";
	cin >> a >> b >> c;
	if (a>=b && a>=c) cout<<"largest number is " <<a;
	else {
		if (b>=a && b>=c) cout<<"largest number is " <<b;
		else cout<<"largest number is " <<c;
	}*/
	
	
	/*finding smallest Number
	float a, b, c;
	cout<< "enter number a, b, c: ";
	cin >> a >> b >> c;
	if (a<=b && a<=c) cout<<"largest number is " <<a;
	else {
		if (b<=a && b<=c) cout<<"largest number is " <<b;
		else cout<<"largest number is " <<c;
	}*/
	
	
	/*Finding Roots of a Quadratic Equation
	float a, b, c, x1, x2, delta;
	cout<< "enter number a, b, c: ";
	cin >> a >> b >> c;
	delta = pow(b,2)-4*a*c;
	if (a == 0) cout<< "equation is no root!";
	else if (delta == 0)
		{
			x1 = -(pow(b,2) - sqrt(delta))/(2*a);
			cout<<"equation have roots equal: x1 = x2 = " << 	x1;
		}
	else if (delta > 0)	
		{
			x1 = -(pow(b,2) - sqrt(delta))/(2*a);
			x2 = -(pow(b,2) + sqrt(delta))/(2*a);
			cout<<"equation have two different roots: x1 = " << x1 <<endl;
			cout<<"x2 = " << x2 <<endl;
		}
	else{
		float realPart = -b/(2*a);
        float imaginaryPart =sqrt(-delta)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;			
		}*/
		
	
	/*Sum of Natural Numbers
	float n, sum=0;
	cout<< "enter number n: ";
	cin >> n;
	for (int i = 1; i<=0; i++)	{
		sum += i;
	}
	cout << "Sum = " << sum;*/
	
	/*Find Factorial of a given number
	float i, n, fact=1;
	cout<<"enter number n: ";
	cin >> n;
	for (int i = 1; i <= n; i++){
		fact *= i;
	}
	cout << "Factorial of " << n << " = " << fact;*/
	return 0;
}



