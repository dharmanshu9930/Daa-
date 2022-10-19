def tab_rec_fun(n, i):
    if(i>10):
        return
    print(n, "*", i, "=", n*i)
    return tab_rec_fun(n, i+1)
print("Enter the Number: ")
num = int(input())
print("\nTable of", num, "is:")
tab_rec_fun(num, 1)
