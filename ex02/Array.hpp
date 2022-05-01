#ifndef ARRAY_H
# define ARRAY_H
# include <iostream>

using namespace std;

template <typename T>
class Array
{
	private:
	unsigned int size_;
	T	*array_;
	
	public:
	Array<T>(void);								//	create empty array
	Array<T>(unsigned int);						//	create array de n size
	Array<T>(const Array &);					//	
	Array<T>& operator=(const Array &);			//
	T& operator[](int index)const;
	~Array(void);

	unsigned int size(void)const { return this->size_; }
	T *getArray(void)const { return array_ ; }
	class outOfArray : std::exception
	{
		public:
		const char *what(void) const throw()
		{
			return ("Exception: Out of the Array.\n");
		}
	};
	
};

template <typename T>
Array<T>::Array(void)
{
	cout << "Array empty constructor called" << endl;
	this->array_ = new T();
	this->size_ = 0;
}

template <typename T>
Array<T>::Array(unsigned int size)
{
	cout << "Array full constructor called" << endl;
	this->array_ = new T[size];
	this->size_ = size;
}

template <typename T>
Array<T>::Array(const Array<T>& origin)
{
	cout << "Array copy constructor called" << endl;
	this->size_ = origin.size();
	this->array_ = new T[this->size_];
	T *arrayCopy = origin.getArray();
	for (unsigned int i = 0; i < this->size_; i++)
	{
		this->array_[i] = arrayCopy[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T> &origin)
{
	if (this == &origin)
		return (*this);
	if (this->size_ == 0)
	{
		delete (this->array_);
		this->array_ = new T();
	}
	else
	{
		delete[] (this->array_);
		this->array_ = new T[origin.size()];
		T *arrayCopy = origin.getArray();
		for (unsigned int i = 0; i < origin.size(); i++)
			this->array_[i] = arrayCopy[i];
	}
	return (*this);
}

template <typename T>
T& Array<T>::operator[](int index)const
{
	if (static_cast<unsigned int> (index + 1) > (this->size_) || index < 0)
		throw outOfArray();
	return (this->array_[index]);
}

template <typename T>
Array<T>::~Array(void) 
{
	cout << "destructor called" << endl;
	delete [] this->array_; 
}

template< typename T >
std::ostream &	operator << ( std::ostream & out, Array<T> const & array )
{
	if (array.size()) {
		uint i = 0;
		for (; i < array.size() - 1; i++)
			out << array[i] << ", ";
		out << array[i];
	}
	return out;
}


#endif