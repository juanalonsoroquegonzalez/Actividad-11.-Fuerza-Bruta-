#ifndef ADMINISTRADORNEURONAS_H
#define ADMINISTRADORNEURONAS_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <list>
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QTableWidgetItem>

#include "Neurona.h"

class AdministradorNeuronas {
private:

public:
    std::list<Neurona> listaNeuronas;
    void agregarInicio(const Neurona& neurona) {
        listaNeuronas.push_front(neurona);
    }

    void agregarFinal(const Neurona& neurona) {
        listaNeuronas.push_back(neurona);
    }

    void mostrar() {
        for (const Neurona& neurona : listaNeuronas) {
            neurona.print();
            std::cout << "-------------------" << std::endl;
        }
    }
    void ordenarPorID() {
        bool swapped;
        do {
            swapped = false;
            for (auto it = listaNeuronas.begin(); it != std::prev(listaNeuronas.end()); ++it) {
                if (std::next(it)->getID() < it->getID()) {
                    std::iter_swap(it, std::next(it));
                    swapped = true;
                }
            }
        } while (swapped);
    }
    void ordenarPorVoltaje(){
        bool swapped;
        do {
            swapped = false;
            for (auto it = listaNeuronas.begin(); it != std::prev(listaNeuronas.end()); ++it) {
                if (std::next(it)->getVoltaje() < it->getVoltaje()) {
                    std::iter_swap(it, std::next(it));
                    swapped = true;
                }
            }
        } while (swapped);
    }
    Neurona buscarPorID(int id) const {
        for (const Neurona& neurona : listaNeuronas) {
            if (neurona.getID() == id) {
                return neurona; // Retorna la neurona encontrada
            }
        }
        // Si no se encuentra la neurona, puedes retornar una neurona inválida o manejarlo según tu lógica
        // Por ejemplo, puedes lanzar una excepción o imprimir un mensaje de error.
        throw std::runtime_error("Neurona no encontrada por ID: " + std::to_string(id));
    }
};


#endif // ADMINISTRADORNEURONAS_H
