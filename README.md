# C-Programming
This repository serves as both file storage and as an indicator of my progress as I learn about computer science and low-level programming through the C language. I used K.N. King's *C Programming: A Modern Approach - Second Edition* to learn C and program small projects. 

This repository includes a complete list of all the programming projects I've completed from *C Programming: A Modern Approach - Second Edition* as well as some small, other projects I've done. These are found under *Other Small Projects.*

* Note: The author only provides answers to an extremely limited number of problems so the code I've uploaded is all mine and mine alone. Files under *Given Examples* are C files of completed examples provided in the textbook.

**You can find a list of all the the project topics I've done, which correspond to a C file in the repository, below:**

## Chapter 1 - Introducing C
N/A

## [Chapter 2 - C Fundamentals](https://github.com/Eddy-M-K/C-Programming/tree/master/Chapter%202%20Programming%20Projects)
1.  Displays a checkmark
2.  Computes the volume of a sphere with a 10-meter radius
3. \[Chapter 1/02.c v2] Prompts the user to enter the radius of the sphere
4.  Displays a user-inputted dollar-and-cents amount with 5% tax
5.  Displays the value of a polynomial using a user-inputted value for *x*
6. \[Chapter 1/05.c v2] Uses Horner's Rule to evaluate the polynomial faster
7.  Shows how to pay a user-inputted dollar amount using the smallest number of $20, $10, $5, and $1 bills
8.  Calculates the remaining balance on a loan after the first, second, and third monthly payments

## [Chapter 3 - Formatted Input/Output](https://github.com/Eddy-M-K/C-Programming/tree/master/Chapter%203%20Programming%20Projects)
1.  Converts a user-inputted *mm/dd/yyyy* date into *yyyymmdd*
2.  Formats product information entered by the user
3.  Breaks down an ISBN entered by the user
4.  Converts a user-inputted (xxx) xxx-xxxx telephone number into the form xxx.xxx.xxxx
5.  Displays the numbers 1-16 in a 4 by 4 arrangement according to the user-inputted order followed by the sums of the rows, columns, and diagonals
6. \[Given Examples/addfrac.c v2] Computes the sum of two user-inputted fractions separated by a '+' sign

## [Chapter 4 - Expressions](https://github.com/Eddy-M-K/C-Programming/tree/master/Chapter%204%20Programming%20Projects)
1.  Prints a two-digit user-inputted number with its digits reversed
2.  \[Chapter 4/01.c v2] Handles three-digit numbers
3.  \[Chapter 4/01.c v3] Prints the reversal of a three-digit number without using arithmetic to split the number into digits
4.  Reads an integer entered by the user and displays it in octal (base 8)
5.  \[Given Examples/upc.c v2] Computes the check digit of a user-inputted 11-digit UPC 
6.  \[Given Examples/upc.c v3] Computes the check digit of a user-inputted 13-digit EAN

## [Chapter 5 - Selection Statements](https://github.com/Eddy-M-K/C-Programming/tree/master/Chapter%205%20Programming%20Projects)
1.  Calculates how many digits a user-inputted number contains
2.  Displays a user-inputted 24-hour time in 12-hour form
3. \[Given Examples/broker.c v2] Asks the user to enter the # of shares and $/share and additionally computes the commission charged by a rival broker 
4.  Provides a description of a user-inputted wind speed (in knots) according to the Beaufort scale
5.  Displays the tax due on user-inputted taxable income
6. \[Given Examples/upc.c v4] Checks whether a UPC is valid
7.  Finds the largest and smallest of four user-inputted integers
8.  Displays the departure and arrival times for the flight whose departure time is closest to that entered by the user
9.  Indicates which of two user-inputted dates comes earlier on the calendar
10. Converts a numerical grade into a letter grade using the ```switch``` statement
11. Prints the English word of a user-inputted two-digit number

