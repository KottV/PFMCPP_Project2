#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
//int 
//char
//bool
//float 
//double 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int value = 7;
    int amount = 33;
    
    char symbol = '@';
    char letter = 'a';
    char digit = '0';

    bool status = true;
    bool flag = false;
    bool exit = true;

    float length = 3.5;
    float width = 8.123;
    float depth = 1.99;

    double revenue = 100.00001;
    double credit = -300.43234;
    double debt = 1000.34;
    
    ignoreUnused(number, value, amount, symbol, letter, digit, status, flag, exit, length, width, depth, revenue, credit, debt); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void displayNumber(int number = 0)
{
    ignoreUnused(number);
}
/*
 2)
 */
bool setFlag(bool flag, int value = 10)
{
    ignoreUnused(flag, value);
    return {};
}
/*
 3)
 */
bool readFlag(char name = 'z', bool status = 1)
{
    ignoreUnused(name, status);
    return {};
}
    
/*
 4)
 */
float divideNumbers(int numberOne, int numberTwo = 0)
{
    ignoreUnused(numberOne, numberTwo);
    return {};
}
/*
 5)
 */
int selectNumber(int numberOne, int numberTwo, int numberThree = 4, int numberNine = 9)
{
    ignoreUnused(numberOne, numberTwo, numberThree, numberNine);
    return {};
}
/*
 6)
 */
bool checkArgs(char arg1, bool arg2, int arg3)
{
    ignoreUnused(arg1, arg2, arg3);
    return {};
}
/*
 7)
 */
int setPlayerID(char name, float height, char hairColor, bool gender = 0)
{
    ignoreUnused(height, hairColor, gender, name);
    return {};
}
/*
 8)
 */
void playSomeSound(int note = 12)
{
    ignoreUnused(note);
}
/*
 9)
 */
bool guessWho (char name)
{
    ignoreUnused(name);
    return {};
}
/*
 10)
 */
void sayBye()
{}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    displayNumber(33);
    
    //2)
    auto flag = setFlag(false, 1);
    
    //3)
    auto currentStatus = readFlag();
    
    //4)
    auto result = divideNumbers(22, 7);
    
    //5)
    auto topOf = selectNumber(1, 2, 3, 4);
    
    //6)
    auto isArgsCorrect = checkArgs(true, 'a', 20);
    
    //7)
    auto playerID = setPlayerID('O', 1.78, 'B');
    //8)
    playSomeSound(5);
    playSomeSound(7);
    playSomeSound(3);
    
    //9)
    auto me = guessWho('O');
    
    //10)
    sayBye();
    
    ignoreUnused(carRented, flag, currentStatus, result, topOf, isArgsCorrect, playerID, me);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
