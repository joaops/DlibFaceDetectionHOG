#include <chrono>
#include <iostream>
#include <dlib/image_io.h>
#include <dlib/gui_widgets.h>
#include <dlib/image_processing/frontal_face_detector.h>

using namespace std;
using namespace dlib;

int main() {
    try {
        auto tempo_total_inicio = std::chrono::high_resolution_clock::now();
        // cout << "Criando Detector HOG" << endl;
        frontal_face_detector detectorHog = get_frontal_face_detector();
        // cout << "Criando Objeto de Imagem RGB" << endl;
        array2d<rgb_pixel> imagem;
        // cout << "Criando Objeto de Imagem Cinza" << endl;
        array2d<unsigned char> imagemCinza;
        string caminho_imagem = "fei/43-11.jpg";
        cout << "Carregando Imagem: " << caminho_imagem << endl;
        auto load_image_start = std::chrono::high_resolution_clock::now();
        load_image(imagem, caminho_imagem);
        auto load_image_end = std::chrono::high_resolution_clock::now();
        // cout << "Convertendo Imagem para Cinza" << endl;
        auto convert_image_start = std::chrono::high_resolution_clock::now();
        assign_image(imagemCinza, imagem);
        auto convert_image_end = std::chrono::high_resolution_clock::now();
        // cout << "Detectando Faces" << endl;
        auto detection_image_start = std::chrono::high_resolution_clock::now();
        std::vector<rectangle> facesDetectadasHog = detectorHog(imagemCinza);
        auto detection_image_end = std::chrono::high_resolution_clock::now();
        cout << "Faces:" << endl;
        for (auto& f : facesDetectadasHog) {
            cout << f << endl;
        }
        auto tempo_total_fim = std::chrono::high_resolution_clock::now();
        double tempo_carregamento = std::chrono::duration<double, std::milli>(load_image_end - load_image_start).count();
        double tempo_conversao = std::chrono::duration<double, std::milli>(convert_image_end - convert_image_start).count();
        double tempo_deteccao = std::chrono::duration<double, std::milli>(detection_image_end - detection_image_start).count();
        double tempo_total = std::chrono::duration<double, std::milli>(tempo_total_fim - tempo_total_inicio).count();
        cout << "Tempo Total: " << to_string(tempo_total) << endl;
        cout << "Tempo de Carregamento: " << to_string(tempo_carregamento) << endl;
        cout << "Tempo de Conversao: " << to_string(tempo_conversao) << endl;
        cout << "Tempo de Deteccao: " << to_string(tempo_deteccao) << endl;
        image_window my_window2(imagem, "Dlib Face Detection HOG");
        my_window2.add_overlay(facesDetectadasHog, rgb_pixel(0, 255, 0));
        my_window2.wait_until_closed();
        return 0;
    }
    catch (exception& e) {
        cout << "\nexception thrown!" << endl;
        cout << e.what() << endl;
        return 1;
    }
}