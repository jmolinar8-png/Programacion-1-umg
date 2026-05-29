#ifndef HABITACION_H
#define HABITACION_H


class habitacion
{
    public:
        habitacion();
        virtual ~habitacion();

    protected:

    private:
        double numHabitacion;
        float precio;
        string tipoHabitacion, tipoCama, status;

};

#endif // HABITACION_H
