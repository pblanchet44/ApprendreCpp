#ifndef ELEMENT_H
#define ELEMENT_H


class Element
{
protected:
    int numero;
    int vitesse;
public:
    Element();
    virtual ~Element();
    virtual void Afficher() = 0;
};

#endif // ELEMENT_H
