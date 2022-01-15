# First non-repeating character
def first_non_repeating(str):
    char_frequency = {}
    for i in range(len(str)):
        if str[i] in char_frequency:
            char_frequency[str[i]] += 1
        else:
            char_frequency[str[i]] = 1  # To keep count of the characters
    for i in range(len(str)):
        if char_frequency[str[i]]==1:
            return str[i]
    return "$" 



print(first_non_repeating("akshay"))
