================================================================================

Canon LIPSLX/CARPS2 Printer Driver Version 2.90 for Linux

必 ず お 読 み く だ さ い
================================================================================

□  商標について

  Adobe、Acrobat、Acrobat Reader、PostScript およびPostScript 3は、Adobe Systems
  Incorporated（アドビシステムズ社）の商標です。
  Linux は、Linus Torvalds の商標です。
  OpenOffice.org and the seagull logo are registered trademarks of The Apache
  Software Foundation.
  UNIX は、The Open Group の米国およびその他の国における登録商標です。
  その他、本文中の社名や商品名は、各社の商標です。


□  目次

ご使用になる前に
  1.はじめに
  2.Canon LIPSLX/CARPS2 Printer Driver for Linuxの配布ファイル構成
  3.プリンタドライバの使用環境
  4.使用上の注意


1.はじめに --------------------------------------------------------------------

  このたびは「Canon LIPSLX/CARPS2 Printer Driver for Linux」をご利用いただきまし
  て、誠にありがとうございます。
  本プリンタドライバは、Linux OS上の印刷システムであるCUPS（Common Unix Printing
  System）環境で動作するキヤノンLBP/imageRUNNER ADVANCE/Color imageRUNNER/
  imageRUNNER/imagePRESS/MFシリーズ製品に対応する印刷機能を提供するドライバで
  す。


2.Canon LIPSLX/CARPS2 Printer Driver for Linuxの配布ファイル構成 ---------------

  Canon LIPSLX/CARPS2 Printer Driver for Linuxの配布ファイルは、以下のとおりで
  す。
  なお、CUPSドライバ共通モジュールおよびプリンタドライバモジュールのファイル名
  は、お使いのバージョンによって異なります。

  - README-lipslx-2.9x.txt (本ドキュメント)
  Canon LIPSLX/CARPS2 Printer Driver for Linuxの使用上の注意、補足情報について記
  載しています。

  - LICENSE-lipslxdrv-2.9x.txt
  Canon LIPSLX/CARPS2 Printer Driver for Linuxの使用許諾契約書です。

  - guide-lipslx-2.9x.tar.gz
  Canon LIPSLX/CARPS2 Printer Driver for Linuxの利用方法を記したオンラインマニュ
  アルです。
  Canon LIPSLX/CARPS2 Printer Driver for Linuxの動作環境・インストール方法・使用
  方法については、こちらに記載しています。
  圧縮ファイルになっていますので、任意のディレクトリに解凍してご参照ください。

  - cndrvcups-common-2.90-X.i386.rpm (32-bit用)
  - cndrvcups-common-2.90-X.x86_64.rpm (64-bit用)
  - cndrvcups-common_2.90-X_i386.deb (Debian 32-bit用)
  - cndrvcups-common_2.90-X_amd64.deb (Debian 64-bit用)
  Canon LIPSLX/CARPS2 Printer Driver for Linuxで用いる、CUPSドライバ共通モジュー
  ルのインストールパッケージです。

  - cndrvcups-lipslx-2.90-X.i386.rpm (32-bit用)
  - cndrvcups-lipslx-2.90-X.x86_64.rpm (64-bit用)
  - cndrvcups-lipslx_2.90-X_i386.deb (Debian 32-bit用)
  - cndrvcups-lipslx_2.90-X_amd64.deb (Debian 64-bit用)
  Canon LIPSLX/CARPS2 Printer Driver for Linuxのインストールパッケージです。

  - cndrvcups-common-2.90-X.tar.gz
  Canon LIPSLX/CARPS2 Printer Driver for Linuxで用いる、CUPSドライバ共通モジュー
  ルのソースファイルです。

  - cndrvcups-lipslx-2.90-X.tar.gz
  Canon LIPSLX/CARPS2 Printer Driver for Linuxのソースファイルです。


