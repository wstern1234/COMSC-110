// Identification comments code block
// Wills Stern
// Kepler's 3rd Law
// Editor(s) used: VS Code
// Compiler(s) used: g++


#include <iostream>
using std::cout;
using std::cin;


#include <string>
using std::string;
using std::endl;

#include <cctype> // for toupper
#include <cstdlib> // for atof
#include <cmath> // for sqrt, pow, and cbrt


// function prototypes
double findPeriod();
double findAU();


int main()
{

  // identification output code block
  cout << "Wills Stern\n\n";
  cout << "Kepler's 3rd Law\n";\
  cout << "Editor(s) used: VSCode\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << "\n";
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << "\n\n\n\n";

  
  char opt;

  // infinite loop, continuely asks user for data unless 'Q'/'q' is entered
  while (true)
  {
    // menu with two options
    cout << "Options:\n";
    cout << " P: find orbital Period\n";
    cout << " A: find distance in AU" << endl;
    cout << "Option: ";


    cin >> opt; // char variable, so no need for buffer

    // breaks with 'Q' or 'q'
    if (toupper(opt) == 'Q') break;

    // outputs the orbital period in years
    else if (toupper(opt) == 'P')
      cout << "\n" << findPeriod() << " years\n\n\n" << endl;

    // outputs the distance from the Sun in Astronomical Units (AU)
    else if (toupper(opt) == 'A')
      cout << "\n" << findAU() << " AU\n\n\n" << endl;

    // invalid input, continues on with loop
    else cout << "\nNot an option, try again.\n\n\n" << endl;
  }

}




/*************************************************************
* Purpose: Finds the time for an object to orbit the Sun in Earth years
*
* Parameters: (None)
*
* Return:    Time for an object to orbit the Sun in Earth years as a double
**************************************************************/
double findPeriod()
{

  string buf;

  cout << "Enter distance in Astronomical Units (AU): ";

  // uses buffer input method for safety
  cin >> buf; double distance = atof(buf.c_str());


  // Kelper's 3rd Law of Planetary Motion: p^2 = a^3
  // ...becomes p = a^(3.0/2)
  return ( sqrt(pow(distance, 3)) );

}




/*************************************************************
* Purpose: Finds the distance of an object from the Sun in AU
*
* Parameters: (None)
*
* Return:    Distance of the object from the Sun in AU as a double
**************************************************************/
double findAU()
{

  string buf;

  cout << "Enter orbital period in Earth years: ";

  // uses buffer input method for safety
  cin >> buf; double period = atof(buf.c_str());


  // Kelper's 3rd Law of Planetary Motion: p^2 = a^3
  // ...becomes a = p^(2.0/3)
  return ( cbrt(pow(period, 2)) );

}