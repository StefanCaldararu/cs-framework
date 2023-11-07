import csv
import time
#example numpy import... (installed with makefile)
import numpy as np

#use some memory....
a = np.zeros((10000000))
time.sleep(3)
#take some time using sleep
#write to csv
data = [0,0,0]
with open('submission.csv', 'w') as f:
    writer = csv.writer(f)
    writer.writerow(data)