''' 
Author: John Larkin
Date: 11/09/16
Class: None
Purpose:

'''

import time
import math
# needs a list of numbers
# that are not the sum of three squares

#time = time.time()
MAX_RANGE = 10

list_of_numbers = []

timer_start = time.time()
for number in range(MAX_RANGE):

	upper_lim = int(math.ceil(number**(1/2.0)))

	for i in range(upper_lim):
		for j in range(i, upper_lim):
			for k in range(j, upper_lim):
				if number == i**2 + j**2 + k**2:
					list_of_numbers.append(number)


#print(list_of_numbers)

set_of_numbers = set(list_of_numbers)

full_set_of_numbers = set(xrange(MAX_RANGE))

final_set = full_set_of_numbers.difference(set_of_numbers)

answer_set = sorted(final_set)

runtime = time.time() - timer_start

print('This is how long it took:', runtime)
print(answer_set)