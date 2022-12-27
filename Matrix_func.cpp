#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;



class bass_matrix{
    protected:
        int matrix_1 [2][2];
        int matrix_2 [2][2];
        // int add [2][2];
        // int sub [2][2];
    
    public:

        //Taking the matrix elemant as input

        void set_matrix(){
            // first matrix 
            cout<<"*****Enter the first matrix*****\n";

            for(int i = 0; i<2; i++){
                for(int j = 0; j<2 ;j++){
                    cout<<"Enter the element"<<i <<j<<":";
                    cin >> matrix_1 [i][j];
                }
            }

            //second matrix 
            cout<<"*****Enter the second matrix*****\n";

            for(int i = 0; i<2; i++){
                for(int j = 0; j<2 ;j++){
                    cout<<"Enter the element"<<i <<j<<":";
                    cin >> matrix_2 [i][j];
                }
            }
        }

    void print_matrix(){
        cout<<"*****First matrix***** \n";
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                cout<<matrix_1 [i][j]<<" ";
            }
        cout<<"\n";
        }

        cout<<"*****Second matrix***** \n";
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                cout<<matrix_2 [i][j]<<" ";
            }
        cout<<"\n";
        }
    
    }

    // void substraction();
    // void print_matrix3();

};

// Matrix functinos

class matrix_func: virtual public bass_matrix{
    protected:
        int add [2][2];
        int sub [2][2];
        int mult [2][2] = {0};
    //     int add [2][2];
    public:
        //addition of matrix
        void addition();
        void print_matrix2();

        // substraction of matrix 
        void substraction();
        void print_matrix3();

        // multiplication of matrix 

        void multiplication();
        void print_matrix4();

};

// Matrix addition program

void matrix_func::addition(){
            for(int i = 0; i<2;i++){
                for(int j=0;j<2;j++){
                    add [i][j] = matrix_1[i][j] + matrix_2[i][j];
                }
            }
        }


void matrix_func::print_matrix2(){
    cout<<"*****Addition of matrix*****\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<add [i][j]<<" ";
        }
        cout<<"\n";
    }
}

// substraction of matrix


void matrix_func::substraction(){
    for(int i = 0; i<2;i++){
        for(int j=0;j<2;j++){
            sub [i][j] = matrix_1[i][j] - matrix_2[i][j];
        }
    }
}

void matrix_func::print_matrix3(){
    cout<<"*****Substraction of matrix*****\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<sub [i][j]<<" ";
        }
        cout<<"\n";
    }
}

// Multiplication of matrix 

void matrix_func::multiplication(){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                mult [i][j] = mult [i][j]+matrix_1 [i][k] * matrix_2 [k][j];
            }
        }
    }
}

void matrix_func::print_matrix4(){
    cout<<"*****multiplication of matrix*****\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<mult [i][j]<<" ";
        }
        cout<<"\n";
    }

}


int main(){
    char flag;

    do{
       
        system("cls");
        
        matrix_func tamp;

        tamp.set_matrix();
        tamp.print_matrix();
        cout<<"******************************************************************************************************\n";
        cout<<"'A' for Addition\n";
        cout<<"'S' for Substraction\n";
        cout<<"'M' for multiplication\n";
        cout<<"'Q' for Quit\n";
        cout<<"*****Enter the function*****\n";
        cin>> flag;

        if(flag == 'q' || flag == 'Q'){
            system("cls");
            break;
        }

        if(flag == 'a' || flag == 'A'){
            // add_matrix tamp1;
            tamp.addition();
            tamp.print_matrix2();
        }
        else if(flag == 's' || flag == 'S'){
            // sub_matrix tamp2;
            
            tamp.substraction();
            tamp.print_matrix3();

        }
        
        else if(flag == 'm' || flag == 'M'){

            tamp.multiplication();
            tamp.print_matrix4();
        }


        cout<<"'Q' for Quit or press any carector and press enter\n";
        cin>> flag;
        if(flag == 'q' || flag == 'Q'){
            system("cls");
            break;
        }

        else{
            system("cls");
            continue;
        }

    }while(1);
    
    return 0;
}