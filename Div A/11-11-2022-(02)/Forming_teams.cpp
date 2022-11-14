#include<bits/stdc++.h>
//hola
using ll = long long;
using namespace std;

bool filled(int c);
bool bench(int c);
void entraCualquierEquipo(int&);
void entraEquipo(int&,int e);
int contra(int c);
void increEquip( int equipo);
int dameEquip();

int equip1 = 0;
int equip2 = 0;
bool filled(int c) {
    return c != -1;
}
bool bench(int c){
    return c==0;
}

void entraCualquierEquipo(int& papaya){
    int equipoDeI = dameEquip();
    papaya = equipoDeI;
    increEquip(equipoDeI);
}
void entraEquipo(int &papaya,int e){
    papaya = e;
    if(e == 1){
        equip1++;
    }else if (e ==2){
        equip2++;
    }else{
        cout<<"No te puedo meter al equipo "<< e<<endl;
    }
}
int contra(int c) {
    if (c == 1)
        return 2;
    if (c == 2)
        return 1;
    cout<<"no existe contrario del numero "<<c<<endl;
    return -1;
}
struct huercos {
    int enemigo1 = -1;
    int enemigo2 = -1;
    int equipo = -1;
};


void increEquip( int equipo) {
    if (equipo == 1) {
        equip1++;
    }
    else if(equipo == 2){
        equip2++;
    }else{
       cout<<"INCREMENTANDO OTRO EQUIPO??" <<equipo<<endl;
    }
}
int dameEquip() {
    if (equip1 > equip2)
        return 2;
    return 1;
}
int main() {
    int n, m;
    cin >> n >> m;
    huercos alumnos[n+1];
    int a, b;
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        if (alumnos[a].enemigo1 == -1)
            alumnos[a].enemigo1 = b;
        else
            alumnos[a].enemigo2 = b;

        if (alumnos[b].enemigo1 == -1)
            alumnos[b].enemigo1 = a;
        else
            alumnos[b].enemigo2 = a;
    }


    int banca = 0;
    for (int i = 1; i <= n; i++) {    

        if(filled(alumnos[i].enemigo1) && filled(alumnos[alumnos[i].enemigo1].equipo) && !bench(alumnos[alumnos[i].enemigo1].equipo)){
            //tiene ahuevo 1 o 2

            if(filled(alumnos[i].enemigo2)&&filled(alumnos[alumnos[i].enemigo2].equipo) && !bench(alumnos[alumnos[i].enemigo2].equipo)){
                //ahuevo 1 o 2
                //los equipos tienen que ser iguales
                if(alumnos[alumnos[i].enemigo1].equipo == alumnos[alumnos[i].enemigo2].equipo){
                    entraEquipo(alumnos[i].equipo,contra(alumnos[alumnos[i].enemigo1].equipo));

                }else{
                    alumnos[i].equipo ==0;
                    banca++;
                }
            }else{
                //ene 2 no esta asignado  o esta bencheado
                entraEquipo(alumnos[i].equipo,contra(alumnos[alumnos[i].enemigo1].equipo));
            }

        }else if(filled(alumnos[i].enemigo1)&&bench(alumnos[alumnos[i].enemigo1].equipo)){

            if(filled(alumnos[i].enemigo2)&&filled(alumnos[alumnos[i].enemigo2].equipo) && !bench(alumnos[alumnos[i].enemigo2].equipo)){
                //esta asignado y no bencheado
                entraEquipo(alumnos[i].equipo,contra(alumnos[alumnos[i].enemigo2].equipo));
                //entramos al equipo conrtario de ene2, no nos preocupasmos por ene1 pq esta bencheado
            }else{
                //puede estar bencheado o no estar asignado
                entraCualquierEquipo(alumnos[i].equipo);
            }

        }else{
            // no tiene equipo y no esta bencheado
            entraCualquierEquipo(alumnos[i].equipo);
        }
    }
    cout << banca + abs(equip1-equip2);
    return 0;
}
