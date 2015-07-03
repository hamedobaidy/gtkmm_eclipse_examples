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
  void on_checkbutton_text();
  void on_checkbutton_activity();
  void on_checkbutton_inverted();
  virtual bool on_timeout();
  void on_button_close();

  //Child widgets:
  Gtk::Box m_VBox;
  Gtk::Alignment m_Alignment;
  Gtk::Grid m_Grid;
  Gtk::ProgressBar m_ProgressBar;
  Gtk::Separator m_Separator;
  Gtk::CheckButton m_CheckButton_Text, m_CheckButton_Activity, m_CheckButton_Inverted;
  Gtk::Button m_Button_Close;

  int m_connection_id_timeout;
  bool m_bActivityMode;
};


#endif /* EXAMPLEWINDOW_H_ */
