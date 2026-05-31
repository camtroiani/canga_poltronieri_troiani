//main.cpp
// Guadalupe Canga
// Nahiara Poltronieri
// Camila Troiani

#include <iostream>

#include <limits>

using namespace std;

// ============================================================
//   AVENTURA 1: ESCAPA DE MANDIBULAS
// ============================================================
void historiaEscape()
{
    int opcion;

    system("clear");

    cout << "                             ,':::|" << endl;
    cout << "                            /:::::|" << endl;
    cout << "                          ,'::::o\\                                      _.." << endl;
    cout << "       __........-------,..::?88b                                  ,-' /" << endl;
    cout << ".--\"\"\"\". . . .      .   .  .  .  \"\"`-.                           ,-' .;'" << endl;
    cout << "<. - :::::o......  ...   . . .. . .  .  .\"\"--._                  ,-'. .;'" << endl;
    cout << " -._  ` `\": : : ::||||:::::::::::::::::.:. .  \"\"--._ ,'|     ,-'.  .;'" << endl;
    cout << "    \"\"\"=--       //'doo.. ```  : : ::::::::::.:.:.:. . -`.-'.   .;'" << endl;
    cout << "        \"\"--.__     P(       \\               ` ` : :``::: .   .;'" << endl;
    cout << "               \"\\\"\"--.:-.     `.                             .:/" << endl;
    cout << "                 \\. /    -._   `.\"\"-----.,-..::(--\"\".\\\"\"  .  `:\\" << endl;
    cout << "                  `P         `-._ \\          `-:\\          `. `:\\" << endl;
    cout << "                                  \"\"            \"            `-.)" << endl;

    cout << "\nSOS BUBBLES\n";
    cout << "Estas nadando tranquilamente.\n";
    cout << "De repente aparece Mandibulas.\n";

    cout << "\nPresione ENTER para continuar...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    system("clear");

    cout << R"(
                                                                                                 
                                               ;                                                    
                                          ,x÷±∑                                                     
                                       i∂±±≈≈≈∑i                                                    
                                     .±x≈≠±≈÷≠÷≠≤÷;                                                 
                                    l≥∑≤√°≠≈±±∇≤≤÷±≤±<.                 .;!++l.                     
                    ;;          .>≤I;;=±x≥>lII°x≤i+≤≤±±√=:           !±÷≈±,                         
                      ,.      l≠i;I!!!!∇≈÷°<!÷≠÷◦!!I=∇≠≈±≤         ;≠+≠±∑.                          
                    ..      l≠;l!!!!!!!!∑±±∑!!!∫±÷≤!!±±∂>≤≠.     ;±-≈±≤÷                             
                    Il.   ,∑;!!÷;i:x!!!±!∫±≥!!!!√÷∫!!+∇±∏l-I   .x=≈≈≈÷≈I                             
                         ;±l!!x>♦️◦≤+x!!>>-≠≥!!!!±±÷∏!!>∑≥+!⋆√±√∑≤÷∫±±x                              
                        :<l!!!x:∏◦°l≠!!!x<≤∑!!!!!°÷∏!!!≥≈x!!∑∂!x∂≠÷∂!                               
                        ≈l!!!!!!==x>!!=!≤-±<!∂>≤÷≈≠≤!!!≥≥+!<≥∂=≤≤≠÷±±∑                              
                        >÷!!!<x>!!!!!!x!≈x÷≠≠≥±±÷°∂!!!!√⋆!>∏≤;!∫≤≤≈±≈±÷                             
                          <≥>!!!!!!!!≤->≠!∂≈≠≥≥≤∑√≈!!!l⋆==∂√!   .x√∫±≈±≥                             
                            ;≈±-+!!!!>≠-!!+≤°∑∫∑≤∫<!+=∑≤∂∑√≤.     <√≥≤÷≥i                           
                               ;-∑==x=-++++++===≥÷===≠°∑≥÷.         ,>∑∫≥∑>                         
                                   ;+÷∇∑≥∑≈====x√√=>x∫≥≥÷                ....                       
                                      =∇≥≤≠≠≥l        ,,                                            
                                       l∂√≠≈≠∑                                                      
                                         l≈√≈±∑                                                     
                                            !≤∑∫i                                                   
                                                 :,    
)";

    cout << "\nMandibulas esta cada vez mas cerca.\n";
    cout << "\n¿Que haces?\n";
    cout << "1. Huir a la cueva\n";
    cout << "2. Hacerse el muerto\n";

    cin >> opcion;

    if(opcion == 1)
    {
        system("clear");

        cout << R"(
≤∇°°°⋆⋆∑√∑∇°•◦◦◦•⋆∏∏⋆°•••⋆•°°⋆⋆⋆⋆••⋆⋆•⋆⋆•••⋆⋆∏∏∏∇°°∏°∇∏⋆⋆⋆⋆⋆°∇°•••••••••⋆•⋆•⋆⋆⋆•⋆⋆•⋆∂∏⋆⋆◦⋆∂⋆°∏°∇⋆⋆
≤∂∂••∇•°∇∂∇⋆••◦◦◦◦⋆⋆•°•∇⋆•••∏∏⋆••⋆⋆•⋆∏⋆°°⋆⋆⋆⋆⋆⋆°⋆°°∇∇∏°°°°⋆⋆⋆•⋆⋆⋆∏⋆•⋆⋆•••°°•⋆•⋆⋆⋆⋆⋆⋆•••∇∑⋆◦◦◦°∏∫⋆√∑◦•
∇∂°•°°•∏∇°∏⋆•••••◦∇••⋆•••°⋆◦⋆•⋆•••°⋆⋆°∏∏°⋆⋆⋆⋆⋆°°∇∇∏∏°⋆⋆⋆⋆⋆⋆⋆⋆°⋆°••°⋆⋆⋆•••••◦°⋆⋆⋆⋆⋆⋆°∇°•°∇√•◦⋆•◦⋆°∇≥∇•
)";

        cout << "\nLogras llegar a la cueva.\n";
        cout << "Pero esta muy oscura.\n";

        cout << "\nPresione ENTER para continuar...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();

        system("clear");

        cout << "\nOTTO TE AYUDA.\n";
        cout << "\nGANASTE.\n";
    }
    else
    {
        system("clear");

        cout << "                             ,':::|" << endl;
        cout << "                            /:::::|" << endl;
        cout << "                          ,'::::o\\                                      _.." << endl;
        cout << "       __........-------,..::?88b                                  ,-' /" << endl;
        cout << ".--\"\"\"\". . . .      .   .  .  .  \"\"`-.                           ,-' .;'" << endl;
        cout << "<. - :::::o......  ...   . . .. . .  .  .\"\"--._                  ,-'. .;'" << endl;
        cout << " -._  ` `\": : : ::||||:::::::::::::::::.:. .  \"\"--._ ,'|     ,-'.  .;'" << endl;
        cout << "    \"\"\"=--       //'doo.. ```  : : ::::::::::.:.:.:. . -`.-'.   .;'" << endl;
        cout << "        \"\"--.__     P(       \\               ` ` : :``::: .   .;'" << endl;
        cout << "               \"\\\"\"--.:-.     `.                             .:/" << endl;
        cout << "                 \\. /    -._   `.\"\"-----.,-..::(--\"\".\\\"\"  .  `:\\" << endl;
        cout << "                  `P         `-._ \\          `-:\\          `. `:\\" << endl;
        cout << "                                  \"\"            \"            `-.)" << endl;

        cout << "\nTe haces el muerto.\n";
        cout << "\nMandibulas no te cree.\n";
        cout << "\nPERDISTE.\n";
    }
}

