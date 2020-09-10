<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="Interrupt" />
        <signal name="Byte(7:0)" />
        <signal name="rx" />
        <signal name="clk" />
        <signal name="XLXN_9" />
        <signal name="XLXN_10" />
        <signal name="btn" />
        <signal name="tx" />
        <signal name="XLXN_16(71:0)" />
        <signal name="XLXN_21(7:0)" />
        <signal name="XLXN_22(10:0)" />
        <port polarity="Output" name="Byte(7:0)" />
        <port polarity="Input" name="rx" />
        <port polarity="Input" name="clk" />
        <port polarity="Output" name="tx" />
        <blockdef name="Uart_rx">
            <timestamp>2019-12-3T22:14:33</timestamp>
            <rect width="304" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="432" y1="-96" y2="-96" x1="368" />
            <rect width="64" x="368" y="-44" height="24" />
            <line x2="432" y1="-32" y2="-32" x1="368" />
        </blockdef>
        <blockdef name="bufh">
            <timestamp>2008-10-7T15:35:43</timestamp>
            <rect width="256" x="64" y="-64" height="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="Pulse">
            <timestamp>2019-11-25T6:17:0</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
        </blockdef>
        <blockdef name="CountTo9">
            <timestamp>2019-11-27T0:25:28</timestamp>
            <rect width="256" x="64" y="-64" height="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="Pixeles">
            <timestamp>2019-11-27T0:25:54</timestamp>
            <rect width="304" x="64" y="-192" height="192" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="368" y="-172" height="24" />
            <line x2="432" y1="-160" y2="-160" x1="368" />
        </blockdef>
        <blockdef name="Uart_tx">
            <timestamp>2019-12-3T22:15:9</timestamp>
            <rect width="304" x="64" y="-192" height="192" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="432" y1="-160" y2="-160" x1="368" />
            <line x2="432" y1="-96" y2="-96" x1="368" />
            <line x2="432" y1="-32" y2="-32" x1="368" />
        </blockdef>
        <blockdef name="Convolution">
            <timestamp>2019-12-3T21:34:37</timestamp>
            <rect width="64" x="320" y="20" height="24" />
            <line x2="384" y1="32" y2="32" x1="320" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="256" x="64" y="-64" height="128" />
        </blockdef>
        <blockdef name="Escalamiento">
            <timestamp>2019-12-3T21:29:23</timestamp>
            <rect width="336" x="64" y="-64" height="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="400" y="-44" height="24" />
            <line x2="464" y1="-32" y2="-32" x1="400" />
        </blockdef>
        <block symbolname="Uart_rx" name="XLXI_1">
            <blockpin signalname="XLXN_9" name="i_Clock" />
            <blockpin signalname="rx" name="i_Rx_Serial" />
            <blockpin signalname="Interrupt" name="o_Rx_DV" />
            <blockpin signalname="Byte(7:0)" name="o_Rx_Byte(7:0)" />
        </block>
        <block symbolname="bufh" name="XLXI_8">
            <blockpin signalname="clk" name="I" />
            <blockpin signalname="XLXN_9" name="O" />
        </block>
        <block symbolname="Pulse" name="XLXI_9">
            <blockpin signalname="XLXN_9" name="clk" />
            <blockpin signalname="btn" name="Boton" />
            <blockpin signalname="XLXN_10" name="Pulse" />
        </block>
        <block symbolname="CountTo9" name="XLXI_10">
            <blockpin signalname="Interrupt" name="Pulse" />
            <blockpin signalname="btn" name="NineBitsDone" />
        </block>
        <block symbolname="Pixeles" name="XLXI_11">
            <blockpin signalname="btn" name="Send" />
            <blockpin signalname="Interrupt" name="Capture" />
            <blockpin signalname="Byte(7:0)" name="i_Pixel(7:0)" />
            <blockpin signalname="XLXN_16(71:0)" name="o_Pixeles(71:0)" />
        </block>
        <block symbolname="Uart_tx" name="XLXI_14">
            <blockpin signalname="XLXN_9" name="i_Clock" />
            <blockpin signalname="XLXN_10" name="i_Tx_DV" />
            <blockpin signalname="XLXN_21(7:0)" name="i_Tx_Byte(7:0)" />
            <blockpin name="o_Tx_Active" />
            <blockpin signalname="tx" name="o_Tx_Serial" />
            <blockpin name="o_Tx_Done" />
        </block>
        <block symbolname="Convolution" name="XLXI_16">
            <blockpin signalname="XLXN_16(71:0)" name="pixeles(71:0)" />
            <blockpin signalname="XLXN_22(10:0)" name="escalar(10:0)" />
        </block>
        <block symbolname="Escalamiento" name="XLXI_17">
            <blockpin signalname="XLXN_22(10:0)" name="escalar(10:0)" />
            <blockpin signalname="XLXN_21(7:0)" name="truncamiento(7:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="816" y="1280" name="XLXI_1" orien="R0">
        </instance>
        <branch name="Byte(7:0)">
            <wire x2="1344" y1="1248" y2="1248" x1="1248" />
            <wire x2="1424" y1="1248" y2="1248" x1="1344" />
            <wire x2="1344" y1="1248" y2="1312" x1="1344" />
            <wire x2="1648" y1="1312" y2="1312" x1="1344" />
            <wire x2="1696" y1="1248" y2="1248" x1="1648" />
            <wire x2="1648" y1="1248" y2="1312" x1="1648" />
        </branch>
        <branch name="rx">
            <wire x2="816" y1="1248" y2="1248" x1="784" />
        </branch>
        <iomarker fontsize="28" x="784" y="1248" name="rx" orien="R180" />
        <instance x="368" y="1216" name="XLXI_8" orien="R0">
        </instance>
        <branch name="clk">
            <wire x2="368" y1="1184" y2="1184" x1="288" />
        </branch>
        <branch name="XLXN_9">
            <wire x2="992" y1="464" y2="464" x1="240" />
            <wire x2="992" y1="464" y2="624" x1="992" />
            <wire x2="1008" y1="624" y2="624" x1="992" />
            <wire x2="240" y1="464" y2="624" x1="240" />
            <wire x2="240" y1="624" y2="1072" x1="240" />
            <wire x2="768" y1="1072" y2="1072" x1="240" />
            <wire x2="768" y1="1072" y2="1184" x1="768" />
            <wire x2="816" y1="1184" y2="1184" x1="768" />
            <wire x2="448" y1="624" y2="624" x1="240" />
            <wire x2="768" y1="1184" y2="1184" x1="752" />
        </branch>
        <branch name="tx">
            <wire x2="1552" y1="688" y2="688" x1="1440" />
        </branch>
        <branch name="XLXN_10">
            <wire x2="912" y1="624" y2="624" x1="832" />
            <wire x2="912" y1="624" y2="688" x1="912" />
            <wire x2="1008" y1="688" y2="688" x1="912" />
        </branch>
        <branch name="btn">
            <wire x2="448" y1="688" y2="688" x1="400" />
            <wire x2="400" y1="688" y2="896" x1="400" />
            <wire x2="1680" y1="896" y2="896" x1="400" />
            <wire x2="1680" y1="896" y2="1008" x1="1680" />
            <wire x2="1680" y1="1008" y2="1120" x1="1680" />
            <wire x2="1696" y1="1120" y2="1120" x1="1680" />
            <wire x2="1680" y1="1008" y2="1008" x1="1664" />
        </branch>
        <instance x="448" y="720" name="XLXI_9" orien="R0">
        </instance>
        <iomarker fontsize="28" x="1552" y="688" name="tx" orien="R0" />
        <iomarker fontsize="28" x="1424" y="1248" name="Byte(7:0)" orien="R0" />
        <branch name="Interrupt">
            <wire x2="1264" y1="1184" y2="1184" x1="1248" />
            <wire x2="1696" y1="1184" y2="1184" x1="1264" />
            <wire x2="1280" y1="1008" y2="1008" x1="1264" />
            <wire x2="1264" y1="1008" y2="1184" x1="1264" />
        </branch>
        <instance x="1280" y="1040" name="XLXI_10" orien="R0">
        </instance>
        <instance x="1696" y="1280" name="XLXI_11" orien="R0">
        </instance>
        <branch name="XLXN_16(71:0)">
            <wire x2="2192" y1="1120" y2="1120" x1="2128" />
        </branch>
        <iomarker fontsize="28" x="288" y="1184" name="clk" orien="R180" />
        <instance x="1008" y="784" name="XLXI_14" orien="R0">
        </instance>
        <instance x="2192" y="1152" name="XLXI_16" orien="R0">
        </instance>
        <instance x="2608" y="1280" name="XLXI_17" orien="R0">
        </instance>
        <branch name="XLXN_21(7:0)">
            <wire x2="1008" y1="752" y2="752" x1="944" />
            <wire x2="944" y1="752" y2="864" x1="944" />
            <wire x2="3136" y1="864" y2="864" x1="944" />
            <wire x2="3136" y1="864" y2="1248" x1="3136" />
            <wire x2="3136" y1="1248" y2="1248" x1="3072" />
        </branch>
        <branch name="XLXN_22(10:0)">
            <wire x2="2592" y1="1184" y2="1184" x1="2576" />
            <wire x2="2592" y1="1184" y2="1248" x1="2592" />
            <wire x2="2608" y1="1248" y2="1248" x1="2592" />
        </branch>
    </sheet>
</drawing>