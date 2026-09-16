# 07. Linked List (Liste chaînée simple)

Une **Linked List** est une structure de données linéaire où les éléments ne sont pas stockés à des emplacements mémoire contigus. Chaque élément (nœud) contient un pointeur/référence vers le nœud suivant.

## 🎯 Complexité Temporelle
* Insertion en fin : **O(n)** (ou O(1) si on garde une référence sur la queue)
* Recherche / Accès direct : **O(n)**

## 🚀 Exécution locale

```bash
# Python
python python/linked_list.py

# C
gcc c/linked_list.c -o ll_c && ./ll_c

# Java
javac java/LinkedListTest.java && java -ea -cp java LinkedListTest
```

