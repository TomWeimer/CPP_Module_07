#include <iostream>


template <typename T>
void swap( T &arg1, T &arg2)
{
	T	temp = arg1;
	arg1 = arg2;
	arg2 = temp;
}

template <typename T>
T min( T arg1, T arg2)
{
	return (arg1 <= arg2 ? arg1 : arg2);
}

template <typename T>
T max( T arg1, T arg2)
{
	return (arg1 >= arg2 ? arg1 : arg2);
}


int main()
{
	int	a = 10;
	int	b= 5;

	std::cout << "arg1:	"  << a << "	arg2:	" << b;
	std::cout << "	min is:	" <<  min<int>(a, b);
	std::cout << "	max is:	" <<  max<int>(a, b) << std::endl;
	swap<int>(a, b);
	std::cout << "arg1:	"  << a << "	arg2:	" << b << std::endl << std::endl;

	float c = 10.01;
	float d = 5.05;

	std::cout << "arg1:	"  << c << "	arg2:	" << d;
	std::cout << "	min is:	" <<  ::min<float>(c, d);
	std::cout << "	max is:	" <<  ::max<float>(c, d) << std::endl;
	::swap<float>(c, d);
	std::cout << "arg1:	"  << c << "	arg2:	" << d << std::endl << std::endl;

	double e = 10.01;
	double f = 5.05;

	std::cout << "arg1:	"  << e << "	arg2:	" << f;
	std::cout << "	min is:	" <<  ::min<float>(e, f);
	std::cout << "	max is:	" <<  ::max<float>(e, f) << std::endl;
	::swap<double>(e, f);
	std::cout << "arg1:	"  << e << "	arg2:	" << f << std::endl << std::endl;;

	std::string g = "Will Smith";
	std::string h = "Chris Julius Rock";

	std::cout << "arg1: "  << g << "	arg2: " << h << std::endl;
	std::cout << "min is: " <<  ::min<std::string>(g, h) << std::endl;
	std::cout << "max is: " <<  ::max<std::string>(g, h) << std::endl;
	::swap<std::string>(g, h);
	std::cout << "arg1: "  << g << "	arg2: " << h << std::endl;
	

}