/*
 * buttons.h
 *
 *  Created on: Jun 30, 2015
 *      Author: hamed
 */

#ifndef BUTTONS_H_
#define BUTTONS_H_


#include <gtkmm/window.h>
#include <gtkmm/button.h>

class Buttons : public Gtk::Window
{
public:
  Buttons();
  virtual ~Buttons();

protected:
  //Signal handlers:
  void on_button_clicked();

  //Child widgets:
  Gtk::Button m_button;
};


#endif /* BUTTONS_H_ */
