#define MAX 100
typedef struct {
    int idCat;
    char nombre[30];
}categoria;

categoria categorias[MAX];

/*Registro de producto*/
typedef struct {
    /* data */
    int id;
    char nombre[30];
    char desc[200];
    float precio;
    
}producto;

producto productos[MAX];
