/*
 * examplewindow.h
 *
 *  Created on: Jul 3, 2015
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
  //Signal handlers:
  void on_font_button_font_set();
  void on_button_dialog_clicked();

  //Child widgets:
  Gtk::ButtonBox m_ButtonBox;
  Gtk::FontButton m_FontButton;
  Gtk::Button m_Button_Dialog;
};


#endif /* EXAMPLEWINDOW_H_ */
