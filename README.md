![](https://dolby.io/wp-content/uploads/2022/07/fulldemo-2048x1095.jpg)
# Using Plugins to create a WebRTC Stream from Inside Unreal Engine 5

## Overview
A demo app for utilizing the Dolby.io Unreal Engine 5 Stream Publisher Plugin for streaming from inside a game engine.

Supplement code for this written guide here: https://dolby.io/blog/using-webrtc-plugins-to-build-a-scalable-unreal-engine-5-streaming-experience/

## Requirements 
- A [Dolby.io Account](https://dash.millicast.com/#/signup?planId=28)
- The [Dolby.io Streaming Publisher Plugin](https://github.com/millicast/millicast-publisher-unreal-engine-plugin) for the Unreal Engine.
- [Unreal Engine 5.0](https://www.unrealengine.com/en-US/download) installed on a Windows or Linux machine.

## To Run
1. Clone to an appropriate directory.
2. Create a free [Dolby.io account]((https://dash.millicast.com/#/signup?planId=28)).
3. Create a new [Dolby.io streaming token](https://docs.dolby.io/streaming-apis/docs/managing-your-tokens) and save the *Stream Name*, *Publishing Token*, and *Stream Url*.
4. Open with Unreal Engine 5.0. It will prompt you, asking if you want to re-build *MillicastPublisher plugin*, respond *Yes*. You are now in the editor and can build your game using *MillicastPublisher*.
5. Open the *Millicast Publisher Source* asset and navigate to the *Stream* heading. Inside the stream heading add the corresponding credentials and save the asset:
![](https://dolby.io/wp-content/uploads/2022/07/streamfull-2048x612.jpg)
6.   Play the game in the preview window to start the stream. You can view the stream at:
```
https://viewer.millicast.com?streamId=[YOUR_ACCOUNT_ID]/[YOUR_STREAM_NAME]. 
```

## Report a Bug 
In the case any bugs occur, report it using Github issues, and we will see to it. 

## Forking
We welcome your interest in trying to experiment with our repos.

## Feedback 
If there are any suggestions or if you would like to deliver any positive notes, feel free to open an issue and let us know!


### Learn More:
This is only the tip of the iceberg of capabilities for Dolby.io Game Engine plugins. 
   - [Stream video and audio into a game engine.](https://docs.dolby.io/streaming-apis/docs/unreal-player-plugin)
   - [Stream from a static camera in a game engine.](https://docs.dolby.io/streaming-apis/docs/unreal-publisher-plugin#virtual-camera-scenecapture2d-and-rendertarget)
   - [The GitHub project.](https://github.com/millicast/millicast-publisher-unreal-engine-plugin)

# About Dolby.io

Using decades of Dolby's research in sight and sound technology, Dolby.io provides APIs to integrate real-time streaming, voice & video communications, and file-based media processing into your applications. [Sign up for a free account](https://dashboard.dolby.io/signup/) to get started building the next generation of immersive, interactive, and social apps.

<div align="center">
  <a href="https://dolby.io/" target="_blank"><img src="https://img.shields.io/badge/Dolby.io-0A0A0A?style=for-the-badge&logo=dolby&logoColor=white"/></a>
&nbsp; &nbsp; &nbsp;
  <a href="https://docs.dolby.io/" target="_blank"><img src="https://img.shields.io/badge/Dolby.io-Docs-0A0A0A?style=for-the-badge&logoColor=white"/></a>
&nbsp; &nbsp; &nbsp;
  <a href="https://dolby.io/blog/category/developer/" target="_blank"><img src="https://img.shields.io/badge/Dolby.io-Blog-0A0A0A?style=for-the-badge&logoColor=white"/></a>
</div>

<div align="center">
&nbsp; &nbsp; &nbsp;
  <a href="https://youtube.com/@dolbyio" target="_blank"><img src="https://img.shields.io/badge/YouTube-red?style=flat-square&logo=youtube&logoColor=white" alt="Dolby.io on YouTube"/></a>
&nbsp; &nbsp; &nbsp; 
  <a href="https://twitter.com/dolbyio" target="_blank"><img src="https://img.shields.io/badge/Twitter-blue?style=flat-square&logo=twitter&logoColor=white" alt="Dolby.io on Twitter"/></a>
&nbsp; &nbsp; &nbsp;
  <a href="https://www.linkedin.com/company/dolbyio/" target="_blank"><img src="https://img.shields.io/badge/LinkedIn-0077B5?style=flat-square&logo=linkedin&logoColor=white" alt="Dolby.io on LinkedIn"/></a>
</div>