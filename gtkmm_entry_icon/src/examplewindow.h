/*
 * examplewindow.h
 *
 *  Created on: Jun 30, 2015
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
  void on_icon_pressed(Gtk::EntryIconPosition icon_pos, const GdkEventButton* event);
  void on_button_close();

  //Child widgets:
  Gtk::Box m_VBox;
  Gtk::Entry m_Entry;
  Gtk::Button m_Button_Close;
};


#endif /* EXAMPLEWINDOW_H_ */
