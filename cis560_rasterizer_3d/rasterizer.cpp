#include "rasterizer.h"

Rasterizer::Rasterizer(const std::vector<Polygon>& polygons)
    : m_polygons(polygons)
{}

QImage Rasterizer::RenderScene()
{
    // TODO: Complete the various components of code that make up this function
    // It should return the rasterized image of the current scene

    // Notice that even though it should return a QImage this function compiles.
    // Remember, C++'s compiler is dumb (though it will at least warn you that
    // the function doesn't return anything).
    // BEWARE! If you use a function that is missing its return statement,
    // it will return garbage memory!

    return QImage(512, 512, QImage::Format_RGB32);
}

void Rasterizer::ClearScene()
{
    m_polygons.clear();
}
