


def crawl(graph, i,j, visited):
    if i < 0 or j < 0 or i > len(graph)-1 or j > len(graph[i])-1:
        return
    
    if graph[i][j]:
        if [i,j] not in visited:
            visited.append([i,j])
            if graph[i][j] == 1:
                crawl(graph,i+1,j, visited)
                crawl(graph,i-1,j, visited)
                crawl(graph,i,j+1, visited)
                crawl(graph,i,j-1, visited)


def find_islands(graph, visited):
    islands = 0
    for i in range(len(graph)):
        for j in range(len(graph[i])):
            if graph[i][j] == 1 and [i,j] not in visited:
                # land ho!
                crawl(graph,i,j, visited)
                islands += 1
                
    print(str(islands))        



if __name__ == '__main__':
    graph = [[0,1,0,0,0,0,0,0,0,0,0],
            [1,1,1,0,0,0,0,0,1,1,0],
            [0,1,0,0,0,1,0,0,1,1,0],
            [0,0,0,0,1,1,1,0,0,0,0],
            [0,0,0,0,0,1,0,0,0,1,1],
            [0,0,0,0,0,0,0,0,0,1,1]]
    
    visited = []
    
    find_islands(graph, visited)