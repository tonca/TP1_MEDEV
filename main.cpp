/* https://github.com/tonca/TP1_MEDEV.git
 * 
 * File:   main.cpp
 * Author: eleve
 *
 * Created on 26 novembre 2015, 08:35
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void ecriture(vector<vector<int> >* image);
/*
 Programme Traitement d'images PGM 
*/
int main() {
    
    ecriture(NULL);
    
    return 0;
}

void ecriture(vector< vector<int> >* image)
{
    ofstream fichier("PGM_out.pgm");
    
    fichier << "P2\n#\n";
    fichier << image->size()<<" "<< image[0]->size()<<endl;
    
    for(int i; i<image->size; i++ ) {
        for(int j; j<image->size();j++){
            fichier << image[i][j];
        }
        fichier<<endl;
    }
    fichier.close(); 
    
    return;
}

void seuillage(){


}

//HOJOJHOHO