# CS-Framework
This project contains a framework for running crowdsourcing competitions allowing for various programming languages. The primary purpose of this is to be able to run submissions written in various languages with various dependancies, and analyze program correctness, the time taken by the program, and the memory usage.

## Table of Contents

1. [Submission Overview](#submission-overview)
2. [Testing a Submission](#testing-a-submission)
    1. [Specific Features](https://github.com/StefanCaldararu/cs-framework/blob/main/submissions/README.md)
3. [Submission Outputs](#submission-outputs)

## Submission Overview
Example Submissions are included in the [`submissions`](https://github.com/StefanCaldararu/cs-framework/tree/main/submissions) folder. Each submission does three things: 
- It generates an array of some sort, so as to use some memory. 
> [!NOTE]
> Especially in c and cpp, when running with the [optimization](https://github.com/StefanCaldararu/cs-framework/blob/aed8085c5ed76d176d97ce88b50574912abcd0b1/submissions/c_submission/CMakeLists.txt#L6C1-L6C1) there will likely be memory usage associated with the run. This is because the arrays don't get used for anything, and so likely get optimized out.
- Sleeps for three seconds, to take some amount of time.
- write three zeros to a `submission.csv` file, which will be checied for correctness.

## Testing a Submission
To test a submission, all that needs to be run is `bash run.sh <submission_folder>`, where the `<submission_folder>` is replaced by one of the folder names in [`submissions`](https://github.com/StefanCaldararu/cs-framework/tree/main/submissions). This will first build the submission, then run it through a memory profiler, and finally time the actual submission runtime.
> [!NOTE]
> Just running the submission through the memory profiler will likely take longer than actually running the executable.

### Submission Specific Features
To view submission specific features, follow [this](https://github.com/StefanCaldararu/cs-framework/blob/main/submissions/README.md) link

## Submission Outputs
All submission outputs are stored in an [`output`](https://github.com/StefanCaldararu/cs-framework/tree/main/submissions/python_submission/output) folder within the individual submissions directory. Each output folder will contain the following four pieces of data:

- The memory usage, stored in [`mem.txt`](https://github.com/StefanCaldararu/cs-framework/blob/main/submissions/python_submission/output/mem.txt)
- The time taken, stored in [`time.txt`](https://github.com/StefanCaldararu/cs-framework/blob/main/submissions/python_submission/output/time.txt)
- The submission output, stored in [`submission.csv`](https://github.com/StefanCaldararu/cs-framework/blob/main/submissions/python_submission/output/submission.csv)
- Whether or not the submission passed, stored in [`check.txt`](https://github.com/StefanCaldararu/cs-framework/blob/main/submissions/python_submission/output/check.txt)

Optionally, more memory usage information can be produced and displayed in a `full_memusage.png` and `full_memusage.dat` file, by changing [these](https://github.com/StefanCaldararu/cs-framework/blob/3ffea7211b8282ef95ea3841c4f6f09ffb4d7a07/run.sh#L6-L11) lines. An example image of full memory usage can be seen [here](https://github.com/StefanCaldararu/cs-framework/blob/main/submissions/python_submission/output/full_memusage.png)