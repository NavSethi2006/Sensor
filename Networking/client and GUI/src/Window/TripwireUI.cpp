#include "TripwireUI.h"

TripwireUI::TripwireUI() {

}


void
TripwireUI::render() {
    
    ImGui::Begin("Tripwire");

    ImGui::Text("Status");

    IM_ASSERT(ret);

    if(ImGui::IsItemHovered()) {
        ImGui::BeginTooltip();
        ImGui::Text("Tripwire server is down or there is some intteruption in connecting.\nCheck the manuel for some fixes");
        ImGui::Image((void*) (intptr_t)my_image_texture, ImVec2(my_image_width, my_image_height));
        ImGui::EndTooltip();
    }
    if(ImGui::CollapsingHeader("Calibration")) {

        ImGui::Text("Find a good position for the device and then click the\nbutton below to calibrate or verify its position");
        if(ImGui::Button("Calibrate")) {
            set_calibration_signal(true);
        }
        if(get_calibration_signal()) {
            ImGui::Text("Device Calibrated");
        }
        
        if(get_alert_system()) {
            alert();
            if(ImGui::Button("Deactivate")) {
                reset_alert_sounds();
                set_alert_system(false);
                
            }
        }

    }

    ImGui::End();
    
}

TripwireUI::~TripwireUI() {
    
}