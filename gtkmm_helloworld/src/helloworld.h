/*
 * helloworld.h
 *
 *  Created on: Jun 30, 2015
 *      Author: hamed
 */

#ifndef HELLOWORLD_H_
#define HELLOWORLD_H_


#include <gtkmm/button.h>
#include <gtkmm/window.h>

class HelloWorld : public Gtk::Window
{

public:
  HelloWorld();
  virtual ~HelloWorld();

protected:
  //Signal handlers:
  void on_button_clicked();

  //Member widgets:
  Gtk::Button m_button;
};


#endif /* HELLOWORLD_H_ */
