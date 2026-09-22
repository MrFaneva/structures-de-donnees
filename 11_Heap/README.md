# 11. Heap (Max-Heap)

Un **Max-Heap** est un arbre binaire presque complet modélisé efficacement dans un tableau linéaire, où le nœud parent est toujours supérieur ou égal à ses enfants.

## 🎯 Propriétés & Complexité
* Accès au Maximum : **O(1)**
* Insertion : **O(log n)**
* Représentation en tableau : Pour un index `i`, le parent est à `(i-1)/2`, le fils gauche à `2i+1` et le fils droit à `2i+2`.

