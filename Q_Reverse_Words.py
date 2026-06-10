# Q. Reverse Words
# time limit per test1 second
# memory limit per test256 megabytes
# Given a string S
# . For each word in S
#  reverse its letters then print it.

# Note: words are separated by space.

# Input
# Only one line contains a strings S
#  (1≤|S|≤106)
#  where |S| is the length of the string and it consists of lowercase and uppercase English letters, spaces.

# Output
# Print the answer required above.

# Examples
# InputCopy
# I love you
# OutputCopy
# I evol uoy
# InputCopy
# You love me
# OutputCopy
# uoY evol em
# InputCopy
# We are a happy family
# OutputCopy
# eW era a yppah ylimaf



str = input()

words = list(str.split())

# print(words)

for i, items in enumerate(words):
    if i == len(words) - 1:
        print(items[::-1], end='')
    else:
        print(items[::-1], end=' ')