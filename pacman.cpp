#include "pacman.h"
#include "ui_pacman.h"
#include <QDebug>

pacman::pacman(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::pacman)
{
    viditas=new health();
    viditas->sumartime();
    ui->setupUi(this);
    setWindowTitle("Pacman");
    scene=new QGraphicsScene;
    scene2=new QGraphicsScene;
    scene3=new QGraphicsScene;
    if(mundo==1){
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,400,400);
    //personaje
    personaje = new bolita(20,580,200);
    //nivel 1
    //pared
    valor=viditas->getvidas();
    ui->puntaje->setText("Puntaje: "+QString::number(mostrar));
    ui->vidas->setText("Vidas: "+QString::number(valor));
    pared1 = new muros(800,20,200,110);
    pared2 = new muros(18,285,200,110);
    pared3 = new muros(18,275,200,-220);
    pared4 = new muros(800,20,200,-490);
    pared5 = new muros(18,285,-580,110);
    pared6 = new muros(18,275,-580,-220);
    pared7 = new muros(50,215,135,40);
    pared8 = new muros(50,215,35,40);
    pared9 = new muros(50,215,-65,40);
    pared10 = new muros(50,215,-165,40);
    pared11 = new muros(50,215,-265,40);
    pared12 = new muros(50,215,-365,40);
    pared13 = new muros(50,215,-465,40);
    pared14 = new muros(20,275,-565,110);
    pared15 = new muros(18,275,-565,-230);
    pared16 = new muros(50,225,135,-220);
    pared17 = new muros(50,225,35,-220);
    pared18 = new muros(50,225,-65,-220);
    pared19 = new muros(50,225,-165,-220);
    pared20 = new muros(50,225,-265,-220);
    pared21 = new muros(50,225,-365,-220);
    pared22 = new muros(50,225,-465,-220);
    pared23 = new muros(10,10,-600,-195);
    pared24 = new muros(10,10,215,-195);



    scene->addItem(personaje);
    scene->addItem(pared1);
    scene->addItem(pared2);
    scene->addItem(pared3);
    scene->addItem(pared4);
    scene->addItem(pared5);
    scene->addItem(pared6);
    scene->addItem(pared7);
    scene->addItem(pared8);
    scene->addItem(pared9);
    scene->addItem(pared10);
    scene->addItem(pared11);
    scene->addItem(pared12);
    scene->addItem(pared13);
    scene->addItem(pared14);
    scene->addItem(pared15);
    scene->addItem(pared16);
    scene->addItem(pared17);
    scene->addItem(pared18);
    scene->addItem(pared19);
    scene->addItem(pared20);
    scene->addItem(pared21);
    scene->addItem(pared22);
    scene->addItem(pared23);
    scene->addItem(pared24);
    monedas.push_back(new moneda(9,-159,-65));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-159,-15));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-159,35));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-159,85));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-159,135));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-159,195));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-159,235));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-159,285));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-159,335));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-159,385));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-159,435));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-159,475));scene->addItem(monedas.back());

    monedas.push_back(new moneda(9,-109,-65));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-109,475));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-59,-65));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-59,-15));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-59,35));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-59,85));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-59,135));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-59,195));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-59,235));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-59,285));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-59,335));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-59,385));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-59,435));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-59,475));scene->addItem(monedas.back());

    monedas.push_back(new moneda(9,-9,-65));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-9,475));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,41,-65));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,41,-15));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,41,35));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,41,85));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,41,135));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,41,195));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,41,235));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,41,285));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,41,335));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,41,385));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,41,435));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,41,475));scene->addItem(monedas.back());

    monedas.push_back(new moneda(9,91,-65));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,91,475));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,141,-65));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,141,-15));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,141,35));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,141,85));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,141,135));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,141,195));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,141,235));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,141,285));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,141,335));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,141,385));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,141,435));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,141,475));scene->addItem(monedas.back());

    monedas.push_back(new moneda(9,191,-65));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,191,475));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,241,-65));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,241,-15));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,241,35));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,241,85));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,241,135));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,241,195));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,241,235));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,241,285));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,241,335));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,241,385));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,241,435));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,241,475));scene->addItem(monedas.back());



    monedas.push_back(new moneda(9,291,-65));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,291,475));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,341,-65));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,341,-15));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,341,35));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,341,85));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,341,135));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,341,195));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,341,235));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,341,285));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,341,335));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,341,385));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,341,435));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,341,475));scene->addItem(monedas.back());


    monedas.push_back(new moneda(9,391,-65));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,391,475));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,441,-65));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,441,-15));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,441,35));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,441,85));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,441,135));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,441,195));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,441,235));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,441,285));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,441,335));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,441,385));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,441,435));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,441,475));scene->addItem(monedas.back());

    monedas.push_back(new moneda(9,491,-65));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,491,475));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,541,-65));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,541,-15));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,541,35));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,541,85));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,541,135));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,541,195));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,541,235));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,541,285));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,541,335));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,541,385));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,541,435));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,541,475));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,491,195));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,391,195));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,291,195));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,191,195));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,91,195));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-9,195));scene->addItem(monedas.back());
    monedas.push_back(new moneda(9,-109,195));scene->addItem(monedas.back());
    }
    //es para cambiar la posicion del personaje esta moneda(borrela mi fai xd)



}

