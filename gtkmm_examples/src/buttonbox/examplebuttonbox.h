/*
 * examplebuttonbox.h
 *
 *  Created on: Jul 1, 2015
 *      Author: hamed
 */

#ifndef EXAMPLEBUTTONBOX_H_
#define EXAMPLEBUTTONBOX_H_


#include <gtkmm.h>

class ExampleButtonBox : public Gtk::Frame
{
public:
  ExampleButtonBox(bool horizontal,
       const Glib::ustring& title,
       gint spacing,
       Gtk::ButtonBoxStyle layout);

protected:
  Gtk::Button m_Button_OK, m_Button_Cancel, m_Button_Help;
};


#endif /* EXAMPLEBUTTONBOX_H_ */
