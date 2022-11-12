#include <iostream>
#include <fstream>
using namespace std;


int SaveFile(){

    ifstream FileName("nameofSavedFile");

    if(!FileName){
        return 1;

    }else{
        return 0 ;
        // game is saved
    }
}




int LoadFile(){

    ofstream Loadingfile("nameofLoadFile");

    if(!Loadingfile){
        return 1;

    }else{
        return 0 ;
        // game is loaded
    }

}



int main(){

///check to see if user wants to save or load a file.



}