#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double power(double value, int power_num=2) {
  return pow(value, power_num);
}

int hms_to_secs(int hour, int minutes, int seconds) {
  int result = 0;

  result += hour*3600;
  result += minutes*60;
  result += seconds;

  return result;
}

int swap(int a, int b) {
  return b;
}

int main() {
  double value_to_raise;
  int power_to_raise;

  cout << "\nEnter a number to raise to a power: ";
  cin >> value_to_raise;

  cout << "\nYou entered " << value_to_raise;

  cout << "\nEnter a power to raise " << value_to_raise << " to: ";
  cin >> power_to_raise;

  double result = power(value_to_raise, power_to_raise);

  cout << "\n" << value_to_raise << " raised to the power of " << power_to_raise << " is " << result << "\n";

  int hour = 1;

  while (hour >= 0) {
    cout << "\nEnter a number of hours: ";
    cin >> hour;

    if (hour >= 0) {
      int minutes;
      cout << "\nEnter a number of minutes: ";
      cin >> minutes;

      int seconds;
      cout << "\nEnter a number of seconds: ";
      cin >> seconds;

      int total_seconds = hms_to_secs(hour, minutes, seconds);

      cout << "\nTotal seconds in " << hour << " hours, " << minutes << " minutes and " << seconds << " seconds " << "is " << total_seconds;
    } else {
      cout << "\nThat's a negative number of hours. Loop's over.\n";
    }
  }

  cout << "\nWatch while I swap these numbers.";

  int a;
  cout << "\nEnter a number for A: ";
  cin >> a;

  int b;
  cout << "\nEnter a number for B: ";
  cin >> b;

  int temp = a;
  a = swap(a,b);
  b = swap(b,temp);

  cout << "A is now equal to: " << a << " and B is now equal to: " << b;

  cout << "\n\nMagic.\n\n";

  return 0;
}
