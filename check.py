import csv
#open the "submission.csv" file and read from it. check that it contains 3 zros
with open('./submission.csv', 'r') as f:
    reader = csv.reader(f)
    row1 = next(reader)  # gets the first line
    if row1 == ['0', '0', '0']:
        print("Test passed")
    else:
        print("Test failed")