// ============================================================
//   AVENTURA 2: LA ANEMONA ESTA VACIA
// ============================================================
void historiaAnemona()
{
    int opcion = 0;
    bool juegoActivo = true;
    float vidaFamilia = 100.0;

    while (juegoActivo == true) {

        cout << "\n\n";
        cout << "  ><((((*>    ><((((*>    ><((((*>" << endl;
        cout << "\n  iLA ANEMONA ESTA VACIA!" << endl;
        cout << "  Bubble no esta por ningun lado......" << endl;
        cout << "  Mama llora. Papa finge no entrar en panico." << endl;
        cout << "  ...pero claramente esta en panico." << endl;

        // Puntos de suspenso con FOR
        cout << "  ";
        for (int i = 0; i < 5; i++) {
            cout << ". ";
        }
        cout << endl;

        cout << "\n  iQUE HACEN?" << endl;
        cout << "  1) Ir al arrecife a buscar al Cangrejo Patricio" << endl;
        cout << "  2) Preguntar al cardumen" << endl;
        cout << "  Tu eleccion: ";
        cin >> opcion;

        // IF con AND: opcion valida
        if (opcion >= 1 && opcion <= 2) {

            switch (opcion) {

                case 1:
                    cout << "\n  Llegan al arrecife......" << endl;
                    cout << "       /\\" << endl;
                    cout << "      ( /   @ @    ()" << endl;
                    cout << "       \\  __| |__  /" << endl;
                    cout << "        -/   \"   \\-" << endl;
                    cout << "       /-|       |-\\" << endl;
                    cout << "      / /-\\     /-\\ \\" << endl;
                    cout << "       / /-`---'-\\ \\" << endl;
                    cout << "        /         \\" << endl;
                    cout << "\n  El Cangrejo Patricio los ve llegar." << endl;
                    cout << "  PATRICIO: iAy!! iLos estaba esperando! iVi todo!" << endl;

                    cout << "\n  iQUE HACEN?" << endl;
                    cout << "  1) Creerle" << endl;
                    cout << "  2) Desconfiar y buscar solos" << endl;
                    cout << "  Tu eleccion: ";
                    cin >> opcion;

                    if (opcion == 1) {
                        cout << "\n  --- FINAL BUENO ---" << endl;
                        cout << "  Siguieron al Cangrejo y encontraron a Bubble!" << endl;
                        cout << "  Estaba durmiendo en casa todo el tiempo." << endl;
                        cout << "  TODO ESTE DRAMA PARA NADA." << endl;
                    } else {
                        cout << "\n  --- FINAL MALO ---" << endl;
                        cout << "  Decidieron buscar solos... mala idea." << endl;
                        cout << "  Se perdieron. Los dos." << endl;
                        cout << "  LA FAMILIA TAMBIEN SE PIERDE." << endl;
                        vidaFamilia = vidaFamilia - 100.0;
                    }
                    juegoActivo = false;
                    break;

                case 2:
                    cout << "\n  Se acercan al cardumen..." << endl;
                    cout << "  TODOS HABLAN AL MISMO TIEMPO." << endl;
                    cout << "  Es un caos total. No se entiende nada." << endl;

                    cout << "\n  iQUE HACEN?" << endl;
                    cout << "  1) Escuchar a la tortuga" << endl;
                    cout << "  2) Seguir el rumor" << endl;
                    cout << "  Tu eleccion: ";
                    cin >> opcion;

                    // IF con OR: cualquiera lleva al final secreto
                    if (opcion == 1 || opcion == 2) {
                        cout << "\n  --- FINAL SECRETO ---" << endl;
                        cout << "  De repente... aparece MANDIBULAS." << endl;
                        cout << "                               ,-" << endl;
                        cout << "                             ,'::|" << endl;
                        cout << "                            /::::|" << endl;
                        cout << "                          ,'::::o\\                                      _.." << endl;
                        cout << "       ____........-------,..::?88b                                  ,-' /" << endl;
                        cout << "_.--\"\"\"\". . . .      .   .  .  .  \"\"`-._                           ,-' .;'" << endl;
                        cout << "<. - :::::o......  ...   . . .. . .  .  .\"\"--._                  ,-'. .;'" << endl;
                        cout << "`-._  ` `\":`:`:`::||||:::::::::::::::::.:. .  \"\"--._ ,'|     ,-'.  .;'" << endl;
                        cout << "    \"\"\"_=--       //'doo.. ````:`:`::::::::::.:.:.:. .`-`._-'.   .;'" << endl;
                        cout << "        \"\"--.__     P(       \\               ` ``:`:``:::: .   .;'" << endl;
                        cout << "               \"\\\"\"--.:-.     `.                             .:/" << endl;
                        cout << "                 \\. /    `-._   `.\"\"-----.,-..::(--\"\".\\\"\"`.  `:\\" << endl;
                        cout << "                  `P         `-._ \\          `-:\\          `. `:\\" << endl;
                        cout << "                                  \"\"            \"            `-._)" << endl;
                        cout << "  Todos gritan. Panico total." << endl;
                        cout << "  Pero esperen..." << endl;
                        cout << "  Mandibulas solo queria un amigo." << endl;
                        cout << "  Y de casualidad... ilos lleva hasta Bubble!" << endl;
                    }
                    juegoActivo = false;
                    break;

            } // fin switch

        } else {
            cout << "  Opcion invalida. Ingresa 1 o 2." << endl;
        }

    } // fin while
}

