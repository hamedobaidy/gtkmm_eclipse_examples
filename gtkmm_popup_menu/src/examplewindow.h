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
  virtual bool on_button_press_event(GdkEventButton* event);
  void on_menu_file_popup_generic();

  //Child widgets:
  Gtk::Box m_Box;
  Gtk::EventBox m_EventBox;
  Gtk::Label m_Label;

  Glib::RefPtr<Gtk::UIManager> m_refUIManager;
  Glib::RefPtr<Gtk::ActionGroup> m_refActionGroup;

  Gtk::Menu* m_pMenuPopup;
};


#endif /* EXAMPLEWINDOW_H_ */
