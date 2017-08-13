import itertools
import csv
with open('rick.csv', 'w') as csvfile:
    stuffWriter = csv.writer(csvfile, delimiter =' ')
    for subset in itertools.permutations(range(100), 5):
        if (subset[0] + subset[1] + subset[2] + subset[3] + subset[4]) == 100 :
            stuffWriter.writerow(subset)
