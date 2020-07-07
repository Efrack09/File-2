file1 = open("test1.txt", "r")
test1 = file1.read()
file1 = open("test1.txt", "w")
file1.write(test1.replace("love", ""))
