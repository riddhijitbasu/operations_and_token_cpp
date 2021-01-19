#include<iostream>
using namespace std;
int main()
{
	cout << "size of char " << sizeof(char) << " byte" << "\n";
	cout << "size of int " << sizeof(int) << " bytes" << "\n";
	cout << "size of float " << sizeof(float) << " bytes" << "\n";
	cout << "size of double " << sizeof(double) << " bytes" << "\n";
	
	// 1st part done; now 2nd part
	
	float x;
	float y;
	float prod;
	cout<< "\n please enter one number to be multiplied \n";
	cin>> x;
	cout << "you entered " << x << "\n now please enter your second number with which you want to multiply " << x << "\n";
	cin>> y;
	cout << "\n you entered " << x << " to be multiplied by " << y;
	prod= x * y ;
	cout << "\n your requested answer is " << prod;
	return 0;
}

