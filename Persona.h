#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona {
public:
    Persona();
    Persona(const std::string &nombre, const std::string &documento);

    // Getters
    std::string getNombre() const;
    std::string getDocumento() const;

    // Setters
    void setNombre(const std::string &nombre);
    void setDocumento(const std::string &documento);

private:
    std::string nombre;
    std::string documento;
};

#endif // PERSONA_H