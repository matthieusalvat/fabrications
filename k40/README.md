Améliorations de ma K40
======================


**Attention** : utiliser ce type de matériel reste dangereux, une découpeuse laser de 40W fonctionne sous une forte tension et le refroidissement se faisant à l'eau les risques ne sont pas négligeables. Afin de les limiter, il faut bien vérifier l'installation électrique (surtout la mise à la terre). **Enfin on ne laisse jamais une découpeuse laser en fonctionnement sans surveillance**. 

En cas de doute, n'hésitez pas à vous rapprochez du [FabLab le plus proche](https://www.makery.info/labs-map/) pour demander de l'aide !

![k40-neuve](https://user-images.githubusercontent.com/16662847/114190958-3161f680-994c-11eb-944c-c4a09a0359f8.jpeg)

Cette page fait suite à mon [fil initial posté sur Twitter](https://twitter.com/matthieu_salvat/status/1370641000327229447) décrivant les modifications réalisées sur ma K40.

Liste du matériel acheté :
- [K40](https://fr.aliexpress.com/item/1005001374933857.html) : 362€
- [Convertisseur 220V/12V-5V](https://fr.aliexpress.com/item/33026794912.html) : je partage ce lien mais, de mon côté, j'ai réalisé mon adapteur à partir d'une ancienne alimentation 220V/12V sur laquelle j'ai ajouté un convertisseur 12V/5V : 1€
- [Plateau nid d'abeilles](https://fr.aliexpress.com/item/4000893098892.html) : choisir plutôt le format 350x250mm, il permet d'utiliser au maximum la partie nid d'abeilles pour les grandes découpes sans aller sur les bords (où ça coupe moins bien et où ça laisse des traces sur le dessous des pièces) : 23€
- [Thermomètre et visualiseur de débit](https://fr.aliexpress.com/item/32822267913.html) : permet de voir si le système de refroidissement fonctionne bien (si l'eau circule), le thermomètre remplace avantageusement celui fournit avec la machine (il rentre parfaitement dans l'espace dédié) : 10€
- [Ampèremètre 30mA](https://fr.aliexpress.com/item/32602637262.html) : permet de vérifier que la puissance du laser ne monte pas trop. En effet, si on monte le laser à 100% de sa puissance on risque de lui faire consommer d'avantage de courant que ce pourquoi il est prévu (ce qui n'est pas souhaitable si on désire garder son tube laser en vie longtemps) : 7€
- [Compresseur d'air 45W](https://fr.aliexpress.com/item/32889242158.html) : permet de souffler de l'air au niveau de la découpe afin de garantir un résultat optimum (ça empêche la formation de flammes par exemple lorsque l'on coupe du bois) : 39€
- [Contrôleur de débit PY+6](https://fr.aliexpress.com/item/4000355448582.html) : permet de contrôler le débit d'air en cas de besoin (pour les matériaux légers comme le tissu ou le papier) : 1€
- [Pointeurs laser](https://fr.aliexpress.com/item/32970959152.html) : à l'origine j'ai choisi un laser en croix, mais le réglage étant un peu fastidieux, j'ai finalement opté pour 2 pointeurs linéaires : 3€
- [Chaîne guide-câble](https://fr.aliexpress.com/item/32999589537.html) : permet d'amener proprement et en toute sécurité le câble d'alimentation des pointeurs laser et le tube d'air au niveau de la tête de découpe : 4€
- [Pompe à vide](https://fr.aliexpress.com/item/4000963249751.html) : pour fabriquer un outil de vérification de la qualité de découpe. Voir la vidéo de [Barbatronic sur le sujet](https://www.youtube.com/watch?v=9QkHnuLCwCw) : 4€
- Un grand bac pour stocker l'eau déminéralisée servant au circuit de refroidissement. J'ai pris un grand bac cylindrique de 80l : 10€
- 40l à 50l d'eau déminéralisée : à acheter dans sa grande surface ou son magasin de bricolage préféré, on la trouve facilement en bidon de 5l : 15€
- [Un arduino Pro Micro 5V (ATmega32U4)](https://fr.aliexpress.com/item/32849563958.html) : permet de contrôler le chariot depuis K40Whisperer : 3€
- [Clavier analogique 5 touches](https://fr.aliexpress.com/item/2044851328.html) : petit clavier de 5 touches pour contrôler le chariot : 2€
- [Crochets à ventouser](https://www.leroymerlin.fr/produits/salle-de-bains/meuble-de-salle-de-bain-et-vasque/accessoires-de-meuble-de-salle-de-bains/patere-de-salle-de-bains/crochet-a-ventouser-bleu-atoll-4-play-69110573.html): pour fixer le compresseur sur une surface plane : 4€ 
- Du contreplaqué/MDF/PMMA de 3mm d'épaisseur pour réaliser les pièces.

Soit un total de **488€** pour avoir une machine complètement fonctionnelle.

Je vous conseille de regarder la [page GitHub de Barbatronic](https://github.com/nadarbreicq/Barbatronic/tree/master/laser%20k40) pour voir ses modifications (et les supers vidéos liées).

Toutes les boites (pieds, contrôleur de chariot, boitier électrique interne) ont été générées avec le plugin Inkscape développé par un membre du [FabLab de Lannion](https://wiki.fablab-lannion.org/index.php?title=Generateur_de_boites).


Vous trouverez ci-dessous la liste des modifications effectuées sur ma K40 (de la plus simple à la plus complexe) :

## Changement du plateau

La partie la plus facile des modifications, il suffit d'enlever le plateau fourni et de placer le nouveau plateau en nid d'abeilles sur des pieds. J'ai utilisé le plugin de génération de boites du FabLab de lannion pour générer 3 pieds :

![pieds-plateau](https://user-images.githubusercontent.com/16662847/114190971-33c45080-994c-11eb-8335-11f7c9d055f6.jpeg)

J'ai ajouté 3 aimants neodymes dans [chaque pied](pieds-plateau.svg) afin que ces derniers soient bien maintenus sur le châssis.

![pieds-aimants](https://user-images.githubusercontent.com/16662847/114190963-32932380-994c-11eb-9306-433021c62c8a.jpeg)

Il suffira de concevoir de nouveaux pieds pour adapter la hauteur du plateau à l'épaisseur du matériel à découper.

## Support du compresseur

Le compresseur vibre beaucoup, c'est pourquoi il est nécessaire de le caler sur la table. J'ai choisi d'utiliser des ventouses fixées sur une [plaque en bois](support-compresseur.svg) sur laquelle est à son tour fixé le compresseur. Ci-dessous on peut observer le contrôle du débit d'air (pratique pour limiter le flux d'air pour les matériaux légers) :

![compresseur-fixe](https://user-images.githubusercontent.com/16662847/114190939-2c04ac00-994c-11eb-9ab1-abaebce1f7ff.jpeg)

![compresseur-gros-plan](https://user-images.githubusercontent.com/16662847/114190944-2dce6f80-994c-11eb-902f-9659fb6c0cd2.jpeg)

## Ajout d'un cendrier

La machine dispose d'un trou d'évacuation des petits déchets de découpe sous le plateau, j'ai ajouté un [petit cendrier](cendrier.svg) afin de récupérer ces déchets facilement :

https://user-images.githubusercontent.com/16662847/114205646-cec42700-995a-11eb-98aa-3888ad821dc5.mp4


## Ajout de la buse d'air et du pointeur laser

Faire passer le câble d'alimentation des pointeurs laser et le tube d'air dans la chaîne guide-câble. Cette dernière est simplement fixée au châssis avec des serres-câbles.

![support-air-laser2](https://user-images.githubusercontent.com/16662847/114191458-ba792d80-994c-11eb-8949-64879d1f9db2.jpg)

Utiliser des vis M3 (5mm ou 8mm de longueur) pour fixer le petit support de la buse et régler les pointeurs lasers. Attention, selon le matériau (PMMA, MDF, contreplaqué...) il faudra peut-être changer la taille des trous de fixation des vis M3 (vis utilisées pour fixer les composants dans une tour de PC) pour que ces dernières puissent s'assembler correctement (faire des tests avant de découper l'ensemble). Le modèle est prévu pour être découpé sur une plaque de 3mm d'épaisseur.

Vous trouverez le modèle de mon support pour les pointeurs et la buse [ici](support-laser-air.svg) (le modèle a évolué depuis la prise de la photo) :

![support-air-laser1](https://user-images.githubusercontent.com/16662847/114190976-34f57d80-994c-11eb-9a08-3e4da63d4c41.jpeg)


## Remplacement de la sonde de température


L'avantage de la sonde choisie est qu'elle comporte un système visuel permettant de voir l'eau circuler jusqu'au laser :

https://user-images.githubusercontent.com/16662847/114275709-ce439300-9a23-11eb-8984-9d4ce9c8f302.mp4

. Sa taille est compatible avec l'emplacement prévu pour l'afficheur intégré dans le modèle d'origine, il suffit d'alimenter l'afficheur en 12V (grâce à l'adapateur 220V/12V) :

![temp](https://user-images.githubusercontent.com/16662847/114190979-3626aa80-994c-11eb-8ee7-53d82481c01a.jpeg)

## Boitier de contrôle du chariot


https://user-images.githubusercontent.com/16662847/114202091-2791c080-9957-11eb-8f84-98a51ab9961c.mp4


Le code permettant d'émuler l'appui sur les touches CTRL+<fléches> se trouve [ici](k40_ctlr_button). Il faut un Arduino Pro Micro (ou un autre Arduino basé sur le mini-contrôleur ATmega32U4). Le modèle de ma boite se trouve [ici](). Les 4 boutons principaux permettent de bouger le chariot sur les axes X et Y, le cinquième bouton permet de revenir à l'origine machine (Home). A terme j'aimerais pouvoir lancer la fonction de vérification de l'emprise de la découpe (mais cela nécessite de modifier le code de K40 Whisperer).

![controle1](https://user-images.githubusercontent.com/16662847/114190950-2f983300-994c-11eb-93d0-61715c1a2e10.jpeg)


## A faire

- Placer l'ampèremètre sur le chassis
- [Fabriquer et installer le barba-sucker](https://www.youtube.com/watch?v=9QkHnuLCwCw)