## [Chapter 6 - Loops](https://github.com/Eddy-M-K/C-Programming/tree/master/Chapter%206%20Programming%20Projects)
1.  Finds the largest in a series of user-inputted numbers
2.  Calculates and displays the GCD of two integers
3.  Reduces a user-inputted fraction to lowest terms
4. \[Given Examples/broker.c v3] Uses a loop so that the user can enter more than one trade to calculate the commission on each
5. \[Chapter 4/01.c v4] Displays a user-inputted number with any number of digits with its digits reversed
6.  Prints all even squares between 1 and a user-inputted number *n*
7. \[Given Examples/square.c v2] Uses a ```for``` loop to initalize i, test i, and increment i without using multiplication
8.  Prints a one-month calendar according to user-inputted # of days in a month and day of the week on which the month begins
9. \[Chapter 2/08.c v2] Asks user to enter the # of payments and then displays the balance remaining after each of these payments
10. \[Chapter 5/09.c v2] Determines which of any number of user-inputted dates comes earlier on the calendar
11. Approximates Euler's number by computing the value of 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! where *n* is an integer entered by the user
12. \[Chapter 6/11.c v2] Program continues adding terms to compute Euler's number until the current term becomes less than ε, where ε is a small (floating-point) number entered by the user

## [Chapter 7 - Basic Types](https://github.com/Eddy-M-K/C-Programming/tree/master/Chapter%207%20Programming%20Projects)
1. \[Given Examples/square2.c v2] Experimentation with different ```int``` types to determine the number of bits used to store integer types on my machine
2. \[Given Examples/square2.c v3] Pauses every 24 squares and uses ```getchar``` to pause until the user presses ```Enter```
3. \[Given Examples/sum2.c v2] Sums a series of ```double``` values
4.  Translates an alphabetic phone number into numeric form
5.  Computes the value of a user-inputted word according to the values of the SCRABBLE Crossword Game
6.  Prints the values of ```sizeof(int)```, ```sizeof(short)```, ```sizeof(long)```, ```sizeof(float)```, ```sizeof(double)```, ```sizeof(long double)```
7. \[Chapter 3/06.c v2] Allows the user to add, subtract, multiplie, or divide two fractions
8. \[Chapter 5/08.c v2] User enters a time using the 12-hour clock which will have the form *hours:minutes* followed by either ```A```, ```P```, ```AM```, or ```PM```, with      either lower-case, upper-case, and white space allowed
9.  Displays a user-inputted 12-hour time in 24-hour form with input format identical to Chapter 7/08.c
10. Counts the number of vowels in a user-inputted sentence
11. Takes a user-inputted first name and last name and displays the last name, a comma, and the first initial, followed by a period
12. Evaluates a user-inputted expression of any length from left to right which includes the +, -, \*, and / operators
13. Calculates the average word length for a user-inputted sentence
14. Uses Newton's method to compute the square root of a positive floating-point number
15. 
  (a) Uses a ```short``` variable to store the value of a factorial of a user-inputted positive integer; tests for the largest value for which the program correctly prints its    factorial
  
  (b) Uses an ```int``` variable to store the value of a factorial of a user-inputted positive integer; tests for the largest value for which the program correctly prints its    factorial
  
  (c) Uses a ```long``` variable to store the value of a factorial of a user-inputted positive integer; tests for the largest value for which the program correctly prints its    factorial
  
  (d) Uses a ```long long``` variable to store the value of a factorial of a user-inputted positive integer; tests for the largest value for which the program correctly prints its factorial
  
  (e) Uses a ```float``` variable to store the value of a factorial of a user-inputted positive integer; tests for the largest value for which the program correctly prints its    factorial
  
  (f) Uses a ```double``` variable to store the value of a factorial of a user-inputted positive integer; tests for the largest value for which the program correctly prints its factorial 
  
  (g) Uses a ```long double``` variable to store the value of a factorial of a user-inputted positive integer; tests for the largest value for which the program correctly prints its factorial 
    
