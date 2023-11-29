# Installation
## Récupérer le repo
Copier coller cette ligne dans votre terminal, en vous plaçant dans votre dossier de travail, assurez-vous d'avoir été ajouté en tant que collaborateur.
```bash
git clone git@github.com:NathanDabi/snoopy.git
```

## Configuration
1.  Ouvrez CLion et fermez tous les projets ouvert
2. Cliquez sur "open" et ouvrez le dossier que vous venez de cloner,
3. Une fois votre projet ouvert, rendez-vous dans le fichier "CMakeList.txt",
4. Une bannière devrais vous proposer de charger le fichier CMake,
5. Cliquez dessus,
6. Vous pouvez maintenant lancer votre projet.

# Livraison
Ce repo est livré en état de bug, il faut remettre les chose en place, notamment avec le chronomètre.
## Principe du chrono
Le chronomètre doit ce déclencher lorsque le jeu est lancé. À ce moment, une variable "game" doit passer de la valeur 0 à la valeur 1.
Le timer fait ce que l'on appel un "callback", c'est-à-dire qu'il va appeler une autre fonction à la fin de son décompte. Cette fonction doit refaire passer la valeur de "game" de 1 à 0.

## Filtrer les événements clavier
Vous devez filtrer les événements clavier et ne les laisser passer que si la variable "game" est sur 1.

# ANEX
Voir avec Nathan pour trouver le chrono.

# Tuto github rapide
## Synchroniser votre repo local avec le repo distant
```bash
git pull
```

## Poucer vos modification sur le repo distant
```bash
git commit -m "votre_commit"
git push
```

## Ajouter vos fichiers au repo
```bash
git add .
```

## Pour obtenir le statu de vos fichiers
```bash
git status
```

## Savoir dans quelle branche locale vous vous trouvez
```bash
git branch
```

Les autres commandes, demandez-les à ChatGPT. Il y a un cours sur git disponible ici:
<https://openclassrooms.com/fr/courses/7162856-gerez-du-code-avec-git-et-github>

Bonne chance!
