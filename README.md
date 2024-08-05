![Static Badge](https://img.shields.io/badge/Em%20Desenvolvimento-maker?style=for-the-badge&color=orange)

<h1 align="center">Arduino | Monitoramento do Solo</h1>

Inicialmente, este projeto é para entender na prática e explorar sobre o funcionamendo do sensor de solo higrometro para a medição da umidade do solo. 
Tem também como objetivo escalar para um sistema IoT, onde o monitoramento da planta e a coleta dos dados possa ser analisada por meio de um
app próprio e com um vaso para colocar a planta e encaixar o arduino e seus componentes.

---

### Etapas do Projeto:

<ul>
  <li>Etender funcionamento e prototipagem do sensor;</li>
  <li>Montar Sketch e fazer os devidos ajustes para obter a melhor precisão possível;</li>
  <li>Usar um painel para mostrar informações sobre a planta;</li>
</ul>

### Componentes:

<ul>
  <li>Arduino-Uno/Esp32866;</li>
  <li>Sensor Higrometro;</li>
  <li>Display Oled I2c 128x64 0.96pol;</li>
</ul>

### Ideias e Upgrades:

<ol>
  <li>Desenvolver app que possa conectar com o hardware¹ para passar informações da planta;</li>
  <li>Desenhar uma estrutura apropriado para melhor disposição dos fios, da planta e do hardware;</li>
</ol>

<p>¹Um Esp3286 será mais adequado pela sua conexão via wi-fi ou bluetooth.</p>

---

## Sketch (Arduino-Uno):

<div align="center">
  <img src="https://github.com/glermff/Arduino-Vaso-Inteligente/blob/main/Img/Sketch_vaso_iot.png" height="350" width="500">
</div>

<br>

<p>
  Sketch com arduino apresentando sua prototipagem. As informações sobre humidade e status da planta são passados para o display;
</p>