3.プリンタドライバの使用環境 --------------------------------------------------

  本プリンタドライバは以下の環境でご使用ください。

  ・ハードウェア
  x86互換の32-bit CPUまたは64-bit CPUを搭載し、Linuxが動作するコンピュータ

  ・対象プリンタ
  本プリンタドライバが対応する機種は、以下のとおりです。
  お使いの機種が対応するPPDファイルおよび通信環境については、こちらを参照してく
  ださい。
  ※ 双方向通信の欄に「o」または「o*」と記載してある機種は、双方向通信が必要なプ
  リンタです。 双方向通信の欄に「o*」と記載してある機種は、USB接続時は片方向通信
  となります。
  ※ IPv6の欄に「o」と記載してある機種は、IPv6に対応しています。

  Canon LBP3410 LIPSLX (CNCUPSLBP3410ZJ.ppd)
  LBP3410 (双方向通信: -, IPv6: - )

  Canon LBP3700 LIPSLX (CNCUPSLBP3700ZJ.ppd)
  LBP3700 (双方向通信: -, IPv6: - )

  Canon LBP3800 LIPSLX (CNCUPSLBP3800ZJ.ppd)
  LBP3800 (双方向通信: -, IPv6: - )

  Canon LBP3900/3950 LIPSLX (CNCUPSLBP3950ZJ.ppd)
  LBP3900/3950 (双方向通信: -, IPv6: - )

  Canon LBP3910/3930 LIPSLX (CNCUPSLBP3930ZJ.ppd)
  LBP3910/3930 (双方向通信: -, IPv6: - )

  Canon LBP3920/3970 LIPSLX (CNCUPSLBP3970ZJ.ppd)
  LBP3920/3970 (双方向通信: -, IPv6: - )

  Canon LBP3980 LIPSLX (CNCUPSLBP3980ZJ.ppd)
  LBP3980 (双方向通信: -, IPv6: - )

  Canon LBP3980M LIPSLX (CNCUPSLBP3980MZJ.ppd)
  LBP3980M (双方向通信: -, IPv6: - )

  Canon LBP4500 LIPSLX (CNCUPSLBP4500ZJ.ppd)
  LBP4500 (双方向通信: -, IPv6: o)

  Canon LBP5400 LIPSLX (CNCUPSLBP5400ZJ.ppd)
  LBP5400 (双方向通信: -, IPv6: - )

  Canon LBP5900 LIPSLX (CNCUPSLBP5900ZJ.ppd)
  LBP5900 (双方向通信: -, IPv6: -)

  Canon LBP5910 LIPSLX (CNCUPSLBP5910ZJ.ppd)
  LBP5910/5910F (双方向通信: -, IPv6: - )

  Canon LBP5910M LIPSLX (CNCUPSLBP5910MZJ.ppd)
  LBP5910M/5910MF (双方向通信: -, IPv6: - )

  Canon LBP6600 LIPSLX (CNCUPSLBP6600ZJ.ppd)
  LBP6600 (双方向通信: -, IPv6: o)

  Canon LBP6700 LIPSLX (CNCUPSLBP6700ZJ.ppd)
  LBP6700 (双方向通信: -, IPv6: - )

  Canon LBP6710 LIPSLX (CNCUPSLBP6710ZJ.ppd)
  LBP6710 (双方向通信: -, IPv6: - )

  Canon LBP7600C LIPSLX (CNCUPSLBP7600CZJ.ppd)
  LBP7600C (双方向通信: -, IPv6: o)

  Canon LBP7700C LIPSLX (CNCUPSLBP7700CZJ.ppd)
  LBP7700C (双方向通信: -, IPv6: - )

  Canon LBP8630/8620/8610 LIPSLX (CNCUPSLBP8630ZJ.ppd)
  LBP8630/8620/8610 (双方向通信: -, IPv6: - )

  Canon LBP8720/8710 LIPSLX (CNCUPSLBP8720ZJ.ppd)
  LBP8720/8710/8710e (双方向通信: -, IPv6: o)

  Canon LBP8730 LIPSLX (CNCUPSLBP8730ZJ.ppd)
  LBP8730i (双方向通信: -, IPv6: o)

  Canon LBP9510C LIPSLX (CNCUPSLBP9510CZJ.ppd)
  LBP9510C (双方向通信: -, IPv6: o)

  Canon LBP9520C LIPSLX (CNCUPSLBP9520CZJ.ppd)
  LBP9520C (双方向通信: -, IPv6: o)

  Canon LBP9600C/9500C LIPSLX (CNCUPSLBP9600CZJ.ppd)
  LBP9500C/9600C (双方向通信: -, IPv6: - )

  Canon LBP9650C LIPSLX (CNCUPSLBP9650CZJ.ppd)
  LBP9650C (双方向通信: -, IPv6: o)

  Canon LBP9660C LIPSLX (CNCUPSLBP9660CZJ.ppd)
  LBP9660Ci (双方向通信: -, IPv6: o)

  Canon iR-ADV C350 LIPSLX (CNCUPSIRADVC350ZJ.ppd)
  imageRUNNER ADVANCE C350F (双方向通信: -, IPv6: o)

  Canon iR-ADV C2020/2030 LIPSLX (CNCUPSIRADVC2030ZJ.ppd)
  imageRUNNER ADVANCE C2020/C2020F/C2030/C2030F (双方向通信: -, IPv6: o)

  Canon iR-ADV C2218 LIPSLX (CNCUPSIRADVC2218ZJ.ppd)
  imageRUNNER ADVANCE C2218 (双方向通信: -, IPv6: o)

  Canon iR-ADV C2220/2230 LIPSLX (CNCUPSIRADVC2230ZJ.ppd)
  imageRUNNER ADVANCE C2220/C2220F/C2230F (双方向通信: -, IPv6: o)

  Canon iR-ADV C5030/5035 LIPSLX (CNCUPSIRADVC5035ZJ.ppd)
  imageRUNNER ADVANCE C5030/C5030F/C5035/C5035F (双方向通信: -, IPv6: o)

  Canon iR-ADV C5045/5051 LIPSLX (CNCUPSIRADVC5051ZJ.ppd)
  imageRUNNER ADVANCE C5045/C5045F/C5051/C5051F (双方向通信: -, IPv6: o)

  Canon iR-ADV C5235/5240 LIPSLX (CNCUPSIRADVC5240ZJ.ppd)
  imageRUNNER ADVANCE C5235/C5235F/C5240/C5240F (双方向通信: -, IPv6: o)

  Canon iR-ADV C5250/5255 LIPSLX (CNCUPSIRADVC5255ZJ.ppd)
  imageRUNNER ADVANCE C5250/C5250F/C5255/C5255F (双方向通信: -, IPv6: o)

  Canon iR-ADV C7055/7065 LIPSLX (CNCUPSIRADVC7065ZJ.ppd)
  imageRUNNER ADVANCE C7055/C7065 (双方向通信: -, IPv6: o)

  Canon iR-ADV C7260/7270 LIPSLX (CNCUPSIRADVC7270ZJ.ppd)
  imageRUNNER ADVANCE C7260/C7270 (双方向通信: -, IPv6: o)

  Canon iR-ADV C9065 LIPSLX (CNCUPSIRADVC9065ZJ.ppd)
  imageRUNNER ADVANCE C9065 PRO (双方向通信: -, IPv6: o)

  Canon iR-ADV C9075 LIPSLX (CNCUPSIRADVC9075ZJ.ppd)
  imageRUNNER ADVANCE C9075 PRO (双方向通信: -, IPv6: o)

  Canon iR-ADV C9270/9280 LIPSLX (CNCUPSIRADVC9280ZJ.ppd)
  imageRUNNER ADVANCE C9270 PRO/C9280 PRO (双方向通信: -, IPv6: o)

  Canon iR-ADV 4025/4035 LIPSLX (CNCUPSIRADV4035ZJ.ppd)
  imageRUNNER ADVANCE 4025/4035 (双方向通信: o*, IPv6: o)

  Canon iR-ADV 4045 LIPSLX (CNCUPSIRADV4045ZJ.ppd)
  imageRUNNER ADVANCE 4045 (双方向通信: o*, IPv6: o)

  Canon iR-ADV 4225/4235 LIPSLX (CNCUPSIRADV4235ZJ.ppd)
  imageRUNNER ADVANCE 4225/4225F/4235/4235F (双方向通信: o*, IPv6: o)

  Canon iR-ADV 4245 LIPSLX (CNCUPSIRADV4245ZJ.ppd)
  imageRUNNER ADVANCE 4245/4245F (双方向通信: o*, IPv6: o)

  Canon iR-ADV 6055/6065 LIPSLX (CNCUPSIRADV6065ZJ.ppd)
  imageRUNNER ADVANCE 6055/6065 (双方向通信: o*, IPv6: o)

  Canon iR-ADV 6075 LIPSLX (CNCUPSIRADV6075ZJ.ppd)
  imageRUNNER ADVANCE 6075 (双方向通信: o*, IPv6: o)

  Canon iR-ADV 6255/6265 LIPSLX (CNCUPSIRADV6265ZJ.ppd)
  imageRUNNER ADVANCE 6255/6265 (双方向通信: o*, IPv6: o)

  Canon iR-ADV 6275 LIPSLX (CNCUPSIRADV6275ZJ.ppd)
  imageRUNNER ADVANCE 6275 (双方向通信: o*, IPv6: o)

  Canon iR-ADV 8085/8095 LIPSLX (CNCUPSIRADV8095ZJ.ppd)
  imageRUNNER ADVANCE 8085/8095 (双方向通信: o*, IPv6: o)

  Canon iR-ADV 8105 LIPSLX (CNCUPSIRADV8105ZJ.ppd)
  imageRUNNER ADVANCE 8105 (双方向通信: o*, IPv6: o)

  Canon iR-ADV 8205 LIPSLX (CNCUPSIRADV8205ZJ.ppd)
  imageRUNNER ADVANCE 8205 (双方向通信: o*, IPv6: o)

  Canon iR-ADV 8285/8295 LIPSLX (CNCUPSIRADV8295ZJ.ppd)
  imageRUNNER ADVANCE 8285/8295 (双方向通信: o*, IPv6: o)

  Canon iR105i LIPSLX (CNCUPSIR105IZJ.ppd)
  iR105i (双方向通信: -, IPv6: - )

  Canon iR2230 LIPSLX (CNCUPSIR2230ZJ.ppd)
  iR2230 (双方向通信: -, IPv6: - )

  Canon iR2270/iR2870 LIPSLX (CNCUPSIR2870ZJ.ppd)
  iR2270/2270F/2870/2870F (双方向通信: -, IPv6: - )

  Canon iR3025 LIPSLX (CNCUPSIR3025ZJ.ppd)
  iR3025/3025F (双方向通信: -, IPv6: - )

  Canon iR3035/iR3045 LIPSLX (CNCUPSIR3045ZJ.ppd)
  iR3035/3035F/3045/3045F (双方向通信: -, IPv6: - )

  Canon iR3225 LIPSLX (CNCUPSIR3225ZJ.ppd)
  iR3225/3225F (双方向通信: -, IPv6: o)

  Canon iR3235/iR3245 LIPSLX (CNCUPSIR3245ZJ.ppd)
  iR3235/3235F/3245/3245F (双方向通信: -, IPv6: o)

  Canon iR3570/iR4570 LIPSLX (CNCUPSIR4570ZJ.ppd)
  iR3570/3570F/4570/4570F (双方向通信: -, IPv6: - )

  Canon iR5055/iR5065 LIPSLX (CNCUPSIR5065ZJ.ppd)
  iR5055/5055N/5065/5065N (双方向通信: -, IPv6: - )

  Canon iR5075 LIPSLX (CNCUPSIR5075ZJ.ppd)
  iR5075N (双方向通信: -, IPv6: - )

  Canon iR5570/iR6570 LIPSLX (CNCUPSIR6570ZJ.ppd)
  iR5570/5570N/6570/6570N (双方向通信: -, IPv6: - )

  Canon iR7086-7105 LIPSLX (CNCUPSIR7105ZJ.ppd)
  iR7086/7095/7105 (双方向通信: -, IPv6: - )

  Canon iR7270 LIPSLX (CNCUPSIR7270ZJ.ppd)
  iR7270N (双方向通信: -, IPv6: - )

  Canon iR8570 LIPSLX (CNCUPSIR8570ZJ.ppd)
  iR8570N (双方向通信: -, IPv6: - )

  Canon iR C2110 LIPSLX (CNCUPSIRC2110ZJ.ppd)
  iR C2110F/C2110N (双方向通信: o, IPv6: - )

  Canon iR C2550 LIPSLX (CNCUPSIRC2550ZJ.ppd)
  iR C2550F (双方向通信: -, IPv6: - )

  Canon iR C2880/C3380 LIPSLX (CNCUPSIRC3380ZJ.ppd)
  iR C2880/C2880F/C3380/C3380F (双方向通信: -, IPv6: - )

  Canon iR C3080/C3580 LIPSLX (CNCUPSIRC3580ZJ.ppd)
  iR C3080/C3080F/C3580/C3580F (双方向通信: -, IPv6: - )

  Canon iR C3880/C4580 LIPSLX (CNCUPSIRC4580ZJ.ppd)
  iR C3880/C3880F/C4580/C4580F (双方向通信: -, IPv6: - )

  Canon iR C4080 LIPSLX (CNCUPSIRC4080ZJ.ppd)
  iR C4080/C4080F (双方向通信: -, IPv6: - )

  Canon iR C5180 LIPSLX (CNCUPSIRC5180ZJ.ppd)
  iR C5180/C5180N (双方向通信: -, IPv6: - )

  Canon iR C5185 LIPSLX (CNCUPSIRC5185ZJ.ppd)
  iR C5185/C5185N (双方向通信: -, IPv6: - )

  Canon iR C5870 LIPSLX (CNCUPSIRC5870ZJ.ppd)
  iR C5870/C5870N (双方向通信: -, IPv6: - )

  Canon iR C5880/C6880 LIPSLX (CNCUPSIRC6880ZJ.ppd)
  iR C5880N/C6880N (双方向通信: -, IPv6: - )

  Canon iR C6870 LIPSLX (CNCUPSIRC6870ZJ.ppd)
  iR C6870/C6870N (双方向通信: -, IPv6: - )

  Canon iPR C1 LIPSLX (CNCUPSIPRC1ZJ.ppd)
  imagePRESS C1 (双方向通信: -, IPv6: - )

  Canon iPR C1PLUS LIPSLX (CNCUPSIPRC1PZJ.ppd)
  imagePRESS C1+ (双方向通信: -, IPv6: - )

  Canon MF4010 Series CARPS2 (CNCUPSMF4010ZJ.ppd)
  MF4010 (双方向通信: -, IPv6: - )

  Canon MF4100 Series CARPS2 (CNCUPSMF4100ZJ.ppd)
  MF4100 シリーズ (双方向通信: -, IPv6: - )

  Canon MF4200 Series CARPS2 (CNCUPSMF4200ZJ.ppd)
  MF4200 シリーズ (双方向通信: -, IPv6: - )

  Canon MF4320-4350 (CNCUPSMF4350ZJ.ppd)
  MF4320-4350 (双方向通信: -, IPv6: - )

  Canon MF4360-4390 (CNCUPSMF4390ZJ.ppd)
  MF4360-4390 (双方向通信: -, IPv6: - )

  Canon MF4400 Series CARPS2 (CNCUPSMF4400ZJ.ppd)
  MF4400 シリーズ (双方向通信: -, IPv6: - )

  Canon MF4500 Series CARPS2 (CNCUPSMF4500ZJ.ppd)
  MF4500 シリーズ (双方向通信: -, IPv6: - )

  Canon MF4600 Series CARPS2 (CNCUPSMF4600ZJ.ppd)
  MF4600 シリーズ (双方向通信: -, IPv6: - )

  Canon MF4700 Series CARPS2 (CNCUPSMF4700ZJ.ppd)
  MF4700 シリーズ (双方向通信: -, IPv6: - )

  Canon MF4800 Series CARPS2 (CNCUPSMF4800ZJ.ppd)
  MF4800 シリーズ (双方向通信: -, IPv6: - )

  Canon MF6500 Series CARPS2 (CNCUPSMF6500ZJ.ppd)
  MF6500 シリーズ (双方向通信: -, IPv6: - )

  Canon MF6700 Series CARPS2 (CNCUPSMF6700ZJ.ppd)
  MF6700 シリーズ (双方向通信: -, IPv6: o)

  Canon MF6800 Series CARPS2 (CNCUPSMF6800ZJ.ppd)
  MF6800 シリーズ (双方向通信: -, IPv6: o)

  Canon MF7100/7200 Series CARPS2 (CNCUPSMF7200ZJ.ppd)
  MF7100/MF7200 シリーズ (双方向通信: -, IPv6: - )

  Canon MF7300/7400 Series CARPS2 (CNCUPSMF7400ZJ.ppd)
  MF7300/MF7400 シリーズ (双方向通信: -, IPv6: - )

  Canon MF8000 Series CARPS2 (CNCUPSMF8000ZJ.ppd)
  MF8000 シリーズ (双方向通信: o, IPv6: o)

  Canon MF8000C Series CARPS2 (CNCUPSMF8000CZJ.ppd)
  MF8000C (双方向通信: o, IPv6: o)

  Canon MF8200C Series CARPS2 (CNCUPSMF8200CZJ.ppd)
  MF8200C (双方向通信: o, IPv6: o)

  Canon MF8300 Series CARPS2 (CNCUPSMF8300ZJ.ppd)
  MF8300 シリーズ (双方向通信: o, IPv6: o)

  Canon MF8300C Series CARPS2 (CNCUPSMF8300CZJ.ppd)
  MF8300C (双方向通信: o, IPv6: o)

  Canon MF8400 CARPS2 (CNCUPSMF8400ZJ.ppd)
  MF8400 シリーズ (双方向通信: o, IPv6: - )

  Canon MF8500C Series CARPS2 (CNCUPSMF8500CZJ.ppd)
  MF8500C (双方向通信: o, IPv6: o)

  Canon MF9200 Series CARPS2 (CNCUPSMF9200ZJ.ppd)
  MF9220 (双方向通信: o, IPv6: - )

  Canon L90/L160/L230 CARPS2 (CNCUPSL230ZJ.ppd)
  L90/160/230 (双方向通信: -, IPv6: - )

  Canon L250 CARPS2 (CNCUPSL250ZJ.ppd)
  L250 (双方向通信: -, IPv6: - )

  Canon L410 Series CARPS2 (CNCUPSL410ZJ.ppd)
  L410 シリーズ (双方向通信: -, IPv6: - )

  Canon L1000 CARPS2 (CNCUPSL1000ZJ.ppd)
  L1000 (双方向通信: -, IPv6: - )

  Canon D400-450 (CNCUPSD450ZJ.ppd)
  D400-450 (双方向通信: -, IPv6: - )

  インストール方法および具体的なご利用方法に関しましては、オンラインマニュアルを
  ご覧ください。


