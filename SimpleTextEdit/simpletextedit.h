#ifndef SIMPLETEXTEDIT_H
#define SIMPLETEXTEDIT_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/qfiledialog.h>
#include <QtWidgets/qmessagebox.h>
#include <iostream>
#include "TextSource.h"
#include "TextFileManager.h"
#include "ui_simpletextedit.h"
#include <qlabel.h>

class SimpleTextEdit : public QMainWindow
{
	Q_OBJECT

public:
	SimpleTextEdit(QWidget *parent = 0);
	~SimpleTextEdit();

private:
	Ui::SimpleTextEditClass ui;
	TextFileManager man;
	TextSource txtSrc;
	QLabel *fileStatus;
	
private slots:
	void exit();
	void open();
	void create_newFile();
	void saveAs();
	void save();
	void enableSave();
	void about();

};

#endif // SIMPLETEXTEDIT_H
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            