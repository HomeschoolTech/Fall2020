#include <iostream>

class vector{
	int sz;
	double* elem;
public:
	vector(int s): sz{s}, elem{new double[s]}{
		for(int i = 0; i < s; ++i) elem[i] = 0;
	}

	int size(){
		*this 
		return sz;}

	~vector(){
		std::cout << "destructor called " << sz << std::endl;
		delete[] elem;
	}	
};

void fun(int x){x+1;}
void func(int* x){++*x;}
void fun(int& x){++x;}

int main(){

	int* pv = new int(5);
	int x = 5;

	fun(x);
	fun(&x);

	fun(nullptr);



	std::cout << "does this work" << std::endl;
}