4.使用上の注意 -----------------------------------------------------------------

- cndrvcups-commonパッケージのバージョン2.90をインストールする場合、cndrvcups
  -lipslxパッケージも、同じバージョン2.90をインストールしてお使いください。

- LIPSLX、UFR II(US)、UFR II(UK)のドライバのパッケージのうち、2つ以上がインス
  トールされている環境で、1つのパッケージだけアップデートインストールを行うと、
  アップデートインストール時にエラーが発生します。
  この問題は、インストールされているすべてのパッケージを一緒にアップデートするこ
  とで回避できます。

- OpenOffice.orgおよびStarSuiteより［ページレイアウト］で複数ページ/枚を指定した
  場合、CUPSモジュールの動作原因により、正しく複数ページ割り付けされて出力されま
  せん。

- OpenOffice.orgおよびStarSuiteより部数指定をして作成したPostScriptファイルは、
  ドライバ画面の［プリンタ選択／印刷設定］ページ内の［印刷部数］で指定した値では
  なく、PostScriptファイル作成時の部数を反映して出力します。

- プリント処理中にドライバ画面より設定内容を変更した場合、印刷結果は変更後の設定
  内容を反映したものになります。

- OpenOffice.org、GIMP、Acrobat Reader v5.0などのアプリケーションより［印刷全
  般］ページの［明るさ/ガンマ補正設定］を指定した場合、設定内容は有効になりませ
  ん。

