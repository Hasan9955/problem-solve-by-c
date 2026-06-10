# V. Replace Word
# time limit per test1 second
# memory limit per test256 megabytes
# Given a string S
# . Print S
#  after replacing every sub-string that is equal to "EGYPT" with space.

# Input
# Only one line contains a string S
#  (1≤|S|≤103)
#  where |S| is the length of the string and it consists of only uppercase English letters.

# Output
# Print the result as required above.

# Examples
# InputCopy
# BRITISHEGYPTGHANA
# OutputCopy
# BRITISH GHANA
# InputCopy
# ITALYKOREAEGYPTEGYPTALGERIAEGYPTZ
# OutputCopy
# ITALYKOREA  ALGERIA Z



str = input()


str.replace("EGYPT", " ")
# if "EGYPT" in str:
#     print("exists")

print(str.replace("EGYPT", " "))