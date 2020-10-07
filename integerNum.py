# Write a program that repeatedly prompts a user for integer numbers 

largest = None
smallest = None
while True:
    num = raw_input("Enter a number: ")
    if num == "done": 
    	break
    try: 
        number = int(num)
    except:
        print "Invalid input"
        continue
    if largest is None or number > largest:
    	largest = number
    if smallest is None or number < smallest:
    	smallest = number
    #print num

print "Maximum is", largest
print "Minimum is", smallest
