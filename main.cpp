#include <iostream>
using namespace std;

struct dataHewan
{
    string namaHewan, jenisHewan, namaOwner;
    int idOwner;
};

void create(string namaHewan, string jenisHewan, string namaOwner, int idOwner){
    head = new dataHewan;
    head -> namaHewan = namaHewan;
    head -> jenisHewan = jenisHewan;
    head -> namaOwner = namaOwner;
    head -> idOwner = idOwner;
    head = tail;
}


int main(){

}