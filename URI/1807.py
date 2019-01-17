def power(number,pow):
    if pow == 0: return 1
    if pow%2 == 0: return power((number*number)%2147483647,(pow/2)%2147483647)
    else: return (number%2147483647)*(power(number,pow-1))%2147483647

r = int(raw_input())
print power(3,r)
#2147483647