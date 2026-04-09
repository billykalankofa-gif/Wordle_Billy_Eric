#  Wordle Solver - Billy & Eric

## Auteurs

Le binôme :

* Billy : développement des fichiers source (.c)
* Eric : réalisation du fichier d’en-tête (.h)


---

##  Organisation du projet

Le projet est structuré de la manière suivante :

```
wordle_solver/
│
├── bin/                # Contient l’exécutable
├── src/                # Fichiers source
│   ├── main.c
│   └── filters.c
├── include/            # Fichier d’en-tête
│   └── filters.h
├── ressource/          # Fichier contenant les mots
│   └── bdd_wordle.txt
└── README.md
```

---Remarque sur le développement

Au cours du développement, certaines erreurs ont nécessité la suppression et la réorganisation de certains fichiers.
Cela a permis d’améliorer la structure du projet et de corriger les problèmes rencontrés.



##Pour compiler le programme, utiliser la commande suivante dans le terminal :

gcc src/main.c src/filters.c -Iinclude -o bin/wordle

##Fonctionnalités

Le programme propose plusieurs filtres :

 Filtrer les mots contenant une lettre
 Exclure une lettre
 Filtrer selon la position d’une lettre
 Afficher les mots restants

Ces filtres permettent de réduire progressivement la liste des mots possibles pour trouver la solution.
