# Construire le projet
Vous pouvez utiliser un dev container de base C++ de VScode.
Le projet utilise cmake, pensez à l'inclure dans votre dev container.

Voici les lignes de commandes pour compiler le projet:
```
$ mkdir build
$ cd build
$ cmake ..
$ make
```

# Répertoire data

Il contient 2 fichiers `books.txt`et `users.txt` que vous pouvez utilisez pour tester votre code.
Pour ca il suffit de les copiers dans le repertoire `build` avec l'application `bibliotheque`


#Question 1

La fonction getline est une fonction est une fonction qui est utilisee pour lire une ligne de texte entiere provenant d'un fichier input. Les arguments sont: getline(stringstream, string, char). Char est le separateur, si on veut lire par exemple le texte du jusqu'a ce separateur (dans notre cas, '|'). Le string est la valeur qu'on veut chercher dans la ligne.

#Question 2

Il serait mieux d'avoir une base de donnees MYSQL avec un backend pour permettre une gestion plus facile. On pourrait utilise un backend python comme FastAPI. On peut utiliser React pour avoir un frontend facile a parcourir plutot que de rester dans C++. On peut aussi utiliser un IA pour automatiser certaines actions comme le classement des livres ou avoir des resumes sur les livres.
