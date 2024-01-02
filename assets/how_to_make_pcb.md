このページでは、JLCPCBのPCBAを使って簡単にメインボードを作成する方法を説明します。
注意: このガイドを使用したことにより生じたいかなる不利益についても、私は一切の責任を負いません。気をつけてね!!!
1.  JLCPCBにアクセスし、Add Gerber Fileをクリックします。
2. pcb/jlcpcb/production_files/GERBER-SpaceCadet2024.zip をアップロードします。image1
3. 特にこだわりがなければ変更する箇所はないはずです。(好きな基盤の色を選ぶといいかも!) image1
4. その下にあるPCBAのトグルをオンにします。image1
5. 背面を選択を選択してください。Confirm Parts Placementもオンにするといいでしょう。
6. Advance Optionの下にあるConfirmボタンをクリックします。
7. BOMファイルはpcb/jlcpcb/production_files/BOM-SpaceCadet2024.csv。CPLファイルはpcb/jlcpcb/production_files/CPL-SpaceCadet2024.csvをアップロードしてください。
8. パーツリストの確認画面で割り当てられていないと警告が出ますが無視してください。image2
9. オフセット調整するかどうか聞かれますが、しない方をクリックします。 image3
10. TypeCとU1-3がずれているはずです。TypeCは適当に配置、U1-3は画像のように回転させてください。すべてチップの上の丸が左下になるはずです。 image4
あとはチェックアウトすれば製造されるはずです。

参考画像
![image1](assets/howto1.png)
image1

![image2](assets/howto2.png)
image2

![image3](assets/howto3.png)
image3

![image4](assets/howto4.png)
image4
