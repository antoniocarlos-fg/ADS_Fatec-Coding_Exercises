import 'package:flutter/material.dart';
import 'package:device_preview_plus/device_preview_plus.dart';
import 'view/CalcIMCView.dart';

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
      debugShowCheckedModeBanner: false,
      home: CalcIMCView(),
    );
  }
}
