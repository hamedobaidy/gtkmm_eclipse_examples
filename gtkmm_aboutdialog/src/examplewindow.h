/*
 * examplewindow.h
 *
 *  Created on: Jul 3, 2015
 *      Author: hamed
 */

#ifndef EXAMPLEWINDOW_H_
#define EXAMPLEWINDOW_H_


#include <gtkmm.h>

class ExampleWindow : public Gtk::Window
{
public:
  ExampleWindow();
  virtual ~ExampleWindow();

protected:
  //Signal handlers:
  void on_button_clicked();
  void on_about_dialog_response(int response_id);

  //Child widgets:
  Gtk::Box m_VBox;
  Gtk::Label m_Label;
  Gtk::ButtonBox m_ButtonBox;
  Gtk::Button m_Button;
  Gtk::AboutDialog m_Dialog;
};


#endif /* EXAMPLEWINDOW_H_ */
