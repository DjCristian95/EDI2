#include <iostream>
#include <list>

using namespace std;

class Contacto {
    private:
        string nombre;
        int telefono;
        string email;
    
    public:
        Contacto(){}

        ~Contacto(){}

        void setContacto(string nom, int tel, string mail) {
            nombre = nom;
            telefono = tel;
            email = mail;
        }

        string getNombre() {
            return nombre;
        }
        int getTelefono() {
            return telefono;
        }

        string getMail() {
            return email;
        }
};

class Agenda {
    private:    
        list <Contacto> contactos;
    
    public:
        ~Agenda() {}

        void addContacto(Contacto* nContacto) {
            contactos.push_back(*nContacto);
        }

        void listarContactos() {
            cout<<"-------------------------"<<endl;
            cout<<"   Agenda de Contactos    "<<endl;
            cout<<"-------------------------"<<endl;
        
            for (Contacto contacto : contactos) {
                    cout << "Nombre:  " << contacto.getNombre() << endl;
                    cout << "Telefono:  " << contacto.getTelefono() << endl;
                    cout << "Mail:  " << contacto.getMail() << endl;
            }
            cout<<"-------------------------"<<endl;
        }
};

int main() {
        Contacto* contacto = new Contacto();
        contacto->setContacto("Celes", 4324324, "celes@gmail.com");

        Contacto* contacto2 = new Contacto();
        contacto2->setContacto("Luis", 9399929, "luisito@hotmail.com");

        Agenda* agenda = new Agenda();

        agenda->addContacto(contacto);
        agenda->addContacto(contacto2);

        agenda->listarContactos();

        delete contacto;
        delete agenda;

        return 0;
}