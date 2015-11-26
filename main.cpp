/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eleve
 *
 * Created on 26 novembre 2015, 09:48
 */

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int** lecture(string nomdeGraphic){
        string type; char a;
        int height, width;
        int maxvaleur;
        
        ifstream infile(nomdeGraphic, ios::in);
        infile >> type >> a >> width >> height >> maxvaleur;

        int **p = new int*[height];
    for(int i = 0; i < height; i++)  
        p[i] = new int[width];

        for(int i = 0;i < height; i++)
        {
                for(int j = 0;j < width; j++)
                {
                        infile >> p[i][j];
                //        cout << p[i][j] << " ";
                }
        //        cout << endl;
        }
        return p;
}

void ecriture(string nomdeEcriture,string type, char a, int **p, int height, int width, int maxvaleur){
        fstream outfile(nomdeEcriture, ios::out);
        outfile << type << endl << a << endl << width << " " << height << endl << maxvaleur << endl;
        for(int i = 0;i < height; i++)
        {
                for(int j = 0;j < width; j++)
                {
                        outfile << p[i][j] << " ";
                }
                outfile << endl;
        
        }
}

void afficheHistogramme(int **p, int height, int width, int maxvaleur)
{
        int* histo = new int[maxvaleur];
        for(int i = 0;i<maxvaleur;i++) histo[i] = 0;
        for(int i = 0;i < height; i++)
        {
                for(int j = 0;j < width; j++)
                {
                        histo[p[i][j]]++;
                }
        }
        for(int i = 0;i<maxvaleur;i++)
        {
                cout << i << ": " <<  histo[i] << endl;
        }
}

int main(){
        string readfile = "lena.pgm";
        string wrotefile = "result.pgm";
        int **p = lecture(readfile);
        afficheHistogramme(p, 512, 512, 255);
        ecriture(wrotefile, "P2", '#', p , 512, 512, 255);
        return 0;
}

