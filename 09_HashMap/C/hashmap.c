#include <stdio.h>
#include <string.h>
#include <assert.h>

#define SIZE 10

struct Node {
    char key[20];
    char value[20];
};

struct Node hashTable[SIZE];

int hashFunction(char* key) {
    int sum = 0;
    for (int i = 0; key[i] != '\0'; i++) {
        sum += key[i];
    }
    return sum % SIZE;
}

void put(char* key, char* value) {
    int index = hashFunction(key);
    strcpy(hashTable[index].key, key);
    strcpy(hashTable[index].value, value);
}

char* get(char* key) {
    int index = hashFunction(key);
    return hashTable[index].value;
}

int main() {
    put("K1", "V1");
    assert(strcmp(get("K1"), "V1") == 0);
    printf("Test C HashMap réussi !\n");
    return 0;
}

