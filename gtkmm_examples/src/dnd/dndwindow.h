/*
 * dndwindow.h
 *
 *  Created on: Jul 3, 2015
 *      Author: hamed
 */

#ifndef DNDWINDOW_H_
#define DNDWINDOW_H_


#include <gtkmm/box.h>
#include <gtkmm/label.h>
#include <gtkmm/window.h>
#include <gtkmm/button.h>

class DnDWindow : public Gtk::Window
{

public:
  DnDWindow();
  virtual ~DnDWindow();

protected:
  //Signal handlers:
  void on_button_drag_data_get(
          const Glib::RefPtr<Gdk::DragContext>& context,
          Gtk::SelectionData& selection_data, guint info, guint time);
  void on_label_drop_drag_data_received(
          const Glib::RefPtr<Gdk::DragContext>& context, int x, int y,
          const Gtk::SelectionData& selection_data, guint info, guint time);

  //Member widgets:
  Gtk::Box m_HBox;
  Gtk::Button m_Button_Drag;
  Gtk::Label m_Label_Drop;
};


#endif /* DNDWINDOW_H_ */
