#include <gtk/gtk.h>
#include <glade/glade.h>

int main(int argc, char *argv[])
{
        gtk_init(&argc, &argv);

        GladeXML *xml = glade_xml_new("demo.glade", NULL, NULL);

        if (xml == NULL) {
                g_print("glade_xml_new error\n");
                return 1;
        }

        gtk_main();

        return 0;
}
