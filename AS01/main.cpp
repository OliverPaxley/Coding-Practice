#include <iostream>
using namespace std;

int main() {
    int firstNum, secondNum ;
    
    cout << "Please enter the first number: " ;
    cin >> firstNum ;
    cout << "Please enter the second number: ";
    cin >> secondNum ;
    cout << "The sum is: " << firstNum + secondNum << endl ;

    return 0 ;
}
/*

Sovanndra, your solution is correct and satisfies the main requirements of AS01: it asks for two numbers, receives them using `cin`, adds them, and clearly displays the sum. The assignment requires input, variables, sum calculation, and clear output, which your program handles properly.

* Good work using meaningful variable names:

  ```cpp
  int firstNum, secondNum;
  ```

* Your prompts match the expected assignment wording well:

  ```cpp
  cout << "Please enter the first number: ";
  cout << "Please enter the second number: ";
  ```

* Your final output also matches the sample format:

  ```cpp
  cout << "The sum is: " << firstNum + secondNum << endl;
  ```

* The calculation is correct. For this small program, calculating directly inside the `cout` statement is acceptable, but since the assignment says to calculate the sum, using a separate `sum` variable would make the steps clearer:

  ```cpp
  int sum = firstNum + secondNum;
  ```

* Watch spacing consistency. There are a few extra spaces before semicolons:

  ```cpp
  secondNum ;
  ```

  should be:

  ```cpp
  secondNum;
  ```

Overall, this is a strong submission. The program is correct, readable, and follows the assignment instructions well.

*/