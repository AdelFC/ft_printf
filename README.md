# ft_printf

Voici un exemple de contenu pour le fichier `README.md` :

---

# ft_printf

`ft_printf` est une réimplémentation simplifiée de la fonction standard `printf` en C, conçue pour formater et afficher des chaînes de caractères avec différents types d'arguments.

## Fonctionnalités

Cette version de `ft_printf` prend en charge les types de conversion suivants :

- **`%c`** : Affiche un caractère.
- **`%s`** : Affiche une chaîne de caractères.
- **`%p`** : Affiche l'adresse mémoire d'un pointeur en hexadécimal, précédée de `0x`.
- **`%d` / `%i`** : Affiche un entier signé en base 10.
- **`%u`** : Affiche un entier non signé en base 10.
- **`%x`** : Affiche un entier non signé en hexadécimal (lettres minuscules).
- **`%X`** : Affiche un entier non signé en hexadécimal (lettres majuscules).
- **`%%`** : Affiche un caractère `%`.