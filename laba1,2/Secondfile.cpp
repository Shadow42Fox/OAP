#include <iostream>
void main()
{
	/*/double z, y, n = 2, b = -0.12, x = 1.3e-5; //вариант 2
	z = 1/(x- 1) + sin(x) - sqrt(n);
	y = (exp(-b)+1)/2*z;
	std::cout << "z=" << z;
	std::cout << " y=" << y;*/

	/*double w, v, b = 40, x = 1.1, a = 5e-6;
	w = (a+b)*tan(x)/(x+1);
	v = 1/2 * b - sqrt(w-a*b);
	std::cout << "w=" << w;
	std::cout << " v=" << v;*/

	double z, u, y = 0.5, c = 1.4, x = 2e-4;
	z = (exp(c*x))/y+3;
	u = sqrt(pow(z,3)-0.1*z);
	std::cout << "z=" << z;
	std::cout << " u=" << u;

	/*double t, u, k = 6, r = 5e-7, x = 0.0095;
	t = tan(x) + r*(1-log(x));
	u = t/(pow(x,3) + 1)/(1-exp(k-4));
	std::cout << "t=" << t;
	std::cout << " u=" << u;*/
}

