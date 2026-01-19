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
 
 character
 integer
 boolean
 floating
 double
 void
 
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
    const char* name = "robert";
    const char* fish = "tetra";
    char letter = 'a';
    int x = 5;
    int y = 10;
    int z = 15;
    bool isTrue = true;
    bool gateOpen = false;
    bool computerOn = true;
    float pi = 3.14159f;
    float a = 2.7f;
    float b = 3.14f;
    double cc = 4;
    double dd = 8;
    double ee = 15;
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
    ignoreUnused(name);
    ignoreUnused(fish);
    ignoreUnused(letter);
    ignoreUnused(x);
    ignoreUnused(y);
    ignoreUnused(z);
    ignoreUnused(isTrue);
    ignoreUnused(gateOpen);
    ignoreUnused(computerOn);
    ignoreUnused(pi);
    ignoreUnused(a);
    ignoreUnused(b);
    ignoreUnused(cc);
    ignoreUnused(dd);
    ignoreUnused(ee);
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */

/*
 1)
 */

bool driveCar(int speed, int direction, bool isRaining)
{
    ignoreUnused(speed, direction, isRaining);
    return {};
}

/*
 2)
 */

bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 3)
 */

int getCarSpeed(int distance, int time, int mph)
{
    ignoreUnused(distance, time, mph);
    return {};
}

/*
 4)
 */

float divide(float a, float b)
{
    ignoreUnused(a, b);
    return {};
}    

/*
 5)
 */

double multiply(double a, double b)
{
    ignoreUnused(a, b);
    return {};
}


/*
 6)
 */

int countFlies(int deadFlies, int aliveFlies)
{
    ignoreUnused(deadFlies, aliveFlies);
    return {};
}

/*
 7)
 */

float getAverage(float a, float b, float c)
{
    ignoreUnused(a, b, c);
    return {};    
}

/*
 8)
 */

bool isBikeRentedAndStoreInfo(int bikeType, int rentalDuration)
{
    ignoreUnused(bikeType, rentalDuration);
    return {};
}

/*
 9)
 */

int getNumberOfSuits(int suitsRented, int suitsReturned)
{
    ignoreUnused(suitsRented, suitsReturned);
    return {};
}

/*
 10)
 */

int getNumberOfShoes(int shoesRented, int shoesReturned)
{
    ignoreUnused(shoesRented, shoesReturned);
    return {};
}

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
    bool isCarDriving = driveCar(60, 2, 0);
    //2)
    auto isCarRented = rentACar(60, 0);
    //3)
    float carSpeed = getCarSpeed(30, 60, 40);
    //4)
    float quotient = divide(3.14f, 2.f);
    //5)
    double product = multiply(48, 29);
    //6)
    int flies = countFlies(23, 59);
    //7)
    float average = getAverage(4.f, 5.f, 6.f);
    //8)
    int numberOfSuits = getNumberOfSuits(15, 10);
    //9)
    
    //10)
    
    
    ignoreUnused(carRented);
    ignoreUnused(isCarDriving);
    ignoreUnused(isCarRented);
    ignoreUnused(carSpeed);
    ignoreUnused(quotient);
    ignoreUnused(product);
    ignoreUnused(flies);
    ignoreUnused(average);
    ignoreUnused(numberOfSuits);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
