## 3.Peace Poetry: HACKED

### Méthod : Vulnérabilité d'injection de chemin de fichier
Cette vulnérabilité exploite des chemins de fichiers non filtrés, vous permettant de modifier le contenu de n'importe quel fichier du site web

Ouvrez le code source de la page web et trouvez en bas une URL d'une page web avant qu'elle ne soit piratée.

![ex3](./images/ex3.1.png)

Cliquez sur "Submit Poetry", vous pourrez voir un formulaire web à soumettre.

![ex3](./images/ex3.2.png)
![ex3](./images/ex3.3.png)

Dans le champ « Name of poem », vous avez entré ../index.html, 
ce qui pointe vers le fichier index.html situé dans le répertoire racine du site web. 
Grâce à cette opération de traversée de répertoires, 
vous avez contourné la restriction qui normalement ne permettait que la soumission de poèmes, 
et vous avez accédé directement au fichier de la page d'accueil du site web pour le modifier.

![ex3](./images/ex3.4.png)


Bien que nous ne puissions pas consulter directement le code original de la page web à partir du code source de la page, 
nous pouvons le voir via check-sources.La section Poem correspond au code HTML de la page d'origine.
![ex3](./images/ex3.5.png)
Lorsqu‘on saisisse du code HTML dans ce champ et clique sur « add poem », le système écrit ce code dans le fichier index.html spécifié,
modifiant ainsi le contenu de la page d'accueil.
![ex3](./images/ex3.6.png)
![ex3](./images/ex3.7.png)
