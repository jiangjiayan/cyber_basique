## 5.Damn Telemarketers!

### Méthod : Hash, root.txt

1. https://www.hackthissite.org/missions/realistic/5/robots.txt :trouvé les fichiers cachés 

![ex5](./images/ex5.1.png)

2. https://www.hackthissite.org/missions/realistic/5/lib/

![ex5](./images/ex5.2.png)

https://www.hackthissite.org/missions/realistic/5/secret/

![ex5](./images/ex5.3.png)

3.https://www.hackthissite.org/missions/realistic/5/secret/admin.bak.php

![ex5](./images/ex5.4.png)

`hash 720f64e9c98ff769b1b127bddfd6a242`

4.On fait analyse de la suite `720f64e9c98ff769b1b127bddfd6a242` pour vérifier laquelle méthod de hash

`hashid 720f64e9c98ff769b1b127bddfd6a242`

![ex5](./images/ex5.10.png)

5. Décryptage de la suite hash avec l’outil `hashcat`

 `hashcat -m 900 720f64e9c98ff769b1b127bddfd6a242 - a 3 -o hash.txt`
 -m 900 : il représente la méthod crypto hash MD4
 -a 3 : il représente la méthode d’attaque 'Brute-Force '
 -o hash.txt: il stocke le résultat dans la fiche hash.txt

![ex5](./images/ex5.5.png)
![ex5](./images/ex5.6.png)

 6. Le résultat de décryptage

![ex5](./images/ex5.7.png)

7.Utilise le mot de passe 

Rentre la page d’accueil et aller à 'database'
https://www.hackthissite.org/missions/realistic/5/submit.html
Utilise le mot de passe on obtenue :`c5513`
![ex5](./images/ex5.8.png)

8. il est réussi d’entrée
![ex5](./images/ex5.9.png)
(il a dit erreur car j'ai réussi, mais lorsque je reviens, cela affiche que j'ai déjà terminé et que je ne peux pas recommencer. )
