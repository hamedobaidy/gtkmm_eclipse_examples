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
  void on_menu_file_new_generic();
  void on_menu_file_quit();
  void on_menu_others();

  void on_menu_choices_one();
  void on_menu_choices_two();

  //Child widgets:
  Gtk::Box m_Box;

  Glib::RefPtr<Gtk::UIManager> m_refUIManager;
  Glib::RefPtr<Gtk::ActionGroup> m_refActionGroup;
  Glib::RefPtr<Gtk::RadioAction> m_refChoiceOne, m_refChoiceTwo;
};


#endif /* EXAMPLEWINDOW_H_ */
