/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

/* Twiddles generated with
twa = floor(32767*exp(-sqrt(-1)*2*pi*(0:1023)/3072));
twb = floor(32767*exp(-sqrt(-1)*2*pi*(0:2:1023)/3072));
twa2 = zeros(1,2048);
twb2 = zeros(1,2048);
twa2(1:2:end) = real(twa);
twa2(2:2:end) = imag(twa);
twb2(1:2:end) = real(twb);
twb2(2:2:end) = imag(twb);
fd=fopen("twiddle_tmp.txt","w");
fprintf(fd,"static int16_t twa3072[2048] = {");
fprintf(fd,"%d,",twa2);
fprintf(fd,"};\n");
fprintf(fd,"static int16_t twb3072[2048] = {");
fprintf(fd,"%d,",twb2);
fprintf(fd,"};\n");
fclose(fd);
 */

static int16_t twa3072[2048] = {32767,0,32766,-68,32766,-135,32766,-202,32765,-269,32765,-336,32764,-403,32763,-470,32762,-537,32761,-604,32760,-671,32758,-738,32757,-805,32755,-872,32753,-939,32751,-1006,32749,-1073,32747,-1140,32744,-1207,32742,-1274,32739,-1340,32736,-1407,32733,-1474,32730,-1541,32727,-1608,32724,-1675,32720,-1742,32717,-1809,32713,-1876,32709,-1943,32705,-2010,32701,-2077,32696,-2144,32692,-2210,32687,-2277,32683,-2344,32678,-2411,32673,-2478,32668,-2545,32662,-2611,32657,-2678,32651,-2745,32646,-2812,32640,-2879,32634,-2945,32628,-3012,32622,-3079,32615,-3146,32609,-3212,32602,-3279,32595,-3346,32588,-3412,32581,-3479,32574,-3546,32567,-3612,32559,-3679,32552,-3745,32544,-3812,32536,-3878,32528,-3945,32520,-4012,32512,-4078,32503,-4145,32495,-4211,32486,-4277,32477,-4344,32468,-4410,32459,-4477,32450,-4543,32441,-4609,32431,-4676,32422,-4742,32412,-4808,32402,-4875,32392,-4941,32382,-5007,32371,-5073,32361,-5140,32350,-5206,32340,-5272,32329,-5338,32318,-5404,32307,-5470,32295,-5536,32284,-5602,32273,-5668,32261,-5734,32249,-5800,32237,-5866,32225,-5932,32213,-5998,32201,-6064,32188,-6130,32176,-6196,32163,-6262,32150,-6327,32137,-6393,32124,-6459,32110,-6524,32097,-6590,32084,-6656,32070,-6721,32056,-6787,32042,-6852,32028,-6918,32014,-6983,31999,-7049,31985,-7114,31970,-7180,31956,-7245,31941,-7311,31926,-7376,31911,-7441,31895,-7506,31880,-7572,31864,-7637,31849,-7702,31833,-7767,31817,-7832,31801,-7897,31785,-7962,31768,-8027,31752,-8092,31735,-8157,31718,-8222,31701,-8287,31684,-8352,31667,-8416,31650,-8481,31633,-8546,31615,-8611,31597,-8675,31580,-8740,31562,-8804,31544,-8869,31525,-8933,31507,-8998,31489,-9062,31470,-9127,31451,-9191,31432,-9255,31413,-9320,31394,-9384,31375,-9448,31356,-9512,31336,-9576,31316,-9640,31297,-9704,31277,-9768,31257,-9832,31236,-9896,31216,-9960,31196,-10024,31175,-10088,31154,-10152,31134,-10215,31113,-10279,31092,-10343,31070,-10406,31049,-10470,31028,-10533,31006,-10597,30984,-10660,30962,-10723,30940,-10787,30918,-10850,30896,-10913,30874,-10976,30851,-11039,30828,-11102,30806,-11165,30783,-11228,30760,-11291,30737,-11354,30713,-11417,30690,-11480,30666,-11543,30643,-11605,30619,-11668,30595,-11731,30571,-11793,30547,-11856,30522,-11918,30498,-11981,30473,-12043,30449,-12105,30424,-12167,30399,-12230,30374,-12292,30349,-12354,30323,-12416,30298,-12478,30272,-12540,30247,-12602,30221,-12664,30195,-12725,30169,-12787,30142,-12849,30116,-12910,30090,-12972,30063,-13034,30036,-13095,30009,-13156,29983,-13218,29955,-13279,29928,-13340,29901,-13401,29873,-13463,29846,-13524,29818,-13585,29790,-13646,29762,-13707,29734,-13767,29706,-13828,29678,-13889,29649,-13950,29621,-14010,29592,-14071,29563,-14131,29534,-14192,29505,-14252,29476,-14312,29446,-14373,29417,-14433,29387,-14493,29358,-14553,29328,-14613,29298,-14673,29268,-14733,29238,-14793,29207,-14853,29177,-14912,29146,-14972,29116,-15031,29085,-15091,29054,-15150,29023,-15210,28992,-15269,28960,-15328,28929,-15388,28897,-15447,28866,-15506,28834,-15565,28802,-15624,28770,-15683,28738,-15741,28706,-15800,28673,-15859,28641,-15918,28608,-15976,28575,-16035,28543,-16093,28510,-16151,28477,-16210,28443,-16268,28410,-16326,28377,-16384,28343,-16442,28309,-16500,28275,-16558,28242,-16616,28208,-16673,28173,-16731,28139,-16789,28105,-16846,28070,-16904,28036,-16961,28001,-17018,27966,-17075,27931,-17133,27896,-17190,27861,-17247,27825,-17304,27790,-17361,27754,-17417,27719,-17474,27683,-17531,27647,-17587,27611,-17644,27575,-17700,27538,-17757,27502,-17813,27466,-17869,27429,-17925,27392,-17981,27355,-18037,27319,-18093,27281,-18149,27244,-18205,27207,-18261,27170,-18316,27132,-18372,27094,-18427,27057,-18483,27019,-18538,26981,-18593,26943,-18648,26905,-18703,26866,-18758,26828,-18813,26789,-18868,26751,-18923,26712,-18977,26673,-19032,26634,-19087,26595,-19141,26556,-19195,26516,-19250,26477,-19304,26437,-19358,26398,-19412,26358,-19466,26318,-19520,26278,-19574,26238,-19627,26198,-19681,26158,-19734,26117,-19788,26077,-19841,26036,-19895,25995,-19948,25954,-20001,25913,-20054,25872,-20107,25831,-20160,25790,-20213,25749,-20265,25707,-20318,25665,-20370,25624,-20423,25582,-20475,25540,-20528,25498,-20580,25456,-20632,25414,-20684,25371,-20736,25329,-20788,25286,-20839,25243,-20891,25201,-20943,25158,-20994,25115,-21046,25072,-21097,25029,-21148,24985,-21199,24942,-21250,24898,-21301,24855,-21352,24811,-21403,24767,-21454,24723,-21504,24679,-21555,24635,-21605,24591,-21656,24546,-21706,24502,-21756,24457,-21806,24413,-21856,24368,-21906,24323,-21956,24278,-22005,24233,-22055,24188,-22105,24143,-22154,24097,-22203,24052,-22253,24006,-22302,23961,-22351,23915,-22400,23869,-22449,23823,-22497,23777,-22546,23731,-22595,23685,-22643,23638,-22692,23592,-22740,23545,-22788,23499,-22836,23452,-22884,23405,-22932,23358,-22980,23311,-23028,23264,-23075,23217,-23123,23169,-23170,23122,-23218,23074,-23265,23027,-23312,22979,-23359,22931,-23406,22883,-23453,22835,-23500,22787,-23546,22739,-23593,22691,-23639,22642,-23686,22594,-23732,22545,-23778,22496,-23824,22448,-23870,22399,-23916,22350,-23962,22301,-24007,22252,-24053,22202,-24098,22153,-24144,22104,-24189,22054,-24234,22004,-24279,21955,-24324,21905,-24369,21855,-24414,21805,-24458,21755,-24503,21705,-24547,21655,-24592,21604,-24636,21554,-24680,21503,-24724,21453,-24768,21402,-24812,21351,-24856,21300,-24899,21249,-24943,21198,-24986,21147,-25030,21096,-25073,21045,-25116,20993,-25159,20942,-25202,20890,-25244,20838,-25287,20787,-25330,20735,-25372,20683,-25415,20631,-25457,20579,-25499,20527,-25541,20474,-25583,20422,-25625,20369,-25666,20317,-25708,20264,-25750,20212,-25791,20159,-25832,20106,-25873,20053,-25914,20000,-25955,19947,-25996,19894,-26037,19840,-26078,19787,-26118,19733,-26159,19680,-26199,19626,-26239,19573,-26279,19519,-26319,19465,-26359,19411,-26399,19357,-26438,19303,-26478,19249,-26517,19194,-26557,19140,-26596,19086,-26635,19031,-26674,18976,-26713,18922,-26752,18867,-26790,18812,-26829,18757,-26867,18702,-26906,18647,-26944,18592,-26982,18537,-27020,18482,-27058,18426,-27095,18371,-27133,18315,-27171,18260,-27208,18204,-27245,18148,-27282,18092,-27320,18036,-27356,17980,-27393,17924,-27430,17868,-27467,17812,-27503,17756,-27539,17699,-27576,17643,-27612,17586,-27648,17530,-27684,17473,-27720,17416,-27755,17360,-27791,17303,-27826,17246,-27862,17189,-27897,17132,-27932,17074,-27967,17017,-28002,16960,-28037,16903,-28071,16845,-28106,16788,-28140,16730,-28174,16672,-28209,16615,-28243,16557,-28276,16499,-28310,16441,-28344,16383,-28378,16325,-28411,16267,-28444,16209,-28478,16150,-28511,16092,-28544,16034,-28576,15975,-28609,15917,-28642,15858,-28674,15799,-28707,15740,-28739,15682,-28771,15623,-28803,15564,-28835,15505,-28867,15446,-28898,15387,-28930,15327,-28961,15268,-28993,15209,-29024,15149,-29055,15090,-29086,15030,-29117,14971,-29147,14911,-29178,14852,-29208,14792,-29239,14732,-29269,14672,-29299,14612,-29329,14552,-29359,14492,-29388,14432,-29418,14372,-29447,14311,-29477,14251,-29506,14191,-29535,14130,-29564,14070,-29593,14009,-29622,13949,-29650,13888,-29679,13827,-29707,13766,-29735,13706,-29763,13645,-29791,13584,-29819,13523,-29847,13462,-29874,13400,-29902,13339,-29929,13278,-29956,13217,-29984,13155,-30010,13094,-30037,13033,-30064,12971,-30091,12909,-30117,12848,-30143,12786,-30170,12724,-30196,12663,-30222,12601,-30248,12539,-30273,12477,-30299,12415,-30324,12353,-30350,12291,-30375,12229,-30400,12166,-30425,12104,-30450,12042,-30474,11980,-30499,11917,-30523,11855,-30548,11792,-30572,11730,-30596,11667,-30620,11604,-30644,11542,-30667,11479,-30691,11416,-30714,11353,-30738,11290,-30761,11227,-30784,11164,-30807,11101,-30829,11038,-30852,10975,-30875,10912,-30897,10849,-30919,10786,-30941,10722,-30963,10659,-30985,10596,-31007,10532,-31029,10469,-31050,10405,-31071,10342,-31093,10278,-31114,10214,-31135,10151,-31155,10087,-31176,10023,-31197,9959,-31217,9895,-31237,9831,-31258,9767,-31278,9703,-31298,9639,-31317,9575,-31337,9511,-31357,9447,-31376,9383,-31395,9319,-31414,9254,-31433,9190,-31452,9126,-31471,9061,-31490,8997,-31508,8932,-31526,8868,-31545,8803,-31563,8739,-31581,8674,-31598,8610,-31616,8545,-31634,8480,-31651,8415,-31668,8351,-31685,8286,-31702,8221,-31719,8156,-31736,8091,-31753,8026,-31769,7961,-31786,7896,-31802,7831,-31818,7766,-31834,7701,-31850,7636,-31865,7571,-31881,7505,-31896,7440,-31912,7375,-31927,7310,-31942,7244,-31957,7179,-31971,7113,-31986,7048,-32000,6982,-32015,6917,-32029,6851,-32043,6786,-32057,6720,-32071,6655,-32085,6589,-32098,6523,-32111,6458,-32125,6392,-32138,6326,-32151,6261,-32164,6195,-32177,6129,-32189,6063,-32202,5997,-32214,5931,-32226,5865,-32238,5799,-32250,5733,-32262,5667,-32274,5601,-32285,5535,-32296,5469,-32308,5403,-32319,5337,-32330,5271,-32341,5205,-32351,5139,-32362,5072,-32372,5006,-32383,4940,-32393,4874,-32403,4807,-32413,4741,-32423,4675,-32432,4608,-32442,4542,-32451,4476,-32460,4409,-32469,4343,-32478,4276,-32487,4210,-32496,4144,-32504,4077,-32513,4011,-32521,3944,-32529,3877,-32537,3811,-32545,3744,-32553,3678,-32560,3611,-32568,3545,-32575,3478,-32582,3411,-32589,3345,-32596,3278,-32603,3211,-32610,3145,-32616,3078,-32623,3011,-32629,2944,-32635,2878,-32641,2811,-32647,2744,-32652,2677,-32658,2610,-32663,2544,-32669,2477,-32674,2410,-32679,2343,-32684,2276,-32688,2209,-32693,2143,-32697,2076,-32702,2009,-32706,1942,-32710,1875,-32714,1808,-32718,1741,-32721,1674,-32725,1607,-32728,1540,-32731,1473,-32734,1406,-32737,1339,-32740,1273,-32743,1206,-32745,1139,-32748,1072,-32750,1005,-32752,938,-32754,871,-32756,804,-32758,737,-32759,670,-32761,603,-32762,536,-32763,469,-32764,402,-32765,335,-32766,268,-32766,201,-32767,134,-32767,67,-32767,0,-32767,-68,-32767,-135,-32767,-202,-32767,-269,-32766,-336,-32766,-403,-32765,-470,-32764,-537,-32763,-604,-32762,-671,-32761,-738,-32759,-805,-32758,-872,-32756,-939,-32754,-1006,-32752,-1073,-32750,-1140,-32748,-1207,-32745,-1274,-32743,-1340,-32740,-1407,-32737,-1474,-32734,-1541,-32731,-1608,-32728,-1675,-32725,-1742,-32721,-1809,-32718,-1876,-32714,-1943,-32710,-2010,-32706,-2077,-32702,-2144,-32697,-2210,-32693,-2277,-32688,-2344,-32684,-2411,-32679,-2478,-32674,-2545,-32669,-2611,-32663,-2678,-32658,-2745,-32652,-2812,-32647,-2879,-32641,-2945,-32635,-3012,-32629,-3079,-32623,-3146,-32616,-3212,-32610,-3279,-32603,-3346,-32596,-3412,-32589,-3479,-32582,-3546,-32575,-3612,-32568,-3679,-32560,-3745,-32553,-3812,-32545,-3878,-32537,-3945,-32529,-4012,-32521,-4078,-32513,-4145,-32504,-4211,-32496,-4277,-32487,-4344,-32478,-4410,-32469,-4477,-32460,-4543,-32451,-4609,-32442,-4676,-32432,-4742,-32423,-4808,-32413,-4875,-32403,-4941,-32393,-5007,-32383,-5073,-32372,-5140,-32362,-5206,-32351,-5272,-32341,-5338,-32330,-5404,-32319,-5470,-32308,-5536,-32296,-5602,-32285,-5668,-32274,-5734,-32262,-5800,-32250,-5866,-32238,-5932,-32226,-5998,-32214,-6064,-32202,-6130,-32189,-6196,-32177,-6262,-32164,-6327,-32151,-6393,-32138,-6459,-32125,-6524,-32111,-6590,-32098,-6656,-32085,-6721,-32071,-6787,-32057,-6852,-32043,-6918,-32029,-6983,-32015,-7049,-32000,-7114,-31986,-7180,-31971,-7245,-31957,-7311,-31942,-7376,-31927,-7441,-31912,-7506,-31896,-7572,-31881,-7637,-31865,-7702,-31850,-7767,-31834,-7832,-31818,-7897,-31802,-7962,-31786,-8027,-31769,-8092,-31753,-8157,-31736,-8222,-31719,-8287,-31702,-8352,-31685,-8416,-31668,-8481,-31651,-8546,-31634,-8611,-31616,-8675,-31598,-8740,-31581,-8804,-31563,-8869,-31545,-8933,-31526,-8998,-31508,-9062,-31490,-9127,-31471,-9191,-31452,-9255,-31433,-9320,-31414,-9384,-31395,-9448,-31376,-9512,-31357,-9576,-31337,-9640,-31317,-9704,-31298,-9768,-31278,-9832,-31258,-9896,-31237,-9960,-31217,-10024,-31197,-10088,-31176,-10152,-31155,-10215,-31135,-10279,-31114,-10343,-31093,-10406,-31071,-10470,-31050,-10533,-31029,-10597,-31007,-10660,-30985,-10723,-30963,-10787,-30941,-10850,-30919,-10913,-30897,-10976,-30875,-11039,-30852,-11102,-30829,-11165,-30807,-11228,-30784,-11291,-30761,-11354,-30738,-11417,-30714,-11480,-30691,-11543,-30667,-11605,-30644,-11668,-30620,-11731,-30596,-11793,-30572,-11856,-30548,-11918,-30523,-11981,-30499,-12043,-30474,-12105,-30450,-12167,-30425,-12230,-30400,-12292,-30375,-12354,-30350,-12416,-30324,-12478,-30299,-12540,-30273,-12602,-30248,-12664,-30222,-12725,-30196,-12787,-30170,-12849,-30143,-12910,-30117,-12972,-30091,-13034,-30064,-13095,-30037,-13156,-30010,-13218,-29984,-13279,-29956,-13340,-29929,-13401,-29902,-13463,-29874,-13524,-29847,-13585,-29819,-13646,-29791,-13707,-29763,-13767,-29735,-13828,-29707,-13889,-29679,-13950,-29650,-14010,-29622,-14071,-29593,-14131,-29564,-14192,-29535,-14252,-29506,-14312,-29477,-14373,-29447,-14433,-29418,-14493,-29388,-14553,-29359,-14613,-29329,-14673,-29299,-14733,-29269,-14793,-29239,-14853,-29208,-14912,-29178,-14972,-29147,-15031,-29117,-15091,-29086,-15150,-29055,-15210,-29024,-15269,-28993,-15328,-28961,-15388,-28930,-15447,-28898,-15506,-28867,-15565,-28835,-15624,-28803,-15683,-28771,-15741,-28739,-15800,-28707,-15859,-28674,-15918,-28642,-15976,-28609,-16035,-28576,-16093,-28544,-16151,-28511,-16210,-28478,-16268,-28444,-16326,-28411,};

