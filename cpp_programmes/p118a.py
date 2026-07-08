a = input()
vowel = ["a","e","i","o","u","y"]
ans = []
for x in a:
    if x.lower() not in vowel:
        ans.append("." + x.lower())
print("".join(ans))