- デスクトップまたはコマンドライン上から、PDF書類を直接指定して印刷することはで
  きません。PDF書類を印刷するときは、Acrobat ReaderまたはAdobe Readerより印刷す
  ることを推奨いたします。

- Linux以外のOS環境で作成されたPDF書類をAcrobat Readerより印刷する場合、PDFファ
  イル中で使用されている和文フォントによっては、正しい印刷結果が得られない場合が
  あります。

- ［印刷全般］ページの［明るさ/ガンマ補正設定］で100未満の値を指定した場合、
  ghostscriptの動作原因により、最終ページに黒いページが余分に出力される場合があ
  ります。

- 印刷時プリントキューの最大保持数は、CUPSモジュールの仕様により500未満です。
  500番目以降のプリントキューは破棄されます。

- SUSE LINUX Professional 9.3 をお使いの場合、ドライバ画面が文字化けする場合があ
  ります。
  この問題は、以下の方法で回避できます｡
    1) rootでログインする
    2) 以下のコマンドを実行して、GTK+の環境設定を変更する
      # cd /etc/
      # ln -s opt/gnome/gtk ./

- SUSE LINUX Professional 9.3 をお使いの場合、ドライバ画面を起動すると、ワーニン
  グが発生する場合があります｡
  この問題は、以下の方法で回避できます｡
    1) ［Kメニュー］ ->［コントロールセンター］を起動する
    2) ［外観＆テーマ］を選択する
    3) ［色］を選択する
    4) ［非KDEアプリケーションにも色設定を適用］のチェックをオフにする
    5) ［コントロールセンター］を閉じる

