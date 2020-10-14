// Copyright 2007 Google Inc.
// All Rights Reserved.
// Author: ahmadab@google.com (Ahmad Abdulkader)
//
// sigmoid_table.cpp: Sigmoid function lookup table

#include "neuron.h"

namespace tesseract {

const float Neuron::kSigmoidTable[] = {
  4.53979E-05f, 4.58541E-05f, 4.63149E-05f, 4.67804E-05f,
  4.72505E-05f, 4.77254E-05f, 4.8205E-05f, 4.86894E-05f,
  4.91787E-05f, 4.9673E-05f, 5.01722E-05f, 5.06764E-05f,
  5.11857E-05f, 5.17001E-05f, 5.22196E-05f, 5.27444E-05f,
  5.32745E-05f, 5.38099E-05f, 5.43506E-05f, 5.48968E-05f,
  5.54485E-05f, 5.60058E-05f, 5.65686E-05f, 5.71371E-05f,
  5.77113E-05f, 5.82913E-05f, 5.88771E-05f, 5.94688E-05f,
  6.00664E-05f, 6.067E-05f, 6.12797E-05f, 6.18956E-05f,
  6.25176E-05f, 6.31459E-05f, 6.37805E-05f, 6.44214E-05f,
  6.50688E-05f, 6.57227E-05f, 6.63832E-05f, 6.70503E-05f,
  6.77241E-05f, 6.84047E-05f, 6.90922E-05f, 6.97865E-05f,
  7.04878E-05f, 7.11962E-05f, 7.19117E-05f, 7.26343E-05f,
  7.33643E-05f, 7.41016E-05f, 7.48462E-05f, 7.55984E-05f,
  7.63581E-05f, 7.71255E-05f, 7.79005E-05f, 7.86834E-05f,
  7.94741E-05f, 8.02728E-05f, 8.10794E-05f, 8.18942E-05f,
  8.27172E-05f, 8.35485E-05f, 8.43881E-05f, 8.52361E-05f,
  8.60927E-05f, 8.69579E-05f, 8.78317E-05f, 8.87144E-05f,
  8.96059E-05f, 9.05064E-05f, 9.14159E-05f, 9.23345E-05f,
  9.32624E-05f, 9.41996E-05f, 9.51463E-05f, 9.61024E-05f,
  9.70682E-05f, 9.80436E-05f, 9.90289E-05f, 0.000100024f,
  0.000101029f, 0.000102044f, 0.00010307f, 0.000104106f,
  0.000105152f, 0.000106209f, 0.000107276f, 0.000108354f,
  0.000109443f, 0.000110542f, 0.000111653f, 0.000112775f,
  0.000113909f, 0.000115053f, 0.000116209f, 0.000117377f,
  0.000118557f, 0.000119748f, 0.000120951f, 0.000122167f,
  0.000123395f, 0.000124635f, 0.000125887f, 0.000127152f,
  0.00012843f, 0.00012972f, 0.000131024f, 0.000132341f,
  0.00013367f, 0.000135014f, 0.00013637f, 0.000137741f,
  0.000139125f, 0.000140523f, 0.000141935f, 0.000143361f,
  0.000144802f, 0.000146257f, 0.000147727f, 0.000149211f,
  0.00015071f, 0.000152225f, 0.000153754f, 0.000155299f,
  0.00015686f, 0.000158436f, 0.000160028f, 0.000161636f,
  0.000163261f, 0.000164901f, 0.000166558f, 0.000168232f,
  0.000169922f, 0.00017163f, 0.000173354f, 0.000175096f,
  0.000176856f, 0.000178633f, 0.000180428f, 0.000182241f,
  0.000184072f, 0.000185922f, 0.00018779f, 0.000189677f,
  0.000191583f, 0.000193508f, 0.000195452f, 0.000197416f,
  0.0001994f, 0.000201403f, 0.000203427f, 0.000205471f,
  0.000207536f, 0.000209621f, 0.000211727f, 0.000213855f,
  0.000216003f, 0.000218174f, 0.000220366f, 0.00022258f,
  0.000224817f, 0.000227076f, 0.000229357f, 0.000231662f,
  0.00023399f, 0.000236341f, 0.000238715f, 0.000241114f,
  0.000243537f, 0.000245984f, 0.000248455f, 0.000250951f,
  0.000253473f, 0.00025602f, 0.000258592f, 0.00026119f,
  0.000263815f, 0.000266465f, 0.000269143f, 0.000271847f,
  0.000274578f, 0.000277337f, 0.000280123f, 0.000282938f,
  0.000285781f, 0.000288652f, 0.000291552f, 0.000294481f,
  0.00029744f, 0.000300429f, 0.000303447f, 0.000306496f,
  0.000309575f, 0.000312685f, 0.000315827f, 0.000319f,
  0.000322205f, 0.000325442f, 0.000328712f, 0.000332014f,
  0.00033535f, 0.000338719f, 0.000342122f, 0.00034556f,
  0.000349031f, 0.000352538f, 0.00035608f, 0.000359657f,
  0.00036327f, 0.00036692f, 0.000370606f, 0.000374329f,
  0.00037809f, 0.000381888f, 0.000385725f, 0.0003896f,
  0.000393514f, 0.000397467f, 0.00040146f, 0.000405494f,
  0.000409567f, 0.000413682f, 0.000417838f, 0.000422035f,
  0.000426275f, 0.000430557f, 0.000434882f, 0.000439251f,
  0.000443664f, 0.000448121f, 0.000452622f, 0.000457169f,
  0.000461762f, 0.0004664f, 0.000471085f, 0.000475818f,
  0.000480597f, 0.000485425f, 0.000490301f, 0.000495226f,
  0.000500201f, 0.000505226f, 0.000510301f, 0.000515427f,
  0.000520604f, 0.000525833f, 0.000531115f, 0.00053645f,
  0.000541839f, 0.000547281f, 0.000552779f, 0.000558331f,
  0.000563939f, 0.000569604f, 0.000575325f, 0.000581104f,
  0.00058694f, 0.000592836f, 0.00059879f, 0.000604805f,
  0.000610879f, 0.000617015f, 0.000623212f, 0.000629472f,
  0.000635794f, 0.00064218f, 0.00064863f, 0.000655144f,
  0.000661724f, 0.00066837f, 0.000675083f, 0.000681863f,
  0.000688711f, 0.000695628f, 0.000702614f, 0.00070967f,
  0.000716798f, 0.000723996f, 0.000731267f, 0.000738611f,
  0.000746029f, 0.000753521f, 0.000761088f, 0.000768731f,
  0.000776451f, 0.000784249f, 0.000792124f, 0.000800079f,
  0.000808113f, 0.000816228f, 0.000824425f, 0.000832703f,
  0.000841065f, 0.000849511f, 0.000858041f, 0.000866657f,
  0.00087536f, 0.000884149f, 0.000893027f, 0.000901994f,
  0.000911051f, 0.000920199f, 0.000929439f, 0.000938771f,
  0.000948197f, 0.000957717f, 0.000967333f, 0.000977045f,
  0.000986855f, 0.000996763f, 0.001006771f, 0.001016879f,
  0.001027088f, 0.0010374f, 0.001047815f, 0.001058334f,
  0.00106896f, 0.001079691f, 0.00109053f, 0.001101478f,
  0.001112536f, 0.001123705f, 0.001134985f, 0.001146379f,
  0.001157887f, 0.00116951f, 0.00118125f, 0.001193108f,
  0.001205084f, 0.001217181f, 0.001229399f, 0.001241739f,
  0.001254203f, 0.001266792f, 0.001279507f, 0.00129235f,
  0.001305321f, 0.001318423f, 0.001331655f, 0.001345021f,
  0.00135852f, 0.001372155f, 0.001385926f, 0.001399835f,
  0.001413884f, 0.001428073f, 0.001442405f, 0.00145688f,
  0.001471501f, 0.001486267f, 0.001501182f, 0.001516247f,
  0.001531462f, 0.001546829f, 0.001562351f, 0.001578028f,
  0.001593862f, 0.001609855f, 0.001626008f, 0.001642323f,
  0.001658801f, 0.001675444f, 0.001692254f, 0.001709233f,
  0.001726381f, 0.001743701f, 0.001761195f, 0.001778864f,
  0.00179671f, 0.001814734f, 0.001832939f, 0.001851326f,
  0.001869898f, 0.001888655f, 0.0019076f, 0.001926735f,
  0.001946061f, 0.001965581f, 0.001985296f, 0.002005209f,
  0.00202532f, 0.002045634f, 0.00206615f, 0.002086872f,
  0.002107801f, 0.00212894f, 0.00215029f, 0.002171854f,
  0.002193633f, 0.002215631f, 0.002237849f, 0.002260288f,
  0.002282953f, 0.002305844f, 0.002328964f, 0.002352316f,
  0.002375901f, 0.002399721f, 0.002423781f, 0.00244808f,
  0.002472623f, 0.002497411f, 0.002522447f, 0.002547734f,
  0.002573273f, 0.002599068f, 0.00262512f, 0.002651433f,
  0.002678009f, 0.002704851f, 0.002731961f, 0.002759342f,
  0.002786996f, 0.002814927f, 0.002843137f, 0.002871629f,
  0.002900406f, 0.00292947f, 0.002958825f, 0.002988472f,
  0.003018416f, 0.003048659f, 0.003079205f, 0.003110055f,
  0.003141213f, 0.003172683f, 0.003204467f, 0.003236568f,
  0.00326899f, 0.003301735f, 0.003334807f, 0.00336821f,
  0.003401946f, 0.003436018f, 0.003470431f, 0.003505187f,
  0.00354029f, 0.003575744f, 0.003611551f, 0.003647715f,
  0.00368424f, 0.003721129f, 0.003758387f, 0.003796016f,
  0.00383402f, 0.003872403f, 0.00391117f, 0.003950322f,
  0.003989865f, 0.004029802f, 0.004070138f, 0.004110875f,
  0.004152019f, 0.004193572f, 0.00423554f, 0.004277925f,
  0.004320734f, 0.004363968f, 0.004407633f, 0.004451734f,
  0.004496273f, 0.004541256f, 0.004586687f, 0.004632571f,
  0.004678911f, 0.004725713f, 0.00477298f, 0.004820718f,
  0.004868931f, 0.004917624f, 0.004966802f, 0.005016468f,
  0.005066629f, 0.005117289f, 0.005168453f, 0.005220126f,
  0.005272312f, 0.005325018f, 0.005378247f, 0.005432006f,
  0.005486299f, 0.005541132f, 0.005596509f, 0.005652437f,
  0.005708921f, 0.005765966f, 0.005823577f, 0.005881761f,
  0.005940522f, 0.005999867f, 0.006059801f, 0.006120331f,
  0.006181461f, 0.006243198f, 0.006305547f, 0.006368516f,
  0.006432108f, 0.006496332f, 0.006561193f, 0.006626697f,
  0.006692851f, 0.006759661f, 0.006827132f, 0.006895273f,
  0.006964089f, 0.007033587f, 0.007103774f, 0.007174656f,
  0.00724624f, 0.007318533f, 0.007391541f, 0.007465273f,
  0.007539735f, 0.007614933f, 0.007690876f, 0.00776757f,
  0.007845023f, 0.007923242f, 0.008002235f, 0.008082009f,
  0.008162571f, 0.00824393f, 0.008326093f, 0.008409068f,
  0.008492863f, 0.008577485f, 0.008662944f, 0.008749246f,
  0.0088364f, 0.008924415f, 0.009013299f, 0.009103059f,
  0.009193705f, 0.009285246f, 0.009377689f, 0.009471044f,
  0.009565319f, 0.009660523f, 0.009756666f, 0.009853756f,
  0.009951802f, 0.010050814f, 0.010150801f, 0.010251772f,
  0.010353738f, 0.010456706f, 0.010560688f, 0.010665693f,
  0.01077173f, 0.01087881f, 0.010986943f, 0.011096138f,
  0.011206406f, 0.011317758f, 0.011430203f, 0.011543752f,
  0.011658417f, 0.011774206f, 0.011891132f, 0.012009204f,
  0.012128435f, 0.012248835f, 0.012370415f, 0.012493186f,
  0.012617161f, 0.012742349f, 0.012868764f, 0.012996417f,
  0.013125318f, 0.013255481f, 0.013386918f, 0.01351964f,
  0.013653659f, 0.013788989f, 0.01392564f, 0.014063627f,
  0.014202961f, 0.014343656f, 0.014485724f, 0.014629178f,
  0.014774032f, 0.014920298f, 0.01506799f, 0.015217121f,
  0.015367706f, 0.015519757f, 0.015673288f, 0.015828314f,
  0.015984848f, 0.016142905f, 0.016302499f, 0.016463645f,
  0.016626356f, 0.016790648f, 0.016956536f, 0.017124033f,
  0.017293157f, 0.01746392f, 0.01763634f, 0.017810432f,
  0.01798621f, 0.018163691f, 0.018342891f, 0.018523825f,
  0.01870651f, 0.018890962f, 0.019077197f, 0.019265233f,
  0.019455085f, 0.01964677f, 0.019840306f, 0.020035709f,
  0.020232997f, 0.020432187f, 0.020633297f, 0.020836345f,
  0.021041347f, 0.021248323f, 0.02145729f, 0.021668266f,
  0.021881271f, 0.022096322f, 0.022313439f, 0.022532639f,
  0.022753943f, 0.02297737f, 0.023202938f, 0.023430668f,
  0.023660578f, 0.023892689f, 0.024127021f, 0.024363594f,
  0.024602428f, 0.024843544f, 0.025086962f, 0.025332703f,
  0.025580788f, 0.025831239f, 0.026084075f, 0.02633932f,
  0.026596994f, 0.026857119f, 0.027119717f, 0.027384811f,
  0.027652422f, 0.027922574f, 0.028195288f, 0.028470588f,
  0.028748496f, 0.029029036f, 0.029312231f, 0.029598104f,
  0.02988668f, 0.030177981f, 0.030472033f, 0.030768859f,
  0.031068484f, 0.031370932f, 0.031676228f, 0.031984397f,
  0.032295465f, 0.032609455f, 0.032926395f, 0.033246309f,
  0.033569223f, 0.033895164f, 0.034224158f, 0.03455623f,
  0.034891409f, 0.035229719f, 0.035571189f, 0.035915846f,
  0.036263716f, 0.036614828f, 0.036969209f, 0.037326887f,
  0.037687891f, 0.038052247f, 0.038419986f, 0.038791134f,
  0.039165723f, 0.03954378f, 0.039925334f, 0.040310415f,
  0.040699054f, 0.041091278f, 0.041487119f, 0.041886607f,
  0.042289772f, 0.042696644f, 0.043107255f, 0.043521635f,
  0.043939815f, 0.044361828f, 0.044787703f, 0.045217473f,
  0.045651171f, 0.046088827f, 0.046530475f, 0.046976146f,
  0.047425873f, 0.04787969f, 0.048337629f, 0.048799723f,
  0.049266006f, 0.049736512f, 0.050211273f, 0.050690325f,
  0.051173701f, 0.051661435f, 0.052153563f, 0.052650118f,
  0.053151136f, 0.053656652f, 0.0541667f, 0.054681317f,
  0.055200538f, 0.055724398f, 0.056252934f, 0.056786181f,
  0.057324176f, 0.057866955f, 0.058414556f, 0.058967013f,
  0.059524366f, 0.06008665f, 0.060653903f, 0.061226163f,
  0.061803466f, 0.062385851f, 0.062973356f, 0.063566018f,
  0.064163876f, 0.064766969f, 0.065375333f, 0.065989009f,
  0.066608036f, 0.067232451f, 0.067862294f, 0.068497604f,
  0.06913842f, 0.069784783f, 0.070436731f, 0.071094304f,
  0.071757542f, 0.072426485f, 0.073101173f, 0.073781647f,
  0.074467945f, 0.075160109f, 0.07585818f, 0.076562197f,
  0.077272202f, 0.077988235f, 0.078710337f, 0.079438549f,
  0.080172912f, 0.080913467f, 0.081660255f, 0.082413318f,
  0.083172696f, 0.083938432f, 0.084710566f, 0.085489139f,
  0.086274194f, 0.087065772f, 0.087863915f, 0.088668663f,
  0.089480059f, 0.090298145f, 0.091122961f, 0.09195455f,
  0.092792953f, 0.093638212f, 0.094490369f, 0.095349465f,
  0.096215542f, 0.097088641f, 0.097968804f, 0.098856073f,
  0.099750489f, 0.100652094f, 0.101560928f, 0.102477033f,
  0.103400451f, 0.104331223f, 0.10526939f, 0.106214992f,
  0.10716807f, 0.108128667f, 0.109096821f, 0.110072574f,
  0.111055967f, 0.112047039f, 0.11304583f, 0.114052381f,
  0.115066732f, 0.116088922f, 0.117118991f, 0.118156978f,
  0.119202922f, 0.120256862f, 0.121318838f, 0.122388887f,
  0.123467048f, 0.124553358f, 0.125647857f, 0.12675058f,
  0.127861566f, 0.128980852f, 0.130108474f, 0.131244469f,
  0.132388874f, 0.133541723f, 0.134703052f, 0.135872897f,
  0.137051293f, 0.138238273f, 0.139433873f, 0.140638126f,
  0.141851065f, 0.143072723f, 0.144303134f, 0.145542329f,
  0.14679034f, 0.148047198f, 0.149312935f, 0.15058758f,
  0.151871164f, 0.153163716f, 0.154465265f, 0.15577584f,
  0.157095469f, 0.158424179f, 0.159761997f, 0.16110895f,
  0.162465063f, 0.163830361f, 0.16520487f, 0.166588614f,
  0.167981615f, 0.169383897f, 0.170795482f, 0.172216392f,
  0.173646647f, 0.175086268f, 0.176535275f, 0.177993686f,
  0.179461519f, 0.180938793f, 0.182425524f, 0.183921727f,
  0.185427419f, 0.186942614f, 0.188467325f, 0.190001566f,
  0.191545349f, 0.193098684f, 0.194661584f, 0.196234056f,
  0.197816111f, 0.199407757f, 0.201009f, 0.202619846f,
  0.204240302f, 0.205870372f, 0.207510059f, 0.209159365f,
  0.210818293f, 0.212486844f, 0.214165017f, 0.215852811f,
  0.217550224f, 0.219257252f, 0.220973892f, 0.222700139f,
  0.224435986f, 0.226181426f, 0.227936451f, 0.229701051f,
  0.231475217f, 0.233258936f, 0.235052196f, 0.236854984f,
  0.238667285f, 0.240489083f, 0.242320361f, 0.244161101f,
  0.246011284f, 0.247870889f, 0.249739894f, 0.251618278f,
  0.253506017f, 0.255403084f, 0.257309455f, 0.259225101f,
  0.261149994f, 0.263084104f, 0.265027401f, 0.266979851f,
  0.268941421f, 0.270912078f, 0.272891784f, 0.274880502f,
  0.276878195f, 0.278884822f, 0.280900343f, 0.282924715f,
  0.284957894f, 0.286999837f, 0.289050497f, 0.291109827f,
  0.293177779f, 0.295254302f, 0.297339346f, 0.299432858f,
  0.301534784f, 0.30364507f, 0.30576366f, 0.307890496f,
  0.310025519f, 0.312168669f, 0.314319886f, 0.316479106f,
  0.318646266f, 0.320821301f, 0.323004144f, 0.325194727f,
  0.327392983f, 0.32959884f, 0.331812228f, 0.334033073f,
  0.336261303f, 0.338496841f, 0.340739612f, 0.342989537f,
  0.345246539f, 0.347510538f, 0.349781451f, 0.352059198f,
  0.354343694f, 0.356634854f, 0.358932594f, 0.361236825f,
  0.36354746f, 0.365864409f, 0.368187582f, 0.370516888f,
  0.372852234f, 0.375193526f, 0.377540669f, 0.379893568f,
  0.382252125f, 0.384616244f, 0.386985824f, 0.389360766f,
  0.391740969f, 0.394126332f, 0.39651675f, 0.398912121f,
  0.40131234f, 0.403717301f, 0.406126897f, 0.408541022f,
  0.410959566f, 0.413382421f, 0.415809477f, 0.418240623f,
  0.420675748f, 0.423114739f, 0.425557483f, 0.428003867f,
  0.430453776f, 0.432907095f, 0.435363708f, 0.437823499f,
  0.440286351f, 0.442752145f, 0.445220765f, 0.44769209f,
  0.450166003f, 0.452642382f, 0.455121108f, 0.457602059f,
  0.460085115f, 0.462570155f, 0.465057055f, 0.467545694f,
  0.470035948f, 0.472527696f, 0.475020813f, 0.477515175f,
  0.48001066f, 0.482507142f, 0.485004498f, 0.487502604f,
  0.490001333f, 0.492500562f, 0.495000167f, 0.497500021f,
  0.5f, 0.502499979f, 0.504999833f, 0.507499438f,
  0.509998667f, 0.512497396f, 0.514995502f, 0.517492858f,
  0.51998934f, 0.522484825f, 0.524979187f, 0.527472304f,
  0.529964052f, 0.532454306f, 0.534942945f, 0.537429845f,
  0.539914885f, 0.542397941f, 0.544878892f, 0.547357618f,
  0.549833997f, 0.55230791f, 0.554779235f, 0.557247855f,
  0.559713649f, 0.562176501f, 0.564636292f, 0.567092905f,
  0.569546224f, 0.571996133f, 0.574442517f, 0.576885261f,
  0.579324252f, 0.581759377f, 0.584190523f, 0.586617579f,
  0.589040434f, 0.591458978f, 0.593873103f, 0.596282699f,
  0.59868766f, 0.601087879f, 0.60348325f, 0.605873668f,
  0.608259031f, 0.610639234f, 0.613014176f, 0.615383756f,
  0.617747875f, 0.620106432f, 0.622459331f, 0.624806474f,
  0.627147766f, 0.629483112f, 0.631812418f, 0.634135591f,
  0.63645254f, 0.638763175f, 0.641067406f, 0.643365146f,
  0.645656306f, 0.647940802f, 0.650218549f, 0.652489462f,
  0.654753461f, 0.657010463f, 0.659260388f, 0.661503159f,
  0.663738697f, 0.665966927f, 0.668187772f, 0.67040116f,
  0.672607017f, 0.674805273f, 0.676995856f, 0.679178699f,
  0.681353734f, 0.683520894f, 0.685680114f, 0.687831331f,
  0.689974481f, 0.692109504f, 0.69423634f, 0.69635493f,
  0.698465216f, 0.700567142f, 0.702660654f, 0.704745698f,
  0.706822221f, 0.708890173f, 0.710949503f, 0.713000163f,
  0.715042106f, 0.717075285f, 0.719099657f, 0.721115178f,
  0.723121805f, 0.725119498f, 0.727108216f, 0.729087922f,
  0.731058579f, 0.733020149f, 0.734972599f, 0.736915896f,
  0.738850006f, 0.740774899f, 0.742690545f, 0.744596916f,
  0.746493983f, 0.748381722f, 0.750260106f, 0.752129111f,
  0.753988716f, 0.755838899f, 0.757679639f, 0.759510917f,
  0.761332715f, 0.763145016f, 0.764947804f, 0.766741064f,
  0.768524783f, 0.770298949f, 0.772063549f, 0.773818574f,
  0.775564014f, 0.777299861f, 0.779026108f, 0.780742748f,
  0.782449776f, 0.784147189f, 0.785834983f, 0.787513156f,
  0.789181707f, 0.790840635f, 0.792489941f, 0.794129628f,
  0.795759698f, 0.797380154f, 0.798991f, 0.800592243f,
  0.802183889f, 0.803765944f, 0.805338416f, 0.806901316f,
  0.808454651f, 0.809998434f, 0.811532675f, 0.813057386f,
  0.814572581f, 0.816078273f, 0.817574476f, 0.819061207f,
  0.820538481f, 0.822006314f, 0.823464725f, 0.824913732f,
  0.826353353f, 0.827783608f, 0.829204518f, 0.830616103f,
  0.832018385f, 0.833411386f, 0.83479513f, 0.836169639f,
  0.837534937f, 0.83889105f, 0.840238003f, 0.841575821f,
  0.842904531f, 0.84422416f, 0.845534735f, 0.846836284f,
  0.848128836f, 0.84941242f, 0.850687065f, 0.851952802f,
  0.85320966f, 0.854457671f, 0.855696866f, 0.856927277f,
  0.858148935f, 0.859361874f, 0.860566127f, 0.861761727f,
  0.862948707f, 0.864127103f, 0.865296948f, 0.866458277f,
  0.867611126f, 0.868755531f, 0.869891526f, 0.871019148f,
  0.872138434f, 0.87324942f, 0.874352143f, 0.875446642f,
  0.876532952f, 0.877611113f, 0.878681162f, 0.879743138f,
  0.880797078f, 0.881843022f, 0.882881009f, 0.883911078f,
  0.884933268f, 0.885947619f, 0.88695417f, 0.887952961f,
  0.888944033f, 0.889927426f, 0.890903179f, 0.891871333f,
  0.89283193f, 0.893785008f, 0.89473061f, 0.895668777f,
  0.896599549f, 0.897522967f, 0.898439072f, 0.899347906f,
  0.900249511f, 0.901143927f, 0.902031196f, 0.902911359f,
  0.903784458f, 0.904650535f, 0.905509631f, 0.906361788f,
  0.907207047f, 0.90804545f, 0.908877039f, 0.909701855f,
  0.910519941f, 0.911331337f, 0.912136085f, 0.912934228f,
  0.913725806f, 0.914510861f, 0.915289434f, 0.916061568f,
  0.916827304f, 0.917586682f, 0.918339745f, 0.919086533f,
  0.919827088f, 0.920561451f, 0.921289663f, 0.922011765f,
  0.922727798f, 0.923437803f, 0.92414182f, 0.924839891f,
  0.925532055f, 0.926218353f, 0.926898827f, 0.927573515f,
  0.928242458f, 0.928905696f, 0.929563269f, 0.930215217f,
  0.93086158f, 0.931502396f, 0.932137706f, 0.932767549f,
  0.933391964f, 0.934010991f, 0.934624667f, 0.935233031f,
  0.935836124f, 0.936433982f, 0.937026644f, 0.937614149f,
  0.938196534f, 0.938773837f, 0.939346097f, 0.93991335f,
  0.940475634f, 0.941032987f, 0.941585444f, 0.942133045f,
  0.942675824f, 0.943213819f, 0.943747066f, 0.944275602f,
  0.944799462f, 0.945318683f, 0.9458333f, 0.946343348f,
  0.946848864f, 0.947349882f, 0.947846437f, 0.948338565f,
  0.948826299f, 0.949309675f, 0.949788727f, 0.950263488f,
  0.950733994f, 0.951200277f, 0.951662371f, 0.95212031f,
  0.952574127f, 0.953023854f, 0.953469525f, 0.953911173f,
  0.954348829f, 0.954782527f, 0.955212297f, 0.955638172f,
  0.956060185f, 0.956478365f, 0.956892745f, 0.957303356f,
  0.957710228f, 0.958113393f, 0.958512881f, 0.958908722f,
  0.959300946f, 0.959689585f, 0.960074666f, 0.96045622f,
  0.960834277f, 0.961208866f, 0.961580014f, 0.961947753f,
  0.962312109f, 0.962673113f, 0.963030791f, 0.963385172f,
  0.963736284f, 0.964084154f, 0.964428811f, 0.964770281f,
  0.965108591f, 0.96544377f, 0.965775842f, 0.966104836f,
  0.966430777f, 0.966753691f, 0.967073605f, 0.967390545f,
  0.967704535f, 0.968015603f, 0.968323772f, 0.968629068f,
  0.968931516f, 0.969231141f, 0.969527967f, 0.969822019f,
  0.97011332f, 0.970401896f, 0.970687769f, 0.970970964f,
  0.971251504f, 0.971529412f, 0.971804712f, 0.972077426f,
  0.972347578f, 0.972615189f, 0.972880283f, 0.973142881f,
  0.973403006f, 0.97366068f, 0.973915925f, 0.974168761f,
  0.974419212f, 0.974667297f, 0.974913038f, 0.975156456f,
  0.975397572f, 0.975636406f, 0.975872979f, 0.976107311f,
  0.976339422f, 0.976569332f, 0.976797062f, 0.97702263f,
  0.977246057f, 0.977467361f, 0.977686561f, 0.977903678f,
  0.978118729f, 0.978331734f, 0.97854271f, 0.978751677f,
  0.978958653f, 0.979163655f, 0.979366703f, 0.979567813f,
  0.979767003f, 0.979964291f, 0.980159694f, 0.98035323f,
  0.980544915f, 0.980734767f, 0.980922803f, 0.981109038f,
  0.98129349f, 0.981476175f, 0.981657109f, 0.981836309f,
  0.98201379f, 0.982189568f, 0.98236366f, 0.98253608f,
  0.982706843f, 0.982875967f, 0.983043464f, 0.983209352f,
  0.983373644f, 0.983536355f, 0.983697501f, 0.983857095f,
  0.984015152f, 0.984171686f, 0.984326712f, 0.984480243f,
  0.984632294f, 0.984782879f, 0.98493201f, 0.985079702f,
  0.985225968f, 0.985370822f, 0.985514276f, 0.985656344f,
  0.985797039f, 0.985936373f, 0.98607436f, 0.986211011f,
  0.986346341f, 0.98648036f, 0.986613082f, 0.986744519f,
  0.986874682f, 0.987003583f, 0.987131236f, 0.987257651f,
  0.987382839f, 0.987506814f, 0.987629585f, 0.987751165f,
  0.987871565f, 0.987990796f, 0.988108868f, 0.988225794f,
  0.988341583f, 0.988456248f, 0.988569797f, 0.988682242f,
  0.988793594f, 0.988903862f, 0.989013057f, 0.98912119f,
  0.98922827f, 0.989334307f, 0.989439312f, 0.989543294f,
  0.989646262f, 0.989748228f, 0.989849199f, 0.989949186f,
  0.990048198f, 0.990146244f, 0.990243334f, 0.990339477f,
  0.990434681f, 0.990528956f, 0.990622311f, 0.990714754f,
  0.990806295f, 0.990896941f, 0.990986701f, 0.991075585f,
  0.9911636f, 0.991250754f, 0.991337056f, 0.991422515f,
  0.991507137f, 0.991590932f, 0.991673907f, 0.99175607f,
  0.991837429f, 0.991917991f, 0.991997765f, 0.992076758f,
  0.992154977f, 0.99223243f, 0.992309124f, 0.992385067f,
  0.992460265f, 0.992534727f, 0.992608459f, 0.992681467f,
  0.99275376f, 0.992825344f, 0.992896226f, 0.992966413f,
  0.993035911f, 0.993104727f, 0.993172868f, 0.993240339f,
  0.993307149f, 0.993373303f, 0.993438807f, 0.993503668f,
  0.993567892f, 0.993631484f, 0.993694453f, 0.993756802f,
  0.993818539f, 0.993879669f, 0.993940199f, 0.994000133f,
  0.994059478f, 0.994118239f, 0.994176423f, 0.994234034f,
  0.994291079f, 0.994347563f, 0.994403491f, 0.994458868f,
  0.994513701f, 0.994567994f, 0.994621753f, 0.994674982f,
  0.994727688f, 0.994779874f, 0.994831547f, 0.994882711f,
  0.994933371f, 0.994983532f, 0.995033198f, 0.995082376f,
  0.995131069f, 0.995179282f, 0.99522702f, 0.995274287f,
  0.995321089f, 0.995367429f, 0.995413313f, 0.995458744f,
  0.995503727f, 0.995548266f, 0.995592367f, 0.995636032f,
  0.995679266f, 0.995722075f, 0.99576446f, 0.995806428f,
  0.995847981f, 0.995889125f, 0.995929862f, 0.995970198f,
  0.996010135f, 0.996049678f, 0.99608883f, 0.996127597f,
  0.99616598f, 0.996203984f, 0.996241613f, 0.996278871f,
  0.99631576f, 0.996352285f, 0.996388449f, 0.996424256f,
  0.99645971f, 0.996494813f, 0.996529569f, 0.996563982f,
  0.996598054f, 0.99663179f, 0.996665193f, 0.996698265f,
  0.99673101f, 0.996763432f, 0.996795533f, 0.996827317f,
  0.996858787f, 0.996889945f, 0.996920795f, 0.996951341f,
  0.996981584f, 0.997011528f, 0.997041175f, 0.99707053f,
  0.997099594f, 0.997128371f, 0.997156863f, 0.997185073f,
  0.997213004f, 0.997240658f, 0.997268039f, 0.997295149f,
  0.997321991f, 0.997348567f, 0.99737488f, 0.997400932f,
  0.997426727f, 0.997452266f, 0.997477553f, 0.997502589f,
  0.997527377f, 0.99755192f, 0.997576219f, 0.997600279f,
  0.997624099f, 0.997647684f, 0.997671036f, 0.997694156f,
  0.997717047f, 0.997739712f, 0.997762151f, 0.997784369f,
  0.997806367f, 0.997828146f, 0.99784971f, 0.99787106f,
  0.997892199f, 0.997913128f, 0.99793385f, 0.997954366f,
  0.99797468f, 0.997994791f, 0.998014704f, 0.998034419f,
  0.998053939f, 0.998073265f, 0.9980924f, 0.998111345f,
  0.998130102f, 0.998148674f, 0.998167061f, 0.998185266f,
  0.99820329f, 0.998221136f, 0.998238805f, 0.998256299f,
  0.998273619f, 0.998290767f, 0.998307746f, 0.998324556f,
  0.998341199f, 0.998357677f, 0.998373992f, 0.998390145f,
  0.998406138f, 0.998421972f, 0.998437649f, 0.998453171f,
  0.998468538f, 0.998483753f, 0.998498818f, 0.998513733f,
  0.998528499f, 0.99854312f, 0.998557595f, 0.998571927f,
  0.998586116f, 0.998600165f, 0.998614074f, 0.998627845f,
  0.99864148f, 0.998654979f, 0.998668345f, 0.998681577f,
  0.998694679f, 0.99870765f, 0.998720493f, 0.998733208f,
  0.998745797f, 0.998758261f, 0.998770601f, 0.998782819f,
  0.998794916f, 0.998806892f, 0.99881875f, 0.99883049f,
  0.998842113f, 0.998853621f, 0.998865015f, 0.998876295f,
  0.998887464f, 0.998898522f, 0.99890947f, 0.998920309f,
  0.99893104f, 0.998941666f, 0.998952185f, 0.9989626f,
  0.998972912f, 0.998983121f, 0.998993229f, 0.999003237f,
  0.999013145f, 0.999022955f, 0.999032667f, 0.999042283f,
  0.999051803f, 0.999061229f, 0.999070561f, 0.999079801f,
  0.999088949f, 0.999098006f, 0.999106973f, 0.999115851f,
  0.99912464f, 0.999133343f, 0.999141959f, 0.999150489f,
  0.999158935f, 0.999167297f, 0.999175575f, 0.999183772f,
  0.999191887f, 0.999199921f, 0.999207876f, 0.999215751f,
  0.999223549f, 0.999231269f, 0.999238912f, 0.999246479f,
  0.999253971f, 0.999261389f, 0.999268733f, 0.999276004f,
  0.999283202f, 0.99929033f, 0.999297386f, 0.999304372f,
  0.999311289f, 0.999318137f, 0.999324917f, 0.99933163f,
  0.999338276f, 0.999344856f, 0.99935137f, 0.99935782f,
  0.999364206f, 0.999370528f, 0.999376788f, 0.999382985f,
  0.999389121f, 0.999395195f, 0.99940121f, 0.999407164f,
  0.99941306f, 0.999418896f, 0.999424675f, 0.999430396f,
  0.999436061f, 0.999441669f, 0.999447221f, 0.999452719f,
  0.999458161f, 0.99946355f, 0.999468885f, 0.999474167f,
  0.999479396f, 0.999484573f, 0.999489699f, 0.999494774f,
  0.999499799f, 0.999504774f, 0.999509699f, 0.999514575f,
  0.999519403f, 0.999524182f, 0.999528915f, 0.9995336f,
  0.999538238f, 0.999542831f, 0.999547378f, 0.999551879f,
  0.999556336f, 0.999560749f, 0.999565118f, 0.999569443f,
  0.999573725f, 0.999577965f, 0.999582162f, 0.999586318f,
  0.999590433f, 0.999594506f, 0.99959854f, 0.999602533f,
  0.999606486f, 0.9996104f, 0.999614275f, 0.999618112f,
  0.99962191f, 0.999625671f, 0.999629394f, 0.99963308f,
  0.99963673f, 0.999640343f, 0.99964392f, 0.999647462f,
  0.999650969f, 0.99965444f, 0.999657878f, 0.999661281f,
  0.99966465f, 0.999667986f, 0.999671288f, 0.999674558f,
  0.999677795f, 0.999681f, 0.999684173f, 0.999687315f,
  0.999690425f, 0.999693504f, 0.999696553f, 0.999699571f,
  0.99970256f, 0.999705519f, 0.999708448f, 0.999711348f,
  0.999714219f, 0.999717062f, 0.999719877f, 0.999722663f,
  0.999725422f, 0.999728153f, 0.999730857f, 0.999733535f,
  0.999736185f, 0.99973881f, 0.999741408f, 0.99974398f,
  0.999746527f, 0.999749049f, 0.999751545f, 0.999754016f,
  0.999756463f, 0.999758886f, 0.999761285f, 0.999763659f,
  0.99976601f, 0.999768338f, 0.999770643f, 0.999772924f,
  0.999775183f, 0.99977742f, 0.999779634f, 0.999781826f,
  0.999783997f, 0.999786145f, 0.999788273f, 0.999790379f,
  0.999792464f, 0.999794529f, 0.999796573f, 0.999798597f,
  0.9998006f, 0.999802584f, 0.999804548f, 0.999806492f,
  0.999808417f, 0.999810323f, 0.99981221f, 0.999814078f,
  0.999815928f, 0.999817759f, 0.999819572f, 0.999821367f,
  0.999823144f, 0.999824904f, 0.999826646f, 0.99982837f,
  0.999830078f, 0.999831768f, 0.999833442f, 0.999835099f,
  0.999836739f, 0.999838364f, 0.999839972f, 0.999841564f,
  0.99984314f, 0.999844701f, 0.999846246f, 0.999847775f,
  0.99984929f, 0.999850789f, 0.999852273f, 0.999853743f,
  0.999855198f, 0.999856639f, 0.999858065f, 0.999859477f,
  0.999860875f, 0.999862259f, 0.99986363f, 0.999864986f,
  0.99986633f, 0.999867659f, 0.999868976f, 0.99987028f,
  0.99987157f, 0.999872848f, 0.999874113f, 0.999875365f,
  0.999876605f, 0.999877833f, 0.999879049f, 0.999880252f,
  0.999881443f, 0.999882623f, 0.999883791f, 0.999884947f,
  0.999886091f, 0.999887225f, 0.999888347f, 0.999889458f,
  0.999890557f, 0.999891646f, 0.999892724f, 0.999893791f,
  0.999894848f, 0.999895894f, 0.99989693f, 0.999897956f,
  0.999898971f, 0.999899976f, 0.999900971f, 0.999901956f,
  0.999902932f, 0.999903898f, 0.999904854f, 0.9999058f,
  0.999906738f, 0.999907665f, 0.999908584f, 0.999909494f,
  0.999910394f, 0.999911286f, 0.999912168f, 0.999913042f,
  0.999913907f, 0.999914764f, 0.999915612f, 0.999916452f,
  0.999917283f, 0.999918106f, 0.999918921f, 0.999919727f,
  0.999920526f, 0.999921317f, 0.999922099f, 0.999922875f,
  0.999923642f, 0.999924402f, 0.999925154f, 0.999925898f,
  0.999926636f, 0.999927366f, 0.999928088f, 0.999928804f,
  0.999929512f, 0.999930213f, 0.999930908f, 0.999931595f,
  0.999932276f, 0.99993295f, 0.999933617f, 0.999934277f,
  0.999934931f, 0.999935579f, 0.99993622f, 0.999936854f,
  0.999937482f, 0.999938104f, 0.99993872f, 0.99993933f,
  0.999939934f, 0.999940531f, 0.999941123f, 0.999941709f,
  0.999942289f, 0.999942863f, 0.999943431f, 0.999943994f,
  0.999944551f, 0.999945103f, 0.999945649f, 0.99994619f,
  0.999946726f, 0.999947256f, 0.99994778f, 0.9999483f,
  0.999948814f, 0.999949324f, 0.999949828f, 0.999950327f,
  0.999950821f, 0.999951311f, 0.999951795f, 0.999952275f,
  0.999952749f, 0.99995322f, 0.999953685f, 0.999954146f,
  0.999954602f
};
}  // namespace tesseract
