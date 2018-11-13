#! python

phrase = "This is lab 11."
print(phrase)

myList = [1, 2, 3, 'a', 'b', 'c', 1.1, 2.2, 3.3]
	
for value in myList:				#iterate through myList
	if (isinstance(value, int)):	#check if value is int
		print(value)				#print value
