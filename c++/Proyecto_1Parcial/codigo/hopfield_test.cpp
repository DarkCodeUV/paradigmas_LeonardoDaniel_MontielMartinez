// hopfield.cpp

#include <iostream>
#include <fstream>
using namespace std;

// initialize the weigth matrix W with the patterns

void printw(int **W, int N) {

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << W[i][j] << " ";
        }
        cout << endl;
    }
}

void weigths(int **W, int *x0, int *x1, int *x2, int *x3, int *x4, int *x5, int *x6, int *x7, int *x8, int *x9, int *x10, int *x11, int *x12, int *x13, int *x14, int *x15, int *x16, int *x17, int *x18, int *x19, int *x20, int *x21, int *x22, int *x23, int *x24, int *x25, int *x26, int *x27, int *x28, int *x29, int *x30, int *x31, int *x32, int *x33, int *x34, int *x35, int *x36, int *x37, int *x38, int *x39, int *x40, int *x41, int *x42, int *x43, int *x44, int *x45, int N) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            W[i][j] = x0[i] * x0[j] + x1[i] * x1[j] + x2[i] * x2[j] + x3[i] * x3[j] + x4[i] * x4[j] + x5[i] * x5[j] + x6[i] * x6[j] + x7[i] * x7[j] + x8[i] * x8[j] + x9[i] * x9[j] + x10[i] * x10[j] + x11[i] * x11[j] + x12[i] * x12[j] + x13[i] * x13[j] + x14[i] * x14[j] + x15[i] * x15[j] + x16[i] * x16[j] + x17[i] * x17[j] + x18[i] * x18[j] + x19[i] * x19[j] + x20[i] * x20[j] + x21[i] * x21[j] + x22[i] * x22[j] + x23[i] * x23[j] + x24[i] * x24[j] + x25[i] * x25[j] + x26[i] * x26[j] + x27[i] * x27[j] + x28[i] * x28[j] + x29[i] * x29[j] + x30[i] * x30[j] + x31[i] * x31[j] + x32[i] * x32[j] + x33[i] * x33[j] + x34[i] * x34[j] + x35[i] * x35[j] + x36[i] * x36[j] + x37[i] * x37[j] + x38[i] * x38[j] + x39[i] * x39[j] + x40[i] * x40[j] + x41[i] * x41[j] + x42[i] * x42[j] + x43[i] * x43[j] + x44[i] * x44[j] + x45[i] * x45[j];
        }
    for (int k = 0; k < N; k++)
        W[k][k] = 0;
}
// calculation of sum over j of W * S

void mul(int **W, int *s, int *h, int N) {

    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = 0; j < N; j++) {
            sum += W[i][j] * s[j];
        }
        h[i] = sum;
    }
}

// energy of the configuration - Ising model

int energy(int **W, int *s, int N) {
    int E = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            E += W[i][j] * s[i] * s[j];
    return -E;
}

int sign(int y) {
    if (y > 0)
        return 1;
    else
        return -1;
}

int check(int *v1, int *v2, int N) {
    for (int i = 0; i < N; i++) {
        if (v1[i] != v2[i])
            return 0;
    }
    return 1;
}

//METODO PARA LEER ARCHIVOS

/*
  v1 = array donde se va a guardar el archivo
  col = cuantas columnas tiene el archivo
 */

int readfile(string file, int *v1, int col, int N) {
    std::ifstream infile(file);
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18;
    int row = 0;

    /*
      Alterar deacuerdo a las columnas
      Va leyendo por separado gracias a los espacios del archivo y guardando en cada variable
     */

    while (infile >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8 >> a9 >> a10 >> a11 >> a12 >> a13 >> a14 >> a15 >> a16 >> a17 >> a18) {
        std::cout << a1 << a2 << a3 << a4 << a5 << a6 << a7 << a8 << a9 << a10 << a11 << a12 << a13 << a14 << a15 << a16 << a17 << a18 << endl;
        //Acomodamos los datos
        v1[(row * col) + 0] = a1;
        v1[(row * col) + 1] = a2;
        v1[(row * col) + 2] = a3;
        v1[(row * col) + 3] = a4;
        v1[(row * col) + 4] = a5;
        v1[(row * col) + 5] = a6;
        v1[(row * col) + 6] = a7;
        v1[(row * col) + 7] = a8;
        v1[(row * col) + 8] = a9;
        v1[(row * col) + 9] = a10;
        v1[(row * col) + 10] = a11;
        v1[(row * col) + 11] = a12;
        v1[(row * col) + 12] = a13;
        v1[(row * col) + 13] = a14;
        v1[(row * col) + 14] = a15;
        v1[(row * col) + 15] = a16;
        v1[(row * col) + 16] = a17;
        v1[(row * col) + 17] = a18;

        row++;
    }

    for (int i = 0; i < N; i++) {
        if (v1[i] == 0)
            v1[i] = -1;
        cout << v1[i];

        if (((i + 1) % col) == 0)
            cout << endl;
    }
    cout << endl;
    return 0;
}

