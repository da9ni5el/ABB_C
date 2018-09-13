
struct NodoABB
{
    int dato;
    struct NodoABB*izdo;
    struct NodoABB*dcho;
};

typedef struct NodoABB nodo;

nodo*raiz;

void iniciarArbol(nodo**raiz);
nodo*crearNuevo(int dato);
void insertar(nodo**raiz, int dato);
void recorrerInorden(nodo*raiz);
