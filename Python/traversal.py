class Node:
    def __init__(self, value):
        self.value = value
        self.children = []

    def __str__(self):
        return str(self.value)

    def __repr__(self):
        return str(self.value)



def bfs(node, queue, visited):
    queue.append(node)
    visited.append(node)

    while queue:
        n = queue.pop(0)
        print(n)

        for child in n.children:
            visited.append(child)
            queue.append(child)    


def dfs(node, queue, visited):
    if node not in visited:
        print(node)
        visited.append(node)
        for node in node.children:
            dfs(node, queue, visited)


if __name__ == '__main__':
    node = Node(1)
    node.children.append(Node(2))
    node.children.append(Node(3))
    node.children.append(Node(4))
    node.children.append(Node(5))
    node.children.append(Node(6))
    node.children.append(Node(7))
    node.children[0].children.append(Node(8))
    node.children[0].children.append(Node(9))
    node.children[0].children.append(Node(10))
    queue = []
    visited = []
    dfs(node, queue, visited)