- OpenOffice.orgから印刷するときに、ドライバ画面の［印刷部数］で複数部数を指定す
  ると、［回転］等の一部のフィニッシング機能が正常に動作しない場合があります。

- SUSE Linux 9.3、SUSE Linux 10.0をお使いの場合、MozillaまたはFireFoxで［印刷］
  ダイアログボックスから印刷をするときに、複数部数を指定しても、設定内容は有効に
  ならず、1部しか印刷されません。
  この問題は、/etc/cups/mime.convsファイルの下記の行を以下のとおりに変更すること
  で回避できます。
  ［修正前］
    application/mozilla-ps application/postscript 33 pswrite
  ［修正後］
    application/mozilla-ps application/postscript 33 pstops

- Fedora 8、Fedora 9をお使いの場合、［印刷全般］ページの［バナーページ印刷設定］
  -［印刷終了］で［none］以外を指定すると、印刷キューが停止します。

- Fedora 9/10/11/12/13/14/15/16/17/18/19/20 64-bitをお使いの場合、本ドライバを使
  用してColor iR/Color LBP機で印刷を行うと、うまく印刷できないことがあります。こ
  れは、64-bitを標準でインストールすると、32-bitのJPEGライブラリがインストールさ
  れないためです。
  この問題は、パッケージを追加インストールすることで回避できます。
  以下のコマンドを実行します。
    <Fedora9/10 の場合> # yum install libjpeg.i386
    <Fedora11 の場合> # yum install libjpeg.i586
    <Fedora12/13 の場合> # yum install libjpeg.i686
    <Fedora14/15/16/17/18 の場合> # yum install libjpeg-turbo.i686
    <Fedora19/20 の場合> # yum install libstdc++.i686
                         # yum install libjpeg-turbo.i686

- Fedora 10/11/12/13/14/15/16/17/18/19/20 64-bitをお使いの場合、共通モジュールを
  インストールするために32-bit版のglibcライブラリが必要になります。
  以下のコマンドを実行することでインストールできます。
    <Fedora10 の場合> # yum install glibc.i386
    <Fedora11 の場合> # yum install glibc.i586
    <Fedora12/13/14/15/16/17/18/19/20 の場合> # yum install glibc.i686
  また、バージョン1.90以降のプリンタドライバでは32-bit版のxml2ライブラリが必要に
  なります。
  以下のコマンドを実行することで印刷できるようになります。
    <Fedora10 の場合> # yum install libxml2.i386
    <Fedora11 の場合> # yum install libxml2.i586
    <Fedora12/13/14/15/16/17/18/19/20 の場合> # yum install libxml2.i686

- Fedora 11をお使いの場合、ジョブをキャンセルして印刷キューが停止した状態で印刷
  を行うと、ジョブが保留されます。
  このような場合は、CUPSWebインタフェースのプリンタの状態にある［メンテナンス］
  ボタンをクリックして、［プリンタを開始］を選択すると、［保留中］のジョブが再実
  行されます。
  ［メンテナンス］ボタンが無い場合は、［プリンタを停止］を選択すると［プリンタを
  開始］が選択できます。

- OpenSUSE 10.2およびSLED10SP1に含まれるGhostscriptのバージョンが8.15.3のシステ
  ムをお使いの場合、印刷できない文書があります。他のバージョンのGhostscriptを入
  手してください。

- OpenSUSE 11.0でGhostscriptのバージョンが8.6.xのシステムをお使いの場合、Evince
  やGIMPなどのアプリケーションから印刷するときに時間がかかる場合があります。

- OpenSUSE 11.1 のKDE 環境ではOkularが標準ドキュメントビューアとなりますが、ドラ
  イバの機能が正常に動作しません。
  この問題は、Adobe Reader等の他アプリケーションを使用することで回避できます。

- Adobe Reader 7.0.xの印刷画面で「用紙サイズ」「給紙部」「両面印刷」などの指定を
  行った場合、プリンタコマンドにコマンドオプションとして指定した項目が自動的に付
  加されますが、コマンドオプションとして正しく認識できないため、指定した項目は無
  効となります。
  指定を有効にして印刷する場合、プリンタコマンドのコマンドオプションを以下のよう
  に"-o "で１つ１つのオプションを区切るように指定してください。
  （変更前） -o InputSlot=Manual,Duplex=DuplexNotumble
  （変更後） -o InputSlot=Manual -o Duplex=DuplexNoTumble

- Adobe Reader 8からPDFを印刷した場合、一部の画像データが印刷されない場合があり
  ます。
  この問題は、Adobe Reader 7または9を使用するか、またはPostScriptオプションをレ
  ベル3に設定して印刷することで回避できる場合があります。

- Adobe Reader 8.1.2の印刷画面のプロパティで［両面印刷（短辺とじ）］を指定して印
  刷すると、［両面印刷（長辺とじ）］で印刷されます。
  この問題は、cngplpから印刷することによって回避できます。

- Vine Linux 3.1をお使いの場合、Adobe Reader 7.0.9からの印刷に時間がかかったり、
  印刷できない文書があります。

- Vine Linux 4.1をお使いの場合、コマンドラインから日本語を含むPDFを印刷すると、
  Ghostscriptが不正終了するためPDF印刷が止まる場合があります。
  この問題は、Adobe Readerを使用することにより回避できます。

- Vine Linux 4.1をお使いの場合、Adobe Reader 8からPDFファイルを印刷すると、Adobe
  Reader 8が作成するPSファイルをGhostscript(7.07)が解析できず異常終了し、フィル
  タ処理が終了するため、キューが停止することがあります。
  この問題は、Adobe Reader 7を使用することで回避できます。

- Vine Linux 4.1、Vine Linux 4.2、Fedora 8、Fedora 9、およびRedHat Enterprise
  Linux v.5をお使いの場合、CUPSフィルタが常にポートレイトでPSコマンドを作成する
  ため、テキストファイルの印刷において、ランドスケープ指定時に向きがポートレイト
  となり、印字が欠けているような印刷結果となることがあります。
  また、CUPS標準フィルタのtexttopsで提供される機能は正しく動作しないことがありま
  す。
  この問題は、CUPS設定ファイルmime.convsのtext/plain行で指定されているCUPSフィル
  タ名を、CUPS標準フィルタのtexttopsに変更することで回避できます。
  その場合、日本語テキストは文字化けしますので、テキストエディタやpapsなどのテキ
  スト・ポストスクリプト変換プログラムで作成したPSコマンドを印刷する必要がありま
  す。

- OpenOffice.orgのWriterなどのアプリケーションの印刷画面で給紙部を指定した場合、
  指定は無効となり、ドライバ画面で設定した給紙部を使って印刷されます。
  給紙部を指定して印刷するには、ドライバ画面で指定するか、コマンドラインから印刷
  してください。

