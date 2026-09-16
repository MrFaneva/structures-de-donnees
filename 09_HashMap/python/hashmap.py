class SimpleHashMap:
    def __init__(self, size=10):
        self.size = size
        self.table = [[] for _ in range(self.size)]

    def _hash(self, key):
        return hash(key) % self.size

    def put(self, key, value):
        hv = self._hash(key)
        for item in self.table[hv]:
            if item[0] == key:
                item[1] = value
                return
        self.table[hv].append([key, value])

    def get(self, key):
        hv = self._hash(key)
        for item in self.table[hv]:
            if item[0] == key:
                return item[1]
        return None

if __name__ == "__main__":
    mp = SimpleHashMap()
    mp.put("K1", "V1")
    assert mp.get("K1") == "V1", "Erreur : K1 devrait valoir V1"
    print("Test Python HashMap réussi !")

