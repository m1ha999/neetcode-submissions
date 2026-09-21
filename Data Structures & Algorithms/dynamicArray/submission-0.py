class DynamicArray:

    def __init__(self, capacity: int):
        self.lista = [0] * (capacity)
        self.size = 0
        self.capacity = capacity

    def get(self, i: int) -> int:
        return self.lista[i]


    def set(self, i: int, n: int) -> None:
        self.lista[i] = n

    def pushback(self, n: int) -> None:
        if self.capacity == self.size:
            self.resize()
        self.lista[self.size] = n          #u klasi ne pravim novu instancu te iste klase
        self.size += 1

    def popback(self) -> int:
        self.size -= 1
        el = self.lista[self.size]
        return el

    def resize(self) -> None:
        self.capacity = self.capacity * 2
        self.lista = self.lista + [0] * (self.capacity - self.size)

    def getSize(self) -> int:
        return self.size

    def getCapacity(self) -> int:
        return self.capacity
