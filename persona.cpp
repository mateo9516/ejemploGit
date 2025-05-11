#include "persona.h"

Persona::Persona() : nombre(""), documento("") {
}

Persona::Persona(const std::string &nombre, const std::string &documento)
    : nombre(nombre), documento(documento) {
}

std::string Persona::getNombre() const {
    return nombre;
}

std::string Persona::getDocumento() const {
    return documento;
}

void Persona::setNombre(const std::string &nombre) {
    this->nombre = nombre;
}

void Persona::setDocumento(const std::string &documento) {
    this->documento = documento;
}