void pacman::keyPressEvent(QKeyEvent *evento)
{
    if(evento->key() == Qt::Key_A){
        personaje->left();
    valor=viditas->getvidas();
    ui->vidas->setText("Vidas: "+QString::number(valor));
    if(valor == 0){
        exit(1);
    }
    if(personaje->collidesWithItem(pared24)){
        personaje->cambiarizq();
    }
    for (int i = 0;i < monedas.size();i++) {
                if(personaje->collidesWithItem(monedas.at(i))){
                    if(mundo==1)
                    scene->removeItem(monedas.at(i));
                    else if(mundo==2){
                        scene2->removeItem(monedas.at(i));
                    }
                    else if(mundo==3){
                        scene3->removeItem(monedas.at(i));
                    }
                    mostrar+=100;
                    ui->puntaje->setText("puntaje: "+QString::number(mostrar));
                    monedas = eliminarMonedas(monedas,i);
                    //monedas.removeAt(i);

                }
    }
    if(monedas.isEmpty()){
        viditas->resetiemp();
        //mundo 2
        if(mundo==1){
            mundo+=1;
        ui->graphicsView->setScene(scene2);
        scene2->setSceneRect(0,0,400,400);
        scene2->addItem(personaje);
        pared1 = new muros(800,20,200,110);
        pared2 = new muros(18,285,200,110);
        pared3 = new muros(18,275,200,-220);
        pared4 = new muros(800,20,200,-490);
        pared5 = new muros(18,285,-580,110);
        pared6 = new muros(18,275,-580,-220);
        pared7 = new muros(100,18,183,-157);
        pared8 = new muros(100,18,183,-220);
        pared9 = new muros(100,18,-480,-157);
        pared10 = new muros(100,18,-480,-220);
        pared11 = new muros(50,215,0,40);
        pared12 = new muros(350,50,-50,40);
        pared13 = new muros(50,215,-350,40);
        pared14 = new muros(70,130,120,40);
        pared15 = new muros(200,40,-100,-70);
        pared16 = new muros(50,225,-175,-70);
        pared17 = new muros(70,130,-450,40);
        pared18 = new muros(70,130,-450,-300);
        pared19 = new muros(70,130,120,-300);
        pared20 = new muros(500,50,50,-380);
        pared21 = new muros(90,90,0,-240);
        pared22 = new muros(90,90,-310,-240);
//        pared23 = new muros(10,10,-600,-195);
//        pared24 = new muros(10,10,215,-195);

        scene2->addItem(pared1);
        scene2->addItem(pared2);
        scene2->addItem(pared3);
        scene2->addItem(pared4);
        scene2->addItem(pared5);
        scene2->addItem(pared6);
        scene2->addItem(pared7);
        scene2->addItem(pared8);
        scene2->addItem(pared9);
        scene2->addItem(pared10);
        scene2->addItem(pared11);
        scene2->addItem(pared12);
        scene2->addItem(pared13);
        scene2->addItem(pared14);
        scene2->addItem(pared15);
        scene2->addItem(pared16);
        scene2->addItem(pared17);
        scene2->addItem(pared18);
        scene2->addItem(pared19);
        scene2->addItem(pared20);
        scene2->addItem(pared21);
        scene2->addItem(pared22);
//        scene2->addItem(pared23);
//        scene2->addItem(pared24);

//        //monedas :C
        monedas.push_back(new moneda(9,-150,-65));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,-150,270));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,-150,360));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,-150,460));scene2->addItem(monedas.back());

        monedas.push_back(new moneda(9,-30,-65));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,-30,35));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,-30,200));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,-30,280));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,-30,350));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,-30,350));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,70,350));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,170,350));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,270,350));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,340,350));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,420,350));scene2->addItem(monedas.back());

        monedas.push_back(new moneda(9,50,-65));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,150,-65));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,250,-65));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,350,-65));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,420,-65));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,420,250));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,420,150));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,420,50));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,320,30));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,320,130));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,250,130));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,250,200));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,320,200));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,200,30));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,80,30));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,80,130));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,150,130));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,150,200));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,80,200));scene2->addItem(monedas.back());

        monedas.push_back(new moneda(9,550,-65));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,550,25));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,550,120));scene2->addItem(monedas.back());

        monedas.push_back(new moneda(9,-150,30));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,-150,130));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,-80,130));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,-30,130));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,-50,460));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,50,460));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,150,460));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,250,460));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,350,460));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,450,460));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,550,460));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,550,360));scene2->addItem(monedas.back());
        monedas.push_back(new moneda(9,550,260));scene2->addItem(monedas.back());






        }
        //mundo 3
        else if(mundo==2){
            mundo+=1;
            ui->graphicsView->setScene(scene3);
            scene3->setSceneRect(0,0,400,400);
            scene3->addItem(personaje);pared1 = new muros(800,20,200,110);
            pared1 = new muros(800,20,200,110);
            pared2 = new muros(18,285,200,110);
            pared3 = new muros(18,275,200,-220);
            pared4 = new muros(800,20,200,-490);
            pared5 = new muros(18,285,-580,110);
            pared6 = new muros(18,275,-580,-220);
            pared7 = new muros(100,18,183,-157);
            pared8 = new muros(100,18,183,-220);
            pared9 = new muros(100,18,-480,-157);
            pared10 = new muros(100,18,-480,-220);
            pared11 = new muros(230,30,130,40);
            pared12 = new muros(30,90,30,40);
            pared13 = new muros(230,30,-300,40);
            pared14 = new muros(30,90,-400,40);
            pared15 = new muros(30,300,-185,40);
            pared16 = new muros(440,30,20,-260);
            pared17 = new muros(30,130,100,-300);
            pared18 = new muros(600,30,100,-410);
            pared19 = new muros(30,110,-470,-300);
            pared20 = new muros(90,90,-40,-120);
            pared21 = new muros(90,90,-270,-120);
            pared22 = new muros(35,35,-185,-330);
    //        pared23 = new muros(10,10,-600,-195);
    //        pared24 = new muros(10,10,215,-195);

            scene3->addItem(pared1);
            scene3->addItem(pared2);
            scene3->addItem(pared3);
            scene3->addItem(pared4);
            scene3->addItem(pared5);
            scene3->addItem(pared6);
            scene3->addItem(pared7);
            scene3->addItem(pared8);
            scene3->addItem(pared9);
            scene3->addItem(pared10);
            scene3->addItem(pared11);
            scene3->addItem(pared12);
            scene3->addItem(pared13);
            scene3->addItem(pared14);
            scene3->addItem(pared15);
            scene3->addItem(pared16);
            scene3->addItem(pared17);
            scene3->addItem(pared18);
            scene3->addItem(pared19);
            scene3->addItem(pared20);
            scene3->addItem(pared21);
            scene3->addItem(pared22);

            //monedas lvl 3 :CCC
            monedas.push_back(new moneda(9,550,260));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,550,360));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,550,460));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,450,460));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,350,460));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,250,460));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,150,460));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,50,460));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,-50,460));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,-150,460));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,-150,360));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,-150,260));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,-50,290));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,-50,190));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,50,90));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,150,90));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,150,230));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,250,230));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,50,230));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,350,230));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,250,90));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,350,90));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,-50,390));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,-50,90));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,-150,90));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,-150,0));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,-150,-70));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,-50,-70));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,50,-70));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,150,-70));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,250,-70));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,350,-70));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,450,-70));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,-50,0));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,-50,390));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,50,390));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,150,390));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,250,390));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,350,390));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,450,390));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,50,310));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,150,310));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,250,310));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,350,310));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,450,290));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,450,190));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,450,90));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,550,90));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,450,0));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,550,0));scene3->addItem(monedas.back());
            monedas.push_back(new moneda(9,550,-70));scene3->addItem(monedas.back());

        }
        else{
            exit(1);
        }

    }
        if(personaje->collidesWithItem(pared1)or personaje->collidesWithItem(pared2)or personaje->collidesWithItem(pared3) or personaje->collidesWithItem(pared4) or personaje->collidesWithItem(pared5)or personaje->collidesWithItem(pared6)or personaje->collidesWithItem(pared7)or personaje->collidesWithItem(pared8)or personaje->collidesWithItem(pared9)or personaje->collidesWithItem(pared10)or personaje->collidesWithItem(pared11)or personaje->collidesWithItem(pared12)or personaje->collidesWithItem(pared13)or personaje->collidesWithItem(pared14)or personaje->collidesWithItem(pared15)or personaje->collidesWithItem(pared16)or personaje->collidesWithItem(pared17)or personaje->collidesWithItem(pared18)or personaje->collidesWithItem(pared19)or personaje->collidesWithItem(pared20)or personaje->collidesWithItem(pared21)or personaje->collidesWithItem(pared22)){
            personaje->right();
        }
    }

    else if(evento->key() == Qt::Key_D){
        personaje->right();

        valor=viditas->getvidas();
        ui->vidas->setText("Vidas: "+QString::number(valor));
        if(valor == 0){
            exit(1);
        }
        if(personaje->collidesWithItem(pared23)){
            personaje->cambiarder();
        }
        for (int i = 0;i < monedas.size();i++) {
                    if(personaje->collidesWithItem(monedas.at(i))){
                        if(mundo==1)
                        scene->removeItem(monedas.at(i));
                        else if(mundo==2){
                            scene2->removeItem(monedas.at(i));
                        }
                        else if(mundo==3){
                            scene3->removeItem(monedas.at(i));
                        }
                        mostrar+=100;
                        ui->puntaje->setText("puntaje: "+QString::number(mostrar));
                        monedas = eliminarMonedas(monedas,i);
                        //monedas.removeAt(i);
                    }
        }
        if(monedas.isEmpty()){
            viditas->resetiemp();
            //mundo 2
            if(mundo==1){
                mundo+=1;
            ui->graphicsView->setScene(scene2);
            scene2->setSceneRect(0,0,400,400);
            scene2->addItem(personaje);
            pared1 = new muros(800,20,200,110);
            pared2 = new muros(18,285,200,110);
            pared3 = new muros(18,275,200,-220);
            pared4 = new muros(800,20,200,-490);
            pared5 = new muros(18,285,-580,110);
            pared6 = new muros(18,275,-580,-220);
            pared7 = new muros(100,18,183,-157);
            pared8 = new muros(100,18,183,-220);
            pared9 = new muros(100,18,-480,-157);
            pared10 = new muros(100,18,-480,-220);
            pared11 = new muros(50,215,0,40);
            pared12 = new muros(350,50,-50,40);
            pared13 = new muros(50,215,-350,40);
            pared14 = new muros(70,130,120,40);
            pared15 = new muros(200,40,-100,-70);
            pared16 = new muros(50,225,-175,-70);
            pared17 = new muros(70,130,-450,40);
            pared18 = new muros(70,130,-450,-300);
            pared19 = new muros(70,130,120,-300);
            pared20 = new muros(500,50,50,-380);
            pared21 = new muros(90,90,0,-240);
            pared22 = new muros(90,90,-310,-240);
    //        pared23 = new muros(10,10,-600,-195);
    //        pared24 = new muros(10,10,215,-195);

            scene2->addItem(pared1);
            scene2->addItem(pared2);
            scene2->addItem(pared3);
            scene2->addItem(pared4);
            scene2->addItem(pared5);
            scene2->addItem(pared6);
            scene2->addItem(pared7);
            scene2->addItem(pared8);
            scene2->addItem(pared9);
            scene2->addItem(pared10);
            scene2->addItem(pared11);
            scene2->addItem(pared12);
            scene2->addItem(pared13);
            scene2->addItem(pared14);
            scene2->addItem(pared15);
            scene2->addItem(pared16);
            scene2->addItem(pared17);
            scene2->addItem(pared18);
            scene2->addItem(pared19);
            scene2->addItem(pared20);
            scene2->addItem(pared21);
            scene2->addItem(pared22);

            //        //monedas :C
            monedas.push_back(new moneda(9,-150,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-150,270));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-150,360));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-150,460));scene2->addItem(monedas.back());

            monedas.push_back(new moneda(9,-30,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-30,35));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-30,200));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-30,280));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-30,350));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-30,350));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,70,350));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,170,350));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,270,350));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,340,350));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,420,350));scene2->addItem(monedas.back());

            monedas.push_back(new moneda(9,50,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,150,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,250,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,350,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,420,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,420,250));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,420,150));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,420,50));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,320,30));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,320,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,250,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,250,200));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,320,200));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,200,30));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,80,30));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,80,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,150,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,150,200));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,80,200));scene2->addItem(monedas.back());

            monedas.push_back(new moneda(9,550,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,550,25));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,550,120));scene2->addItem(monedas.back());

            monedas.push_back(new moneda(9,-150,30));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-150,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-80,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-30,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-50,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,50,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,150,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,250,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,350,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,450,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,550,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,550,360));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,550,260));scene2->addItem(monedas.back());
            }
            //mundo 3
            else if(mundo==2){
                mundo+=1;ui->graphicsView->setScene(scene3);
                scene3->setSceneRect(0,0,400,400);
                scene3->addItem(personaje);pared1 = new muros(800,20,200,110);
                pared1 = new muros(800,20,200,110);
                pared2 = new muros(18,285,200,110);
                pared3 = new muros(18,275,200,-220);
                pared4 = new muros(800,20,200,-490);
                pared5 = new muros(18,285,-580,110);
                pared6 = new muros(18,275,-580,-220);
                pared7 = new muros(100,18,183,-157);
                pared8 = new muros(100,18,183,-220);
                pared9 = new muros(100,18,-480,-157);
                pared10 = new muros(100,18,-480,-220);
                pared11 = new muros(230,30,130,40);
                pared12 = new muros(30,90,30,40);
                pared13 = new muros(230,30,-300,40);
                pared14 = new muros(30,90,-400,40);
                pared15 = new muros(30,300,-185,40);
                pared16 = new muros(440,30,20,-260);
                pared17 = new muros(30,130,100,-300);
                pared18 = new muros(600,30,100,-410);
                pared19 = new muros(30,110,-470,-300);
                pared20 = new muros(90,90,-40,-120);
                pared21 = new muros(90,90,-270,-120);
                pared22 = new muros(35,35,-185,-330);
        //        pared23 = new muros(10,10,-600,-195);
        //        pared24 = new muros(10,10,215,-195);

                scene3->addItem(pared1);
                scene3->addItem(pared2);
                scene3->addItem(pared3);
                scene3->addItem(pared4);
                scene3->addItem(pared5);
                scene3->addItem(pared6);
                scene3->addItem(pared7);
                scene3->addItem(pared8);
                scene3->addItem(pared9);
                scene3->addItem(pared10);
                scene3->addItem(pared11);
                scene3->addItem(pared12);
                scene3->addItem(pared13);
                scene3->addItem(pared14);
                scene3->addItem(pared15);
                scene3->addItem(pared16);
                scene3->addItem(pared17);
                scene3->addItem(pared18);
                scene3->addItem(pared19);
                scene3->addItem(pared20);
                scene3->addItem(pared21);
                scene3->addItem(pared22);

                //monedas lvl 3 :CCC
                monedas.push_back(new moneda(9,550,260));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,550,360));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,550,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,350,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,250,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,150,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,50,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-150,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-150,360));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-150,260));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,290));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,190));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,50,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,150,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,150,230));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,250,230));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,50,230));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,350,230));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,250,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,350,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-150,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-150,0));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-150,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,50,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,150,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,250,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,350,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,0));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,50,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,150,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,250,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,350,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,50,310));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,150,310));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,250,310));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,350,310));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,290));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,190));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,550,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,0));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,550,0));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,550,-70));scene3->addItem(monedas.back());
            }
            else{
                exit(1);
            }

        }
        if(personaje->collidesWithItem(pared1)or personaje->collidesWithItem(pared2)or personaje->collidesWithItem(pared3) or personaje->collidesWithItem(pared4) or personaje->collidesWithItem(pared5)or personaje->collidesWithItem(pared6)or personaje->collidesWithItem(pared7)or personaje->collidesWithItem(pared8)or personaje->collidesWithItem(pared9)or personaje->collidesWithItem(pared10)or personaje->collidesWithItem(pared11)or personaje->collidesWithItem(pared12)or personaje->collidesWithItem(pared13)or personaje->collidesWithItem(pared14)or personaje->collidesWithItem(pared15)or personaje->collidesWithItem(pared16)or personaje->collidesWithItem(pared17)or personaje->collidesWithItem(pared18)or personaje->collidesWithItem(pared19)or personaje->collidesWithItem(pared20)or personaje->collidesWithItem(pared21)or personaje->collidesWithItem(pared22)){
            personaje->left();
        }
    }
    else if(evento->key() == Qt::Key_W){
        personaje->up();
        valor=viditas->getvidas();
        ui->vidas->setText("Vidas: "+QString::number(valor));
        if(valor == 0){
            exit(1);
        }
        for (int i = 0;i < monedas.size();i++) {
                    if(personaje->collidesWithItem(monedas.at(i))){
                        if(mundo==1)
                        scene->removeItem(monedas.at(i));
                        else if(mundo==2){
                            scene2->removeItem(monedas.at(i));
                        }
                        else if(mundo==3){
                            scene3->removeItem(monedas.at(i));
                        }
                        mostrar+=100;
                        ui->puntaje->setText("puntaje: "+QString::number(mostrar));
                        monedas = eliminarMonedas(monedas,i);
                        //monedas.removeAt(i);
                    }
        }
        if(monedas.isEmpty()){
            viditas->resetiemp();
            //mundo 2
            if(mundo==1){
                mundo+=1;
            ui->graphicsView->setScene(scene2);
            scene2->setSceneRect(0,0,400,400);
            scene2->addItem(personaje);
            pared1 = new muros(800,20,200,110);
            pared2 = new muros(18,285,200,110);
            pared3 = new muros(18,275,200,-220);
            pared4 = new muros(800,20,200,-490);
            pared5 = new muros(18,285,-580,110);
            pared6 = new muros(18,275,-580,-220);
            pared7 = new muros(100,18,183,-157);
            pared8 = new muros(100,18,183,-220);
            pared9 = new muros(100,18,-480,-157);
            pared10 = new muros(100,18,-480,-220);
            pared11 = new muros(50,215,0,40);
            pared12 = new muros(350,50,-50,40);
            pared13 = new muros(50,215,-350,40);
            pared14 = new muros(70,130,120,40);
            pared15 = new muros(200,40,-100,-70);
            pared16 = new muros(50,225,-175,-70);
            pared17 = new muros(70,130,-450,40);
            pared18 = new muros(70,130,-450,-300);
            pared19 = new muros(70,130,120,-300);
            pared20 = new muros(500,50,50,-380);
            pared21 = new muros(90,90,0,-240);
            pared22 = new muros(90,90,-310,-240);
    //        pared23 = new muros(10,10,-600,-195);
    //        pared24 = new muros(10,10,215,-195);

            scene2->addItem(pared1);
            scene2->addItem(pared2);
            scene2->addItem(pared3);
            scene2->addItem(pared4);
            scene2->addItem(pared5);
            scene2->addItem(pared6);
            scene2->addItem(pared7);
            scene2->addItem(pared8);
            scene2->addItem(pared9);
            scene2->addItem(pared10);
            scene2->addItem(pared11);
            scene2->addItem(pared12);
            scene2->addItem(pared13);
            scene2->addItem(pared14);
            scene2->addItem(pared15);
            scene2->addItem(pared16);
            scene2->addItem(pared17);
            scene2->addItem(pared18);
            scene2->addItem(pared19);
            scene2->addItem(pared20);
            scene2->addItem(pared21);
            scene2->addItem(pared22);

            //        //monedas :C
            monedas.push_back(new moneda(9,-150,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-150,270));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-150,360));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-150,460));scene2->addItem(monedas.back());

            monedas.push_back(new moneda(9,-30,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-30,35));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-30,200));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-30,280));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-30,350));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-30,350));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,70,350));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,170,350));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,270,350));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,340,350));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,420,350));scene2->addItem(monedas.back());

            monedas.push_back(new moneda(9,50,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,150,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,250,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,350,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,420,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,420,250));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,420,150));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,420,50));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,320,30));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,320,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,250,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,250,200));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,320,200));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,200,30));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,80,30));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,80,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,150,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,150,200));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,80,200));scene2->addItem(monedas.back());

            monedas.push_back(new moneda(9,550,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,550,25));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,550,120));scene2->addItem(monedas.back());

            monedas.push_back(new moneda(9,-150,30));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-150,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-80,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-30,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-50,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,50,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,150,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,250,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,350,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,450,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,550,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,550,360));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,550,260));scene2->addItem(monedas.back());
            }
            //mundo 3
            else if(mundo==2){
                mundo+=1;ui->graphicsView->setScene(scene3);
                scene3->setSceneRect(0,0,400,400);
                scene3->addItem(personaje);pared1 = new muros(800,20,200,110);
                pared1 = new muros(800,20,200,110);
                pared2 = new muros(18,285,200,110);
                pared3 = new muros(18,275,200,-220);
                pared4 = new muros(800,20,200,-490);
                pared5 = new muros(18,285,-580,110);
                pared6 = new muros(18,275,-580,-220);
                pared7 = new muros(100,18,183,-157);
                pared8 = new muros(100,18,183,-220);
                pared9 = new muros(100,18,-480,-157);
                pared10 = new muros(100,18,-480,-220);
                pared11 = new muros(230,30,130,40);
                pared12 = new muros(30,90,30,40);
                pared13 = new muros(230,30,-300,40);
                pared14 = new muros(30,90,-400,40);
                pared15 = new muros(30,300,-185,40);
                pared16 = new muros(440,30,20,-260);
                pared17 = new muros(30,130,100,-300);
                pared18 = new muros(600,30,100,-410);
                pared19 = new muros(30,110,-470,-300);
                pared20 = new muros(90,90,-40,-120);
                pared21 = new muros(90,90,-270,-120);
                pared22 = new muros(35,35,-185,-330);
        //        pared23 = new muros(10,10,-600,-195);
        //        pared24 = new muros(10,10,215,-195);

                scene3->addItem(pared1);
                scene3->addItem(pared2);
                scene3->addItem(pared3);
                scene3->addItem(pared4);
                scene3->addItem(pared5);
                scene3->addItem(pared6);
                scene3->addItem(pared7);
                scene3->addItem(pared8);
                scene3->addItem(pared9);
                scene3->addItem(pared10);
                scene3->addItem(pared11);
                scene3->addItem(pared12);
                scene3->addItem(pared13);
                scene3->addItem(pared14);
                scene3->addItem(pared15);
                scene3->addItem(pared16);
                scene3->addItem(pared17);
                scene3->addItem(pared18);
                scene3->addItem(pared19);
                scene3->addItem(pared20);
                scene3->addItem(pared21);
                scene3->addItem(pared22);

                //monedas lvl 3 :CCC
                monedas.push_back(new moneda(9,550,260));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,550,360));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,550,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,350,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,250,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,150,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,50,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-150,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-150,360));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-150,260));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,290));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,190));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,50,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,150,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,150,230));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,250,230));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,50,230));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,350,230));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,250,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,350,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-150,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-150,0));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-150,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,50,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,150,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,250,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,350,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,0));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,50,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,150,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,250,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,350,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,50,310));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,150,310));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,250,310));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,350,310));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,290));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,190));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,550,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,0));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,550,0));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,550,-70));scene3->addItem(monedas.back());
            }
            else{
                exit(1);
            }

        }
        if(personaje->collidesWithItem(pared1)or personaje->collidesWithItem(pared2)or personaje->collidesWithItem(pared3) or personaje->collidesWithItem(pared4) or personaje->collidesWithItem(pared5)or personaje->collidesWithItem(pared6)or personaje->collidesWithItem(pared7)or personaje->collidesWithItem(pared8)or personaje->collidesWithItem(pared9)or personaje->collidesWithItem(pared10)or personaje->collidesWithItem(pared11)or personaje->collidesWithItem(pared12)or personaje->collidesWithItem(pared13)or personaje->collidesWithItem(pared14)or personaje->collidesWithItem(pared15)or personaje->collidesWithItem(pared16)or personaje->collidesWithItem(pared17)or personaje->collidesWithItem(pared18)or personaje->collidesWithItem(pared19)or personaje->collidesWithItem(pared20)or personaje->collidesWithItem(pared21)or personaje->collidesWithItem(pared22)){
            personaje->down();
        }
    }

    else if(evento->key() == Qt::Key_S){
        personaje->down();
        valor=viditas->getvidas();
        ui->vidas->setText("Vidas: "+QString::number(valor));
        if(valor == 0){
            exit(1);
        }
        for (int i = 0;i < monedas.size();i++) {
                    if(personaje->collidesWithItem(monedas.at(i))){
                        if(mundo==1)
                        scene->removeItem(monedas.at(i));
                        else if(mundo==2){
                            scene2->removeItem(monedas.at(i));
                        }
                        else if(mundo==3){
                            scene3->removeItem(monedas.at(i));
                        }
                        mostrar+=100;
                        ui->puntaje->setText("puntaje: "+QString::number(mostrar));
                        monedas = eliminarMonedas(monedas,i);
                        //monedas.removeAt(i);
                    }
        }
        if(monedas.isEmpty()){
            viditas->resetiemp();
            //mundo 2
            if(mundo==1){
                mundo+=1;
            ui->graphicsView->setScene(scene2);
            scene2->setSceneRect(0,0,400,400);
            scene2->addItem(personaje);
            pared1 = new muros(800,20,200,110);
            pared2 = new muros(18,285,200,110);
            pared3 = new muros(18,275,200,-220);
            pared4 = new muros(800,20,200,-490);
            pared5 = new muros(18,285,-580,110);
            pared6 = new muros(18,275,-580,-220);
            pared7 = new muros(100,18,183,-157);
            pared8 = new muros(100,18,183,-220);
            pared9 = new muros(100,18,-480,-157);
            pared10 = new muros(100,18,-480,-220);
            pared11 = new muros(50,215,0,40);
            pared12 = new muros(350,50,-50,40);
            pared13 = new muros(50,215,-350,40);
            pared14 = new muros(70,130,120,40);
            pared15 = new muros(200,40,-100,-70);
            pared16 = new muros(50,225,-175,-70);
            pared17 = new muros(70,130,-450,40);
            pared18 = new muros(70,130,-450,-300);
            pared19 = new muros(70,130,120,-300);
            pared20 = new muros(500,50,50,-380);
            pared21 = new muros(90,90,0,-240);
            pared22 = new muros(90,90,-310,-240);
    //        pared23 = new muros(10,10,-600,-195);
    //        pared24 = new muros(10,10,215,-195);

            scene2->addItem(pared1);
            scene2->addItem(pared2);
            scene2->addItem(pared3);
            scene2->addItem(pared4);
            scene2->addItem(pared5);
            scene2->addItem(pared6);
            scene2->addItem(pared7);
            scene2->addItem(pared8);
            scene2->addItem(pared9);
            scene2->addItem(pared10);
            scene2->addItem(pared11);
            scene2->addItem(pared12);
            scene2->addItem(pared13);
            scene2->addItem(pared14);
            scene2->addItem(pared15);
            scene2->addItem(pared16);
            scene2->addItem(pared17);
            scene2->addItem(pared18);
            scene2->addItem(pared19);
            scene2->addItem(pared20);
            scene2->addItem(pared21);
            scene2->addItem(pared22);

            //        //monedas :C
            monedas.push_back(new moneda(9,-150,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-150,270));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-150,360));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-150,460));scene2->addItem(monedas.back());

            monedas.push_back(new moneda(9,-30,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-30,35));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-30,200));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-30,280));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-30,350));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-30,350));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,70,350));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,170,350));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,270,350));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,340,350));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,420,350));scene2->addItem(monedas.back());

            monedas.push_back(new moneda(9,50,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,150,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,250,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,350,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,420,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,420,250));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,420,150));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,420,50));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,320,30));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,320,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,250,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,250,200));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,320,200));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,200,30));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,80,30));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,80,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,150,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,150,200));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,80,200));scene2->addItem(monedas.back());

            monedas.push_back(new moneda(9,550,-65));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,550,25));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,550,120));scene2->addItem(monedas.back());

            monedas.push_back(new moneda(9,-150,30));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-150,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-80,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-30,130));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,-50,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,50,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,150,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,250,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,350,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,450,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,550,460));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,550,360));scene2->addItem(monedas.back());
            monedas.push_back(new moneda(9,550,260));scene2->addItem(monedas.back());
          }
            //mundo 3
            else if(mundo==2){
                mundo+=1;ui->graphicsView->setScene(scene3);
                scene3->setSceneRect(0,0,400,400);
                scene3->addItem(personaje);pared1 = new muros(800,20,200,110);
                pared1 = new muros(800,20,200,110);
                pared2 = new muros(18,285,200,110);
                pared3 = new muros(18,275,200,-220);
                pared4 = new muros(800,20,200,-490);
                pared5 = new muros(18,285,-580,110);
                pared6 = new muros(18,275,-580,-220);
                pared7 = new muros(100,18,183,-157);
                pared8 = new muros(100,18,183,-220);
                pared9 = new muros(100,18,-480,-157);
                pared10 = new muros(100,18,-480,-220);
                pared11 = new muros(230,30,130,40);
                pared12 = new muros(30,90,30,40);
                pared13 = new muros(230,30,-300,40);
                pared14 = new muros(30,90,-400,40);
                pared15 = new muros(30,300,-185,40);
                pared16 = new muros(440,30,20,-260);
                pared17 = new muros(30,130,100,-300);
                pared18 = new muros(600,30,100,-410);
                pared19 = new muros(30,110,-470,-300);
                pared20 = new muros(90,90,-40,-120);
                pared21 = new muros(90,90,-270,-120);
                pared22 = new muros(35,35,-185,-330);
        //        pared23 = new muros(10,10,-600,-195);
        //        pared24 = new muros(10,10,215,-195);

                scene3->addItem(pared1);
                scene3->addItem(pared2);
                scene3->addItem(pared3);
                scene3->addItem(pared4);
                scene3->addItem(pared5);
                scene3->addItem(pared6);
                scene3->addItem(pared7);
                scene3->addItem(pared8);
                scene3->addItem(pared9);
                scene3->addItem(pared10);
                scene3->addItem(pared11);
                scene3->addItem(pared12);
                scene3->addItem(pared13);
                scene3->addItem(pared14);
                scene3->addItem(pared15);
                scene3->addItem(pared16);
                scene3->addItem(pared17);
                scene3->addItem(pared18);
                scene3->addItem(pared19);
                scene3->addItem(pared20);
                scene3->addItem(pared21);
                scene3->addItem(pared22);

                //monedas lvl 3 :CCC
                monedas.push_back(new moneda(9,550,260));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,550,360));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,550,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,350,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,250,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,150,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,50,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-150,460));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-150,360));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-150,260));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,290));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,190));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,50,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,150,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,150,230));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,250,230));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,50,230));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,350,230));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,250,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,350,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-150,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-150,0));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-150,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,50,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,150,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,250,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,350,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,-70));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,0));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,-50,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,50,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,150,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,250,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,350,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,390));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,50,310));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,150,310));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,250,310));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,350,310));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,290));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,190));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,550,90));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,450,0));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,550,0));scene3->addItem(monedas.back());
                monedas.push_back(new moneda(9,550,-70));scene3->addItem(monedas.back());
            }
            else{
                exit(1);
            }
        }

        if(personaje->collidesWithItem(pared1)or personaje->collidesWithItem(pared2)or personaje->collidesWithItem(pared3) or personaje->collidesWithItem(pared4) or personaje->collidesWithItem(pared5)or personaje->collidesWithItem(pared6)or personaje->collidesWithItem(pared7)or personaje->collidesWithItem(pared8)or personaje->collidesWithItem(pared9)or personaje->collidesWithItem(pared10)or personaje->collidesWithItem(pared11)or personaje->collidesWithItem(pared12)or personaje->collidesWithItem(pared13)or personaje->collidesWithItem(pared14)or personaje->collidesWithItem(pared15)or personaje->collidesWithItem(pared16)or personaje->collidesWithItem(pared17)or personaje->collidesWithItem(pared18)or personaje->collidesWithItem(pared19)or personaje->collidesWithItem(pared20)or personaje->collidesWithItem(pared21)or personaje->collidesWithItem(pared22)){
            personaje->up();
        }
    }
}

QList<moneda *> pacman::eliminarMonedas(QList<moneda *> monedas, int pos)
{
    QList<moneda *> aux;
    for (int i = 0;i < monedas.size() ; i++) {
            if(i != pos){
                aux.push_back(monedas.at(i));
            }
        }
        return aux;
}

pacman::~pacman()
{
    delete ui;
}


