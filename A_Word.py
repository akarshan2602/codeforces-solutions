str=input()
count_upper,count_lower=0, 0
for ch in str:
    if ch.isupper():
        count_upper +=1
    else:
        count_lower+=1


if count_upper > count_lower:
    print(str.upper())

else:
    print(str.lower())


