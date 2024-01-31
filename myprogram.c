#include "mylibrary.h"

int sum(int n)
{
	//a for loop is implemented in order to sum up all the numbers  through n
	int result = 0;

	//TODO: 1+2+...+n
	for (int i = 1; i <= n; i++) {
        result += i;
    }
	return result;
}

//this function aims to detect and multiply even number in a given array
int product_of_even_numbers(int *array, int count)
{
        int product = 1;
        for (int i=0;i<count;++i)
        {
		//detects even numbers using remainder
        if (array[i] % 2 == 0) {
            // Multiplyy even numbers
            product *= array[i];
        }
        //TODO: only multiply even numbers, e.g., 2. Skip odd numbers, e.g., 3
        }
        return product;
}

//this function pass through an array in order to find the maximum number
int max_of_numbers(int *array, int count)
{
        //TODO: return the maximum number from the array
        int max = array[0];
	//max number is set to the first item of the array
        for (int i = 1; i < count; ++i) {
        if (array[i] > max) {
	
            max = array[i];  // Update max if a larger number is found
        }
    }
        return max;
}

int reversed_number(int number)
{
        //TODO: if input is 12345, return 54321
	// Initialize a variable named reversed to store the reversed number
        int reversed = 0;
         while (number != 0) {
		 // The remainder of 10 gives the last digit of the input number
	int i = number % 10;
	// int i is the last digit 
	// The obtained last digit is appended to the reversed number, and reversed number is multiplied by 10 in order to shift left by one digit
        reversed = reversed * 10 + i;
	//the last digit of the input number is deleted for continuity of while loop
        number /= 10;
    }

        return reversed;
}
//this function gets an index and return the corresponding letter according to ASCII values 
char alphabet_index(int index)
{
        //TODO: for index 0, return A. index 1, B, etc. until 25 for Z.
        //if index is out of range, return space ' '.
	if(index >= 0 && index <= 25) {
	return 'A' + index;
	//it returns the character whose ASCII value is calculated by adding the index to the ASCII value of A 
	}else {
        return ' ';
	}
}
