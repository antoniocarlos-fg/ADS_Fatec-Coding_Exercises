import 'package:flutter/material.dart';

class CalcIMCView extends StatefulWidget {
  const CalcIMCView({super.key});

  @override
  State<CalcIMCView> createState() => _CalcIMCViewState();
}

class _CalcIMCViewState extends State<CalcIMCView> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.grey.shade900,

      appBar: AppBar( // barra do topo
        title: Text(
          'Calculadora de IMC',
          style: TextStyle(color: Colors.white)
          ),
        centerTitle: true,
        backgroundColor: Colors.black,
      ),

  
    );
  }
}