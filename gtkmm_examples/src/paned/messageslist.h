/*
 * messageslist.h
 *
 *  Created on: Jul 1, 2015
 *      Author: hamed
 */

#ifndef MESSAGESLIST_H_
#define MESSAGESLIST_H_


#include <gtkmm.h>

class MessagesList: public Gtk::ScrolledWindow
{
public:
  MessagesList();
  virtual ~MessagesList();

  class ModelColumns : public Gtk::TreeModel::ColumnRecord
  {
  public:

    ModelColumns()
    { add(m_col_text); }

    Gtk::TreeModelColumn<Glib::ustring> m_col_text;
  };

  ModelColumns m_Columns;

protected:
  Glib::RefPtr<Gtk::ListStore> m_refListStore; //The Tree Model.
  Gtk::TreeView m_TreeView; //The Tree View.
};


#endif /* MESSAGESLIST_H_ */
