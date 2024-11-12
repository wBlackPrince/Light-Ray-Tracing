#include <iostream>


#include "color.h"
#include "vec3.h"


int main() {

    // Image

    int image_width = 256;
    int image_height = 256;

    // Render

    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = 0; j < image_height; j++) {
        for (int i = 0; i < image_width; i++) {
            std::clog << "\rScanlines remaining: " << (image_height - j) << ' ' << std::flush;

            auto pixel_color = color(0.0, double(i)/(image_width - 1), double(j)/(image_height - 1));

            //double r = 0.0;
            //double g = double(i) / (image_width-1);
            //double b = double(j) / (image_height-1);

            //int ir = int(255.999 * r);
            //int ig = int(255.999 * g);
            //int ib = int(255.999 * b);

            //std::cout << ir << ' ' << ig << ' ' << ib << '\n';

            write_color(std::cout, pixel_color);
        }
    }
}