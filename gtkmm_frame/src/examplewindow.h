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

  //Child widgets:
  Gtk::Frame m_Frame;
};


#endif /* EXAMPLEWINDOW_H_ */
