import 'package:device_preview_plus/device_preview_plus.dart';
import 'package:flutter/material.dart';
import 'package:tarotr/view/cadastro_usuario_view.dart';
import 'package:tarotr/view/login_view.dart';
import 'package:tarotr/view/perfil_view.dart';
import 'package:tarotr/view/recuperar_senha_view.dart';
import 'package:tarotr/view/sobre_view.dart';

import 'view/home_view.dart';

void main() {
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
      title: 'tarotr',
      home: const HomeView(),

      initialRoute: 'login',
      routes: {
        'login':(context) => const LoginView(),
        'cadastro_usuario':(context) => const CadastroUsuarioView(),
        'recuperar_senha':(context) => const RecuperarSenhaView(),
        'home':(context) => const HomeView(),
        'sobre':(context) => const SobreView(),
        'perfil':(context) => const PerfilView()
      },

      onUnknownRoute: (settings){
        return MaterialPageRoute(
          builder: (context) => LoginView(),
        );
      },
    );
  }
}