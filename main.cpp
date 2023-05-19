#include<iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <Battle.h>

using namespace std;

main(){
int vn_random, vn_atk, vn_def, vn_lvl, vn_life, vn_life1, vn_life2, vn_pontos, addAttr, vn_rodada, vn_randdano, vn_randdef, vn_continua;
bool vp_criacao = true, vp_quit = false, vp_batalha = false;
string vv_vencedor1, vv_vencedor2, vv_campeao;


Battle Delta("Delta", 0, 0, 10, 5);
Battle Prisma("Prisma", 0, 0, 10, 5);
Battle Mundo("Mundo", 0, 0, 10, 5);
Battle Universo("Universo", 0, 0, 10, 5);

    while (vp_quit == false){
                    while (vp_criacao == true){
          CONTINUA3:    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||           Criando Naves de Ataque          ||"<<endl;
                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||                 Nave Delta                 ||"<<endl;
                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        system("pause");
                        vn_pontos = Delta.get_pt();
                            while (vn_pontos > 0){
                                system("cls");

                                Delta.RetornaDados();
                                cout<<"Adicionar Pontos (Nave Delta):"<<endl;
                                cout<<"||||||||||||||||"<<endl;
                                cout<<"1. Ataque        "<<endl;
                                cout<<"2. Defesa        "<<endl;
                                cout<<"3. Life          "<<endl;
                                cout<<"||||||||||||||||"<<endl;
                                cin>>addAttr;
                                    if (addAttr == 1){
                                        vn_atk = Delta.get_atk();
                                        Delta.set_atk(vn_atk + 1);
                                        vn_pontos--;
                                    }
                                    else if(addAttr == 2){
                                        vn_def = Delta.get_def();
                                        Delta.set_def(vn_def + 1);
                                        vn_pontos--;
                                    }
                                    else if(addAttr == 3){
                                        vn_life = Delta.get_lf();
                                        Delta.set_lf(vn_life + 1);
                                        vn_pontos--;
                                    }
                                    else{
                                        cout<<"Digito Invalido!"<<endl;
                                        system("pause");
                                    };
                            Delta.set_pt(vn_pontos);
                            };
                            system("cls");
                        Delta.RetornaDados();
                        system("pause");
                        system("cls");


                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||           Criando Naves de Ataque          ||"<<endl;
                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||                 Nave Prisma                ||"<<endl;
                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        system("pause");
                        vn_pontos = Prisma.get_pt();
                            while (vn_pontos > 0){
                                system("cls");

                                Prisma.RetornaDados();
                                cout<<"Adicionar Pontos (Nave Prisma):"<<endl;
                                cout<<"||||||||||||||||"<<endl;
                                cout<<"1. Ataque        "<<endl;
                                cout<<"2. Defesa        "<<endl;
                                cout<<"3. Life          "<<endl;
                                cout<<"||||||||||||||||"<<endl;
                                cin>>addAttr;
                                    if (addAttr == 1){
                                        vn_atk = Prisma.get_atk();
                                        Prisma.set_atk(vn_atk + 1);
                                        vn_pontos--;
                                    }
                                    else if(addAttr == 2){
                                        vn_def = Prisma.get_def();
                                        Prisma.set_def(vn_def + 1);
                                        vn_pontos--;
                                    }
                                    else if(addAttr == 3){
                                        vn_life = Prisma.get_lf();
                                        Prisma.set_lf(vn_life + 1);
                                        vn_pontos--;
                                    }
                                    else{
                                        cout<<"Digito Invalido!"<<endl;
                                        system("pause");
                                    };
                            Prisma.set_pt(vn_pontos);
                            };
                            system("cls");
                        Prisma.RetornaDados();
                        system("pause");
                        system("cls");

                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||           Criando Naves de Defesa          ||"<<endl;
                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||                 Nave Mundo                 ||"<<endl;
                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        system("pause");
                        vn_pontos = Mundo.get_pt();
                            while (vn_pontos > 0){
                                system("cls");

                                Mundo.RetornaDados();
                                cout<<"Adicionar Pontos (Nave Mundo):"<<endl;
                                cout<<"||||||||||||||||"<<endl;
                                cout<<"1. Ataque        "<<endl;
                                cout<<"2. Defesa        "<<endl;
                                cout<<"3. Life          "<<endl;
                                cout<<"||||||||||||||||"<<endl;
                                cin>>addAttr;
                                    if (addAttr == 1){
                                        vn_atk = Mundo.get_atk();
                                        Mundo.set_atk(vn_atk + 1);
                                        vn_pontos--;
                                    }
                                    else if(addAttr == 2){
                                        vn_def = Mundo.get_def();
                                        Mundo.set_def(vn_def + 1);
                                        vn_pontos--;
                                    }
                                    else if(addAttr == 3){
                                        vn_life = Mundo.get_lf();
                                        Mundo.set_lf(vn_life + 1);
                                        vn_pontos--;
                                    }
                                    else{
                                        cout<<"Digito Invalido!"<<endl;
                                        system("pause");
                                    };
                            Mundo.set_pt(vn_pontos);
                            };
                            system("cls");
                        Mundo.RetornaDados();
                        system("pause");
                        system("cls");

                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||           Criando Naves de Defesa          ||"<<endl;
                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||                 Nave Universo              ||"<<endl;
                        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
                        system("pause");
                        vn_pontos = Universo.get_pt();
                            while (vn_pontos > 0){
                                system("cls");

                                Universo.RetornaDados();
                                cout<<"Adicionar Pontos (Nave Universo):"<<endl;
                                cout<<"||||||||||||||||"<<endl;
                                cout<<"1. Ataque        "<<endl;
                                cout<<"2. Defesa        "<<endl;
                                cout<<"3. Life          "<<endl;
                                cout<<"||||||||||||||||"<<endl;
                                cin>>addAttr;
                                    if (addAttr == 1){
                                        vn_atk = Universo.get_atk();
                                        Universo.set_atk(vn_atk + 1);
                                        vn_pontos--;
                                    }
                                    else if(addAttr == 2){
                                        vn_def = Universo.get_def();
                                        Universo.set_def(vn_def + 1);
                                        vn_pontos--;
                                    }
                                    else if(addAttr == 3){
                                        vn_life = Universo.get_lf();
                                        Universo.set_lf(vn_life + 1);
                                        vn_pontos--;
                                    }
                                    else{
                                        cout<<"Digito Invalido!"<<endl;
                                        system("pause");
                                    };
                            Universo.set_pt(vn_pontos);
                            };
                            system("cls");
                        Universo.RetornaDados();
                        system("pause");
                        system("cls");

                        vp_criacao = false;

                        cout<<"|||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||   Fim da Criação das Naves!   ||"<<endl;
                        cout<<"|||||||||||||||||||||||||||||||||||"<<endl;
                        system("pause");

                    }// Fim vp_criacao

system("cls");

srand(time(0));
vn_random = rand() % 100 + 1;
//cout<<"Sorteio: "<<vn_random<<endl;

                if (vn_random % 2 == 0){
         CONTINUA1: vn_life1 = Mundo.get_lf();
                    vn_life2 = Delta.get_lf();
                    vp_batalha = true;
                    Mundo.set_lf(10);
                    Delta.set_lf(10);
                        while (vp_batalha == true){
                                        //cout<<"Par";

                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||         Batalha           ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||       "<<Delta.get_nome()<<" X "<<Mundo.get_nome()<<"       ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl<<endl;

                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||          Batalha          ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||      Atacante: "<<Delta.get_nome()<<"      ||"<<endl;
                                        cout<<"||   --------------------    ||"<<endl;
                                        cout<<"||     Calculando Dano...    ||"<<endl;
                                        cout<<"||   --------------------    ||"<<endl;

                                        //while (teste==true){
                                            vn_randdef = rand() % (Mundo.get_def() + 1);
                                            vn_randdano = rand() % (Delta.get_atk() + 1);

                                                if ((vn_randdano < vn_randdef) or (vn_randdano - vn_randdef <= 0)){
                                                    cout<<"||     Ataque Bloqueado!     ||"<<endl;
                                                    cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                                    system("pause");
                                                    system("cls");
                                                }
                                                else{
                                                    cout<<"||         Dano: "<<vn_randdano - vn_randdef<<"           ||"<<endl;
                                                    cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                                    Mundo.set_lf(Mundo.get_lf() - (vn_randdano - vn_randdef));
                                                    vn_life1 = Mundo.get_lf();
                                                    cout<<Mundo.get_lf();
                                                    system("pause");
                                                    system("cls");
                                                };

                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||         Batalha           ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||       "<<Delta.get_nome()<<" X "<<Mundo.get_nome()<<"       ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl<<endl;

                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||          Batalha          ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||      Atacante: "<<Mundo.get_nome()<<"      ||"<<endl;
                                        cout<<"||   --------------------    ||"<<endl;
                                        cout<<"||     Calculando Dano...    ||"<<endl;
                                        cout<<"||   --------------------    ||"<<endl;

                                        //while (teste==true){
                                            vn_randdef = rand() % (Delta.get_def() + 1);
                                            vn_randdano = rand() % (Mundo.get_atk() + 1);

                                                if ((vn_randdano < vn_randdef) or (vn_randdano - vn_randdef <= 0)){
                                                    cout<<"||     Ataque Bloqueado!     ||"<<endl;
                                                    cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                                    system("pause");
                                                    system("cls");
                                                }
                                                else{
                                                    cout<<"||         Dano: "<<vn_randdano - vn_randdef<<"           ||"<<endl;
                                                    cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                                    Delta.set_lf(Delta.get_lf() - (vn_randdano - vn_randdef));
                                                    vn_life1 = Delta.get_lf();
                                                    cout<<Delta.get_lf();
                                                    system("pause");
                                                    system("cls");
                                                };
                            if ((Mundo.get_lf() <= 0) or (Delta.get_lf() <= 0)){
                                vp_batalha = false;
                            };
                            if (Mundo.get_lf() <= 0){
                                vv_vencedor1 = Delta.get_nome();
                            };
                            if (Delta.get_lf() <= 0){
                                vv_vencedor1 = Mundo.get_nome();
                            };
                        };//fim while life

                    system("pause");
                    if (vn_random % 2 == 0){
                        goto CONTINUA2;
                    };
                        }else{
                      CONTINUA2: vn_life1 = Universo.get_lf();
                                vn_life2 = Prisma.get_lf();
                                vp_batalha = true;
                                Universo.set_lf(10);
                                Prisma.set_lf(10);
                                    while (vp_batalha == true){
                                        //cout<<"Par";

                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||         Batalha           ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||     "<<Prisma.get_nome()<<" X "<<Universo.get_nome()<<"     ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl<<endl;

                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||          Batalha          ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||      Atacante: "<<Prisma.get_nome()<<"     ||"<<endl;
                                        cout<<"||   --------------------    ||"<<endl;
                                        cout<<"||     Calculando Dano...    ||"<<endl;
                                        cout<<"||   --------------------    ||"<<endl;

                                        //while (teste==true){
                                            vn_randdef = rand() % (Universo.get_def() + 1);
                                            vn_randdano = rand() % (Prisma.get_atk() + 1);

                                                if ((vn_randdano < vn_randdef) or (vn_randdano - vn_randdef <= 0)){
                                                    cout<<"||     Ataque Bloqueado!     ||"<<endl;
                                                    cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                                    system("pause");
                                                    system("cls");
                                                }
                                                else{
                                                    cout<<"||         Dano: "<<vn_randdano - vn_randdef<<"           ||"<<endl;
                                                    cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                                    Universo.set_lf(Universo.get_lf() - (vn_randdano - vn_randdef));
                                                    vn_life1 = Universo.get_lf();
                                                    cout<<Universo.get_lf();
                                                    system("pause");
                                                    system("cls");
                                                };

                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||         Batalha           ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||     "<<Prisma.get_nome()<<" X "<<Universo.get_nome()<<"     ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl<<endl;

                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||          Batalha          ||"<<endl;
                                        cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                        cout<<"||    Atacante: "<<Universo.get_nome()<<"     ||"<<endl;
                                        cout<<"||   --------------------    ||"<<endl;
                                        cout<<"||     Calculando Dano...    ||"<<endl;
                                        cout<<"||   --------------------    ||"<<endl;

                                        //while (teste==true){
                                            vn_randdef = rand() % (Prisma.get_def() + 1);
                                            vn_randdano = rand() % (Universo.get_atk() + 1);

                                                if ((vn_randdano < vn_randdef) or (vn_randdano - vn_randdef <= 0)){
                                                    cout<<"||     Ataque Bloqueado!     ||"<<endl;
                                                    cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                                    system("pause");
                                                    system("cls");
                                                }
                                                else{
                                                    cout<<"||         Dano: "<<vn_randdano - vn_randdef<<"           ||"<<endl;
                                                    cout<<"|||||||||||||||||||||||||||||||"<<endl;
                                                    Prisma.set_lf(Prisma.get_lf() - (vn_randdano - vn_randdef));
                                                    vn_life1 = Prisma.get_lf();
                                                    cout<<Prisma.get_lf();
                                                    system("pause");
                                                    system("cls");
                                                };
                            if ((Universo.get_lf() <= 0) or (Prisma.get_lf() <= 0)){
                                vp_batalha = false;
                            };
                            if (Universo.get_lf() <= 0){
                                vv_vencedor2 = Prisma.get_nome();
                            }else{
                                vv_vencedor2 = Universo.get_nome();
                            };
                        };//fim while life

                        cout<<vv_vencedor1<<endl;
                        cout<<vv_vencedor2<<endl;

                    system("pause");
                    system("cls");
                    if (vn_random % 2 != 0){
                       goto CONTINUA1;
                    };
                }; //fim else
                if (vv_vencedor1 == "Delta"){
                cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                cout<<"||   Vencedor 1: "<<Delta.get_nome()<<"  |  Life: "<<Delta.get_lf()<<"   ||"<<endl;
                        if (vv_vencedor2 == "Universo"){
                        cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||  Vencedor 2: "<<Universo.get_nome()<<"  |  Life: "<<Universo.get_lf()<<" ||"<<endl;
                        cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;

                            if (Delta.get_lf() < Universo.get_lf()){
                                cout<<"||         CAMPEÃO: "<<Universo.get_nome()<<"         ||"<<endl;
                                cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                                Universo.set_pt(Universo.get_pt() + 5);
                            }else{
                                cout<<"||          CAMPEÃO: "<<Delta.get_nome()<<"           ||"<<endl;
                                cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                                Delta.set_pt(Delta.get_pt() + 5);
                            };

                        }else{
                        cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||  Vencedor 2: "<<Mundo.get_nome()<<"  |  Life: "<<Mundo.get_lf()<<" ||"<<endl;
                        cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;

                            if (Delta.get_lf() < Mundo.get_lf()){
                                cout<<"||          CAMPEÃO: "<<Mundo.get_nome()<<"           ||"<<endl;
                                cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                                Mundo.set_pt(Mundo.get_pt() + 5);
                            }else{
                                cout<<"||          CAMPEÃO: "<<Delta.get_nome()<<"           ||"<<endl;
                                cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                                Delta.set_pt(Delta.get_pt() + 5);
                            };
                        };
                        system("pause");
                }else{
                cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                cout<<"||   Vencedor 1: "<<Prisma.get_nome()<<"  |  Life: "<<Prisma.get_lf()<<"   ||"<<endl;
                        if (vv_vencedor2 == "Universo"){
                        cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||  Vencedor 2: "<<Universo.get_nome()<<"  |  Life: "<<Universo.get_lf()<<" ||"<<endl;
                        cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;

                            if (Prisma.get_lf() < Universo.get_lf()){
                                cout<<"||        CAMPEÃO: "<<Universo.get_nome()<<"          ||"<<endl;
                                cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                                Universo.set_pt(Universo.get_pt() + 5);
                            }else{
                                cout<<"||          CAMPEÃO: "<<Prisma.get_nome()<<"           ||"<<endl;
                                cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                                Prisma.set_pt(Prisma.get_pt() + 5);
                            };

                        }else{
                        cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                        cout<<"||  Vencedor 2: "<<Mundo.get_nome()<<"  |  Life: "<<Mundo.get_lf()<<" ||"<<endl;
                        cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;

                            if (Prisma.get_lf() < Mundo.get_lf()){
                                cout<<"||          CAMPEÃO: "<<Mundo.get_nome()<<"           ||"<<endl;
                                cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                                Mundo.set_pt(Mundo.get_pt() + 5);
                            }else{
                                cout<<"||          CAMPEÃO: "<<Prisma.get_nome()<<"           ||"<<endl;
                                cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
                                Prisma.set_pt(Prisma.get_pt() + 5);
                            };
                        };
                        system("pause");
                };
            system("cls");
            cout<<"Deseja continuar jogando? (1) SIM  |  (2) NÃO"<<endl;
            cin>>vn_continua;
                if (vn_continua == 1){
                    goto CONTINUA3;
                }else{
                vp_quit = true;
                };



    }; //Fim vp_quit
}