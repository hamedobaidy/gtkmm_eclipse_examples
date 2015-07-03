/*
 * helloworld.h
 *
 *  Created on: Jul 1, 2015
 *      Author: hamed
 */

#ifndef HELLOWORLD_H_
#define HELLOWORLD_H_


#include <gtkmm/box.h>
#include <gtkmm/button.h>
#include <gtkmm/window.h>

class HelloWorld : public Gtk::Window
{
public:
  HelloWorld();
  virtual ~HelloWorld();

protected:

  // Signal handlers:
  // Our new improved on_button_clicked(). (see below)
  void on_button_clicked(Glib::ustring data);

  // Child widgets:
  Gtk::Box m_box1;
  Gtk::Button m_button1, m_button2;
};


#endif /* HELLOWORLD_H_ */