- Debian GNU/Linux 4.0をお使いの場合、プリンタ登録操作時にppdファイルエラーとな
  る場合があります。プリンタ登録コマンドのppd指定に "-m" の代わりに"-P (ppdのフ
  ルパス)"を使用してください。
  例： /usr/sbin/lpadmin -p LBP5900
        -P /usr/share/cups/model/CNCUPSLBP5900ZJ.ppd
        -v lpd://192.168.1.10/LBP5900 -E

- Ubuntu10.10/11.04/11.10/12.04/12.10/13.04、Fedora14/15/16/17/18/19/20におい
  て、プリンタを登録した場合に、原稿サイズのデフォルトがOSの言語環境に沿った原稿
  サイズにならない場合があります。
  この問題は、以下の方法でプリンタを登録することで回避できます。
  【回避策1】
    lpadminコマンドのPPDファイルを指定するオプションに、"‐m"でなく"‐P"を指定す
    る。
    "-P"でPPDを指定する場合、指定するPPDファイルへのパスは絶対パス、または相対パ
    スを指定してください。
    例)
    # /usr/sbin/lpadmin -p [登録プリンタ名] -P [PPDファイルパス] -v lpd:[デバイ
      スURI] -E
  【回避策2】
    1) "/etc/cups/cupsd.conf"に、"DefaultPaperSize Auto"を追加した後に、CUPSを再
       起動する。
    2) プリンタを登録する。

- Debian GNU/Linux 4.0をお使いの場合、Evinceからの印刷に時間がかかったり、印刷で
  きないPDF文書があります。この場合は、Adobe Readerなど他のアプリケーションから
  印刷してください。

- Debian GNU/Linux 4.0 r6をお使いの場合、ロケールにEUC-JPが設定されているときに
  テキストファイルをcngplpから印刷すると、印刷に失敗します。
  この問題は、テキストエディタやpapsなどのテキスト・ポストスクリプト変換プログラ
  ムで作成したPSコマンドを印刷することで回避できます。

- Debian GNU/Linux 5.0.2をお使いの場合、共通モジュールをインストールするために
  gs-espモジュールが必要となります。
  以下のコマンドを実行することでgs-esp モジュールをインストールできます。
    # apt-get install gs-esp

- Ubuntu 7.04およびDebian GNU/Linux 4.0をお使いの場合、ドライバ画面などが文字化
  けする場合があります。/etc/gtk/gtkrc.jaファイルを/etc/gtk/gtkrc.ja.utf8として
  コピーし、作成したgtkrc.ja.utf8ファイルの1行目と最終行を以下のように書き換えて
  ください。
  ［修正前］ gtk-default-ja
  ［修正後］ gtk-default-ja-utf8

- Ubuntu 7.04/7.10/8.04/8.10/9.04およびDebian 3.1/4.0/5.0では共通モジュールをイ
  ンストールするためにlibcupsys2ライブラリが必要になります。
  システムにインストールされていない場合、以下のコマンドを実行することでインス
  トールできます。
   # apt-get install libcupsys2

- Ubuntu 8.10/9.04/9.10/10.04/10.10/11.04/11.10/12.04/12.10/13.04/13.10、Fedora 
  19/20をお使いの場合、排紙方法を指定して印刷しても、デフォルトの排紙方法で印刷
  されます。
  この問題は、CUPSプリンタ設定（Web）から排紙方法の設定を変更することで回避でき
  ます。

- Ubuntu 8.10をお使いの場合、逆順印刷を指定して印刷しても、印刷結果に反映されま
  せん。
  この問題は、CUPSをアップデートすることで回避できます。

- Ubuntu 8.10/9.04/9.10/10.04/10.10/11.04/11.10/12.04/12.10/13.04/13.10をお使い
  の場合、PDFデータおよびPSデータを印刷するときに明るさとガンマ補正を指定して印
  刷しても、印刷結果に反映されない場合があります。

- USB接続でプリンタをスプーラに登録する場合、ディストリビューションによっては
  ［デバイスURI］に/dev/usb/lp*と指定しても"Printer not Connected"と表示され、正
  常に印刷できない場合があります。その場合、以下のコマンドを使って表示されるプリ
  ンタ固有の名称を［デバイスURI］として指定してください。
  例）iR C5185 の場合
  1) ［デバイスURI］を確認する
    # /usr/sbin/lpinfo -v
      direct usb://Canon/iR%20C5185%20(LIPS4)
      direct usb://Canon/iR%20C5185%20(LIPS%20LX)
  2) プリンタを登録する
    # lpadmin -p IRC5185_USB -m CNCUPSIRC5185ZJ.ppd
      -v usb://Canon/iR%20C5185%20(LIPS%20LX) -E

- Mandriva One 2008 SpringまたはMandriva 2008 PowerPackでCUPSのバージョンが1.3.6
  のシステムをお使いの場合、CUPSの標準機能を指定して印刷しても、印刷結果に反映さ
  れないことがあります。
  この問題は、CUPSをアップデートすることで回避できます。

- Ghostscriptのバージョンが8.6.xの場合、印刷できない文書があります。

- MF4270、L90/160/230をお使いの場合、環境や印刷データによってはデバイス側でタイ
  ムアウトエラーが発生し、「PRINTER DATA ERROR」エラーとなり印刷できない場合があ
  ります。
  この問題は、デバイス側のエラータイムアウト設定をOFFにすることで回避できます。

- フィニッシャー・Q3またはサドルフィニッシャー・Q4を装着して、用紙サイズでA4/レ
  ター/リーガルを指定している場合、［仕上げ］ページの［とじ方向］を［短辺とじ
  (上)］、［ステイプル位置］を［上辺(2ヵ所)］に指定、あるいは［とじ方向］を［短
  辺とじ(下)］、［ステイプル位置］を［下辺(2ヵ所)］に指定する組み合わせで印刷し
  たときに、正しく印刷されません。

- iR C2110F/C2110N、MF8400 シリーズ、LBP9500C/9600Cをお使いの場合、プリンタの本
  体パネルではIPv6設定が可能ですが、ネットワーク接続はIPv4のみサポートとなりま
  す。

- CentOS 5.3をお使いの場合、Evinceで複数部数を指定して印刷しても、指定した部数ど
  おりに印刷されません。
  この問題は、AdobeReaderなどのほかのPDFビューアから印刷を行うか、以下の方法で回
  避できます。
    1) Evinceで、部数を1部、出力先にPSコマンドを選択して、ファイルを出力します。
    2) ファイル出力したPSコマンドを、cngplpで部数を指定して印刷します。

