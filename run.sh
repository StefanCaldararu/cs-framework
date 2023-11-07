#!/bin/bash
cd ./submissions/$1
make build
#Run a memory profiler on the program, and print out the maximum memory usage
memusage -d full_memusage.dat make run 2> mem1.txt #| head -n 2 | tail -n 1 > mem.txt
cat mem1.txt | head -n 2 | tail -n 1 > mem.txt
#remove the output file
rm ./submission.csv
rm ./mem1.txt
# Capture the start time
start_time=$(date +%s.%N)
# Your command or function call
make run
end_time=$(date +%s.%N)
# Calculate the elapsed time
elapsed_time=$(echo "$end_time - $start_time" | bc)
echo "Elapsed time: $elapsed_time seconds" > time.txt
#TODO: check if the submission.csv file is correct

make clean
cd ../../
