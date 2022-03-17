#include <iostream>
#include "client.h"
#include "compte_courant.h"
#include "compte_epargne.h"
#include "compte_pay.h"
#include"app_banque.h"
#include "devise.h"
#include "compte_epargne_payant.h"



using namespace std;

int main()
{ 



    app_banque tab1;

    client* cli1 = new client(1, "yahya", 20);

    devise d0(1000);
    devise d00(1500);
    devise d000(2000);

    compte_epargne_payant C1(1, cli1, d0, 1,1);
    compte_epargne_payant C11(11, cli1, d00, 2,2);
    compte_epargne_payant C111(111, cli1, d000, 3,3);



    cli1->remplissage(&C1);
    cli1->remplissage(&C11);
    cli1->remplissage(&C111);


    tab1.Ajouter_compte(&C1);


    tab1.afficher();

    bool a;
      
    a=tab1[0].retirer_sld(100);

    tab1.afficher();

    a = tab1[0].retirer_sld(100);

    tab1.afficher();

    tab1[0].dispos_sld(200);

    tab1.afficher();


    /*
    app_banque tab1;

    client *cli1 =new client(1, "yahya", 20);
    client *cli2 = new client(2, "anas", 21);
    client *cli3 = new client(3, "ahmad", 22);
    client *cli4 = new client(4, "ali", 23);
  
    devise d0(1000);
    devise d00(1500);
    devise d000(2000);

    devise d1(3000);
    devise d11(3500);
    devise d111(4000);

    devise d2(5000);
    devise d22(5500);
    devise d222(6000);
    
    devise d3(7000);
    devise d33(7500);
    devise d333(8000);

    compte_courant C1(1,cli1, d0, 1800);
    compte_courant C11(11,cli1, d00, 2800);
    compte_courant C111(111,cli1, d000, 3800);

    compte_epargne C2(2, cli2, d1, 18);
    compte_epargne C22(22,cli2, d11, 18);
    compte_epargne C222(222,cli2, d111, 18);

    compte_pay     C3(3, cli3, d2, 10);
    compte_pay     C33(33, cli3, d22, 10);
    compte_pay     C333(333, cli3, d222, 10);
    
    compte_epargne_payant C4( 4, cli4, d3, 18,10);
    compte_epargne_payant C44( 44, cli4, d33, 18,10);
    compte_epargne_payant C444( 444, cli4, d333, 18,10);



    cli1->remplissage(&C1);
    cli1->remplissage(&C11);
    cli1->remplissage(&C111);

    cli2->remplissage(&C2);
    cli2->remplissage(&C22);
    cli2->remplissage(&C222);

    cli3->remplissage(&C3);
    cli3->remplissage(&C33);
    cli3->remplissage(&C333);

    cli4->remplissage(&C4);
    cli4->remplissage(&C44);
    cli4->remplissage(&C444);

    

    tab1.Ajouter_compte(&C1);
    tab1.Ajouter_compte(&C2);
    tab1.Ajouter_compte(&C3);
    tab1.Ajouter_compte(&C4);

   
    devise ret1(200);
    devise ret2(300);
    devise ret3(400);
    devise ret4(500);

   
    tab1.afficher();



    tab1[0].retirer_sld(ret1);
    tab1[1].retirer_sld(ret2);
    tab1[2].retirer_sld(ret3);
    tab1[3].retirer_sld(ret4);

   
    tab1.afficher();
   
    devise add1(1000);
    devise add2(2000);
    devise add3(3000);
    devise add4(4000);


    tab1[0].dispos_sld(add1);
    tab1[1].dispos_sld(add2);
    tab1[2].dispos_sld(add3);
    tab1[3].dispos_sld(add4);

    

    tab1.afficher();

    
   
    cout << typeid(C4).name() << endl;
    C4.Consulter();


   */

}
