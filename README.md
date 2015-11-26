This is our first MEDEV TP ! 

Le but est de réaliser des traitements d’images simples sur des images binaires. D’abord vous
devez charger des images à partir de fichiers au format PGM et les sauver. Pour simplifier,
nous ne travaillerons qu’avec des images en niveau de gris de taille maximum fixée.
Le format PGM est simple mais présente l’inconvénient d’avoir rapidement affaire à des gros
fichiers. Un fichier PGM en format ASCII commence par une ligne contenant P2. La ligne sui-
vante est une ligne de commentaire commençant par #. Sur la ligne suivante on trouvera les
dimensions de l’image (largueur puis hauteur). La ligne suivante donne la plus grande valeur
de niveaux de gris présente dans l’image (on écrira systématiquement 255). Suivent ensuite
les valeurs des niveaux de gris de chaque pixel ligne par ligne. Seule contrainte supplémen-
taire, les lignes ne doivent pas contenir plus de 70 caractères.
