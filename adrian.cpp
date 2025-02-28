#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
//Declare variables
    double pounds, grams, kilograms;
//Declare constants
    const double LB2GRM = 453.592;
//Give title to program
    cout << "Pound to kilograms converter" << endl;
//Prompt the user to enter a weight
    cout << "Please enter a weight in pounds: " << endl;
    cin >> pounds;
//Displaying weight with two decimal points
    cout << setiosflags(ios::showpoint) << setprecision(2);
//Round off weight
    static_cast<double>(static_cast<double>(pounds +.5));
//Formula for conerversion
    double fmod(pounds * LB2GRM);
    cin >> grams;
//Show results
    cout << pounds << " pounds are equal to " << kilograms << " kgs and " << grams << " grams" << endl;

return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // Declare variables
  double time, distance, speed;

  // Get the time and distance from the user
  cout << "Enter the time traveled (in hours): ";
  cin >> time;
  cout << "Enter the distance traveled (in miles): ";
  cin >> distance;

  // Input validation: Check for non-positive values
  if (time <= 0 || distance <= 0) {
    cout << "Error: Time and distance must be positive values." << endl;
    return 1; // Indicate an error
  }

  // Calculate the speed using the formula: speed = distance / time
  speed = distance / time;

  // Display the result
  cout << "The speed of the car is: " << speed << " miles per hour." << endl;

  return 0; // Indicate successful execution
}
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // Declare variables
  double diameter, radius, area;

  // Get the diameter from the user
  cout << "Enter the diameter of the circle: ";
  cin >> diameter;

  // Input validation: Check for non-positive diameter
  if (diameter <= 0) {
    cout << "Error: Diameter must be a positive value." << endl;
    return 1; // Indicate an error
  }

  // Calculate the radius
  radius = diameter / 2.0;

  // Calculate the area using the formula: area = Ï€ * radius^2
  area = M_PI * pow(radius, 2);

  // Display the result
  cout << "The area of the circle is: " << area << endl;

  return 0; // Indicate successful execution
}