int main(void) {
    int N = 324;
    int col = 18;
    int *x0 = new int[N];
    int *x1 = new int[N];
    int *x2 = new int[N];
    int *x3 = new int[N];
    int *x4 = new int[N];
    int *x5 = new int[N];
    int *x6 = new int[N];
    int *x7 = new int[N];
    int *x8 = new int[N];
    int *x9 = new int[N];
    int *x10 = new int[N];
    int *x11 = new int[N];
    int *x12 = new int[N];
    int *x13 = new int[N];
    int *x14 = new int[N];
    int *x15 = new int[N];
    int *x16 = new int[N];
    int *x17 = new int[N];
    int *x18 = new int[N];
    int *x19 = new int[N];
    int *x20 = new int[N];
    int *x21 = new int[N];
    int *x22 = new int[N];
    int *x23 = new int[N];
    int *x24 = new int[N];
    int *x25 = new int[N];
    int *x26 = new int[N];
    int *x27 = new int[N];
    int *x28 = new int[N];
    int *x29 = new int[N];
    int *x30 = new int[N];
    int *x31 = new int[N];
    int *x32 = new int[N];
    int *x33 = new int[N];
    int *x34 = new int[N];
    int *x35 = new int[N];
    int *x36 = new int[N];
    int *x37 = new int[N];
    int *x38 = new int[N];
    int *x39 = new int[N];
    int *x40 = new int[N];
    int *x41 = new int[N];
    int *x42 = new int[N];
    int *x43 = new int[N];
    int *x44 = new int[N];
    int *x45 = new int[N];

    cout << "iterations " << endl;

    /*
    Indicamos el nombre del archivo
    x0 es el array en el que se va a guardar
    col = cantidad de columnas de la matriz

     */

    readfile("../abecedario/1A.txt", x0, col, N);
    readfile("../abecedario/2I.txt", x1, col, N);
    readfile("../abecedario/3U.txt", x2, col, N);
    readfile("../abecedario/4E.txt", x3, col, N);
    readfile("../abecedario/5O.txt", x4, col, N);
    readfile("../abecedario/6KA.txt", x5, col, N);
    readfile("../abecedario/7KI.txt", x6, col, N);
    readfile("../abecedario/8KU.txt", x7, col, N);
    readfile("../abecedario/9KE.txt", x8, col, N);
    readfile("../abecedario/10KO.txt", x9, col, N);
    readfile("../abecedario/11SA.txt", x10, col, N);
    readfile("../abecedario/12SHI.txt", x11, col, N);
    readfile("../abecedario/13SU.txt", x12, col, N);
    readfile("../abecedario/14SE.txt", x13, col, N);
    readfile("../abecedario/15SO.txt", x14, col, N);
    readfile("../abecedario/16TA.txt", x15, col, N);
    readfile("../abecedario/17CHI.txt", x16, col, N);
    readfile("../abecedario/18TSU.txt", x17, col, N);
    readfile("../abecedario/19TE.txt", x18, col, N);
    readfile("../abecedario/20TO.txt", x19, col, N);
    readfile("../abecedario/21NA.txt", x20, col, N);
    readfile("../abecedario/22NI.txt", x21, col, N);
    readfile("../abecedario/23NU.txt", x22, col, N);
    readfile("../abecedario/24NE.txt", x23, col, N);
    readfile("../abecedario/25NO.txt", x24, col, N);
    readfile("../abecedario/26HA.txt", x25, col, N);
    readfile("../abecedario/27HI.txt", x26, col, N);
    readfile("../abecedario/28FU.txt", x27, col, N);
    readfile("../abecedario/29HE.txt", x28, col, N);
    readfile("../abecedario/30HO.txt", x29, col, N);
    readfile("../abecedario/31MA.txt", x30, col, N);
    readfile("../abecedario/32MI.txt", x31, col, N);
    readfile("../abecedario/33MU.txt", x32, col, N);
    readfile("../abecedario/34ME.txt", x33, col, N);
    readfile("../abecedario/35MO.txt", x34, col, N);
    readfile("../abecedario/36YA.txt", x35, col, N);
    readfile("../abecedario/37YU.txt", x36, col, N);
    readfile("../abecedario/38YO.txt", x37, col, N);
    readfile("../abecedario/39RA.txt", x38, col, N);
    readfile("../abecedario/40RI.txt", x39, col, N);
    readfile("../abecedario/41RU.txt", x40, col, N);
    readfile("../abecedario/42RE.txt", x41, col, N);
    readfile("../abecedario/43RO.txt", x42, col, N);
    readfile("../abecedario/44WA.txt", x43, col, N);
    readfile("../abecedario/45WO.txt", x44, col, N);
    readfile("../abecedario/46N.txt", x45, col, N);

    int **W = NULL; // allocating memory for W
    W = new int *[N];
    for (int i = 0; i < N; i++) {
        W[i] = new int[N];
    }

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            W[i][j] = 0;

    weigths(W, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35, x36, x37, x38, x39, x40, x41, x42, x43, x44, x45, N);
    printw(W, N);

    int *s = new int[N]; // allocation memory for s

    readfile("x.txt", s, col, N);

    int E = energy(W, s, N);
    cout << " energy of initial configuration : " << E << endl;

    int *h = new int[N]; // allocation memory for h

    for (int p = 0; p < N; p++) {
        h[p] = 0;
    }

    int *s1 = new int[N];

    for (int i = 0; i < N; i++) {
        s1[i] = s[i];
    }

    int result, count;
    count = 0;

    do {

        for (int i = 0; i < N; i++) {
            s1[i] = s[i];
        }

        mul(W, s, h, N);

        for (int j = 0; j < N; j++) {
            if (h[j] != 0) {
                s[j] = sign(h[j]);
            }

            if (h[j] == 0) {
                s[j] = s1[j];
            }
        }

        result = check(s, s1, N);
        count++;

        cout << endl;

        for (int i = 0; i < N; i++) {
            cout << h[i] << " ";
            if (((i + 1) % col) == 0)
                cout << endl;
        }
        cout << endl;

        for (int i = 0; i < N; i++) {
            if (s[i] == -1)
                cout << "0"
                    << " ";
            else
                cout << s[i] << " ";
            if (((i + 1) % col) == 0)
                cout << endl;
        }
        cout << endl;

    } while ((count < 100) && (result != 1));

    cout << "\n Number of iterations " << count << endl;

    E = energy(W, s, N);
    cout << " energy of end configuration : " << E << endl;

    delete[] x1;
    delete[] x2;
    delete[] x3;
    delete[] x4;
    delete[] x5;
    delete[] x6;
    delete[] x7;
    delete[] x8;
    delete[] x9;
    delete[] x10;
    delete[] x11;
    delete[] x12;
    delete[] x13;
    delete[] x14;
    delete[] x15;
    delete[] x16;
    delete[] x17;
    delete[] x18;
    delete[] x19;
    delete[] x20;
    delete[] x21;
    delete[] x22;
    delete[] x23;
    delete[] x24;
    delete[] x25;
    delete[] x26;
    delete[] x27;
    delete[] x28;
    delete[] x29;
    delete[] x30;
    delete[] x31;
    delete[] x32;
    delete[] x33;
    delete[] x34;
    delete[] x35;
    delete[] x36;
    delete[] x37;
    delete[] x38;
    delete[] x39;
    delete[] x40;
    delete[] x41;
    delete[] x42;
    delete[] x43;
    delete[] x44;
    delete[] x45;

    delete[] s;
    delete[] s1;
    delete[] h;

    for (int i = 0; i < N; i++) {
        delete[] W[i];
    }

    delete[] W;
}