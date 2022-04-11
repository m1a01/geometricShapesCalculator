#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float valueA;
    float valueB;
    float valueC;
    float valueHeight;
    float radius;
    float valueD;
    float diagonalA;
    float diagonalB;
    int shape;

    cout << "Choose a geometric shape: (1. square, 2. triangle, 3. circle, 4. ellipse, 5. deltoid, 6. trapeze, 7. parallelogram)" << endl <<  "ALL VALUES ARE IN CENTIMETERS " << endl;
    cin >> shape;

    switch(shape) {
    case 1: {
        cout << "Enter length of A: " << endl;
        cin >> valueA;

        float areaSquare = valueA * valueA;
        float diameterSquare = 4 * valueA;

        cout << "Area of square is: " << areaSquare << "cm2" << endl;
        cout << "Diameter of square is:" << diameterSquare << "cm" << endl;

    }
     break;
    case 2: {
        cout << "Enter length of A: " << endl;
        cin >> valueA;
        cout << "Enter length of B: " << endl;
        cin >> valueB;
        cout << "Enter length of C:" << endl;
        cin >> valueC;
        cout << "Enter height of triangle: " << endl;
        cin >> valueHeight;

        float areaTriangle = (valueA * valueHeight) / 2;
        float diameterTriangle = valueA + valueB + valueC;


        cout << "Area of triangle is: " << areaTriangle << "cm2" << endl;
        cout << "Diameter of triangle is: " << diameterTriangle << "cm" << endl;
    }
      break;
    case 3: {
        cout << "Enter radius:" << endl;
        cin >> radius;

        float areaCircle = pow(radius, 2) * M_PI;
        float diameterCircle = 2 * radius * M_PI;

        cout << "Area of circle is: " << areaCircle << "cm2" << endl;
        cout << "Diameter of circle is: " << diameterCircle << "cm" << endl;

    }
        break;

    case 4: {
        cout << "Enter A axis: " << endl;
        cin >> valueA;
        cout << "Enter B axis: " << endl;
        cin >> valueB;

        float areaEllipse = M_PI * valueA * valueB;
        float diameterEllipse = M_PI * (valueA + valueB);


        cout << "Area of the ellipse is: " << areaEllipse << "cm2" << endl;
        cout << "Diameter of the ellipse is: " << diameterEllipse << "cm" << endl;
    }
    break;

    case 5: {
        cout << "Enter length of A: " << endl;
        cin >> valueA;
        cout << "Enter length of C: " << endl;
        cin >> valueC;
        cout << "Enter length of the first diagonal: " << endl;
        cin >> diagonalA;
        cout <<"Enter length of the second diagonal: " << endl;
        cin >> diagonalB;


        float areaDeltoid = (diagonalA * diagonalB) / 2;
        float diameterDeltoid = (2 * valueA) + (2 * valueC);

        cout << "Area of the deltoid is: " << areaDeltoid << "cm2" << endl;
        cout << "Diameter of the deltoid is: " << diameterDeltoid << "cm" << endl;


    }
        break;

    case 6: {
        cout << "Enter length of A: " << endl;
        cin >> valueA;
        cout << "Enter length of B: " << endl;
        cin >> valueB;
        cout << "Enter length of C: " << endl;
        cin >> valueC;
        cout << "Enter length of D: " << endl;
        cin >> valueD;
        cout << "Enter height of trapeze: "<< endl;
        cin >> valueHeight;

        float areaTrapeze = ((valueA + valueC) * valueHeight) / 2;
        float diameterTrapeze = valueA + valueB + valueC + valueD;

        cout << "Area of trapeze is: " << areaTrapeze << "cm2" << endl;
        cout << "Diameter of trapeze is: " << diameterTrapeze << "cm" << endl;

    }
        break;

    case 7: {
        cout << "Enter length of A: "  << endl;
        cin >> valueA;
        cout << "Enter length of B: "  << endl;
        cin >> valueB;
        cout << "Enter height of parallelogram: " << endl;
        cin >> valueHeight;

        float areaParallelogram = valueA * valueHeight;
        float diameterParallelogram = 2*(valueA + valueB);

        cout << "Area of parallelogram is: " <<  areaParallelogram <<"cm2"<< endl;
        cout << "Diameter of parallelogram is: " << diameterParallelogram << "cm"<< endl;

    }
        return 0;
    }





















}
