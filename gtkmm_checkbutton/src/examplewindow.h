/*
 * examplewindow.h
 *
 *  Created on: Jun 30, 2015
 *      Author: hamed
 */

#ifndef EXAMPLEWINDOW_H_
#define EXAMPLEWINDOW_H_


#include <gtkmm/window.h>
#include <gtkmm/checkbutton.h>

class ExampleWindow : public Gtk::Window
{
public:
  ExampleWindow();
  virtual ~ExampleWindow();

protected:
  //Signal handlers:
  void on_button_clicked();

  //Child widgets:
  Gtk::CheckButton m_button;
};


#endif /* EXAMPLEWINDOW_H_ */
