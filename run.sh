#!/bin/bash
cd ./submissions/$1
mkdir output
make build
#Run a memory profiler on the program, and print out the maximum memory usage
#save data file
# memusage -d ./output/full_memusage.dat make run 2> output/mem1.txt 
#output image and save data file
#memusage -d ./output/full_memusage.dat -p full_memusgae.png make run 2> output/mem1.txt #| head -n 2 | tail -n 1 > mem.txt
#basic memusage
memusage make run 2> output/mem1.txt 
cat output/mem1.txt | head -n 2 | tail -n 1 > output/mem.txt
#remove the output file
rm ./submission.csv
rm ./output/mem1.txt
# Capture the start time
start_time=$(date +%s.%N)
# Your command or function call
make run
end_time=$(date +%s.%N)
mv ./submission.csv ./output/submission.csv
# Calculate the elapsed time
elapsed_time=$(echo "$end_time - $start_time" | bc)
echo "Elapsed time: $elapsed_time seconds" > output/time.txt
#check if the submission.csv file is correct.
cd ./output
python3 ../../../check.py > check.txt
cd ..
make clean
cd ../../
