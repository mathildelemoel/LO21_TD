//
// Created by Minh Tri on 23/03/2017.
//

#ifndef TD3_FRACTION_H
#define TD3_FRACTION_H

#include <iostream>

using namespace std;

//Q.1
namespace MATH
{
    class Fraction {    //private par défaut

    private:
        int numerateur;
        int denominateur;

    public :

        //Constructeurs
//        Fraction(); //default
//        Fraction(int n, int d); //constructeur affectation
//        Fraction(int n);    // constructeur affectation

//        Fraction(int n=0, int d=1){ //default
//            setFraction(n,d);};

        Fraction(int n=0, int d=1) :numerateur(n), denominateur(d){
            {
                std::cout <<"constructeur "<<this <<std::endl;   // "constructeur @

                if(d==0) {
                    std::cout<< "erreur : dénominateur nul !!"<< std::endl;
                    denominateur=1;
                }
            }
        }

        inline int getNumerateur() const {return numerateur;}  //fonction courte -> inline mieux |||||| const : ne modifie pas l'objet sur laquelle elle est appelée : foo.getNumerateur();
        inline int getDenominateur() const { return denominateur;}   // fonction courte -> inline mieux |||||| const : ne modifie pas l'objet sur laquelle elle est appelée

        void setFraction(int n, int d);

        const  Fraction somme(const Fraction &f1) const;    //membre : 1 argument, autre argument est implicite

        ~Fraction(){
            std::cout <<"appel destructeur pour objet " << this<<endl;};

        const Fraction operator+(const Fraction &f1) const;



    private:

        void simplification();

        const Fraction somme(const Fraction &f1, const Fraction &f2);   //pas membre : 2 arguments car pas d'arguments implicite

        //const Fraction operator+(const Fraction &f1, const Fraction &f2) ;



    };
}

#endif //TD3_FRACTION_H