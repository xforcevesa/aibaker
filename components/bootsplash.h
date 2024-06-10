#ifndef BOOTSPLASH_H
#define BOOTSPLASH_H

#include <QSplashScreen>

namespace AIBaker {

class BootSplash
{
public:
    BootSplash(const char*);
    void finish(QWidget*);
    ~BootSplash();

    BootSplash operator=(BootSplash) = delete;
    BootSplash(BootSplash&) = delete;
    BootSplash(BootSplash&&) = delete;

private:
    QSplashScreen *splash;
};

} // namespace AIBaker

#endif // BOOTSPLASH_H
