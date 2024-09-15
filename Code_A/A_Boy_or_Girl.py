user = input()  # Replace this with the actual user string initialization

unique = set(user)  # Convert the string to a set to get unique characters

# Print the result based on the condition
print("CHAT WITH HER!" if len(unique)%2 == 0 else "IGNORE HIM!")

