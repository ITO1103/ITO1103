character = {"name": "kirishima", "age": 18, "pc": "margaret"}
print(character.keys())

print("***********")

character = {"name": "kirishima", "age": 18, "pc": "margaret"}
print(character.items())

print("############")

character = {"name": "kirishima", "age": 18, "pc": "margaret"}
k = input()
print(k in character)

print("||||||||||||")

n = int(input())
d = {}
for i in range(n):
    d[i] = i * 3
print(d)
