import sys
integer = 10
print("The size of variable integer is:",sys.getsizeof(integer), "bytes.")
decimal = 10.01
print("The size of variable decimal is:",sys.getsizeof(decimal),"bytes.")
string = "a"
print("The size of a variable string is: \033[91m",sys.getsizeof(string),"bytes. \033[00m")
integer = integer + decimal
print("The size of the variable integer is: \033[91m",sys.getsizeof(integer), "bytes. \033[00m ")
string = 10
print("The size of a variable string is:",sys.getsizeof(string),"bytes.")

