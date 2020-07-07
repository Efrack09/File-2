file = open("merge.txt", "r")
file1 = open("merge1.txt", "r")
file2 = open("merge2.txt", "w")

text = file.read() + "\n" + file1.read()

file2.write(text)
