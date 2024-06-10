#include "bootsplash.h"

namespace AIBaker {

BootSplash::BootSplash(const char* path):
    splash(new QSplashScreen(QPixmap(path))) {
    splash->show();
}

void BootSplash::finish(QWidget* widget) {
    splash->finish(widget);
}

BootSplash::~BootSplash() {
    delete splash;
}

} // namespace AIBaker