- Ubuntu 9.04/9.10/10.04/10.10/11.04/11.10/12.04/12.10/13.04/13.10、Fedora 11/12
  /13/14/15/16/17/18/19/20をお使いの場合、バナー印刷を行うと、指定部数分バナー
  ページが印刷されます。

- Fedora 15/16/17/18/19/20、Ubuntu 11.04/11.10/12.04/12.10/13.04/13.10で、明るさ
  を0%から9%に指定して印刷した場合、明るさの設定が有効にならず、明るさを100%に指
  定した場合と同等の印刷結果となります。

- Fedora13/14/15/16/17/18/19 32bit/64bitをお使いの場合、［cngplp］ダイアログ
  ボックスやコマンドラインから、TIFF、JPEG画像ファイルを印刷した場合、印刷画像が
  崩れることがあります。
  この問題は、最初にGIMP等のアプリケーションからPostScriptファイル出力した後、
  ファイル出力したPSコマンドをcngplpから印刷することで回避できます。

- ［cngplp］ダイアログボックスやコマンドラインからTIFF、JPEG 画像を印刷した場
  合、画像が分割されて複数ページに渡って印刷されることがあります。
  この問題は、GIMP等のアプリからPostScriptファイル出力を行った後、ファイル出力し
  た当該PSファイルを［cngplp］ダイアログボックスやコマンドラインから印刷すること
  で回避できます。

- ［cngplp］ダイアログボックスやコマンドラインから、TIFF 画像ファイルを印刷した
  場合、画像によっては印字結果が黒で塗りつぶされる場合があります。
  【回避策1】
    GIMP等のアプリから印刷することで回避できます。
  【回避策2】
    PostScriptファイル出力を行った後、ファイル出力した当該PSファイルを［cngplp］
    ダイアログボックスから印刷することで回避できます。

- Fedora13/14/15/16/17/18/19/20をお使いの場合、［cngplp］ダイアログボックスやコ
  マンドラインから明るさ、ガンマ補正を指定しても、2ページ目以降の印刷結果に反映
  されないことがあります。これは、アプリケーションが生成するPostScriptデータを、
  Ghostscriptが正しく認識できていないため、これらの機能が有効とならないからで
  す。

- 出力方法に［セキュアプリント］を指定して［cngplp］ダイアログボックスで［設定保
  存/印刷］を行った後、出力方法を［印刷］に変更して［印刷］を行うと、［セキュア
  プリント］実行時に設定したドキュメント名がデバイスのジョブ履歴に表示されます。
  この問題は、出力方法を［セキュアプリント］から［印刷］に変更した際、［印刷］ボ
  タンで印刷するのではなく［設定保存/印刷］ボタンで印刷することで回避できます。

- エントリやテキストビューの値を設定後、ダイアログ右上の［X］ボタンをクリックし
  て終了すると、エントリやテキストビューに設定した値が［OK］ボタンをクリックした
  時と同様に、有効な値として扱われます。設定値を無効にしたい場合には、［キャンセ
  ル］ボタンをクリックしてください。

- 次の文字は、CUPSのバージョンにより扱いが異なるので、使用を推奨しません。
  "#"
  CUPS V1.4から、"#"はコメントとして扱われるため、コマンドラインで使用した場合、
  "#"以降の文字列が有効になりません。
  "\"
  "\\\123"と入力した場合、CUPSのバージョンによって次の内容で扱われます。
    CUPS V1.1.22の場合：\123
    CUPS V1.4.3の場合：\\123

- Ubuntu 9.04をお使いの場合、CUPSのバージョンを「1.3.9-17ubuntu3.2」にアップデー
  トすると、PSデータ不正のため印刷に失敗します。
  この問題は、CUPSのバージョンを「1.3.9-17ubuntu3.1」にダウングレードすることで
  回避できます。
  - 以下のコマンドを実行します。
    # apt-get install cups=1.3.9-17ubuntu3.1

- GTK (GIMP Toolkit) のバージョンにより、画面の文字が欠けて表示される場合があり
  ますが、機能や設定される値には問題ありません。該当する文言領域を再描画すると回
  復します。

- Fedora 12、Ubuntu 9.10をお使いの場合、CUPSのWebインタフェースからのデフォルト
  オプションを変更すると、各機能間の設定に競合が発生しているのにもかかわらず、デ
  フォルト値が保存されます。また、一度競合が発生した状態で保存されると、Webイン
  ターフェースで競合が発生しない正しい値に設定しても保存できません。
  この状態で［cngplp］ダイアログボックスを表示すると、不正な動作をする場合があり
  ます。
  この問題は、以下の方法で回避できます｡
  【回避策1】Fedora12（32bit/64bit）、Ubuntu9.10
    不正な動作をしたプリンタを再登録することで正常な状態に戻ります。
  【回避策2】Fedora12（32bit/64bit）
    以下のコマンドでCUPS をアップデートすることで回避できます。
      <Fedora12(32bit) の場合> # yum update cups.i686
      <Fedora12(64bit) の場合> # yum update cups.x86_64

- 64bit環境で本ドライバをお使いの場合、ドライババージョン2.00、2.10、2.20のいず
  れかから、ドライババージョン2.30以降へアップデートインストールすると、印刷時に
  エラーが起こることがあります。
  この問題は、本ドライバをアンインストール（rpm -e <ドライバ>）した後に、再度ド
  ライバをインストール（rpm -i <ドライバ>）することで復旧できます。
  また、アップデートインストールを行わずに古いバージョンのドライバをアンインス
  トール（rpm -e <ドライバ>）した後、新しいバージョンのドライバをインストール
  （rpm -i <ドライバ>）することで回避できます。

- ドキュメント名が32バイトを超過するドキュメントを指定して印刷した場合、ドライバ
  側でドキュメント名を33バイト目以降の文字列を削除します。そのため、デバイスに表
  示されるドキュメント名の長さは最大32バイトとなります。

- 本プリンタドライバを使用するためには、共通APIを含んだGhostscriptが必要です。
  ドライバをインストールする前に、Ghostscriptがインストールされているか確認して
  ください。
  GNOME Terminalなどのターミナルソフトで次のコマンドを用いて確認することができま
  す。
    % gs -h | grep opvp
  表示結果に opvp と oprp が表示されている場合は、共通APIを含んだGhostscriptが組
  込まれています。
  何も表示されなかったときは、下記URLを参照してGhostscriptを入手してください。
    http://opfc.sourceforge.jp/index.html.ja

