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
 

 int
 char
 bool
 float
 double
 void

 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 
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

    int score = 125;
    int age = 24;
    int fingers = 10;

    char skateShoeRental = 'M';
    char firstNameFirstLetter = 'J';
    char lastNameLastLetter = 'P';
 
    bool earthIsRound = true;
    bool iLoveCuredMeats = true;
    bool iDontExist = false;

    float change = 5.43f;
    float interestRate = 3.243f;
    float mixLevel = 0.24f;

    double pi = 3.141592653589793;
    double e = 2.718281828459045;
    double squareRootOfTwo = 1.41421356237;

    
    ignoreUnused(number, score, age, fingers, skateShoeRental, firstNameFirstLetter, lastNameLastLetter, earthIsRound, iLoveCuredMeats, iDontExist, change, interestRate, mixLevel, pi, e, squareRootOfTwo); //passing each variable declared to the ignoreUnused() function
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
bool wakeUp (int hourOfDay, bool stayedUp = true)
{
    ignoreUnused(hourOfDay, stayedUp);
    return {};
}
/*
 2)
 */
int jumpingJacks(bool energetic, bool hasWater, float fitnessLevel = 9001.2f)
{
    ignoreUnused(energetic, hasWater, fitnessLevel);
    return {};
}
/*
 3)
 */
float calculateDelaySync(float bpm, float divideMultiply = 1.125f)
{
    ignoreUnused(bpm, divideMultiply);
    return {};
}
/*
 4)
 */
void setParameter(float currentPosition, float amountDifference = 0.34f)
{
    ignoreUnused(currentPosition, amountDifference);
}
/*
 5)
 */
int rollDice(float force, float torque, float impactAngle)
{
    ignoreUnused(force, torque, impactAngle);
    return {};
}
/*
 6)
 */
char getCard(int deckShuffleArrangement, int cardsDrawn = 23)
{
    ignoreUnused(deckShuffleArrangement, cardsDrawn);
    return {};
}
/*
 7)
 */
bool pluginOnOff(bool midiGate)
{
    ignoreUnused(midiGate);
    return {};
}
/*
 8)
 */
bool soundsGreat(bool isThereEnoughBass)
{
    ignoreUnused(isThereEnoughBass);
    return {};
}
/*
 9)
 */
void pluginOnline()
{
    ignoreUnused();
}
/*
 10)
 */
double discreteFourierTransform(int sampleRate, double angularFrequency, double signal)
{
    ignoreUnused(sampleRate, angularFrequency, signal);
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

    auto wakeStatus = wakeUp (11);
    //2)
    auto jacksJumped = jumpingJacks(true, false);
    //3)
    auto delaySync = calculateDelaySync(140.f, 1.5f);
    //4)
    setParameter(12.5f, 0.12f);
    //5)
    auto diceSide = rollDice(1.34f, 24.532f, 32.1234f);
    //6)
    auto newCard = getCard(1329534, 12);
    //7)
    auto pluginOn = pluginOnOff(true);
    //8)
    auto timeToMaster = soundsGreat(true);
    //9)
    pluginOnline();
    //10)
    auto spectrum = discreteFourierTransform(48000, 289.439, 875.575);

    
    ignoreUnused(carRented, wakeStatus, jacksJumped, delaySync, diceSide, newCard, pluginOn, timeToMaster, spectrum);

    std::cout << "good to go!" << std::endl;
    return 0;    
}

