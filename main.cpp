#include <iostream>

template <typename... T> void ignoreUnused(T &&...) {}

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free
functions. This will be the first project where the code you write will be
compiled and you will be responsible for making sure it compiles before
submitting it for review.


 1) Write down the names of the 6 major primitive types available in C++  here:
 int, float, double, bool, char, void




2) for each primitive type, write out 3 variable declarations inside the
variableDeclaration() function on line 59. a) give each variable declaration an
initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type
'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of
type 'void'. b) at the end of the function, call ignoreUnused once and pass all
of your variables to it. see line 71 for an example

3) Declare 10 free functions
    each declaration should have a random number of parameters in the function
parameter list. When naming your parameters, choose names that are relevant to
the task implied by the function's name. remember: Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing
semicolon 5) pass each of your function parameters to the ignoreUnused function
like you did in b) 6) if your function returns something other than void, add
'return { };' at the end of it. 7) provide default values for an arbitrary
number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the
formatting of your 10 functions.  At this point, you might have something that
looks like this: float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar );
return { }; } This does not conform with the coding standard for this course
(check the Readme.MD) and needs to be corrected

9) in the main function at the end:
    for each of those functions declared,
        a) write out how the function would look if called with correct
arguments b) if the function returned anything, store it in a local variable via
the 'auto' keyword. c) pass the local variables to ignoreUnused() as you did in
2b) see main() for an example of this.

10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

// 2)
void variableDeclarations() {
  // example:
  int number =
      2; // declaration of a variable named "number", that uses the primitive
         // type 'int', and the variable's initial value is '2'
  int nbOfwheels = 4;
  int age = 25;
  int year = 2024;
  int height = 180;

  float price = 19.99f;
  float discount = 5.5f;
  float distance = 10.75f;
  float weight = 2.3f;

  double pi = 3.141592653589793;
  double e = 2.718281828459045;
  double largeNumber = 1.234567890123456;
  double smallNumber = 0.000000000123456;

  char initial = 'J';
  char grade = 'A';
  char symbol = '$';
  char newline = '\n';

  bool isFinished = true;
  bool isValid = false;
  bool isActive = true;
  bool isEmpty = false;

  ignoreUnused(number, nbOfwheels, age, year, height, price, discount, distance,
               weight, pi, e, largeNumber, smallNumber, initial, grade, symbol,
               newline, isFinished, isValid, isActive, isEmpty);
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(
    int rentalDuration,
    int carType = 0) // function declaration with random number of arguments,
                     // arbitrary number of arguments have default value
{
  ignoreUnused(rentalDuration, carType); // passing each function parameter to
                                         // the ignoreUnused() function
  return {}; // if your function returns something other than void, add 'return
             // {};' at the end of it.
}

/*
 1)
 */
bool greetUser(const char *firstName = "John", const char *lastName = "Doe") 
{
  ignoreUnused(firstName, lastName);
  return {};
}

/*
 2)
 */
bool isGreater(int compareFrom, int compareTo) 
{
  ignoreUnused(compareFrom, compareTo);
  return compareFrom > compareTo;
}

/*
 3)
 */
bool isPositive(int valueToCheck) 
{
  ignoreUnused(valueToCheck);
  return valueToCheck >= 0;
}

/*
 4)
 */
bool isEven(int number) 
{
  ignoreUnused(number);
  return (number % 2) == 0;
}

/*
 5)
 */
int add(int firstValue, int secondValue) 
{
  ignoreUnused(firstValue, secondValue);
  return firstValue + secondValue;
}

/*
 6)
 */
double calculateAverage(double num1, double num2, double num3) 
{
  ignoreUnused(num1, num2, num3);
  return (num1 + num2 + num3) / 3;
}

/*
 7)
 */
int doubleNumber(int theNumberToDouble) 
{
  ignoreUnused(theNumberToDouble);
  return theNumberToDouble * 2;
}

/*
 8)
 */
bool areEqual(int a, int b) 
{
  ignoreUnused(a, b);
  return a == b;
}

/*
 9)
 */
int calculateVolume(int length, int width, int height) 
{
  ignoreUnused(length, width, height);
  return length * width * height;
}

/*
 10)
 */
bool isLeapYear(int year) 
{
  ignoreUnused(year);
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main() {
  // example of calling that function, storing the value, and passing it to
  // ignoreUnused at the end of main()
  auto carRented = rentACar(6, 2);

  // 1)
  auto user = greetUser("Tristan", "Veyet");
  // 2)
  auto boolResult = isGreater(5, 3);
  // 3)
  boolResult = isPositive(-5);
  // 4)
  boolResult = isEven(8);
  // 5)
  auto intResult = add(2, 3);
  // 6)
  auto doubleResult = calculateAverage(53.8, 1.24, -2.3);
  // 7)
  intResult = doubleNumber(5);
  // 8)
  boolResult = areEqual(5, 5);
  // 9)
  intResult = calculateVolume(2, 3, 4);
  // 10)
  boolResult = isLeapYear(2024);

  ignoreUnused(carRented, user, boolResult, intResult, doubleResult);
  std::cout << "good to go!" << std::endl;
  return 0;
}
