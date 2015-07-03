/*
 * examplewindow.h
 *
 *  Created on: Jul 1, 2015
 *      Author: hamed
 */

#ifndef EXAMPLEWINDOW_H_
#define EXAMPLEWINDOW_H_


#include <gtkmm.h>
#include "treeview_withpopup.h"

class ExampleWindow : public Gtk::Window
{
public:
  ExampleWindow();
  virtual ~ExampleWindow();

protected:
  //Signal handlers:
  void on_button_quit();



  //Child widgets:
  Gtk::Box m_VBox;

  Gtk::ScrolledWindow m_ScrolledWindow;
  TreeView_WithPopup m_TreeView;

  Gtk::ButtonBox m_ButtonBox;
  Gtk::Button m_Button_Quit;
};


#endif /* EXAMPLEWINDOW_H_ */
