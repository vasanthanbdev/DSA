def find_paths(source, destination, adj_list):
    paths = [] 
    queue = [(source, [source])]

    while queue:
        (city, path) = queue.pop(0)
        for next_city, distance in adj_list[city].items():
            if next_city == destination:
                paths.append((path + [next_city], distance))
            else:    
                queue.append((next_city, path + [next_city]))

    return paths


if __name__ == "__main__":
    #getting the inputs
    cities = int(input()) 
    city_list = []
    for i in range(cities):
        city_list.append(input())

    roads = int(input())
    adj_list = {}

    for i in range(roads):
        city1, city2, dist = input().split() 
        
        if city1 not in adj_list:
            adj_list[city1] = {city2: int(dist)}
        else: 
            adj_list[city1][city2] = int(dist)

        if city2 not in adj_list:
            adj_list[city2] = {city1: int(dist)}
        else:
            adj_list[city2][city1] = int(dist)

    source, destination = input().split()  
    
    #calculating the path
    for path, distance in find_paths(source, destination, adj_list):   
        print(' '.join(path), distance)