static int16_t twb3072[2048] = {32767,0,32766,-135,32765,-269,32764,-403,32762,-537,32760,-671,32757,-805,32753,-939,32749,-1073,32744,-1207,32739,-1340,32733,-1474,32727,-1608,32720,-1742,32713,-1876,32705,-2010,32696,-2144,32687,-2277,32678,-2411,32668,-2545,32657,-2678,32646,-2812,32634,-2945,32622,-3079,32609,-3212,32595,-3346,32581,-3479,32567,-3612,32552,-3745,32536,-3878,32520,-4012,32503,-4145,32486,-4277,32468,-4410,32450,-4543,32431,-4676,32412,-4808,32392,-4941,32371,-5073,32350,-5206,32329,-5338,32307,-5470,32284,-5602,32261,-5734,32237,-5866,32213,-5998,32188,-6130,32163,-6262,32137,-6393,32110,-6524,32084,-6656,32056,-6787,32028,-6918,31999,-7049,31970,-7180,31941,-7311,31911,-7441,31880,-7572,31849,-7702,31817,-7832,31785,-7962,31752,-8092,31718,-8222,31684,-8352,31650,-8481,31615,-8611,31580,-8740,31544,-8869,31507,-8998,31470,-9127,31432,-9255,31394,-9384,31356,-9512,31316,-9640,31277,-9768,31236,-9896,31196,-10024,31154,-10152,31113,-10279,31070,-10406,31028,-10533,30984,-10660,30940,-10787,30896,-10913,30851,-11039,30806,-11165,30760,-11291,30713,-11417,30666,-11543,30619,-11668,30571,-11793,30522,-11918,30473,-12043,30424,-12167,30374,-12292,30323,-12416,30272,-12540,30221,-12664,30169,-12787,30116,-12910,30063,-13034,30009,-13156,29955,-13279,29901,-13401,29846,-13524,29790,-13646,29734,-13767,29678,-13889,29621,-14010,29563,-14131,29505,-14252,29446,-14373,29387,-14493,29328,-14613,29268,-14733,29207,-14853,29146,-14972,29085,-15091,29023,-15210,28960,-15328,28897,-15447,28834,-15565,28770,-15683,28706,-15800,28641,-15918,28575,-16035,28510,-16151,28443,-16268,28377,-16384,28309,-16500,28242,-16616,28173,-16731,28105,-16846,28036,-16961,27966,-17075,27896,-17190,27825,-17304,27754,-17417,27683,-17531,27611,-17644,27538,-17757,27466,-17869,27392,-17981,27319,-18093,27244,-18205,27170,-18316,27094,-18427,27019,-18538,26943,-18648,26866,-18758,26789,-18868,26712,-18977,26634,-19087,26556,-19195,26477,-19304,26398,-19412,26318,-19520,26238,-19627,26158,-19734,26077,-19841,25995,-19948,25913,-20054,25831,-20160,25749,-20265,25665,-20370,25582,-20475,25498,-20580,25414,-20684,25329,-20788,25243,-20891,25158,-20994,25072,-21097,24985,-21199,24898,-21301,24811,-21403,24723,-21504,24635,-21605,24546,-21706,24457,-21806,24368,-21906,24278,-22005,24188,-22105,24097,-22203,24006,-22302,23915,-22400,23823,-22497,23731,-22595,23638,-22692,23545,-22788,23452,-22884,23358,-22980,23264,-23075,23169,-23170,23074,-23265,22979,-23359,22883,-23453,22787,-23546,22691,-23639,22594,-23732,22496,-23824,22399,-23916,22301,-24007,22202,-24098,22104,-24189,22004,-24279,21905,-24369,21805,-24458,21705,-24547,21604,-24636,21503,-24724,21402,-24812,21300,-24899,21198,-24986,21096,-25073,20993,-25159,20890,-25244,20787,-25330,20683,-25415,20579,-25499,20474,-25583,20369,-25666,20264,-25750,20159,-25832,20053,-25914,19947,-25996,19840,-26078,19733,-26159,19626,-26239,19519,-26319,19411,-26399,19303,-26478,19194,-26557,19086,-26635,18976,-26713,18867,-26790,18757,-26867,18647,-26944,18537,-27020,18426,-27095,18315,-27171,18204,-27245,18092,-27320,17980,-27393,17868,-27467,17756,-27539,17643,-27612,17530,-27684,17416,-27755,17303,-27826,17189,-27897,17074,-27967,16960,-28037,16845,-28106,16730,-28174,16615,-28243,16499,-28310,16383,-28378,16267,-28444,16150,-28511,16034,-28576,15917,-28642,15799,-28707,15682,-28771,15564,-28835,15446,-28898,15327,-28961,15209,-29024,15090,-29086,14971,-29147,14852,-29208,14732,-29269,14612,-29329,14492,-29388,14372,-29447,14251,-29506,14130,-29564,14009,-29622,13888,-29679,13766,-29735,13645,-29791,13523,-29847,13400,-29902,13278,-29956,13155,-30010,13033,-30064,12909,-30117,12786,-30170,12663,-30222,12539,-30273,12415,-30324,12291,-30375,12166,-30425,12042,-30474,11917,-30523,11792,-30572,11667,-30620,11542,-30667,11416,-30714,11290,-30761,11164,-30807,11038,-30852,10912,-30897,10786,-30941,10659,-30985,10532,-31029,10405,-31071,10278,-31114,10151,-31155,10023,-31197,9895,-31237,9767,-31278,9639,-31317,9511,-31357,9383,-31395,9254,-31433,9126,-31471,8997,-31508,8868,-31545,8739,-31581,8610,-31616,8480,-31651,8351,-31685,8221,-31719,8091,-31753,7961,-31786,7831,-31818,7701,-31850,7571,-31881,7440,-31912,7310,-31942,7179,-31971,7048,-32000,6917,-32029,6786,-32057,6655,-32085,6523,-32111,6392,-32138,6261,-32164,6129,-32189,5997,-32214,5865,-32238,5733,-32262,5601,-32285,5469,-32308,5337,-32330,5205,-32351,5072,-32372,4940,-32393,4807,-32413,4675,-32432,4542,-32451,4409,-32469,4276,-32487,4144,-32504,4011,-32521,3877,-32537,3744,-32553,3611,-32568,3478,-32582,3345,-32596,3211,-32610,3078,-32623,2944,-32635,2811,-32647,2677,-32658,2544,-32669,2410,-32679,2276,-32688,2143,-32697,2009,-32706,1875,-32714,1741,-32721,1607,-32728,1473,-32734,1339,-32740,1206,-32745,1072,-32750,938,-32754,804,-32758,670,-32761,536,-32763,402,-32765,268,-32766,134,-32767,0,-32767,-135,-32767,-269,-32766,-403,-32765,-537,-32763,-671,-32761,-805,-32758,-939,-32754,-1073,-32750,-1207,-32745,-1340,-32740,-1474,-32734,-1608,-32728,-1742,-32721,-1876,-32714,-2010,-32706,-2144,-32697,-2277,-32688,-2411,-32679,-2545,-32669,-2678,-32658,-2812,-32647,-2945,-32635,-3079,-32623,-3212,-32610,-3346,-32596,-3479,-32582,-3612,-32568,-3745,-32553,-3878,-32537,-4012,-32521,-4145,-32504,-4277,-32487,-4410,-32469,-4543,-32451,-4676,-32432,-4808,-32413,-4941,-32393,-5073,-32372,-5206,-32351,-5338,-32330,-5470,-32308,-5602,-32285,-5734,-32262,-5866,-32238,-5998,-32214,-6130,-32189,-6262,-32164,-6393,-32138,-6524,-32111,-6656,-32085,-6787,-32057,-6918,-32029,-7049,-32000,-7180,-31971,-7311,-31942,-7441,-31912,-7572,-31881,-7702,-31850,-7832,-31818,-7962,-31786,-8092,-31753,-8222,-31719,-8352,-31685,-8481,-31651,-8611,-31616,-8740,-31581,-8869,-31545,-8998,-31508,-9127,-31471,-9255,-31433,-9384,-31395,-9512,-31357,-9640,-31317,-9768,-31278,-9896,-31237,-10024,-31197,-10152,-31155,-10279,-31114,-10406,-31071,-10533,-31029,-10660,-30985,-10787,-30941,-10913,-30897,-11039,-30852,-11165,-30807,-11291,-30761,-11417,-30714,-11543,-30667,-11668,-30620,-11793,-30572,-11918,-30523,-12043,-30474,-12167,-30425,-12292,-30375,-12416,-30324,-12540,-30273,-12664,-30222,-12787,-30170,-12910,-30117,-13034,-30064,-13156,-30010,-13279,-29956,-13401,-29902,-13524,-29847,-13646,-29791,-13767,-29735,-13889,-29679,-14010,-29622,-14131,-29564,-14252,-29506,-14373,-29447,-14493,-29388,-14613,-29329,-14733,-29269,-14853,-29208,-14972,-29147,-15091,-29086,-15210,-29024,-15328,-28961,-15447,-28898,-15565,-28835,-15683,-28771,-15800,-28707,-15918,-28642,-16035,-28576,-16151,-28511,-16268,-28444,-16384,-28378,-16500,-28310,-16616,-28243,-16731,-28174,-16846,-28106,-16961,-28037,-17075,-27967,-17190,-27897,-17304,-27826,-17417,-27755,-17531,-27684,-17644,-27612,-17757,-27539,-17869,-27467,-17981,-27393,-18093,-27320,-18205,-27245,-18316,-27171,-18427,-27095,-18538,-27020,-18648,-26944,-18758,-26867,-18868,-26790,-18977,-26713,-19087,-26635,-19195,-26557,-19304,-26478,-19412,-26399,-19520,-26319,-19627,-26239,-19734,-26159,-19841,-26078,-19948,-25996,-20054,-25914,-20160,-25832,-20265,-25750,-20370,-25666,-20475,-25583,-20580,-25499,-20684,-25415,-20788,-25330,-20891,-25244,-20994,-25159,-21097,-25073,-21199,-24986,-21301,-24899,-21403,-24812,-21504,-24724,-21605,-24636,-21706,-24547,-21806,-24458,-21906,-24369,-22005,-24279,-22105,-24189,-22203,-24098,-22302,-24007,-22400,-23916,-22497,-23824,-22595,-23732,-22692,-23639,-22788,-23546,-22884,-23453,-22980,-23359,-23075,-23265,-23170,-23170,-23265,-23075,-23359,-22980,-23453,-22884,-23546,-22788,-23639,-22692,-23732,-22595,-23824,-22497,-23916,-22400,-24007,-22302,-24098,-22203,-24189,-22105,-24279,-22005,-24369,-21906,-24458,-21806,-24547,-21706,-24636,-21605,-24724,-21504,-24812,-21403,-24899,-21301,-24986,-21199,-25073,-21097,-25159,-20994,-25244,-20891,-25330,-20788,-25415,-20684,-25499,-20580,-25583,-20475,-25666,-20370,-25750,-20265,-25832,-20160,-25914,-20054,-25996,-19948,-26078,-19841,-26159,-19734,-26239,-19627,-26319,-19520,-26399,-19412,-26478,-19304,-26557,-19195,-26635,-19087,-26713,-18977,-26790,-18868,-26867,-18758,-26944,-18648,-27020,-18538,-27095,-18427,-27171,-18316,-27245,-18205,-27320,-18093,-27393,-17981,-27467,-17869,-27539,-17757,-27612,-17644,-27684,-17531,-27755,-17417,-27826,-17304,-27897,-17190,-27967,-17075,-28037,-16961,-28106,-16846,-28174,-16731,-28243,-16616,-28310,-16500,-28378,-16384,-28444,-16268,-28511,-16151,-28576,-16035,-28642,-15918,-28707,-15800,-28771,-15683,-28835,-15565,-28898,-15447,-28961,-15328,-29024,-15210,-29086,-15091,-29147,-14972,-29208,-14853,-29269,-14733,-29329,-14613,-29388,-14493,-29447,-14373,-29506,-14252,-29564,-14131,-29622,-14010,-29679,-13889,-29735,-13767,-29791,-13646,-29847,-13524,-29902,-13401,-29956,-13279,-30010,-13156,-30064,-13034,-30117,-12910,-30170,-12787,-30222,-12664,-30273,-12540,-30324,-12416,-30375,-12292,-30425,-12167,-30474,-12043,-30523,-11918,-30572,-11793,-30620,-11668,-30667,-11543,-30714,-11417,-30761,-11291,-30807,-11165,-30852,-11039,-30897,-10913,-30941,-10787,-30985,-10660,-31029,-10533,-31071,-10406,-31114,-10279,-31155,-10152,-31197,-10024,-31237,-9896,-31278,-9768,-31317,-9640,-31357,-9512,-31395,-9384,-31433,-9255,-31471,-9127,-31508,-8998,-31545,-8869,-31581,-8740,-31616,-8611,-31651,-8481,-31685,-8352,-31719,-8222,-31753,-8092,-31786,-7962,-31818,-7832,-31850,-7702,-31881,-7572,-31912,-7441,-31942,-7311,-31971,-7180,-32000,-7049,-32029,-6918,-32057,-6787,-32085,-6656,-32111,-6524,-32138,-6393,-32164,-6262,-32189,-6130,-32214,-5998,-32238,-5866,-32262,-5734,-32285,-5602,-32308,-5470,-32330,-5338,-32351,-5206,-32372,-5073,-32393,-4941,-32413,-4808,-32432,-4676,-32451,-4543,-32469,-4410,-32487,-4277,-32504,-4145,-32521,-4012,-32537,-3878,-32553,-3745,-32568,-3612,-32582,-3479,-32596,-3346,-32610,-3212,-32623,-3079,-32635,-2945,-32647,-2812,-32658,-2678,-32669,-2545,-32679,-2411,-32688,-2277,-32697,-2144,-32706,-2010,-32714,-1876,-32721,-1742,-32728,-1608,-32734,-1474,-32740,-1340,-32745,-1207,-32750,-1073,-32754,-939,-32758,-805,-32761,-671,-32763,-537,-32765,-403,-32766,-269,-32767,-135,-32767,-1,-32767,134,-32766,268,-32765,402,-32763,536,-32761,670,-32758,804,-32754,938,-32750,1072,-32745,1206,-32740,1339,-32734,1473,-32728,1607,-32721,1741,-32714,1875,-32706,2009,-32697,2143,-32688,2276,-32679,2410,-32669,2544,-32658,2677,-32647,2811,-32635,2944,-32623,3078,-32610,3211,-32596,3345,-32582,3478,-32568,3611,-32553,3744,-32537,3877,-32521,4011,-32504,4144,-32487,4276,-32469,4409,-32451,4542,-32432,4675,-32413,4807,-32393,4940,-32372,5072,-32351,5205,-32330,5337,-32308,5469,-32285,5601,-32262,5733,-32238,5865,-32214,5997,-32189,6129,-32164,6261,-32138,6392,-32111,6523,-32085,6655,-32057,6786,-32029,6917,-32000,7048,-31971,7179,-31942,7310,-31912,7440,-31881,7571,-31850,7701,-31818,7831,-31786,7961,-31753,8091,-31719,8221,-31685,8351,-31651,8480,-31616,8610,-31581,8739,-31545,8868,-31508,8997,-31471,9126,-31433,9254,-31395,9383,-31357,9511,-31317,9639,-31278,9767,-31237,9895,-31197,10023,-31155,10151,-31114,10278,-31071,10405,-31029,10532,-30985,10659,-30941,10786,-30897,10912,-30852,11038,-30807,11164,-30761,11290,-30714,11416,-30667,11542,-30620,11667,-30572,11792,-30523,11917,-30474,12042,-30425,12166,-30375,12291,-30324,12415,-30273,12539,-30222,12663,-30170,12786,-30117,12909,-30064,13033,-30010,13155,-29956,13278,-29902,13400,-29847,13523,-29791,13645,-29735,13766,-29679,13888,-29622,14009,-29564,14130,-29506,14251,-29447,14372,-29388,14492,-29329,14612,-29269,14732,-29208,14852,-29147,14971,-29086,15090,-29024,15209,-28961,15327,-28898,15446,-28835,15564,-28771,15682,-28707,15799,-28642,15917,-28576,16034,-28511,16150,-28444,16267,-28378,16383,-28310,16499,-28243,16615,-28174,16730,-28106,16845,-28037,16960,-27967,17074,-27897,17189,-27826,17303,-27755,17416,-27684,17530,-27612,17643,-27539,17756,-27467,17868,-27393,17980,-27320,18092,-27245,18204,-27171,18315,-27095,18426,-27020,18537,-26944,18647,-26867,18757,-26790,18867,-26713,18976,-26635,19086,-26557,19194,-26478,19303,-26399,19411,-26319,19519,-26239,19626,-26159,19733,-26078,19840,-25996,19947,-25914,20053,-25832,20159,-25750,20264,-25666,20369,-25583,20474,-25499,20579,-25415,20683,-25330,20787,-25244,20890,-25159,20993,-25073,21096,-24986,21198,-24899,21300,-24812,21402,-24724,21503,-24636,21604,-24547,21705,-24458,21805,-24369,21905,-24279,22004,-24189,22104,-24098,22202,-24007,22301,-23916,22399,-23824,22496,-23732,22594,-23639,22691,-23546,22787,-23453,22883,-23359,22979,-23265,23074,-23170,23169,-23075,23264,-22980,23358,-22884,23452,-22788,23545,-22692,23638,-22595,23731,-22497,23823,-22400,23915,-22302,24006,-22203,24097,-22105,24188,-22005,24278,-21906,24368,-21806,24457,-21706,24546,-21605,24635,-21504,24723,-21403,24811,-21301,24898,-21199,24985,-21097,25072,-20994,25158,-20891,25243,-20788,25329,-20684,25414,-20580,25498,-20475,25582,-20370,25665,-20265,25749,-20160,25831,-20054,25913,-19948,25995,-19841,26077,-19734,26158,-19627,26238,-19520,26318,-19412,26398,-19304,26477,-19195,26556,-19087,26634,-18977,26712,-18868,26789,-18758,26866,-18648,26943,-18538,27019,-18427,27094,-18316,27170,-18205,27244,-18093,27319,-17981,27392,-17869,27466,-17757,27538,-17644,27611,-17531,27683,-17417,27754,-17304,27825,-17190,27896,-17075,27966,-16961,28036,-16846,28105,-16731,28173,-16616,28242,-16500,28309,};