def palindrome(str)
  str == str.reverse
end
str = gets.chomp!
N = str.length
if palindrome(str) and palindrome(str.slice(0..(N-1)/2)) and palindrome(str.slice((N+3)/2..N))
  print("Yes\n")
else
  print("No\n")
end
