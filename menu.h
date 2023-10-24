#ifndef MENU_H
#define MENU_H

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
#include <QGraphicsScene>
#include <QPen>
#include <QColor>
#include <QBrush>


#include <QMainWindow>

#include "AdministradorNeuronas.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Menu; }
QT_END_NAMESPACE

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    Menu(QWidget *parent = nullptr);
    void guardarTablaEnArchivo(const QString &nombreArchivo);
    void cargarTablaDesdeArchivo(const QString &nombreArchivo);
    void buscarNeuronaPorID(const QString &id);
    ~Menu();

private slots:
    void on_buttonAgregar_clicked();

    void on_buttonAgregarFinal_clicked();

    void on_buttonSave_clicked();

    void on_buttonRead_clicked();

    void on_buttonClean_clicked();

    void on_buttonSaveTable_clicked();

    void on_buttonImportar_clicked();

    void on_buttonBuscar_clicked();

    void on_buttonAdd_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButtonOrdenarText_clicked();

    void on_pushButtonOrdenarText2_clicked();

    void on_pushButtonOrdenarTable_clicked();

    void on_pushButtonOrdenarTable2_clicked();

    void cargarNeuronasEnTabla(const QList<Neurona> &neuronas);

    void on_pushLimpiar_clicked();

    void on_buttonFuerza_clicked();

    void on_buttonCargar_clicked();

private:
    Ui::Menu *ui;

    AdministradorNeuronas administrador;
    QGraphicsScene scene;
};
#endif // MENU_H
