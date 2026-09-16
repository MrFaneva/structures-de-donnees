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

