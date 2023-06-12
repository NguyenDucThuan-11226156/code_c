import csv 

with open("baolam.csv","w") as file:
    file.write("1,2,3,4,5")
    file.write("6,7,8,9,10")
with open("baolam.csv","r") as file :
    a = file.readline()
    b = file.readline()
print(a)
print(b)
