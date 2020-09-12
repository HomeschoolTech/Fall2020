#include<algorithm>

using std::copy;

class vector{
	int sz;
	double* elem;
public:
	vector(int s) : sz{s}, elem{new double[sz]}{
		for(int i = 0; i < sz; ++i) elem[i] = 0.0;
	}

	vector(initializer_list<double> lst): sz{lst.size()}, elem{new double[sz]}{
		copy(lst.begin(), lst.end(), elem);
	}

	~vector(){ delete[] elem; }

	void set(int n, double val){ elem[n] = val; }
}
