#include <stdio.h>
#include <math.h>

int main()
{
    printf("This very very useful program was made to roughly estimate the weight of a 30 meter tall golden ryukers statue. (Of course we don't know her shape, so the volume has to be a rectangle). Considering the rather fluctuating price of gold, this program does not output any price, and thus that must be done manually. \n\n");
    float heigth_cm = 160; printf("Her height is assumed to be %f cm\n", heigth_cm);
    float height_px = 489; printf("The reference image showed her as %f pixels tall\n", height_px);
    float widest_px = 144; printf("The widest range of pixels were %f wide.\n", widest_px);

    float difference = widest_px / height_px;
    printf(" The widest pixel range divided by her height in pixels is ( widest_px / height_px ) = %f \n",difference);
    float widest_cm = heigth_cm * difference;
    printf("(Ryukers Widest [cm]) widest_cm = heigth_cm * difference = %f \n",widest_cm);

    float thinnest_px = 72;
    float difference2 = thinnest_px / height_px;
    printf("thinnest_px / height_px=%f \n",difference2);

    float thinnest_cm = heigth_cm * difference2;
    printf("(Ryukers Thinnest) thinnest_cm = heigth_cm * difference2 = %f \n",thinnest_cm);

    float ryukers_average_width = (widest_cm + thinnest_cm)/2;
    printf("(Ryukers Average): %f\n", ryukers_average_width);

    float ryukers_volume = pow(ryukers_average_width,2)*heigth_cm;
    printf("(Ryukers Volume): %f\n", ryukers_volume);

    float statue_multier = 18.75;
    float new_heigth_cm = heigth_cm * statue_multier;
    float new_ryukers_volume = ryukers_volume * statue_multier;
    float new_ryukers_width =ryukers_average_width * statue_multier;
    printf("increasing size by...%f\n",statue_multier);
    printf("new height: %f cm\n",new_heigth_cm);
    printf("new volume: %f cm(3)\n",new_ryukers_volume);
    printf("new width: %f cm\n",new_ryukers_width);

    float gold_density = 19.3; //(g/cm3)
    printf("Gold Density is %f\n", gold_density);
    printf("density * volume...");
    printf("Ryukers Statue Weighs: %f g \n", gold_density * new_ryukers_volume);
    float ryukers_statue_kilos = ((gold_density * new_ryukers_volume) / 1000);
    printf("Ryukers Statue Weighs: %f kg \n", ryukers_statue_kilos);
    float ryukers_statue_tonnas = (ryukers_statue_kilos / 1000);
    printf("Ryukers Statue Weighs: %f tonnes \n", ryukers_statue_tonnas);
    getchar();
}