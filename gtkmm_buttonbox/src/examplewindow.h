/*
 * examplewindow.h
 *
 *  Created on: Jul 1, 2015
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

  //Child widgets:
  Gtk::Box m_VBox_Main, m_VBox;
  Gtk::Box m_HBox;
  Gtk::Frame m_Frame_Horizontal, m_Frame_Vertical;
};


#endif /* EXAMPLEWINDOW_H_ */
