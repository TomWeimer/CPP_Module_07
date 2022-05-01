#ifndef ITER_H
# define ITER_H
#include <iostream>

template<typename T>
void iter( T *array, int sizeArray, void (*f)(T const &))
{
	if (array == NULL)
		return ;
	for(int i = 0; i < sizeArray; i++)
	{
		f(array[i]);
	}
}
template<typename T>
void print(T const &toPrint)
{
	std::cout << toPrint << std::endl;
}

#endif