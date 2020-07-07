lines = 0
words = 0
chars = 0

with open("count.txt", 'r') as file:
    for line in file:
        parameters = line.split()
        lines += 1
        words += len(parameters)
        chars += len(line)
print("Lines: " + str(lines) + "\nWords: " + str(words) + "\ncharacters: " + str(chars));
" Este es un test para la prueba de contar"