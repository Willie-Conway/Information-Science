# Willie Conway
# CS 369 Operating Systems Administration
# 11/4/2019

# Uses the open function and read method to open and read the content of the path,
# creates userlist to collect usernames, then uses a for loop to loop through lines in the file.
file = open("/var/log/auth.log", "r")
userList = []
for line in file:

	# Uses the index variable and find method to determine where the Invalid username is in the line,
	# then uses offset variable to determine how many characters between the  Invalid username.
	index = line.find("Invalid user")
	offset = len("Invalid user ")
	if (index != -1):

		# Uses variable invailidUsername and substring to extract from the begining of the username to the end of line,
		# then uses split method to isolate invalid username, and append method to add invalid username to userlist.
		invalidUsername = line[index+offset:]
		invalidUsername = invalidUsername.split(" ")[0]
		userList.append(invalidUsername)

# Uses the sort method to sort userlist, then a for loop  to loop through invalid usernames in userlist,
# prints invalid usernames, then closes file.
userList.sort()
for invalidUsername in userList:
	print(invalidUsername)
file.close()
