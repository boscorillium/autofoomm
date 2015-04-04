
#include <iostream>
#include <gtkmm/main.h>
#include "main-window.hh"

int
main(int argc, char** argv)
{
    Glib::RefPtr<Gtk::Application> app =
    Gtk::Application::create(argc, argv,
    "org.gtkmm.examples.base");

    MainWindow main_window;

    return app->run(main_window);
}
