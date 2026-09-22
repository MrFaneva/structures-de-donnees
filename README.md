![Validation des Structures de Donnees](https://github.com/MrFaneva/structures-de-donnees/actions/workflows/main.yml/badge.svg)

# Structures de Données

Mon portfolio technique d'apprentissage des structures de données fondamentales implémentées en **Python**, **Langage C** et **Java**. 

L'intégralité du projet intègre un cycle d'intégration continue (**CI/CD via GitHub Actions**) et une orchestration centralisée par **Makefile** pour automatiser la compilation et la validation des algorithmes.

## 🛠️ État d'avancement du Portfolio

* 📦 **05. Stack (Pile)** — Implémentation linéaire LIFO (Python, C).
* 🔗 **07. Linked List (Liste chaînée)** — Gestion des nœuds et des références dynamiques (Python, C, Java).
* 🔑 **09. HashMap (Table de Hachage)** — Gestion personnalisée des fonctions de hachage et des collisions (Python, C).
* 📐 **11. Heap (Tas / Max-Heap)** — Représentation optimisée d'un arbre binaire complet sous forme de tableau (Python, C, Java).

---

## 🚀 Orchestration & Exécution locale

Le projet utilise un **Makefile** pour standardiser et automatiser l'exécution des batteries de tests. Vous n'avez besoin d'aucune commande complexe.

### 1. Lancer l'intégralité des tests (Multi-langages)
Cette commande exécute automatiquement tous les fichiers Python, compile et lance les exécutables C, compile et exécute les classes de tests unitaires Java avec assertions activées (`-ea`), puis nettoie proprement les résidus de compilation.
```bash
make test
```

### 2. Lancer le test d'une structure spécifique
Si vous souhaitez isoler le test d'une structure en particulier pendant votre développement :
```bash
make test-hashmap
make test-stack
make test-linkedlist
make test-heap
```

### 3. Nettoyer les fichiers binaires temporaires
Pour supprimer manuellement les fichiers exécutables et les fichiers `.class` résiduels :
```bash
make clean
```