## [Chapter 8 - Arrays](https://github.com/Eddy-M-K/C-Programming/tree/master/Chapter%208%20Programming%20Projects)
1. \[Given Examples/repdigit.c v2] Displays repeated digits in a user-inputted number
2. \[Given Examples/repdigit.c v3] Prints a table showing how many times a digit appears in a user-inputted number
3. \[Given Examples/repdigit.c v4] Allows user to enter more than one number to be tested for repeated digits 
4. \[Given Examples/reverse.c v2] Uses ```(sizeof(a) / sizeof(a[0]))``` 
5. \[Given Examples/interest.c v2] Compounds interest monthly instead of annually but with the same, annual output
6.  Translates a user-inputted message into B1FF language
7.  Reads a 5 * 5 array of integers and then prints the row sums and the column sums
8. \[Chapter 8/07.c v2] Prompts for five quiz grades for each of five students, then computes the total score and average score for each student, and then the average score, high score, and low score for each quiz
9.  Generates a "random walk" of letters A-Z across a 10 * 10 array
10. \[Chapter 5/08.c v3] Departure times are stored in an array and the arrival times are stored in a second array
11. \[Chapter 7/04.c v2] Lables its output before printing the phone number in numeric form
12. \[Chapter 7/05.c v2] SCRABBLE values are stored in an array
13. \[Chapter 7/11.c v2] Labels its output before printing last name then first initial
14. Reverses the words in a sentence
15. Encryptes a user's message with the Caesar cipher by shifting letters according to a user-inputted number from 1-25
16. Tests whether two words are anagrams
17. Prints an *n* * *n* magic square (*n* is determined by user) in which the sums of the rows, columns, and diagonals are all the same 

## [Chapter 9 - Functions](https://github.com/Eddy-M-K/C-Programming/tree/master/Chapter%209%20Programming%20Projects)
1. Uses a selection sort with recursion to sort a series of integers
2. \[Chapter 5/05.c v2] Uses a function to compute the amount of income tax
3. \[Chapter 8/09.c v2] Uses functions to simplify the program
4. \[Chapter 8/16.c v2] Uses functions to simplify the program
5. \[Chapter 8/17.c v2] Uses functions to simplify the program
6. Computes the value of a polynomial
7. Recursive program that calculates the power function: x<sup>n</sup>

## [Chapter 10 - Program Organization](https://github.com/Eddy-M-K/C-Programming/tree/master/Chapter%2010%20Programming%20Projects)
1. Checks if a series of user-inputted parentheses/braces are properly nested using a stack
2. Modified version of a textbook provided example of a Poker program but without the use of global arrays
3. Modified version of a textbook provided example of a Poker program but with a singular array for all card storage
4. Modified version of a textbook provided example of a Poker program but the program now recognizes a "royal flush"
5. Modified version of a textbook provided example of a Poker program but the program now accepts an "ace-low"
6. A calculator which uses the Reverse Polish Notation (RPN) system (implemented using a stack)
7. Takes a user-inputted number and displays it in the seven-segment display style

## [Chapter 11 - Pointers](https://github.com/Eddy-M-K/C-Programming/tree/master/Chapter%2011%20Programming%20Projects)
1. \[Chapter 2/07.c v2] Determines the smallest number of bills to pay a dollar amount but with the use of pointers
2. \[Chapter 5/08.c v3] Finds the flight whose departure time is closed to a desired time but with pointers as parameters
3. \[Chapter 6/03.c v2] Reduces a fraction to lowest terms but with pointers as parameters
4. Modified version of Poker program but with pointers

## [Chapter 12 - Pointers and Arrays](https://github.com/Eddy-M-K/C-Programming/tree/master/Chapter%2012%20Programming%20Projects)
1. (a) Reverses a user-inputted message
1. (b) Reverses a user-inputted message but with pointers
2. (a) Checks if a user-inputted message is a palindrome
2. (b) Checks if a user-inputted message is a palindrome but with pointers
3. Modified version of 1. (b) but with array names as pointers
4. Modified version of 2. (b) but with array names as pointers
