n = int(input())
cities = list(map(int, input().split()))

for i in range(n):
    max_dist = max(cities[i] - cities[0], cities[n-1] - cities[i])  # Maximum distance
    
    if i == 0:
        min_dist = cities[1] - cities[0]  # Minimum distance for the first city
    elif i == n-1:
        min_dist = cities[n-1] - cities[n-2]  # Minimum distance for the last city
    else:
        min_dist = min(cities[i] - cities[i-1], cities[i+1] - cities[i])  # Minimum distance for intermediate cities
    
    print(min_dist, max_dist)

#-5 -2 2 7