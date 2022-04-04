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
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int     => integer
 float   => floating point
 double  => double floating point
 char    => character
 bool    => boolean
 void    => empty/valueless/void/anything that means empty
 wchar_t => wide character
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    // Do you also accept this formatting? I could rewrite it more conventionally if you prefer.
    int 
        num = 1,
        myInt = 2,
        thisIsAnInt = 3;
    
    float
        myFloat1 = 1.1f,
        myFloat2 = 2.2f,
        myFloat3 = 3.3f;

    double
        myDouble1 = (double) 1, // could be time per beat.
        myDouble2 = 5.73092834798757476439817465873645763476317460,
        myDouble3 = 1.234567890123456789012345678901234567890;

    char
        myChar1 = 'a',
        myChar2 = 'b',
        myChar3 = 'c';

    bool
        myBool1 = true,
        myBool2 = false,
        myBool3 = true;
    
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
    ignoreUnused(
        num, myInt, thisIsAnInt,          // ints
        myFloat1, myFloat2, myFloat3,     // floats 
        myDouble1, myDouble2, myDouble3,  // doubles
        myChar1, myChar2, myChar3,        // chars
        myBool1, myBool2, myBool3         // bools
        );
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int passIntsToIgnoreUnused(int num1, int num2, int num3)
{
    ignoreUnused(num1, num2, num3);
    return {};
}
/*
 2)
 */
float passAFloatToIgnoreUnused(float myFloat)
{
    ignoreUnused(myFloat);
    return {};
}
/*
 3)
 */
void passThreeIntsAndAFloatToIgnoreUnused(int someInt1, int someInt2, int someInt3, float someFloat)
{
    passIntsToIgnoreUnused(someInt1, someInt2, someInt3);
    passAFloatToIgnoreUnused(someFloat);
}
/*
 4)
 */
bool checkIfNum1IsLargerThanNum2AndOtherConditionIsTrue(float num1, float num2, bool someBool)
{
    if (num1 > num2 && someBool)
    {
        ignoreUnused(num1, num2, someBool);
        return {}; // Normally, I would write the whole statement in the return statement
    }
    // There is no need to put an explict esle, since this part of the code can only be reached if num1 != num2.
    ignoreUnused(num1, num2);
    return {};
}
/*
 5)
 */

/*
 6)
 */

/*
 7)
 */

/*
 8)
 */

/*
 9)
 */

/*
 10)
 */

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
    auto function1 = passIntsToIgnoreUnused(1, 2, 3);
    //2)
    auto function2 = passAFloatToIgnoreUnused(2.3f);
    //3)
    passThreeIntsAndAFloatToIgnoreUnused(1, 2, 3, 4.4f);
    //4)
    auto function4 = checkIfNum1IsLargerThanNum2AndOtherConditionIsTrue(2, 4.0f/2, true);
    //5)
    
    //6)
    
    //7)
    
    //8)
    
    //9)
    
    //10)
    
    
    ignoreUnused(carRented);
    ignoreUnused(function1);
    ignoreUnused(function2);
    ignoreUnused(function4);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
