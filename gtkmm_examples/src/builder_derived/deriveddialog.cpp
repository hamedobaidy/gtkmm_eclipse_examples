/*
 * deriveddialog.cpp
 *
 *  Created on: Jul 5, 2015
 *      Author: hamed
 */


#include "deriveddialog.h"

DerivedDialog::DerivedDialog(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refGlade)
: Gtk::Dialog(cobject),
  m_refGlade(refGlade),
  m_pButton(0)
{
  //Get the Glade-instantiated Button, and connect a signal handler:
  m_refGlade->get_widget("quit_button", m_pButton);
  if(m_pButton)
  {
    m_pButton->signal_clicked().connect( sigc::mem_fun(*this, &DerivedDialog::on_button_quit) );
  }
}

DerivedDialog::~DerivedDialog()
{
}

void DerivedDialog::on_button_quit()
{
  hide(); //hide() will cause main::run() to end.
}