- Ubuntu 11.10/12.04/12.10/13.04をお使いの場合、同じデータを連続で印刷すると、2
  回目以降のデータが正常に印刷されない場合があります。
  以下のコマンドでCUPSをアップデートすることで回避できます。
    # apt-get install cups
    # apt-get install libcups2

- Ubuntu 64bit環境には、印刷に必要な32bitライブラリがすべて入っていません。
  印刷を行う前に以下のコマンドを実行して、32bitライブラリパッケージをインストー
  ルしてください。
    # apt-get install ia32-libs
    # apt-get install libjpeg62:i386
  <Ubuntu 13.10以降の場合>
    # apt-get install libxml2:i386
    # apt-get install libjpeg62:i386
    # apt-get install libstdc++6:i386

- Ubuntu 12.04/12.10/13.04/13.10 32bitをお使いの場合、本ドライバを使用してColor
  iR/Color LBP機で印刷を行うと、印刷に失敗することがあります。これは、Ubuntu 
  12.04/12.10/13.04/13.10を標準でインストールすると、本ドライバで使用するJPEGラ
  イブラリがインストールされないためです。
  この問題は、パッケージを追加インストールすることで回避できます。
  以下のコマンドを実行します。
    # apt-get install libjpeg62

- Fedora 18/19/20、Ubuntu 12.04/12.10/13.04/13.10をUSB接続でお使いの場合、同じ
  データを連続で印刷すると、2回目以降のデータが正常に印刷されない場合がありま
  す。
  以下のコマンドでオプションを追加することで印刷可能となります。

  # lpadmin -p PRINTER_NAME -o usb-no-reattach-default=true

- Fedora 18/19/20をデフォルト設定でインストールしたとき、pangox-compatライブラリ
  がないため、ドライバをインストールできない場合があります。
  以下のコマンドでライブラリをインストールすることで回避できます。
    # yum install pangox-compat

- Ubuntu 12.10/13.04/13.10をデフォルト設定でインストールしたとき、glade2ライブラ
  リがないため、ドライバをインストールできない場合があります。
  以下のコマンドでライブラリをインストールすることで回避できます。
    # apt-get install libglade2-0

- Ubuntu 12.10をお使いの場合、［cngplp］ダイアログボックスやコマンドラインから
  PDF画像を印刷すると正しく印刷されないことがあります。

  【回避策1】
    AdobeReaderなどのほかのPDFビューアアプリケーションから印刷することで回避でき
    ます。 

  【回避策2】
    /usr/share/cups/mime/cupsfilters.convsを以下のように編集後、CUPSを再起動する
    ことで回避できます。

    （編集前）# application/pdf  application/vnd.cups-postscript 66 pdftops
              # application/postscript application/vnd.cups-postscript 66 pstops
    （編集後）application/pdf   application/vnd.cups-postscript 33 pdftops
              application/postscript  application/vnd.cups-postscript 33 pstops

- 認証情報の暗号化機能に対応しているデバイスに対して印刷を行う場合、各ディストリ
  ビューションのbeecryptライブラリが必要です。
  以下の例を参考にインストールを行ってください。
    <Fedora19/20(32bit) の場合> # yum install beecrypt beecrypt-devel
    <Fedora19/20(64bit) の場合> # yum install beecrypt.i686 beecrypt-devel.i686
    <Ubuntu13.04/13.10(32bit) の場合> # apt-get install libbeecrypt7 
                                        beecrypt-dev
    <Ubuntu13.04/13.10(64bit) の場合> # apt-get install libbeecrypt7:i386 
                                        beecrypt-dev:i386

- Ubuntu 13.10をお使いの場合、lpadminコマンドでプリンタキューを作成するとき、-m
  オプションを使用するとLocal Rawプリンタとして登録され、プリンタが正しく登録さ
  れません。

  【回避策1】
    以下のように、PPDファイルを指定するオプションに-mの代わりに-Pを指定して登録
    することでプリンタが正しく登録されます。
      # /usr/sbin/lpadmin -P [登録プリンタ名] -P [PPDファイルパス] 
                          -v lpd:[デバイスURI] -E
    ※-PでPPDファイルを指定する場合、[PPDファイルパス]には絶対パス、または相対
      パスを指定してください。

  【回避策2】
    以下のコマンドでCUPSをアップデートすることで回避できます。
      # apt-get install cups

- Ubuntu 13.04/13.10、Fedora 19/20をお使いの場合、［cngplp］ダイアログボックスや
  コマンドラインからバナーページ印刷設定でclassified, secret, confidential, 
  topsecret, unclassifiedを選択しても、印刷結果に反映されません。standard選択時
  と同じ結果になります。

- 認証情報の暗号化機能に対応しているデバイスをお使いの場合は、[部門別ID管理の認
  証]/[セキュアプリントの認証]に[モード2]を、対応していないデバイスをお使いの場
  合は、[部門別ID管理の認証]/[セキュアプリントの認証]に［モード1］を設定してくだ
  さい。
  [部門別ID管理の認証]/[セキュアプリントの認証]を正しく設定しないと、認証機能が
  使用できない、または印刷できないことがあります。

- PDFに含まれる画像を印刷する場合、pdftopsが利用するプログラムによっては、正しく
  印刷できない場合があります。
  以下のコマンドで、利用するプログラムを変更することで回避できることがあります。
  <ghostscriptのpdftopsをお使いの場合>
  # lpadmin -p [登録プリンタ名] -o pdftops-renderer-default=pdftops

  <popplerのpdftopsをお使いの場合>
  # lpadmin -p [登録プリンタ名] -o pdftops-renderer-default=gs

- Fedora 20をお使いの場合、[cngplp]ダイアログボックスやコマンドライン
 （cnjatool）で部門管理機能を設定して印刷しても、部門管理機能が有効にならないこ
  とがあります。
  以下のコマンドでCUPSをアップデートすることで回避できます。
  # yum install cups


===============================================================================
お客様相談窓口
===============================================================================
  本ソフトウェア、および付随する情報等は、キヤノンが独自に開発し、キヤノンマー
  ケティングジャパンが配布するものです。本ソフトウェア、および付随する情報等に
  対応するプリンタの製造元であるキヤノン、配布元であるキヤノンマーケティングジャ
  パンは、本ソフトウェア、および付随する情報等に関するお問い合わせは受け付けてお
  りません。なお、プリンタの修理、または消耗品の購入等、プリンタ本体に関する問い
  合わせは、キヤノンマーケティングジャパンにお願いいたします。
===============================================================================
Copyright CANON INC. 2004
