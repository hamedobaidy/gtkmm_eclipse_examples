/*
 * treeview_withpopup.h
 *
 *  Created on: Jul 1, 2015
 *      Author: hamed
 */

#ifndef TREEVIEW_WITHPOPUP_H_
#define TREEVIEW_WITHPOPUP_H_


#include <gtkmm.h>

class TreeView_WithPopup : public Gtk::TreeView
{
public:
  TreeView_WithPopup();
  virtual ~TreeView_WithPopup();

protected:
  // Override Signal handler:
  // Alternatively, use signal_button_press_event().connect_notify()
  virtual bool on_button_press_event(GdkEventButton *ev);

  //Signal handler for popup menu items:
  void on_menu_file_popup_generic();


  //Tree model columns:
  class ModelColumns : public Gtk::TreeModel::ColumnRecord
  {
  public:

    ModelColumns()
    { add(m_col_id); add(m_col_name); }

    Gtk::TreeModelColumn<unsigned int> m_col_id;
    Gtk::TreeModelColumn<Glib::ustring> m_col_name;
  };

  ModelColumns m_Columns;

  //The Tree model:
  Glib::RefPtr<Gtk::ListStore> m_refTreeModel;

  Gtk::Menu m_Menu_Popup;
};



#endif /* TREEVIEW_WITHPOPUP_H_ */
