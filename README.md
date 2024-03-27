# Projet Recreation printf

Ce projet a pour but de  recréer `printf`mais en version simplifiée en langage C. La fonction `printf` est une fonction de la bibliothèque standard utilisée pour imprimer des données d'un code ou d'une partie de code sur la sortie standard.

## Description

Le projet comprend plusieurs fichiers :

- `main.h`: Ce fichier contient les prototypes de fonctions et les définitions de structures nécessaires à l'implémentation de la fonction `printf`.

- `printf.c`: Ce fichier contient la fonction principale `_printf`, qui simule le comportement de la fonction `printf` de la bibliothèque standard.

- `print_functions.c`: Ce fichier contient les définitions des fonctions de gestion des différents spécificateurs de format (`%c`, `%s`, etc.).

## Fonctionnalités

Ce projet implémente les fonctionnalités de base de la fonction `printf`, y compris la gestion des spécificateurs de format suivants :

- `%c` : Imprime un caractère unique.
- `%s` : Imprime une chaîne de caractères.
- `%d` : Imprime un chiffre.

Le programme prend également en charge les caractères d'échappement `%%` pour imprimer le caractère `%` lui-même.

## Commande de compilation

Pour compiler le programme, utilisez la commande suivante dans votre terminal :

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
#
