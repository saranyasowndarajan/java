s = input("enter string")
l=list(s)
print(l)
s1 = "aeiou"
for i in l:
  if i in s1:
    l.remove(i)
x = l[::-1]
print(x)
