/*
 * deriveddialog.h
 *
 *  Created on: Jul 5, 2015
 *      Author: hamed
 */

#ifndef DERIVEDDIALOG_H_
#define DERIVEDDIALOG_H_


#include <gtkmm.h>


class DerivedDialog : public Gtk::Dialog
{
public:
  DerivedDialog(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refGlade);
  virtual ~DerivedDialog();

protected:
  //Signal handlers:
  void on_button_quit();

  Glib::RefPtr<Gtk::Builder> m_refGlade;
  Gtk::Button* m_pButton;
};


#endif /* DERIVEDDIALOG_H_ */
