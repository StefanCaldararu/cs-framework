import csv
import time
#example numpy import... not actually needed
import numpy as np

#use some memory....
a = np.zeros((100,100))
#take some time using sleep
time.sleep(10)
#write to csv
data = [0,0,0]
with open('submission.csv', 'w') as f:
    writer = csv.writer(f)
    writer.writerow(data)