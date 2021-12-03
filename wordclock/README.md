===== Une horloge à mots (wordclock) =====

Basé sur l'idée des [QLockTwo](http://qlocktwo.com/touch.php?lang=fr).

![wordclock](https://user-images.githubusercontent.com/16662847/144586062-eeea246c-88e2-4808-90dd-94f4f4ba52e5.jpg)

Liens vers des instructions permettant d'en refaire :
- [Le guide complet](http://www.instructables.com/id/Wordclock/?ALLSTEPS) pour ceux qui sont motivé par la soudure et l'utilisation des registres à décalage
- [une version plus simple](http://www.instructables.com/id/Javelins-Word-Clock/?ALLSTEPS) utilisant un ruban à LED pour l'affichage
- [une version francisée](http://lafamillecreative.blogspot.fr/2012/11/une-word-clock-en-francais.html) plus petite que la version Javelin

## Le principe

Pour simplifier la fabrication de la première version j'ai fait les choix suivants :
- Utilisation d'un cadre photo standard
- Limitation à la taille (20cm * 20cm)
- Utilisation d'un ruban à LED (avec espacement de 1,66cm)

## Le matériel

### À acheter
- [Un ruban à LED](https://fr.aliexpress.com/wholesale?SearchText=WS2812b+5V) programmable WS2812B: les rubans à LEDs du style NeoPixel permettent d'avoir une programmation simple de la couleur et des LEDs à allumer séparément. A prendre de préférence en 5V pour ne pas avoir à ajouter un transfo. Ici pour avoir le bonne espaecment de 1,66cm entre 2 LED, il faut choisir un ruban de 60 LED par metre. Il faut 114 LED en tout, il faut donc prendre un ruban de 2m.
- ~~Un module RTC pour gérer l'horloge (et la date)~~
- Un condensateur de 1000 mFarad (ou autant de condensateurs pour arriver à ce chiffre)*
- Une résistance de 470 Ohm*
- Un circuit imprimé vierge (PCB)*
- ~~Un arduino nano~~
- un Wemos D1 R1 (ou autre ESP8266/ESP32)
- Un cadre photo 20cm * 20cm
- Un filtre pour diffuser la lumière des LEDs
- ~~Une télécommande infrarouge et son récepteur (en option)~~
- Un long cable micro USB
- Un connecteur femelle micro USB

* Il semble que de plus en plus de monde se passe des résistances et condensateurs dans leur montage sans avoir de problème.

### À faire
- Le cache pour les lettres (avec une découpeuse style [Silhouette Portrait](http://silhouettefr.fr/silhouette_portrait.html)). Peut être fabriqué chez un imprimeur.
- Une pièce pour séparer les LEDs. peut-être fait avec une imprimante 3D, une découpeuse laser ou simplement avec des lamelles de bois ou de carton

## Le montage

## Le code

Gestion du Wifi pour récupérer l'heure via NTP au démarrage. Utilisation d'une lib permettant de gérer les changements d'heure été/hiver.

Création de la page Web de gestion de la wordclock pour gérer la lumière ou encore récupérer les codes permettant d'afficher de nouveau message sur l'horloge :

![wordclock-web1](https://user-images.githubusercontent.com/16662847/144586070-0eeec182-e0d0-44be-b617-0a6522960ac5.png)

![wordclock-web2](https://user-images.githubusercontent.com/16662847/144586082-f2ce1a5b-00aa-4064-a58e-cb696e1e0096.png)


Les petits plus:
- Comme on a accès à la date complète on peut programmer des affichages spécifiques pour des dates précises. Par exemple dans mon code à 23:59:50 le 31 décembre de chaque année, mon horloge va faire un décompte jusqu'à la nouvelle année (10, 9 ... 1) puis afficher "Bonne Annee" pendant 30 secondes avant de revenir en fonctionnement normal

## Les évolutions
- Ne pas avoir de cadre en bois autour du verre. Mon idée actuelle : prendre en sandwich la plaque de verre, le cache pour les lettres, le filtre de diffusion et enfin le séparateur de lettres. Ce dernier a été modifié pour y ajouter des trous permettant de venir y fixer une plaque contenant les LEDs. J'ajoute juste un connecteur en bas pour les 3 fils (5v, Gnd, signal) de commandes du ruban. Je fait ensuite un socle (impression 3D) dans lequel sera encastré la partie arduino,PCB, RTC, entrée d'alimentation et connecteur vers le ruban
![proto](https://user-images.githubusercontent.com/16662847/144599345-774eb5b4-babf-460f-b67b-47da9c86f4a0.jpg)

- Faire une version plus grande. Dans ce cas acheter les rubans avec 30 LEDs par mètre
- ~~Ajouter un module bluetooth pour pouvoir configurer l'horloge (heure, couleur, luminosité) avec un smartphone/tablette/pc~~

