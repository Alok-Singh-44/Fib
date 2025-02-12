a = 1;
b = 2;
# c;
print(a);
print(b);
for i in range(0, 5):
    c = a + b;
    print(c);
    a = b;
    b = c;

print("Hello");
if a < b:
    print("Yes")
