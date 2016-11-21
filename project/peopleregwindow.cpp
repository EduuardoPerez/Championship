#include "peopleregwindow.h"
#include "ui_peopleregwindow.h"

PeopleRegWindow::PeopleRegWindow(DynSetTree<Event, Avl_Tree> *eventTree,
                                 DynSetTree<string, Avl_Tree> *nmEvTree,
                                 DynSetTree<Participant, Avl_Tree> *partTree,
                                 DynSetTree<Pair, Avl_Tree> *evPartTree,
                                 const Event &event, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::PeopleRegWindow)
{
  ui->setupUi(this);
  this->eventTree = eventTree;
  this->nmEvTree = nmEvTree;
  this->partTree = partTree;
  this->evPartTree = evPartTree;
  this->event = event;

  string auxTbInfo;

  for(auto it=this->partTree->begin(); it.has_curr(); it.next())
    if(it.get_curr().getEventName() == this->event.getEventName())
    {
      auto id = Uint2String(it.get_curr().getId());
      auto name = it.get_curr().getName();
      auto lastName = it.get_curr().getLastName();
      auto bornDate = it.get_curr().getBornDate().toString();
      auto age = Uint2String(it.get_curr().getAge());
      auto category = it.get_curr().getCategory();
      auto inscripDate = it.get_curr().getInscriptionDate().toString();

      auxTbInfo += "Participante: "+name+" "+lastName+'\n'+
          "Cédula: "+id+'\n'+
          "Fecha de Nacimiento: "+bornDate+'\n'+
          "Edad que tendrá el día del evento: "+age+" años"+'\n'+
          "Categoría que cursará: "+category+'\n'+
          "Fecha de Inscripción: "+inscripDate+"\n\n\n";
    }

  ui->tbInfo->setText(QString::fromStdString(auxTbInfo));

  this->setGeometry(
        QStyle::alignedRect(
          Qt::LeftToRight,
          Qt::AlignCenter,
          this->size(),
          qApp->desktop()->availableGeometry()
      )
  );
}

PeopleRegWindow::~PeopleRegWindow()
{
  delete ui;
}

void PeopleRegWindow::on_pbRegresar_clicked()
{
  ViewEventWindow *viewEv_i;
  viewEv_i = new ViewEventWindow(this->eventTree, this->nmEvTree,
                                 this->partTree, this->evPartTree, event, this);
  viewEv_i->setModal(false);
  viewEv_i->show();
}

void PeopleRegWindow::on_pbDescargar_clicked()
{
  QString fileName = QFileDialog::getSaveFileName(this, ("Descargar archivo"),
                                                  "participantes_inscritos.pdf",
                                                  "*.pdf");
  if(QFileInfo(fileName).suffix().isEmpty())
  {
    fileName.append(".pdf");
  }

  QPrinter printer(QPrinter::PrinterResolution);
  printer.setOutputFormat(QPrinter::PdfFormat);
  printer.setPaperSize(QPrinter::Letter);
  printer.setOutputFileName(fileName);

  string auxInfo;
  for(auto it=this->partTree->begin(); it.has_curr(); it.next())
    if(it.get_curr().getEventName() == this->event.getEventName())
    {
      auto id = Uint2String(it.get_curr().getId());
      auto name = it.get_curr().getName();
      auto lastName = it.get_curr().getLastName();
      auto bornDate = it.get_curr().getBornDate().toString();
      auto age = Uint2String(it.get_curr().getAge());
      auto category = it.get_curr().getCategory();
      auto inscripDate = it.get_curr().getInscriptionDate().toString();

      auxInfo += "<h4>Participante: "+name+" "+lastName+
                 "<br>Cédula: "+id+"</h4>"+
                 "<h6>Fecha de Nacimiento: "+bornDate+
                 "<br>Edad que tendrá el día del evento: "+age+" años"+
                 "<br>Categoría que cursará: "+category+
                 "<br>Fecha de Inscripción: "+inscripDate+"</h6><br><br>";
    }

  QTextDocument doc;
  doc.setHtml(QString::fromStdString(auxInfo));
  doc.setPageSize(printer.pageRect().size());
  doc.print(&printer);
}
