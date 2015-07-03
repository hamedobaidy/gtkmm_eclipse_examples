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
  void on_button_copy();
  void on_button_paste();
  void on_clipboard_text_received(const Glib::ustring& text);

  //Child widgets:
  Gtk::Box m_VBox;

  Gtk::Label m_Label;

  Gtk::Grid m_Grid;
  Gtk::ToggleButton m_ButtonA1, m_ButtonA2, m_ButtonB1, m_ButtonB2;

  Gtk::ButtonBox m_ButtonBox;
  Gtk::Button m_Button_Copy, m_Button_Paste;
};



#endif /* EXAMPLEWINDOW_H_ */
