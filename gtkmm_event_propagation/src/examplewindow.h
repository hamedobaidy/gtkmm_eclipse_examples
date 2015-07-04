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

private:
  //Override default signal handler:
  virtual bool on_key_release_event(GdkEventKey* event);

  bool entryKeyRelease(GdkEventKey* event);
  bool gridKeyRelease(GdkEventKey* event);
  bool windowKeyReleaseBefore(GdkEventKey* event);
  bool windowKeyRelease(GdkEventKey* event);

  Gtk::Grid m_container;

  Gtk::Label m_label;
  Gtk::Entry m_entry;
  Gtk::CheckButton m_checkbutton_can_propagate;
};


#endif /* EXAMPLEWINDOW_H_ */
