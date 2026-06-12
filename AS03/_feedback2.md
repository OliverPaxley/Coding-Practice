Sovanndra, this is a clear improvement from the earlier version. You now moved the AS02-style processing into functions, which makes the program better organized. Your program asks for the number of marks, limits the number to the array size, prompts each mark with a row number, validates marks between 0 and 100, displays the grade and pass/fail result, counts passes/failures, and calculates the average.

Things done well:

* You used functions instead of keeping everything in `main()`:

  ```cpp
  void result(float& marks, int& cntPass, int& cntFail);
  float averageMarks(float marks[], int numMarks);
  ```

  This is much better structure.

* You fixed the invalid mark problem by forcing the user to re-enter marks outside the valid range.

* You protected the fixed-size array by checking that the number of marks does not go above `100`.

Things to improve:

* The number of marks should probably be greater than zero. Right now, `0` is accepted and treated as “exit,” but the assignment asks the program to receive and process marks. It would be better to validate `numMarks` between `1` and `100`.

* The re-entry prompt inside `result()` says:

  ```cpp
  cout << "Mark: ";
  ```

  It should still show the row number, such as `Mark 2:`, to stay consistent with the assignment format.

* The function name `result` is too general. A clearer name would be `displayResult`, `processMark`, or `displayMarkResult`.

* This function:

  ```cpp
  void result(float& mark, int& cntPass, int& cntFail)
  ```

  does not really need `mark` to be passed by reference unless you intentionally want the function to correct the invalid mark. That works here, but the design would be cleaner if mark validation happened before calling the result function.

* The variable `isPass` should be initialized:

  ```cpp
  bool isPass{};
  ```

  In your current logic it receives a value before being used, but initializing variables is a good habit.

* `averageMarks()` both calculates and prints the average. That is acceptable for this assignment, but a cleaner function design would either calculate and return the average or display it, not both.

Overall, Sovanndra, this version is much better. The main improvement is structure and validation. To improve further, focus on clearer function names, keeping prompts consistent, and making each function responsible for one clear task.

Fix the stated problems to start the next task