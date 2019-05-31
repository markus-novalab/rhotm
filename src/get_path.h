#include "gtk_librarys.h"

#define KB 1000
#define MB 1000000
#define GB 1000000000


int scan_directory(char *pathName, GtkTreeStore *treestore, int count, struct Data * data);

GtkTreeModel *create_and_fill_model(char *pathName, struct Data * data);

void write_size(GtkTreeViewColumn *col,GtkCellRenderer *renderer, GtkTreeModel *model,
                GtkTreeIter *iter, gpointer user_data);

GtkWidget *create_view_and_model_for_data(struct Data *data);

void get_data(GtkButton *btn, struct Data *datas);

GtkWidget *create_view_and_model(char *path, struct Data * data);
