# Variables de configuration
PYTHON = python3
GCC = gcc
CFLAGS = -Wall -Wextra -O2
JAVAC = javac
JAVA = java

.PHONY: all test clean test-hashmap test-stack test-linkedlist test-heap

# Cible par défaut : lance tous les tests
all: test

# --- Commande principale pour tout tester ---
test: test-hashmap test-stack test-linkedlist test-heap
	@echo "========================================"
	@echo " ✅ TOUS LES TESTS ONT REUSSI AVEC SUCCÈS !"
	@echo "========================================"

# --- Tests individuels par structure ---

test-hashmap:
	@echo "⏳ Test de la HashMap..."
	@$(PYTHON) 09_HashMap/python/hashmap.py
	@$(GCC) $(CFLAGS) 09_HashMap/c/hashmap.c -o hashmap_test
	@./hashmap_test
	@rm -f hashmap_test

test-stack:
	@echo "⏳ Test de la Stack..."
	@$(PYTHON) 05_Stack/python/stack.py
	@$(GCC) $(CFLAGS) 05_Stack/c/stack.c -o stack_test
	@./stack_test
	@rm -f stack_test

test-linkedlist:
	@echo "⏳ Test de la Linked List..."
	@$(PYTHON) 07_LinkedList/python/linked_list.py
	@$(GCC) $(CFLAGS) 07_LinkedList/c/linked_list.c -o ll_test
	@./ll_test
	@$(JAVAC) 07_LinkedList/java/LinkedListTest.java
	@$(JAVA) -ea -cp 07_LinkedList/java LinkedListTest
	@rm -f ll_test 07_LinkedList/java/*.class

test-heap:
	@echo "⏳ Test de la Heap..."
	@$(PYTHON) 11_Heap/python/heap.py
	@$(GCC) $(CFLAGS) 11_Heap/c/heap.c -o heap_test
	@./heap_test
	@$(JAVAC) 11_Heap/java/HeapTest.java
	@$(JAVA) -ea -cp 11_Heap/java HeapTest
	@rm -f heap_test 11_Heap/java/*.class

# --- Nettoyage des fichiers générés ---
clean:
	@echo "🧹 Nettoyage des fichiers temporaires..."
	@rm -f *_test ll_test hashmap_test stack_test heap_test
	@rm -f 07_LinkedList/java/*.class 11_Heap/java/*.class

