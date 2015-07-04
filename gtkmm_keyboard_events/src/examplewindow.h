/*
 * examplewindow.h
 *
 *  Created on: Jul 4, 2015
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

private:
  //Override default signal handler:
  virtual bool on_key_press_event(GdkEventKey* event);

  Gtk::Grid m_container;
  Gtk::RadioButton m_first;
  Gtk::RadioButton m_second;
};


#endif /* EXAMPLEWINDOW_H_ */
