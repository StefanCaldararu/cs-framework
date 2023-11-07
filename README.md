# CS-Framework
This project contains a framework for running crowdsourcing competitions allowing for various programming languages. The primary purpose of this is to be able to run submissions written in various languages with various dependancies, and analyze program correctness, the time taken by the program, and the memory usage.

## Table of Contents

1. [Submission Overview](#submission-overview)
2. 

## Submission Overview
Example Submissions are included in the [`submissions`](https://github.com/StefanCaldararu/cs-framework/tree/main/submissions) folder. Each submission does three things: 
- It generates an array of some sort, so as to use some memory. 
> [!NOTE]
> Especially in c and cpp, when running with the [optimization](https://github.com/StefanCaldararu/cs-framework/blob/aed8085c5ed76d176d97ce88b50574912abcd0b1/submissions/c_submission/CMakeLists.txt#L6C1-L6C1) there will likely be memory usage associated with the run. This is because the arrays don't get used for anything, and so likely get optimized out.
- Sleeps for three seconds, to take some amount of time.
- write three zeros to a `submission.csv` file, which will be checied for correctness.



Useful command for python: `pip freeze > requirements.txt`