#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float strA;
    float strB;
    float strC;
    float strV;
    float strP;
    float strD;
    float strE;
    float strF;
    int lik;

    cout << "Izberi LIK s stevilko (1. kvadrat, 2. trikotnik, 3. krog, 4. elipsa, 5. deltoid, 6. trapez, 7. paralelogram) " << endl;
    cin >> lik;

    switch(lik) {
    case 1: {
        cout << "Vnesi dolzino stranice A v cm:" << endl;
        cin >> strA;

        float plKvadrat = strA*strA;
        float obKvadrat = 4*strA;

        cout << "Ploscina kvadrata je z izbrano stranico je:" <<  plKvadrat << "cm2"<< endl;
        cout << "Obseg kvadrata je z izbrano stranico je:" <<  obKvadrat <<"cm"<< endl;

    }
     break;
    case 2: {
        cout << "Vnesi dolzino stranice A v cm:" << endl;
        cin >> strA;
        cout << "Vnesi dolzino stranice B v cm:" << endl;
        cin >> strB;
        cout << "Vnesi dolzino stranice C v cm:" << endl;
        cin >> strC;
        cout << "Vnesi visino lika v cm:" << endl;
        cin >> strV;

        float plTrikotnik = (strA*strV)/2;
        float obTrikotnik = strA+strB+strC;


        cout << "Ploscina trikotnika z izbranimi podatki je:" <<  plTrikotnik << "cm2"<< endl;
        cout << "Obseg trikotnika z izbranimi podatki je:" <<  obTrikotnik <<"cm"<< endl;
    }
      break;
    case 3: {
        cout << "Vnesi polmer lika v cm:" << endl;
        cin >> strP;

        float plKrog = pow(strP,2)*M_PI;
        float obKrog = 2*strP*M_PI;

        cout << "Ploscina kroga z izbranimi podatki je:" <<  plKrog << "cm2"<< endl;
        cout << "Obseg kroga z izbranimi podatki je:" <<  obKrog <<"cm"<< endl;

    }
        break;

    case 4: {
        cout << "Vnesi dolzino polosi A v cm:" << endl;
        cin >> strA;
        cout << "Vnesi dolzino polosi B v cm:" << endl;
        cin >> strB;

        float plElipsa = M_PI*strA*strB;
        float obElipsa = M_PI*(strA+strB);


        cout << "Ploscina elipse z izbranimi podatki je:" <<  plElipsa << "cm2"<< endl;
        cout << "Obseg elipse z izbranimi podatki je:" <<  obElipsa <<"cm"<< endl;
    }
    break;

    case 5: {
        cout << "Vnesi dolzino stranice A v cm:" << endl;
        cin >> strA;
        cout << "Vnesi dolzino stranice C v cm:" << endl;
        cin >> strC;
        cout << "Vnesi prvo diagonalo lika v cm:" << endl;
        cin >> strE;
        cout <<"Vnesi drugo diagonalo lika v cm" << endl;
        cin >> strF;


        float plDeltoid = (strE*strF)/2;
        float obDeltoid = (2*strA)+(2*strC);

        cout << "Obseg deltoida z izbranimi podatki je:" <<  obDeltoid <<"cm"<< endl;
        cout << "Ploscina deltoid z izbranimi podatki je:" << plDeltoid << "cm2"<< endl;

    }
        break;

    case 6: {
        cout << "Vnesi dolzino stranice A v cm:" << endl;
        cin >> strA;
        cout << "Vnesi dolzino stranice B v cm:" << endl;
        cin >> strB;
        cout << "Vnesi dolzino stranice C v cm:" << endl;
        cin >> strC;
        cout << "Vnesi dolzino stranice D v cm:" << endl;
        cin >> strD;
        cout << "Vnesi visino lika v cm:" << endl;
        cin >> strV;

        float plTrapez =((strA+strC)*strV)/2;
        float obTrapez = strA+strB+strC+strD;

        cout << "Obseg trapeza z izbranimi podatki je:" <<  obTrapez <<"cm"<< endl;
        cout << "Ploscina trapeza z izbranimi podatki je:" << plTrapez << "cm2"<< endl;
    }
        break;

    case 7: {
        cout << "Vnesi dolzino stranice A v cm:" << endl;
        cin >> strA;
        cout << "Vnesi dolzino stranice B v cm:" << endl;
        cin >> strB;
        cout << "Vnesi visino lika v cm:" << endl;
        cin >> strV;

        float plParalelogram = strA*strV;
        float obParalelogram = 2*(strA+strB);

        cout << "Obseg paralelograma z izbranimi podatki je:" <<  obParalelogram <<"cm"<< endl;
        cout << "Ploscina paralelograma z izbranimi podatki je:" << plParalelogram << "cm2"<< endl;

    }
        return 0;
    }





















}
