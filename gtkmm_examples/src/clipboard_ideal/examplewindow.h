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

  void on_clipboard_owner_change(GdkEventOwnerChange* event);
  void on_clipboard_get(Gtk::SelectionData& selection_data, guint info);
  void on_clipboard_clear();

  void on_clipboard_received(const Gtk::SelectionData& selection_data);
  void on_clipboard_received_targets(const std::vector<Glib::ustring>& targets);

  virtual void update_paste_status(); //Disable the paste button if there is nothing to paste.

  //Child widgets:
  Gtk::Box m_VBox;

  Gtk::Label m_Label;

  Gtk::Grid m_Grid;
  Gtk::ToggleButton m_ButtonA1, m_ButtonA2, m_ButtonB1, m_ButtonB2;

  Gtk::ButtonBox m_ButtonBox;
  Gtk::Button m_Button_Copy, m_Button_Paste;

  Glib::ustring m_ClipboardStore; //Keep copied stuff here, until it is pasted. This could be a big complex data structure.
};


#endif /* EXAMPLEWINDOW_H_ */
