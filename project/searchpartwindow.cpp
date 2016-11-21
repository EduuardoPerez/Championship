#include "searchpartwindow.h"
#include "ui_searchpartwindow.h"

SearchPartWindow::SearchPartWindow(DynSetTree<Event, Avl_Tree> *eventTree,
                                   DynSetTree<string, Avl_Tree> *nmEvTree,
                                   DynSetTree<Participant, Avl_Tree> *partTree,
                                   DynSetTree<Pair, Avl_Tree> *evPartTree,
                                   const Event &event,
                                   const Participant &participant,
                                   QWidget *parent) :
  QDialog(parent),
  ui(new Ui::SearchPartWindow)
{
  ui->setupUi(this);
  this->eventTree = eventTree;
  this->nmEvTree = nmEvTree;
  this->partTree = partTree;
  this->evPartTree = evPartTree;
  this->event = event;
  this->participant = participant;

  ui->lePicture->hide();
  ui->lePicture->setFixedWidth(200);
  ui->lePicture->setFixedHeight(200);
  ui->lePicture->setPixmap(QString::fromStdString(participant.getPicture()));
  if(QString::fromStdString(this->participant.getPicture()) != "")
    ui->lePicture->show();

  auto evName = QString::fromStdString(event.getEventName());
  auto id = QString::fromStdString(Uint2String(participant.getId()));
  auto name = QString::fromStdString(participant.getName());
  auto lastName = QString::fromStdString(participant.getLastName());
  auto bornDate = QString::fromStdString(participant.getBornDate().toString());
  auto age = QString::fromStdString(Uint2String(participant.getAge()));
  auto category = QString::fromStdString(participant.getCategory());
  auto auxInscripDate = participant.getInscriptionDate().toString();
  auto inscripDate = QString::fromStdString(auxInscripDate);

  ui->tbInfo->setText("Evento en el que competirá: "+evName+"\n\n"+
                      "Participante: "+name+" "+lastName+'\n'+
                      "Cédula: "+id+'\n'+
                      "Fecha de Nacimiento: "+bornDate+'\n'+
                      "Edad que tendrá el día del evento: "+age+" años"+'\n'+
                      "Categoría que cursará: "+category+'\n'+
                      "Fecha de Inscripción: "+inscripDate);

  this->setGeometry(
        QStyle::alignedRect(
          Qt::LeftToRight,
          Qt::AlignCenter,
          this->size(),
          qApp->desktop()->availableGeometry()
      )
  );
}

SearchPartWindow::~SearchPartWindow()
{
  delete ui;
}

void SearchPartWindow::on_pbRegresar_clicked()
{
  ViewEventWindow *viewEv_i;
  viewEv_i = new ViewEventWindow(this->eventTree, this->nmEvTree,
                                 this->partTree, this->evPartTree, event, this);
  viewEv_i->setModal(false);
  viewEv_i->show();
}

void SearchPartWindow::on_pbDescargar_clicked()
{
  QString fileName = QFileDialog::getSaveFileName(this, ("Descargar archivo"),
                                                  "participante_inscrito.pdf",
                                                  "*.pdf");
  if(QFileInfo(fileName).suffix().isEmpty())
  {
    fileName.append(".pdf");
  }

  QPrinter printer(QPrinter::PrinterResolution);
  printer.setOutputFormat(QPrinter::PdfFormat);
  printer.setPaperSize(QPrinter::Letter);
  printer.setOutputFileName(fileName);

  auto evName = QString::fromStdString(event.getEventName());
  auto id = QString::fromStdString(Uint2String(participant.getId()));
  auto name = QString::fromStdString(participant.getName());
  auto lastName = QString::fromStdString(participant.getLastName());
  auto bornDate = QString::fromStdString(participant.getBornDate().toString());
  auto age = QString::fromStdString(Uint2String(participant.getAge()));
  auto category = QString::fromStdString(participant.getCategory());
  auto auxInscripDate = participant.getInscriptionDate().toString();
  auto inscripDate = QString::fromStdString(auxInscripDate);
  auto picture = QString::fromStdString(participant.getPicture());

  QTextDocument doc;
  doc.setHtml("<h1>Evento "+evName+"</h1>"+
              "<h3>Participante: "+name+" "+lastName+"\n</h3"+
              "<h4>Cédula: "+id+"\n</h4>"+
              "<h6><br>Fecha de Nacimiento: "+bornDate+'\n'+
              "<br>Edad que tendrá el día del evento: "+age+" años"+'\n'+
              "<br>Categoría que cursará: "+category+'\n'+
              "<br><br>Fecha de Inscripción: "+inscripDate+"</h6>"+
              "<br><br><img src="+picture+" width=\"200\" height=\"200\"\/>");

  doc.setPageSize(printer.pageRect().size());
  doc.print(&printer);
}
