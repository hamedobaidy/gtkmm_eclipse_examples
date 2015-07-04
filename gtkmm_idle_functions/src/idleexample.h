/*
 * idleexample.h
 *
 *  Created on: Jul 5, 2015
 *      Author: hamed
 */

#ifndef IDLEEXAMPLE_H_
#define IDLEEXAMPLE_H_


#include <gtkmm.h>
#include <iostream>

class IdleExample : public Gtk::Window
{
public:
  IdleExample();

protected:
  // Signal Handlers:
  bool on_timer();
  bool on_idle();
  void on_button_clicked();

  // Member data:
  Gtk::Box m_Box;
  Gtk::Button m_ButtonQuit;
  Gtk::ProgressBar m_ProgressBar_c;
  Gtk::ProgressBar m_ProgressBar_d;
};


#endif /* IDLEEXAMPLE_H_ */
