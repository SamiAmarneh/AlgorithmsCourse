
// Sami Rafat Amarneh
// 202210344


#include <iostream>
using namespace std;

int factorial(int n) {
if (n < 0) {
cout << " not defined for negative numbers. " << endl;
return -1;
}
int fact = 1;
for (int i = 1; i <= n; ++i) {
fact *= i;
}
return fact;
}

int main() {
int num;

cout << "Enter a number to calculate its factorial: ";
cin >> num ;

int result = factorial(num);
if (result != -1) {
cout << "The factorial of " << num << " is " << result << endl;
}

return 0;
}
