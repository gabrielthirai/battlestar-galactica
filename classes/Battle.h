#include<iostream>
#include <stdlib.h>
using namespace std;

class Battle{
    private:
        string objNome;
        int objAtaque, objDefesa, objLevel, objLife, objPontos;
    public:
        Battle(string nome, int atk, int def, int lvl, int lf, int pt);
        void set_atk(int atk); //essa função irá definir o ataque da nave.
        void set_def(int def); //essa função irá definir a defesa da nave.
        void set_lvl(int lvl); //essa função irá definir o level da nave, que será incrementado a cada fim de batalha, somente na nave vencedora.void set_lf(int lf); //essa função irá definir o life da nave, sempre mudando a cada ataque.
        void set_pt(int pt); //essa função irá definir o pontos de atributos da nave, só irá acrescentar no final da guerra, a vencedora recebe 5 extras.
        
        
        string get_nome();// essa função irá mostrar o nome das naves
        int get_atk(); //essa função irá buscar o valor de ataque da nave.
        int get_def(); //essa função irá buscar o valor de defesa da nave.
        int get_lvl(); //essa função irá buscar o level da nave.
        int get_lf(); //essa função irá buscar os pontos de life da nave.
        int get_pt(); //essa função irá buscar quantos pontos a nave tem para serem distribuídos.


        void RetornaDados();
};

Battle::Battle(string nome, int atk, int def, int lvl, int lf, int pt){
    objNome = nome;
    objAtaque = atk;
    objDefesa = def;
    objLevel = lvl;
    objLife = lf;
    objPontos = 5;
}

void Battle::set_atk(int atk){
    objAtaque = atk;
}

void Battle::set_def(int def){
    objDefesa = def;
}

void Battle::set_lvl(int lvl){
    objLevel = lvl;
}

void Battle::set_pt(int pt){
    objPontos = pt;
}


int Battle::get_atk(){
    return objAtaque;
}

int Battle::get_def(){
    return objDefesa;
}

int Battle::get_lf(){
    return objLife;
}

int Battle::get_lvl(){
    return objLevel;
}

int Battle::get_pt(){
    return objPontos;
}
string Battle::get_nome(){
    return objNome;
}

void Battle::RetornaDados(){
    cout<< "Nome: "<<get_nome();
    cout<< "Ataque: "<<get_atk();
    cout<< "Defesa: "<<get_def();
    cout<< "Life: " <<get_lf();
    cout<< "Level: "<<get_lvl();
    cout<< "Pontos: "<<get_pt();
}