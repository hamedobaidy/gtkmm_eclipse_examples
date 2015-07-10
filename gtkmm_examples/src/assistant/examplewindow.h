/*
 * examplewindow.h
 *
 *  Created on: Jul 1, 2015
 *      Author: hamed
 */

#ifndef EXAMPLEWINDOW_H_
#define EXAMPLEWINDOW_H_


#include "exampleassistant.h"
#include <gtkmm.h>

class ExampleWindow : public Gtk::Window
{
public:
  ExampleWindow();
  virtual ~ExampleWindow();

private:
  // Signal handlers:
  void on_button_clicked();
  void on_assistant_apply();

  // Child widgets:
  Gtk::Grid m_grid;
  Gtk::Button m_button;
  Gtk::Label m_label1, m_label2;
  Gtk::CheckButton m_check;
  Gtk::Entry m_entry;
  ExampleAssistant m_assistant;
};


#endif /* EXAMPLEWINDOW_H_ */
