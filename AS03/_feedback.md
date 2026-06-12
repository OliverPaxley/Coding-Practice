Sovanndara, your solution follows the main flow of AS03 fairly well. You ask for the number of marks, use a loop to enter each mark, display the row number using `Mark 1:`, `Mark 2:`, etc., determine the letter grade, count passes and failures, and calculate the average. These are all part of the assignment requirements. 

A few things to improve:

* You should have reused the AS02 logic as a function instead of writing one large block of code inside `main()`. The grade calculation and pass/fail decision should be separated into functions so the program is easier to read and maintain.

* Invalid marks are detected, but they are not re-entered. If the user enters `120` or `-5`, your program prints `Invalid Marks` and still keeps going. This causes problems because that invalid value is still stored in the array and later included in the average.

* You should validate the number of marks entered. If the user enters a negative number or a number greater than `100`, the program will not behave safely. Since your array has only 100 elements, `opt` must be checked to stay between `1` and `100`.

* The variable name `opt` is not very meaningful. A better name would be `numberOfMarks` or `markCount`.

* The pass/fail output is repeated in every grade branch. A cleaner approach would be to determine the grade first, then check once whether the mark is greater than or equal to 50.

* The comment `// Handled 0's` is not very clear. Also, instead of accepting `0` marks and printing an average of 0, it would be better to prevent the user from entering 0 as the number of marks.

Overall, Sovanndara, your basic logic is good, but the program needs better input validation and better structure. To improve, focus on reusing the AS02 grade logic as a function, validating input before processing it, and keeping `main()` shorter and cleaner.

apply the notes above and let me know when you are done.