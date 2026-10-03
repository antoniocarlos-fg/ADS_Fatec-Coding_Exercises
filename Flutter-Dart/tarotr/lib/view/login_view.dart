import 'package:flutter/material.dart';

class LoginView extends StatefulWidget {
  const new({super.key});

  @override
  State<LoginView> createState() => _LoginViewState();
}

class _LoginViewState extends State<LoginView> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.blueGrey[900],

      body: Center(
        child: Column(
          mainAxisSize: MainAxisSize.min,
          children: [
            Image.asset(
              'assets/tarotr_icon.png',
              width: 200,
              height: 200,
              color: Colors.white,
              fit: BoxFit.cover
            ),

            SizedBox(height: 20),

            Text(
              'tarotr',
              textAlign: TextAlign.center,
              style: TextStyle(
                fontSize: 40,
                fontWeight: FontWeight.bold,
                color: Colors.white,
              )
            ),

            SizedBox(height: 40),

            TextField(
              style: TextStyle(
                fontSize: 24,
                fontWeight: FontWeight.w500,
                color: Colors.white,
              ),

              decoration: InputDecoration(
                labelText: 'e-mail',
                labelStyle: const TextStyle(color: Colors.white70),
                filled: true,
                fillColor: Colors.blueGrey[700],
              ),
            )
          ]
        ),
      )
    );
  }
}