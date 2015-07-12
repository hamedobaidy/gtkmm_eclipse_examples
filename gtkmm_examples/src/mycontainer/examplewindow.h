/*
 * examplewindow.h
 *
 *  Created on: Jul 5, 2015
 *      Author: hamed
 */

#ifndef EXAMPLEWINDOW_H_
#define EXAMPLEWINDOW_H_


#include <gtkmm.h>
#include "mycontainer.h"

class ExampleWindow : public Gtk::Window
{
public:
  ExampleWindow();
  virtual ~ExampleWindow();

protected:
  //Signal handlers:
  void on_button_quit();

  //Child widgets:
  Gtk::Box m_VBox;
  MyContainer m_MyContainer;
  Gtk::Button m_Button_One;
  Gtk::Label m_Label_Two;
  Gtk::ButtonBox m_ButtonBox;
  Gtk::Button m_Button_Quit;
};


#endif /* EXAMPLEWINDOW_H_ */
