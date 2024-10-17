# cyber_basique
## Challenge 1
Ouvrir le code source de la page Web
![challenge1](./image/challenge1.png)
On peux trouver so code est 675143f1.

## Chanllenge 2
Il a dit ”oublié de définir un mot de passe“，on pense que son mot de passe est vide, entrez directement.
![challenge1](./image/challenge2.png)

## Chanllenge 3
En regardant dans le code source HTML du formulaire de soumission de mot de passe, nous trouvons le seul champ de saisie caché intéressant avec nom = fichier  valeur = mot de passe.php .
![challenge1](./image/challenge3.1.png)

Cela ressemble au fichier de mots de passe que Sam a téléchargé. En visitant ce chemin, nous pouvons accéder au fichier password.php et il nous donne le mot de passe que nous recherchons.
![challenge1](./image/challenge3.2.png)
## Chanllenge 4
Dans le code source HTML du formulaire « Envoyer le mot de passe à Sam », nous trouvons le seul champ de saisie caché intéressant avec name= to value= sam@hackthissite.org.

![challenge1](./image/challenge4.png)

Changer cette adresse par mon propre email.Et puis on peut recevoir le code par notre mail,et il est réussi.

![challenge1](./image/challenge4.1.png)
## Chanllenge 5

On va utiliser la même méthode de chanllege 4, mais on juste corrigé l’adresse à user.

![challenge1](./image/challenge5.png)
![challenge1](./image/challenge5.1.png)

## Challenge 6
En chiffrant une chaîne simple comme 'aaaa', nous obtenons la version chiffrée 'abcd'

![challenge1](./image/challenge6.1.png)
![challenge1](./image/challenge6.2.png)

à partir de ce modèle, nous pouvons deviner que l'algorithme de chiffrement incrémente chaque caractère d'un nombre ASCII dans l'ordre croissant. 
Nous pouvons écrire un programme pour décrypter le mot de passe crypté.

![challenge1](./image/challenge6.3.png)

![challenge1](./image/challenge6.4.png)
## Challenge 7
Cela devrait être une attaque par injection de commandes；
On essaye d'ajouter une commande après l’année 

`2024 && ls`

![challenge1](./image/challenge7.1.png)

En bas nous voyons un fichier php nommé par un mot de passe

![challenge1](./image/challenge7.2.png)

Ouvrez-le dans l'URL `https://www.hackthissite.org/missions/basic/7/k1kh31b1n55h.php`

![challenge1](./image/challenge7.3.png)

Avec le code ,on a réussi.

![challenge1](./image/challenge7.4.png)

## Challenge 8
D'après la description, nous utilisons les directives SSI pour générer du contenu dynamique côté serveur.
Nous utilisons une charge utile comme ` <!--#exec cmd="ls ../"-->` pour lister les fichiers
![challenge1](./image/challenge8.1.png)

et puis on regarde 

![challenge1](./image/challenge8.2.png)

il est facile de trouver une files inclu notre code
` https://www.hackthissite.org/missions/basic/8/au12ha39vc.php` 

![challenge1](./image/challenge8.3.png)

Avec le code, on est réussi.
![challenge1](./image/challenge8.4.png)

## Challenge 9
Revenez au niveau 8 et changez l'injection, en utilisant
 `<!--#exec cmd="ls ../../9"-->`
 
 ![challenge1](./image/challenge9.1.png)

 Il fournit p91e283zc3.php.
 Cette fois, le mot de passe est a0e6a1e3
 ![challenge1](./image/challenge9.2.png)

## Challange 10

Mettez n'importe quoi dans le champ du mot de passe, soumettez le formulaire et interceptez la demande avec brup suit. Changez la valeur de level_authorized de "no" à "yes". Vous avez terminé.
 ![challenge1](./image/challenge10.png)

 ## Challenge 1
 Essayez d'ajouter a/, b/, c/ à la fin de l'URL pour vérifier jusqu'à ce que e, nous voyons la page Web suivante
 
  ![challenge1](./image/challenge11.1.png)
 
 Gardez ses sous-dossiers ouverts：
  
  ![challenge1](./image/challenge11.2.png)
  
  Il n'est plus disponible après n ，essayez d'accéder au fichier .htaccess

  ![challenge1](./image/challenge11.3.png)

  On va à https://www.hackthissite.org/missions/basic/11/e/l/t/o/n/DaAnswer/
  ![challenge1](./image/challenge11.4.png)

  Il a dit the answer is easy, on pense que "easy"est la mot de pass.
  On rentrer la page https://www.hackthissite.org/missions/basic/11/index.php et entrer le mot "easy",il est réussi.

  ![challenge1](./image/challenge11.5.png)
