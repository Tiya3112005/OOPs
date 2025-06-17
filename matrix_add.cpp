#include <iostream>
using namespace std;

class Matrix {
private:
    int** mat;         // pointer to 2D array
    int rlimit, climit;

public:
    // Dynamic constructor
    Matrix(int r, int c) {
        rlimit = r;
        climit = c;

        // allocate memory for rows
        mat = new int*[rlimit];
        for (int i = 0; i < rlimit; i++)
            mat[i] = new int[climit];
    }

    // Copy constructor
    Matrix(const Matrix& m) {
        rlimit = m.rlimit;
        climit = m.climit;

        mat = new int*[rlimit];
        for (int i = 0; i < rlimit; i++) {
            mat[i] = new int[climit];
            for (int j = 0; j < climit; j++)
                mat[i][j] = m.mat[i][j];
        }
    }

    // Function to input matrix
    void input() {
        cout << "Enter elements of matrix (" << rlimit << "x" << climit << "):\n";
        for (int i = 0; i < rlimit; i++)
            for (int j = 0; j < climit; j++)
                cin >> mat[i][j];
    }

    // Function to display matrix
    void display() {
        cout << "Matrix:\n";
        for (int i = 0; i < rlimit; i++) {
            for (int j = 0; j < climit; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }

    // Function to add two matrices and store result in current object
    void add(Matrix& m1, Matrix& m2) {
        if (m1.rlimit != m2.rlimit || m1.climit != m2.climit) {
            cout << "Matrix dimensions do not match!" << endl;
            return;
        }

        for (int i = 0; i < rlimit; i++)
            for (int j = 0; j < climit; j++)
                mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
    }

    // Destructor
    ~Matrix() {
        for (int i = 0; i < rlimit; i++)
            delete[] mat[i];
        delete[] mat;
    }
};

// Main function
int main() {
    int r = 2, c = 2;

    Matrix m1(r, c), m2(r, c), m3(r, c);

    cout << "Matrix 1:\n";
    m1.input();

    cout << "Matrix 2:\n";
    m2.input();

    // Add matrices
    m3.add(m1, m2);

    cout << "\nMatrix 1:\n";
    m1.display();

    cout << "\nMatrix 2:\n";
    m2.display();

    cout << "\nSum of Matrix 1 and Matrix 2:\n";
    m3.display();

    return 0;
}

