/*
 * buttons.h
 *
 *  Created on: Jun 30, 2015
 *      Author: hamed
 */

#ifndef MY_BUTTON_H_
#define MY_BUTTON_H_


#include <gtkmm/window.h>
#include <gtkmm/button.h>

class MyButton : public Gtk::Window
{
public:
  MyButton();
  virtual ~MyButton();

protected:
  //Signal handlers:
  void on_button_clicked();
  void on_button_pressed();
  void on_button_released();
  void on_button_enter();
  void on_button_leave();

  //Child widgets:
  Gtk::Button m_button;
};


#endif /* MY_BUTTON_H_ */
