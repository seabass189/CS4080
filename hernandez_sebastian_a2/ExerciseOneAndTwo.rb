#~~Sebastian Hernandez
#Assignment 2, Exercises 1 and 2

#Exercise 1
i = 0
k = 0 
j = 0
k = (j + 13) / 27
while k <= 10
	k += 1
	i = 3 * k - 1
end

#Exercise 2
i = 0
k = 0
j = 0
case k
when 1, 2
	j = 2 * k - 1
when 3, 5
	j = 3 * k + 1
when 4
	j = 4 * k - 1
when 6, 7, 8
	j = k - 2
end
	
	