import 'package:flutter/material.dart';

class HomeView extends StatelessWidget {
  const HomeView({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('tarotr'),
        backgroundColor: Colors.deepPurple,
        foregroundColor: Colors.white,
        centerTitle: false,
      ),
      
      body: const Center(
        child: Column(
          mainAxisSize: MainAxisSize.min,
          children: [
            Text('sua tiragem de tarô diária'),

            SizedBox(height: 20)
          ],
        )
      ),
    );
  }
}