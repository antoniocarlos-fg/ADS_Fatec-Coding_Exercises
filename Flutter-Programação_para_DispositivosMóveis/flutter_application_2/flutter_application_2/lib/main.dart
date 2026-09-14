import 'package:device_preview_plus/device_preview_plus.dart';
import 'package:flutter/material.dart';
import 'package:get_it/get_it.dart';

import 'controller/cadastrar_controller.dart';
import 'core/app_routes.dart';
import 'view/cadastrar_view.dart';
import 'view/exibir_view.dart';
import 'view/iniciar_view.dart';

final g = GetIt.instance;

void main() {
  g.registerSingleton<CadastrarController>(
    CadastrarController(),
  );

  runApp(
    DevicePreview(
      builder: (context) => const MainApp(),
    ),
  );
}

class MainApp extends StatelessWidget {
  const MainApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'Navigator',

      //
      // NAVEGAÇÃO
      //
      initialRoute: AppRoutes.iniciar,
      routes: {
        AppRoutes.iniciar: (context) => IniciarView(),
        AppRoutes.cadastrar: (context) => CadastrarView(),
        AppRoutes.exibir: (context) => ExibirView(),
      },

      //Rota inexistente
      onUnknownRoute: (settings) {
        return MaterialPageRoute(
          builder: (context) => IniciarView(),
        );
      },
    );
  }
}
