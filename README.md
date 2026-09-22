![Validation des Structures de Donnees](https://github.com/MrFaneva/structures-de-donnees/actions/workflows/ci.yml/badge.svg)


# 09. HashMap (Table de Hachage)

Cette section présente une implémentation personnalisée d'une **HashMap** sans utiliser les structures natives des langages, afin de démontrer les mécanismes internes de hachage.

## 🎯 Concepts Clés
* **Fonction de Hachage** : Transforme une clé en un index numérique.
* **Complexité Temporelle** : 
  * Recherche / Insertion : **O(1)** en moyenne.
  * Pire des cas : **O(n)** si toutes les clés entrent en collision.
* **Gestion des Collisions** : Implémentée via chaînage (Python) et adressage direct simplifié (C).

## 💻 Langages Utilisés
* **Python** : Approche Orientée Objet (POO) avec listes dynamiques.
* **Langage C** : Allocation statique et manipulation directe des chaînes de caractères.

## 🚀 Exécution des tests

### Python
```bash
python python/hashmap.py
```

### Langage C
```bash
gcc c/hashmap.c -o hashmap_c
./hashmap_c
```
# Structures de Données

Mon portfolio d'apprentissage des structures de données en Python et Langage C.

## 🛠️ Suivi des structures
* 📦 **05. Stack** (Python & C)
* 🔑 **09. HashMap** (Python & C)

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
* 📐 **11. Heap (Max-Heap)** — Implémentation sous forme de tableau en Python, C et Java.


