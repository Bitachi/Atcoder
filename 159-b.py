def palindrome(str):
    return str == str[::-1]
str = input()
N = len(str)
former = int((N-1)/2)
letter = int((N+3)/2 - 1)
if palindrome(str) and palindrome(str[0:former]) and palindrome(str[letter:N]):
    print("Yes")
else:
    print("No")
