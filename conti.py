if __name__ == '__main__':
    n = int(input())
    i = 1
    while(True):
        if i<=n:
            print(i,end="")
            i=i+1
            continue
        if i>n:
            break
