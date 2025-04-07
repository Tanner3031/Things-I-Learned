#include <iostream>
#include <limits>


int numAdd(int x, int y) //adds two integers when called and supplied with the input.
{

	return x + y;
}

int numSub(int x, int y)
{
	return x - y; 
}

int numDiv(int x, int y)
{
	return x / y;
}

int numMult(int x, int y)
{
	return x * y;
}

int decideMath(char mathType, int num1, int num2)
{
	

	if (mathType == '+')
	{
		return numAdd(num1, num2);

	}
	else if (mathType == '-')
	{
		return numSub(num1, num2);
	}
	else if (mathType == '/')
	{
		return numDiv(num1, num2);
	}
	else if (mathType == '*')
	{
		return numMult(num1, num2);
		
	}
	else {
		std::cout << "you did something wrong lol " << '\n';
		return 0;
	}
	
}



char getSymbol()					// Asks user for math type +-/*
{
	std::cout << "Enter +, -, /, or *: " << '\n';
	char mathType{};
	std::cin >> mathType;

	return mathType;
}

int getInteger()
{
	std::cout << "Enter a number: " << '\n';
	int num{};
	std::cin >> num;
	return num;
}

void basicCalc()
{
	int num1{ getInteger() };
	int num2{ getInteger() };

	char mathType{ getSymbol() };

	std::cout << "After mathing I came up with: " << decideMath(mathType, num1, num2) << '\n';

}

int getUserChoice()  //We prompt the user for a number, either 1, or 2.
{
	int userChoice{}; //stores user input of 1 or 2

	std::cout << "Enter 1 for basic calculations. \n" << "Enter 2 for interest rate calculator. \n";

	while (true) 
	{
		std::cin >> userChoice;
		

		if (std::cin.fail() || userChoice > 2 || userChoice < 1)					//check if input is valid and within expected range.
		{
			std::cin.clear();														//clears the input buffer
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');		//ignores any invalid input

			std::cout << "Please enter 1, or 2. ";
		}
		else
		{
			
			if (std::cin.peek() != '\n')											//check if there are any extra characters in the input buffer
			{
				std::cin.clear();													//clears the input buffer
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignores any invalid input
				std::cout << "Please enter 1, or 2. ";

			}
			else
			{
				break;																//exits the loop if input is valid
			}
		}
	}
	
	return userChoice;

}

void decideFunction()
{

	//first thing we need to do is get the users choice and depending on that choice we need to call different functions
	if (getUserChoice() == 1)
	{
		basicCalc();
	}
	else if (getUserChoice() == 2)
	{
		std::cout << "Notworkyet ";
	}
	
}


/*
* Now that we can get the users choice, depending on the input we will call different functions
* using a new function
* 

*/
