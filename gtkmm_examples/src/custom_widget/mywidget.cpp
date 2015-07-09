/*
 * mywidget.cpp
 *
 *  Created on: Jul 5, 2015
 *      Author: hamed
 */


#include "mywidget.h"
#include <gdkmm/general.h>  // for cairo helper functions
#include <iostream>
//#include <gtk/gtkwidget.h> //For GTK_IS_WIDGET()
#include <cstring>


MyWidget::MyWidget() :
  //The GType name will actually be gtkmm__CustomObject_mywidget
  Glib::ObjectBase("mywidget"),
  Gtk::Widget(),
  m_scale(1000)
{
  set_has_window(true);

  //This shows the GType name, which must be used in the CSS file.
  std::cout << "GType name: " << G_OBJECT_TYPE_NAME(gobj()) << std::endl;

  //This shows that the GType still derives from GtkWidget:
  //std::cout << "Gtype is a GtkWidget?:" << GTK_IS_WIDGET(gobj()) << std::endl;

  //Install a style so that an aspect of this widget may be themed via a CSS
  //style sheet file:
  gtk_widget_class_install_style_property(GTK_WIDGET_CLASS(
              G_OBJECT_GET_CLASS(gobj())),
      g_param_spec_int("example_scale",
        "Scale of Example Drawing",
        "The scale to use when drawing. This is just a silly example.",
        G_MININT,
        G_MAXINT,
        500,
        G_PARAM_READABLE) );

  m_refStyleProvider = Gtk::CssProvider::create();
  Glib::RefPtr<Gtk::StyleContext> refStyleContext = get_style_context();
  refStyleContext->add_provider(m_refStyleProvider,
    GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);

  try
  {
    m_refStyleProvider->load_from_path("custom_gtk.css");
  }
  catch(const Glib::Error& ex)
  {
    std::cerr << "Gtk::CssProvider::load_from_path() failed: " << ex.what() << std::endl;
  }
}

MyWidget::~MyWidget()
{
}

Gtk::SizeRequestMode MyWidget::get_request_mode_vfunc() const
{
  //Accept the default value supplied by the base class.
  return Gtk::Widget::get_request_mode_vfunc();
}

//Discover the total amount of minimum space and natural space needed by
//this widget.
//Let's make this simple example widget always need minimum 60 by 50 and
//natural 100 by 70.
void MyWidget::get_preferred_width_vfunc(int& minimum_width, int& natural_width) const
{
  minimum_width = 60;
  natural_width = 100;
}

void MyWidget::get_preferred_height_for_width_vfunc(int /* width */,
   int& minimum_height, int& natural_height) const
{
  minimum_height = 50;
  natural_height = 70;
}

void MyWidget::get_preferred_height_vfunc(int& minimum_height, int& natural_height) const
{
  minimum_height = 50;
  natural_height = 70;
}

void MyWidget::get_preferred_width_for_height_vfunc(int /* height */,
   int& minimum_width, int& natural_width) const
{
  minimum_width = 60;
  natural_width = 100;
}

void MyWidget::on_size_allocate(Gtk::Allocation& allocation)
{
  //Do something with the space that we have actually been given:
  //(We will not be given heights or widths less than we have requested, though
  //we might get more)

  //Use the offered allocation for this container:
  set_allocation(allocation);

  if(m_refGdkWindow)
  {
    m_refGdkWindow->move_resize( allocation.get_x(), allocation.get_y(),
            allocation.get_width(), allocation.get_height() );
  }
}

void MyWidget::on_map()
{
  //Call base class:
  Gtk::Widget::on_map();
}

void MyWidget::on_unmap()
{
  //Call base class:
  Gtk::Widget::on_unmap();
}

void MyWidget::on_realize()
{
  //Do not call base class Gtk::Widget::on_realize().
  //It's intended only for widgets that set_has_window(false).

  set_realized();

  //Get the themed style from the CSS file:
  get_style_property("example_scale", m_scale);
  std::cout << "m_scale (example_scale from the theme/css-file) is: "
      << m_scale << std::endl;

  if(!m_refGdkWindow)
  {
    //Create the GdkWindow:

    GdkWindowAttr attributes;
    memset(&attributes, 0, sizeof(attributes));

    Gtk::Allocation allocation = get_allocation();

    //Set initial position and size of the Gdk::Window:
    attributes.x = allocation.get_x();
    attributes.y = allocation.get_y();
    attributes.width = allocation.get_width();
    attributes.height = allocation.get_height();

    attributes.event_mask = get_events () | Gdk::EXPOSURE_MASK;
    attributes.window_type = GDK_WINDOW_CHILD;
    attributes.wclass = GDK_INPUT_OUTPUT;

    m_refGdkWindow = Gdk::Window::create(get_parent_window(), &attributes,
            GDK_WA_X | GDK_WA_Y);
    set_window(m_refGdkWindow);

    //set colors
    override_background_color(Gdk::RGBA("red"));
    override_color(Gdk::RGBA("blue"));

    //make the widget receive expose events
    m_refGdkWindow->set_user_data(gobj());
  }
}

void MyWidget::on_unrealize()
{
  m_refGdkWindow.reset();

  //Call base class:
  Gtk::Widget::on_unrealize();
}

bool MyWidget::on_draw(const Cairo::RefPtr<Cairo::Context>& cr)
{
  const double scale_x = (double)get_allocation().get_width() / m_scale;
  const double scale_y = (double)get_allocation().get_height() / m_scale;

  // paint the background
  Gdk::Cairo::set_source_rgba(cr, get_style_context()->get_background_color());
  cr->paint();

  // draw the foreground
  Gdk::Cairo::set_source_rgba(cr, get_style_context()->get_color());
  cr->move_to(155.*scale_x, 165.*scale_y);
  cr->line_to(155.*scale_x, 838.*scale_y);
  cr->line_to(265.*scale_x, 900.*scale_y);
  cr->line_to(849.*scale_x, 564.*scale_y);
  cr->line_to(849.*scale_x, 438.*scale_y);
  cr->line_to(265.*scale_x, 100.*scale_y);
  cr->line_to(155.*scale_x, 165.*scale_y);
  cr->move_to(265.*scale_x, 100.*scale_y);
  cr->line_to(265.*scale_x, 652.*scale_y);
  cr->line_to(526.*scale_x, 502.*scale_y);
  cr->move_to(369.*scale_x, 411.*scale_y);
  cr->line_to(633.*scale_x, 564.*scale_y);
  cr->move_to(369.*scale_x, 286.*scale_y);
  cr->line_to(369.*scale_x, 592.*scale_y);
  cr->move_to(369.*scale_x, 286.*scale_y);
  cr->line_to(849.*scale_x, 564.*scale_y);
  cr->move_to(633.*scale_x, 564.*scale_y);
  cr->line_to(155.*scale_x, 838.*scale_y);
  cr->stroke();

  return true;
}

