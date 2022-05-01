# include "Array.hpp"
int main()
{
	Array <int>	numbers(9);
	numbers[8] = 12;
	try 								{ cout << numbers << endl;}
	catch (Array<int>::outOfArray e)	{ cout << (e.what()) << endl; }

	Array <double>	numbersDouble(9);
	numbersDouble[8] = 12.01;
	try 								{ cout << numbersDouble << endl;}
	catch (Array<int>::outOfArray e)	{ cout << (e.what()) << endl; }
	
	Array <double>	numbersDouble2(numbersDouble);
	try 								{ cout << numbersDouble2 << endl;}
	catch (Array<int>::outOfArray e)	{ cout << (e.what()) << endl; }



	/* Array <int>	numbersEmpty; */
	/* try 								{ cout << numbersEmpty[0] << endl;} */
	/* catch (Array<int>::outOfArray e)	{ cout << (e.what()) << endl; } */

}