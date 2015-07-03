/*
 * examplewindow.h
 *
 *  Created on: Jul 1, 2015
 *      Author: hamed
 */

#ifndef EXAMPLEWINDOW_H_
#define EXAMPLEWINDOW_H_


#include <gtkmm/window.h>
#include <gtkmm/combobox.h>
#include <gtkmm/liststore.h>

class ExampleWindow : public Gtk::Window
{
public:
  ExampleWindow();
  virtual ~ExampleWindow();

protected:
  //Signal handlers:
  void on_entry_changed();
  void on_entry_activate();
  bool on_entry_focus_out_event(GdkEventFocus* event);

  //Signal connection:
  sigc::connection m_ConnectionFocusOut;

  //Tree model columns:
  class ModelColumns : public Gtk::TreeModel::ColumnRecord
  {
  public:

    ModelColumns()
    { add(m_col_id); add(m_col_name); }

    Gtk::TreeModelColumn<Glib::ustring> m_col_id; //The data to choose - this must be text.
    Gtk::TreeModelColumn<Glib::ustring> m_col_name;
  };

  ModelColumns m_Columns;

  //Child widgets:
  Gtk::ComboBox m_Combo;
  Glib::RefPtr<Gtk::ListStore> m_refTreeModel;
};


#endif /* EXAMPLEWINDOW_H_ */
