#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h> //on linux
//using windows: #include <windows.h>

typedef struct {
    int id;
    char name[50];
    float cost;
}Product;

typedef struct {
    Product product;
    int quantitie;
}Kart;

void infoProduct(Product product);
void menu();
void registerProduct();
void listProduct();
void visualizeKart ();
Product takeProductByCode (int code);
int * inTheKart (int code);
void buyProducts ();

static int product_count = 0;
static int kart_count = 0;
static Kart kart[50];
static Product products[50];

int main(){
    menu();

    return 0;
}

void infoProduct(Product product){
//TBD
}
void menu(){
//TBD
}
void registerProduct(){
//TBD
}
void listProduct(){
//TBD
}
void visualizeKart (){
//TBD
}
Product takeProductByCode (int code){
//TBD
}
int * inTheKart (int code){
//TBD
}
void buyProducts (){
//TBD
}