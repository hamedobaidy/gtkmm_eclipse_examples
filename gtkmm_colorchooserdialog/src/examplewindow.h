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
  void on_color_button_color_set();
  void on_button_dialog_clicked();

  //Child widgets:
  Gtk::Box m_VBox;
  Gtk::ColorButton m_ColorButton;
  Gtk::Button m_Button_Dialog;
  Gtk::DrawingArea m_DrawingArea; //To show the color.

  Gdk::RGBA m_Color;
};


#endif /* EXAMPLEWINDOW_H_ */