// ============================================================
//   MENU PRINCIPAL
// ============================================================
int main()
{
    int menu;
    bool jugar = true;

    while(jugar == true){

        cout << "\n\n";

        // El titulo de Bubbles aparece cada vez que se muestra el menu
        cout << R"(

▓▓▓▓▓▓▓▓    ▓▓      ▓▓  ▓▓▓▓▓▓▓▓    ▓▓▓▓▓▓▓▓    ▓▓          ▓▓▓▓▓▓▓▓▓▓    ▓▓▓▓▓▓▓▓
▓ ▓▓▓▓▓▓    ▓▓      ▓▓  ▓ ▓▓▓▓▓▓    ▓ ▓▓▓▓▓▓    ▓▓          ▓ ▓▓▓▓▓▓▓▓    ▓▓▓▓▓▓▓▓
▓▓      ▓▓  ▓▓      ▓▓  ▓▓      ▓▓  ▓▓      ▓▓  ▓▓          ▓▓          ▓▓
▓▓      ▓▓  ▓▓      ▓▓  ▓▓      ▓▓  ▓▓      ▓▓  ▓▓          ▓▓          ▓▓
▓ ▓▓▓▓▓▓    ▓▓      ▓▓  ▓ ▓▓▓▓▓▓    ▓ ▓▓▓▓▓▓    ▓▓          ▓ ▓▓▓▓▓▓      ▓▓▓▓▓▓
▓ ▓▓▓▓▓▓    ▓▓      ▓▓  ▓ ▓▓▓▓▓▓    ▓ ▓▓▓▓▓▓    ▓▓          ▓ ▓▓▓▓▓▓      ▓▓▓▓▓▓
▓▓      ▓▓  ▓▓      ▓▓  ▓▓      ▓▓  ▓▓      ▓▓  ▓▓          ▓▓                  ▓▓
▓▓      ▓▓  ▓▓      ▓▓  ▓▓      ▓▓  ▓▓      ▓▓  ▓▓          ▓▓                  ▓▓
▓ ▓▓▓▓▓▓      ▓▓▓▓▓▓    ▓ ▓▓▓▓▓▓    ▓ ▓▓▓▓▓▓    ▓ ▓▓▓▓▓▓▓▓  ▓ ▓▓▓▓▓▓▓▓  ▓▓▓▓▓▓▓▓
▓▓▓▓▓▓▓▓      ▓▓▓▓▓▓    ▓▓▓▓▓▓▓▓    ▓▓▓▓▓▓▓▓    ▓▓▓▓▓▓▓▓▓▓  ▓▓▓▓▓▓▓▓▓▓  ▓▓▓▓▓▓▓▓

)";

        cout << "\n";
        cout << "           ESCAPA DE MANDIBULAS\n";
        cout << "===========================================\n\n";

        cout << "1. Jugar: Escapa de Mandibulas\n";
        cout << "2. Jugar: La anemona esta vacia\n";
        cout << "3. Instrucciones\n";
        cout << "4. Salir\n\n";

        cout << "Seleccione una opcion: ";
        cin >> menu;

        switch(menu){

            case 1:
                historiaEscape();
                break;

            case 2:
                historiaAnemona();
                break;

            case 3:
                cout << "\nINSTRUCCIONES\n";
                cout << "Elegi las opciones ingresando numeros.\n";
                cout << "Tus decisiones cambian el destino de Bubbles.\n";
                break;

            case 4:
                jugar = false;
                break;

            default:
                cout << "\nOpcion invalida\n";
        }
    }

    return 0;
}