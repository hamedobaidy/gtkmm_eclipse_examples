/*
 * examplewindow.h
 *
 *  Created on: Jul 1, 2015
 *      Author: hamed
 */

#ifndef EXAMPLEWINDOW_H_
#define EXAMPLEWINDOW_H_



#include <gtkmm.h>

class ExampleWindow : public Gtk::Dialog
{
public:
  ExampleWindow();
  virtual ~ExampleWindow();

protected:
  //Signal handlers:
  void on_button_close();

  //Child widgets:
  Gtk::ScrolledWindow m_ScrolledWindow;
  Gtk::Grid m_Grid;
  Gtk::Button m_Button_Close;
};


#endif /* EXAMPLEWINDOW_H_ */
