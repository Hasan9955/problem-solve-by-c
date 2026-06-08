

str_number = input()


rev_str = '' 

for ch in str_number:
    rev_str = ch + rev_str


number = int(str_number)
rev_number = int(rev_str)

print(rev_number)

if number == rev_number:
    print("YES")
else:
    print("NO")


