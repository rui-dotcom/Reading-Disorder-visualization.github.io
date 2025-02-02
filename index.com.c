<!DOCTYPE html>
<html lang="zh">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>阅读障碍视觉模拟</title>
    <style>
        /* 定义阅读障碍的跳动效果 */
        @keyframes dyslexia {
            0% { transform: translate(0, 0); }
            25% { transform: translate(-1px, 1px) rotate(-1deg); }
            50% { transform: translate(1px, -1px) rotate(1deg); }
            75% { transform: translate(-2px, 2px) rotate(-2deg); }
            100% { transform: translate(2px, -2px) rotate(2deg); }
        }

        body {
            font-family: Arial, sans-serif;
            text-align: center;
            margin: 50px;
            background-color: #f8f8f8;
        }

        h1 {
            font-size: 36px;
            color: #333;
        }

        .dyslexia-effect {
            font-size: 24px;
            font-weight: bold;
            letter-spacing: 1px;
            line-height: 1.5;
            color: #222;
            display: inline-block;
            animation: dyslexia 0.3s infinite alternate ease-in-out;
            background-color: #fef2d6;
            padding: 10px;
            border-radius: 5px;
        }
    </style>
</head>
<body>

    <h1>阅读障碍眼中的世界</h1>
    <p class="dyslexia-effect">这是一个模拟阅读障碍患者视觉感受的文字。</p>

</body>
</html>
