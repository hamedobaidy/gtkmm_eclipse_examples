/*
 * examplewindow.h
 *
 *  Created on: Jul 4, 2015
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
  void on_menu_file_recent_files_item();
  void on_menu_file_recent_files_dialog();
  void on_menu_file_quit();
  void on_menu_file_new();

  //Child widgets:
  Gtk::Box m_Box;

  Glib::RefPtr<Gtk::UIManager> m_refUIManager;
  Glib::RefPtr<Gtk::ActionGroup> m_refActionGroup;
  Glib::RefPtr<Gtk::RecentAction> m_refRecentAction;

  Glib::RefPtr<Gtk::RecentManager> m_refRecentManager;
};


#endif /* EXAMPLEWINDOW_H_ */
