#pragma once
#ifndef AeroData_1
#define AeroData_1

//=========================================================================//
//
//		FILE NAME	: AeroData_1.h
//		AUTHOR		: Paul Stich
//		Copyright	: Paul Stich
//		DATE		: August 2021
//
//		DESCRIPTION	:	All aerodynamic and other data (engine etc.) 
//						as well as constants and measurements
//
//================================ Includes ===============================//
//=========================================================================//
//-------------------------------
//Alle Koeffizienten, Derivate und Abmessungen kommen in diese Datei jeweils eingeleitet mit #define um sie den Formeln in der *-cpp Datei zug�nglich zu machen
//-------------------------------


//---------Lift und Dragwerte-----
//---------CD zu Mach und CDmin Werte-------
#define DAT_CDmin {0.0143, 0.0143, 0.0143, 0.0143, 0.0144, 0.0144, 0.0145, 0.015, 0.0161, 0.0174, 0.019, 0.0208, 0.0231, 0.0258, 0.0284, 0.0317, 0.0356, 0.0399, 0.044, 0.0476, 0.0472, 0.0453, 0.044, 0.0428, 0.042, 0.0417, 0.0414,}
#define CON_CDminmin 0.4826 //min Mach Airspeed = the speed for the first value in the column above
#define CON_CDminmax 2.0111 //max Mach Airspeed = the speed for the last value in the column above

#define DAT_CDmach_SL {0.0986, 0.0911, 0.0834, 0.0752, 0.0681, 0.0606, 0.0552, 0.0501, 0.0449, 0.0402, 0.0359, 0.0324, 0.0295, 0.0269, 0.0245, 0.0223, 0.0204, 0.0187, 0.0174, 0.0165, 0.0159, 0.0155, 0.016, 0.0174, 0.019, 0.0212, 0.0236, 0.0266, 0.0299, 0.0333, 0.0373, 0.0412, 0.0453, 0.0478, 0.0474, 0.0458, 0.0441, 0.0429, 0.0421, 0.0417, 0.0413,} 
#define CON_CDmach_SLmin 0.2975
#define CON_CDmach_SLmax 1.9862

#define DAT_CDmach_35 {0.1173, 0.1021, 0.0932, 0.0847, 0.0793, 0.0725, 0.0671, 0.0618, 0.0571, 0.0522, 0.0486, 0.0437, 0.0407, 0.0374, 0.0343, 0.032, 0.0342, 0.0394, 0.0444, 0.0492, 0.0539, 0.0533, 0.0508, 0.0484, 0.0461, 0.0443, 0.0435,}
#define CON_CDmach_35min 0.59997
#define CON_CDmach_35max 1.9633

#define DAT_CDmach_55 {0.1323, 0.1229, 0.1142, 0.1045, 0.096, 0.0878, 0.0796, 0.0721, 0.0679, 0.0631, 0.0578, 0.0536, 0.0498, 0.0459,}
#define CON_CDmach_55min 1.0013
#define CON_CDmach_55max 2.1252

//---------CD zu Alpha-----------------------
#define DAT_CDa_SL {0.8522, 0.8492, 0.8173, 0.776, 0.7244, 0.67, 0.615, 0.5579, 0.5012, 0.4503, 0.3982, 0.3492, 0.3111, 0.2799, 0.2523, 0.2273, 0.2055, 0.1854, 0.1682, 0.151, 0.1369, 0.1241, 0.1112, 0.1, 0.0914, 0.0844, 0.0769, 0.0716, 0.068, 0.0657, 0.0638, 0.0619, 0.0621, 0.0616, 0.063, 0.0638, 0.067, 0.0726, 0.0768,}
#define CON_CDa_SLmin 0.305  
#define CON_CDa_SLmax 1.1199

#define DAT_CDa_35 {0.9731, 0.9322, 0.8925, 0.8423, 0.798, 0.7557, 0.7232, 0.6952, 0.6575, 0.6252, 0.5955, 0.5679, 0.5409, 0.5259, 0.5104, 0.4953, 0.487, 0.4798, 0.4733, 0.4617, 0.4523, 0.4438, 0.4318, 0.4154, 0.4063, 0.3977, 0.389, 0.3795, 0.3706, 0.3595, 0.3479, 0.3405, 0.3275, 0.3188, 0.3105, 0.3026, 0.293, 0.2866, 0.2741, 0.2609, 0.2526, 0.2453, 0.2378, 0.2301, 0.2225, 0.2119, 0.1998, 0.1931, 0.1848, 0.1781, 0.1688, 0.1636,}
#define CON_CDa_35min 0.5487
#define CON_CDa_35max 1.8053

#define DAT_CDa_45 {0.8989, 0.8685, 0.846, 0.8133, 0.787, 0.7653, 0.7349, 0.7109, 0.6886, 0.6635, 0.6355, 0.6128, 0.585, 0.559, 0.5365, 0.5024, 0.4817, 0.4603, 0.4421, 0.4185, 0.405, 0.3882, 0.3721, 0.3605, 0.3471, 0.3344, 0.3253, 0.3156, 0.3062, 0.2957, 0.2839, 0.2744, 0.2652, 0.2548, 0.2459, 0.239, 0.2228, 0.2136, 0.2055, 0.1987, 0.1905, 0.1817, 0.1772, 0.1688, 0.165, 0.1553, 0.1489,}
#define CON_CDa_45min 0.9488
#define CON_CDa_45max 2.0535

//-------Engine CD----------------------------
#define DAT_CDeng {0.0155, 0.0155, 0.0154, 0.0154, 0.0153, 0.0152, 0.0152, 0.0151, 0.0151, 0.0151, 0.015, 0.015, 0.0142, 0.0138, 0.0134, 0.013, 0.0124, 0.011, 0.009, 0.0075, 0.0064, 0.006, 0.006, 0.007, 0.008,}
#define CON_CDengmin 0.001
#define CON_CDengmax 2.40

//-------CL zu Mach und CLmax Werte----------
#define DAT_CLmax {0.804, 0.7889, 0.7774, 0.7713, 0.7615, 0.758, 0.7547, 0.7507, 0.7444, 0.7376, 0.7296, 0.7211, 0.7133, 0.7144, 0.7215, 0.7391, 0.7839, 0.8507, 0.9279, 1.0104,}
#define CON_CLmaxmin 0.2011
#define CON_CLmaxmax 0.9594

#define DAT_CLmach_SL {0.9457, 0.875, 0.8081, 0.7356, 0.671, 0.6073, 0.5535, 0.5017, 0.4553, 0.4141, 0.3756, 0.3404, 0.3096, 0.281, 0.2552, 0.2316, 0.2101, 0.1909, 0.1734, 0.1578, 0.143, 0.1295, 0.1179, 0.1065, 0.0962, 0.0864, 0.0787, 0.0709, 0.0646, 0.0585, 0.0529, 0.0486, 0.045, 0.0414, 0.0385,}
#define CON_CLmach_SLmin 0.2484
#define CON_CLmach_SLmax 1.253

#define DAT_CLmach_35 {0.8963, 0.8254, 0.7587, 0.6929, 0.6401, 0.5889, 0.5345, 0.4767, 0.4226, 0.3807, 0.3457, 0.3131, 0.2791, 0.2476, 0.2238, 0.1994, 0.1801, 0.1644, 0.149, 0.1353, 0.1224, 0.1124, 0.1033, 0.0939, 0.0837, 0.0753, 0.0678, 0.0615, 0.0563,}
#define CON_CLmach_35min 0.526
#define CON_CLmach_35max 2.0636

#define DAT_CLmach_55 {0.9916, 0.9215, 0.8286, 0.7475, 0.684, 0.6272, 0.5763, 0.528, 0.4657, 0.423, 0.385, 0.3509, 0.3182, 0.2886, 0.2648, 0.2426, 0.2238, 0.2075, 0.1826, 0.1654, 0.15, 0.1362, 0.1239, 0.1156, 0.1071,}
#define CON_CLmach_55min 0.8049
#define CON_CLmach_55max 2.4511

//-------CL zu Alpha Werte----------------
#define DAT_CLa {2.028, 2.283, 2.5, 2.782, 3.104, 3.402, 3.676, 3.826, 3.874, 3.882, 3.895, 3.9, 3.922, 3.959, 3.996, 4.043, 4.112, 4.17, 4.189, 4.19, 4.176, 4.154, 4.12, 4.091, 4.045, 3.986, 3.954, 3.938, 3.959, 3.981, 4.043, 4.158, 4.348, 4.607, 4.881, 5.022, 5.026, 5.008, 4.967, 4.918, 4.856, 4.794, 4.745, 4.647, 4.579, 4.51, 4.438, 4.37, 4.3, 4.231, 4.163, 4.092, 4.024, 3.958, 3.886, 3.81, 3.751, 3.68, 3.61, 3.541, 3.47, 3.402, 3.336, 3.264, 3.197, 3.128, 3.058, 2.986, 2.919, 2.844, 2.778, 2.708, 2.635, 2.564, 2.498, 2.451, 2.41,}
#define CON_CLamin 0.271
#define CON_CLamax 2.018

//-------CL wegen H-Stabilizer---------------
#define DAT_CLds {0.715, 0.714, 0.712, 0.71, 0.708, 0.707, 0.705, 0.708, 0.716, 0.725, 0.743, 0.755, 0.768, 0.78, 0.782, 0.787, 0.795, 0.802, 0.811, 0.82, 0.831, 0.844, 0.859, 0.878, 0.897, 0.912, 0.92, 0.926, 0.925, 0.919, 0.902, 0.884, 0.865, 0.844, 0.821, 0.8, 0.773, 0.754, 0.741, 0.724, 0.705, 0.688, 0.67, 0.654, 0.641, 0.621, 0.601, 0.587, 0.573, 0.564, 0.552, 0.544, 0.534, 0.522, 0.51, 0.501, 0.488, 0.477, 0.468, 0.459, 0.449, 0.442, 0.433, 0.428, 0.42, 0.413, 0.405, 0.399, 0.392, 0.385, 0.379, 0.374, 0.371,}
#define CON_CLdsmin 0.289
#define CON_CLdsmax 2.027

//---------Ende Lift und Drag Werte

//---------Rollachsen Werte
//---------Clb Rollwert wegen Beta (Sidedrift)----------
#define DAT_Clb_SL {-0.155, -0.159, -0.162, -0.166, -0.169, -0.17, -0.17, -0.17, -0.168, -0.167, -0.165, -0.164, -0.16, -0.158, -0.155, -0.153, -0.148, -0.144, -0.141, -0.137, -0.135, -0.132, -0.13, -0.129, -0.129, -0.133, -0.139, -0.146, -0.156, -0.164, -0.172, -0.177, -0.181, -0.183, -0.184, -0.184, -0.183, -0.182,}
#define CON_Clb_SLmin 0.26
#define CON_Clb_SLmax 1.116

#define DAT_Clb_35 {-0.161, -0.167, -0.171, -0.173, -0.174, -0.173, -0.17, -0.167, -0.162, -0.161, -0.161, -0.163, -0.166, -0.17, -0.176, -0.183, -0.188, -0.191, -0.193, -0.194, -0.194, -0.193, -0.192, -0.189, -0.187, -0.184, -0.18, -0.177, -0.174, -0.171, -0.167, -0.164, -0.16, -0.155, -0.152, -0.148, -0.145, -0.141, -0.137, -0.133, -0.13, -0.125, -0.121, -0.117, -0.113, -0.109, -0.105, -0.102, -0.097, -0.094, -0.089, -0.085, -0.081, -0.077, -0.073, -0.069, -0.065, -0.062, -0.058, -0.055,}
#define CON_Clb_35min 0.599
#define CON_Clb_35max 2.019

//---------Clp Rollwerte bzw. Rolld�mpfung--------------
#define DAT_Clp_SL {-0.1197, -0.1417, -0.1642, -0.189, -0.2159, -0.2435, -0.2696, -0.2944, -0.3154, -0.3301, -0.3381, -0.3416, -0.3402, -0.3363, -0.3325, -0.3292, -0.327, -0.3234, -0.3213, -0.3201, -0.3188, -0.3196, -0.3218, -0.3262, -0.3296, -0.3343, -0.34, -0.3449, -0.3507, -0.3566, -0.3624, -0.367, -0.3697, -0.3696, -0.3682, -0.3666,}
#define CON_Clp_SLmin 0.289
#define CON_Clp_SLmax 1.1212

#define DAT_Clp_35 {-0.089, -0.1076, -0.1371, -0.1629, -0.1891, -0.2153, -0.2365, -0.2604, -0.2894, -0.3161, -0.3367, -0.3517, -0.3628, -0.3771, -0.3901, -0.3966, -0.4009, -0.4086, -0.4169, -0.4215, -0.4224, -0.4186, -0.4127, -0.4067, -0.3994, -0.3911, -0.3841, -0.3775, -0.3713, -0.3629, -0.3547, -0.3488, -0.3436, -0.3388, -0.334, -0.3295, -0.3253, -0.3215, -0.3182, -0.3134, -0.3076, -0.304, -0.3005, -0.2977, -0.2948, -0.2914, -0.2885, -0.2849, -0.2829, -0.2804, -0.2773, -0.2741, -0.2707, -0.2681, -0.2653, -0.2634, -0.2602, -0.258,}
#define CON_Clp_35min 0.5933
#define CON_Clp_35max 2.0334

//--------Clda Rollwerte wegen aileron (Querruder) Ausschlag (rechts + links addiert)
#define DAT_Clda {0.03, 0.0305, 0.0308, 0.0315, 0.0325, 0.0335, 0.0351, 0.0371, 0.0388, 0.0399, 0.0405, 0.0411, 0.0421, 0.0431, 0.0435, 0.044, 0.0439, 0.0437, 0.0435, 0.0434, 0.0432, 0.0431, 0.0429, 0.0428, 0.0427, 0.0426, 0.0426, 0.0425, 0.0425, 0.0425, 0.0426, 0.0427, 0.0428, 0.043, 0.0434, 0.0438, 0.0437, 0.0429, 0.0415, 0.0398, 0.0383, 0.0367, 0.0353, 0.034, 0.0331, 0.0322, 0.0313, 0.0304, 0.0293, 0.0283, 0.0274, 0.0265, 0.0255, 0.0246, 0.0238, 0.0231, 0.0224, 0.0218, 0.0211, 0.0205, 0.0198, 0.0191, 0.0186, 0.0181, 0.0177, 0.0172, 0.0169, 0.0166, 0.0163, 0.016, 0.0157, 0.0155, 0.0152, 0.015, 0.0147, 0.0145, 0.0144, 0.0142,}
#define CON_Cldamin 0.11
#define CON_Cldamax 2.0152

//--------Clr Rollwerte--------------
#define DAT_Clr_SL {0.2658, 0.2668, 0.2668, 0.2677, 0.2692, 0.27, 0.2713, 0.2724, 0.274, 0.275, 0.2759, 0.2768, 0.2782, 0.2792, 0.2809, 0.2821, 0.2836, 0.2853, 0.2963, 0.3113, 0.3297, 0.3507, 0.3702, 0.3874, 0.399, 0.4081, 0.4114,}
#define CON_Clr_SLmin 0.4575
#define CON_Clr_SLmax 1.1151

#define DAT_Clr_35 {0.2472, 0.2479, 0.2485, 0.2493, 0.2498, 0.2508, 0.2521, 0.2531, 0.2558, 0.2573, 0.2584, 0.2617, 0.2654, 0.271, 0.2762, 0.283, 0.2935, 0.3067, 0.3175, 0.3296, 0.3408, 0.3469, 0.3492, 0.3462, 0.3337, 0.3194, 0.3028, 0.2853, 0.2667, 0.2513, 0.2368, 0.2236, 0.2112, 0.2012, 0.192, 0.1839, 0.1773, 0.1718, 0.1668, 0.1624, 0.1583, 0.1546, 0.1517, 0.149, 0.145, 0.1424, 0.1406, 0.1385, 0.1363, 0.1344, 0.1325, 0.1312, 0.1312, 0.1281, 0.1269, 0.1251, 0.1232,}
#define CON_Clr_35min 0.5832
#define CON_Clr_35max 2.0681

//--------Cldr Rollwerte wegen Seitenruder-------------
#define DAT_Cldr_SL {0.0173, 0.019, 0.0209, 0.0233, 0.0258, 0.0283, 0.0307, 0.0327, 0.0342, 0.0356, 0.0368, 0.0378, 0.0387, 0.0393, 0.0398, 0.0401, 0.0402, 0.0402, 0.0401, 0.0398, 0.0396, 0.0392, 0.0388, 0.0382, 0.0377, 0.0371, 0.0363, 0.0357, 0.035, 0.0343, 0.0336, 0.0329, 0.0322, 0.0315, 0.0308, 0.03, 0.0293, 0.0288, 0.028,}
#define CON_Cldr_SLmin 0.2947
#define CON_Cldr_SLmax 1.1198

#define DAT_Cldr_35 {0.013, 0.0149, 0.0168, 0.0192, 0.0215, 0.0233, 0.0249, 0.0261, 0.0274, 0.0284, 0.0289, 0.0291, 0.0293, 0.0293, 0.0291, 0.0289, 0.0285, 0.0282, 0.0275, 0.0266, 0.0259, 0.0251, 0.0243, 0.0235, 0.0226, 0.0217, 0.0209, 0.0201, 0.0194, 0.0184, 0.0176, 0.0169, 0.0161, 0.0154, 0.0148, 0.0141, 0.0136, 0.013, 0.0126, 0.012, 0.0116, 0.0113, 0.0109, 0.0107, 0.0104, 0.0102, 0.01, 0.0097, 0.0096, 0.0094, 0.0092, 0.0089, 0.0087, 0.0088, 0.0086, 0.0084, 0.0083, 0.0081, 0.008, 0.0079, 0.0076, 0.0073,}
#define CON_Cldr_35min 0.5897
#define CON_Cldr_35max 2.0282
//--------------Ende Rollachse------------

//-------------Yaw Achse------------------
//-------------Cnb Yaw Werte-----------
#define DAT_Cnb_SL {0.1761, 0.215, 0.2606, 0.2985, 0.3366, 0.3547, 0.3624, 0.3642, 0.3632, 0.3591, 0.3535, 0.3466, 0.3383, 0.3292, 0.3193, 0.3132, 0.306, 0.2995, 0.2935, 0.2898, 0.2869, 0.2861, 0.285, 0.2857, 0.2875, 0.2915, 0.2976, 0.3035, 0.3145, 0.3282, 0.3405, 0.3549, 0.3709, 0.3873, 0.4053, 0.424, 0.4421, 0.4611, 0.4756,}
#define CON_Cnb_SLmin 0.26
#define CON_Cnb_SLmax 1.1127

#define DAT_Cnb_35 {0.2634, 0.2913, 0.312, 0.3298, 0.3403, 0.3453, 0.3466, 0.3476, 0.3484, 0.35, 0.3525, 0.3561, 0.3592, 0.3643, 0.3673, 0.3776, 0.3879, 0.3974, 0.4079, 0.422, 0.4388, 0.4575, 0.4759, 0.501, 0.5202, 0.5252, 0.5226, 0.5134, 0.5025, 0.485, 0.4706, 0.4579, 0.4485, 0.439, 0.4315, 0.4234, 0.4166, 0.4106, 0.4047, 0.3975, 0.389, 0.3786, 0.3671, 0.3523, 0.3389, 0.3269, 0.3112, 0.293, 0.2815, 0.2706, 0.2602, 0.2507, 0.2415, 0.235, 0.2255, 0.2149, 0.2037, 0.1977, 0.19, 0.1828, 0.1763, 0.1698, 0.1615, 0.1544, 0.1451,}
#define CON_Cnb_35min 0.5268
#define CON_Cnb_35max 2.0677

//------------Cndr Yaw wegen Ruder-----------
#define DAT_Cndr {-0.1841, -0.1833, -0.1838, -0.1836, -0.1834, -0.183, -0.1825, -0.182, -0.1819, -0.1814, -0.1813, -0.1808, -0.1804, -0.1793, -0.1789, -0.1775, -0.176, -0.1741, -0.171, -0.1682, -0.1643, -0.1601, -0.1557, -0.1514, -0.147, -0.1425, -0.1381, -0.1336, -0.1291, -0.1256, -0.1215, -0.118, -0.1142, -0.1106, -0.1071, -0.1039, -0.1006, -0.0976, -0.0945, -0.0909, -0.0887, -0.0861, -0.0836, -0.0808, -0.0782, -0.0751, -0.0728, -0.0705, -0.0684, -0.0665, -0.0647, -0.0627, -0.061, -0.0595, -0.0579, -0.0563, -0.0547, -0.0528, -0.0514, -0.0507, -0.0495, -0.0487, -0.0476, -0.0466, -0.0459, -0.0454, -0.0442, -0.0437, -0.0429, -0.0423, -0.0421, -0.0412, -0.0406, -0.04, -0.0398, -0.0392, -0.0384, -0.0383, -0.0387, -0.0374, -0.037,}
#define CON_Cndrmin 0.1715
#define CON_Cndrmax 2.0385

//------------Cnr Yaw Werte-----------------
#define DAT_Cnr {-0.7491, -0.7488, -0.7501, -0.7519, -0.7521, -0.7547, -0.7567, -0.7593, -0.7626, -0.7665, -0.772, -0.7759, -0.7798, -0.7859, -0.7925, -0.8003, -0.8068, -0.8145, -0.8256, -0.8353, -0.8507, -0.8702, -0.8918, -0.9286, -0.9741, -1.0266, -1.0801, -1.1332, -1.1725, -1.1956, -1.2017, -1.1893, -1.167, -1.1377, -1.096, -1.0343, -0.9851, -0.939, -0.8952, -0.8557, -0.8203, -0.7902, -0.765, -0.7455, -0.7292, -0.7147, -0.7023, -0.6939, -0.6874, -0.6817, -0.6759, -0.6716, -0.6666, -0.6629, -0.6595, -0.6542, -0.6502, -0.6485, -0.6457, -0.6422, -0.6368, -0.6333, -0.6292, -0.6243, -0.6221, -0.6212,}
#define CON_Cnrmin 0.3858
#define CON_Cnrmax 2.0373

//---------- CyBeta Yaw Werte-----------------
#define DAT_Cyb {-0.957, -0.99, -1.021, -1.041, -1.051, -1.064, -1.085, -1.101, -1.114, -1.127, -1.134, -1.141, -1.134, -1.126, -1.122, -1.118, -1.113, -1.114, -1.107, -1.112, -1.12, -1.131, -1.15, -1.17, -1.195, -1.229, -1.262, -1.297, -1.337, -1.372, -1.393, -1.411, -1.412, -1.418, -1.417, -1.413, -1.406, -1.396, -1.389, -1.378, -1.358, -1.33, -1.314, -1.297, -1.278, -1.254, -1.228, -1.219, -1.203, -1.187, -1.168, -1.151, -1.13, -1.113, -1.1, -1.083, -1.073, -1.056, -1.04, -1.033, -1.023, -1.015, -0.993, -0.967, -0.96, -0.956,}
#define CON_Cybmin 0.285
#define CON_Cybmax 2.016

//----------Cydr Yaw Werte------------------
#define DAT_Cydr {0.241, 0.239, 0.239, 0.238, 0.238, 0.238, 0.237, 0.236, 0.235, 0.234, 0.233, 0.232, 0.23, 0.227, 0.224, 0.219, 0.217, 0.213, 0.208, 0.203, 0.197, 0.191, 0.185, 0.179, 0.172, 0.166, 0.16, 0.154, 0.149, 0.144, 0.139, 0.134, 0.129, 0.124, 0.119, 0.115, 0.111, 0.107, 0.103, 0.099, 0.096, 0.092, 0.089, 0.086, 0.083, 0.08, 0.077, 0.074, 0.072, 0.07, 0.068, 0.066, 0.064, 0.062, 0.061, 0.059, 0.058, 0.057, 0.056, 0.054, 0.053, 0.052, 0.051, 0.051, 0.05, 0.048, 0.048, 0.047, 0.046, 0.045, 0.045, 0.044, 0.044,}
#define CON_Cydrmin 0.201
#define CON_Cydrmax 2.049

//------------Ende Yawachse-----------------

//-----------Pitch-Achse------------------------
//-----------Cma Pitch Werte--------------------
#define DAT_Cma_SL {-1.092, -1.086, -1.082, -1.071, -1.051, -1.023, -0.992, -0.958, -0.917, -0.88, -0.847, -0.795, -0.732, -0.71, -0.837, -0.987, -1.131, -1.265, -1.369, -1.5, -1.603, -1.682, -1.731, -1.766, -1.78,}
#define CON_Cma_SL_min 0.602
#define CON_Cma_SL_max 1.115

#define DAT_Cma_full {-1.092, -1.086, -1.082, -1.071, -1.051, -1.023, -0.992, -0.958, -0.917, -0.88, -0.847, -0.795, -0.732, -0.71, -0.837, -0.987, -1.131, -1.265, -1.369, -1.5, -1.603, -1.722, -1.785, -1.844, -1.922, -1.977, -2.009, -2.024, -2.042, -2.045, -2.043, -2.034, -2.019, -2.006, -1.97, -1.933, -1.902, -1.866, -1.828, -1.789, -1.752, -1.709, -1.653, -1.59, -1.539, -1.496, -1.447, -1.396, -1.357, -1.298, -1.237, -1.182, -1.13, -1.071, -1.024, -0.967, -0.909, -0.845, -0.788, -0.745,}
#define CON_Cma_full_min 0.602
#define CON_Cma_full_max 2.005

#define DAT_Cma_35 {-0.864, -0.958, -1.064, -1.141, -1.212, -1.257, -1.309, -1.337, -1.348, -1.323, -1.281, -1.22, -1.206, -1.265, -1.341, -1.412, -1.512, -1.601, -1.697, -1.771, -1.822, -1.868, -1.907, -1.943, -1.977, -2.009, -2.024, -2.042, -2.045, -2.043, -2.034, -2.019, -2.006, -1.97, -1.933, -1.902, -1.866, -1.828, -1.789, -1.752, -1.709, -1.653, -1.59, -1.539, -1.496, -1.447, -1.396, -1.357, -1.298, -1.237, -1.182, -1.13, -1.071, -1.024, -0.967, -0.909, -0.845, -0.788, -0.745,}
//-----------CmaDot Pitch Werte-----------------
#define DAT_Cmadot_SL {-3.355, -3.216, -3.075, -2.866, -2.685, -2.519, -2.385, -2.284, -2.224, -2.212, -2.216, -2.271, -2.351, -2.455, -2.543, -2.664, -2.79, -2.934, -3.063, -3.237, -3.397, -3.57, -3.744, -3.963, -4.206, -4.503, -4.769, -4.812, -4.547, -4.064, -3.612, -3.263, -2.916, -2.6, -2.325, -2.196, -2.051, -1.925, -1.824, -1.739, -1.669, -1.605, -1.558, -1.505, -1.47, -1.446, -1.433, -1.422, -1.437, -1.449, -1.472, -1.521, -1.564, -1.61, -1.661, -1.725, -1.785, -1.861, -1.932, -2.079, -2.214, -2.309, -2.406, -2.559, -2.689, -2.831, -2.949, -3.074,}
#define CON_Cmadot_SL_min 0.35
#define CON_Cmadot_SL_max 2.009

#define DAT_Cmadot_35 {-5.583, -5.441, -5.31, -5.193, -5.038, -4.91, -4.814, -4.73, -4.671, -4.7, -4.745, -4.826, -4.966, -5.122, -5.296, -5.478, -5.646, -5.544, -5.168, -4.663, -4.056, -3.518, -3.157, -2.82, -2.529, -2.322, -2.151, -2.019, -1.907, -1.831, -1.724, -1.653, -1.598, -1.552, -1.498, -1.448, -1.453, -1.448, -1.434, -1.442, -1.467, -1.508, -1.551, -1.592, -1.646, -1.703, -1.771, -1.839, -1.942, -2.034, -2.158, -2.269, -2.45, -2.57, -2.7, -2.844, -2.974, -3.086,}
//-----------Cmde Pitch Werte wegen H�henruder-------
#define DAT_Cmde_SL {-1.4, -1.399, -1.398, -1.397, -1.395, -1.391, -1.387, -1.386, -1.377, -1.37, -1.366, -1.358, -1.349, -1.34, -1.328, -1.316, -1.308, -1.296, -1.29, -1.283, -1.272, -1.267, -1.264, -1.26, -1.261, -1.263, -1.271, -1.283, -1.289, -1.279, -1.268, -1.25, -1.23, -1.205, -1.172, -1.131, -1.087, -1.028,}
#define CON_Cmde_SL_min 0.294
#define CON_Cmde_SL_max 1.115

#define DAT_Cmde_full {-0.21, -0.41, -0.55, -0.71, -0.91, -1.05, -1.18, -1.28, -1.37, -1.39, -1.4, -1.399, -1.398, -1.397, -1.395, -1.391, -1.387, -1.388, -1.391, -1.399, -1.422, -1.447, -1.468, -1.487, -1.507, -1.522, -1.528, -1.539, -1.548, -1.561, -1.572, -1.591, -1.611, -1.631, -1.655, -1.679, -1.709, -1.748, -1.776, -1.789, -1.788, -1.773, -1.756, -1.734, -1.71, -1.681, -1.651, -1.618, -1.592, -1.535, -1.493, -1.449, -1.414, -1.381, -1.348, -1.315, -1.283, -1.254, -1.227, -1.203, -1.17, -1.136, -1.116, -1.099, -1.084, -1.051, -1.033, -1.013, -0.993, -0.971, -0.957, -0.936, -0.919, -0.902, -0.887, -0.87, -0.854, -0.84, -0.826, -0.811, -0.799, -0.782, -0.764, -0.753, -0.738, -0.727, -0.72, -0.712, }
#define CON_Cmde_full_min 0.094
#define CON_Cmde_full_max 2.006

#define DAT_Cmde_35 {-1.447, -1.468, -1.487, -1.507, -1.522, -1.528, -1.539, -1.548, -1.561, -1.572, -1.591, -1.611, -1.631, -1.655, -1.679, -1.709, -1.748, -1.776, -1.789, -1.788, -1.773, -1.756, -1.734, -1.71, -1.681, -1.651, -1.618, -1.592, -1.535, -1.493, -1.449, -1.414, -1.381, -1.348, -1.315, -1.283, -1.254, -1.227, -1.203, -1.17, -1.136, -1.116, -1.099, -1.084, -1.051, -1.033, -1.013, -0.993, -0.971, -0.957, -0.936, -0.919, -0.902, -0.887, -0.87, -0.854, -0.84, -0.826, -0.811, -0.799, -0.782, -0.764, -0.753, -0.738, -0.727, -0.72, -0.712,}
//-----------CmM Pitch Werte------------------------
#define DAT_CmM {-0.014, -0.014, -0.014, -0.015, -0.016, -0.015, -0.014, -0.014, -0.013, -0.011, -0.007, -0.001, 0.024, 0.059, 0.093, 0.126, 0.161, 0.184, 0.213, 0.25, 0.282, 0.322, 0.352, 0.382, 0.411, 0.438, 0.423, 0.398, 0.371, 0.346, 0.319, 0.292, 0.262, 0.232, 0.205, 0.176, 0.148, 0.124, 0.098, 0.071, 0.046, 0.021, 0.002, -0.02, -0.043, -0.067, -0.096, -0.122, -0.142, -0.158, -0.174, -0.186, -0.191, -0.181, -0.153, -0.125, -0.097, -0.071, -0.044, -0.022, -0.01, -0.008, -0.008, -0.009, -0.009, -0.009, -0.008, -0.008, -0.009, -0.01, -0.01, -0.01, -0.01, -0.01, -0.01, -0.012, -0.012, -0.012, -0.011, -0.011, -0.011, -0.011, -0.01, -0.01,}
//-----------Cmq Pitch Werte------------------------
#define DAT_Cmq {-5.636, -5.684, -5.734, -5.787, -5.854, -5.907, -5.963, -6.017, -6.069, -6.131, -6.193, -6.269, -6.344, -6.422, -6.501, -6.594, -6.667, -6.765, -6.887, -6.989, -7.098, -7.218, -7.344, -7.491, -7.646, -7.852, -8.127, -8.507, -8.92, -8.993, -8.913, -8.751, -8.629, -8.615, -8.741, -8.859, -8.795, -8.58, -8.268, -7.986, -7.759, -7.556, -7.365, -7.163, -7.005, -6.846, -6.691, -6.549, -6.407, -6.275, -6.149, -6.021, -5.908, -5.816, -5.695, -5.609, -5.504, -5.413, -5.325, -5.244, -5.158, -5.076, -5.008, -4.944, -4.88, -4.818, -4.743, -4.686, -4.631, -4.59, -4.551, -4.514, -4.483, -4.457, -4.438,}
#define CON_Cmq_min 0.189
#define CON_Cmq_max 2.018

//-----------Ende Pitchachsenwerte-----------------
//-----------Ende Data bzw. Coeffizienten-Liste------
//-----------Beginn Engine Data---------------------
#define DAT_PMax {75112, 76225, 76228, 76350, 76448, 75441, 72115, 68552, 63221, 58771, 52112, 48771, 46887, 45221, 44858, 44571, 42858, 41715, 40995, 40125, 39225, 38774, 36552, 35441, 33221, 30995, 28554, 26551, 24112, 22115, 19554,}
#define CON_PMaxmin 0.01 //Mach Airspeed
#define CON_PMaxmax 3.0

#define DAT_PFor {98115, 99552, 103445, 106887, 110022, 112557, 114228, 117552, 121225, 125441, 126587, 129721, 134851, 139885, 143552, 147885, 155225, 160123, 162551, 165228, 168001, 169001, 168558, 145110, 100550, 55440, 41225, 34750, 34750, 34750, 34750,} 
#define CON_PFormin 0.01
#define CON_PFormax 3.0 //Mach airspeed at SL

//-------------MISC Data------------------------------------
//------------corrected AirDensity as Thrust multiplyer------
#define DAT_CADen {0.465, 0.46, 0.455, 0.445, 0.43, 0.41, 0.39, 0.375, 0.35, 0.33, 0.3, 0.27, 0.22, 0.18, 0.13, 0.08, 0.01,}
#define CON_CADenMin 0.19
#define CON_CADenMax 0.88
//------------spooling up/down Delta-Values (OLD)------------------
#define DAT_EngDel {1.0, 0.88, 0.7, 0.6, 0.45, 0.33528009, 0.23228886, 0.16093444, 0.11149865, 0.07724853, 0.05351935, 0.03707930, 0.02568929, 0.01779806, 0.01233086, 0.00854307, 0.00591881, 0.00410067, 0.00284103, 0.00196832, 0.00136369, 0.00094480, 0.00065457, 0.00045350, 0.00031420, 0.00021768, 0.00015081, 0.00010449, 0.00007239, 0.00005015, 0.00003475, 0.00002407, 0.00001668, 0.00001156, 0.00000801, 0.00000555, 0.00000384, 0.00000266, 0.00000184, 0.00000128, 0.00000089, 0.00000061, 0.00000042, 0.00000029, 0.00000020, 0.00000014, 0.00000010, 0.00000007, 0.00000005, 0.00000003, 0.00000002, 0.00000002, 0.00000001,}
#define CON_EngDelMin 0.01
#define CON_EngDelMax 0.70
//------------Pitch-UP and Stall Data------------------------
//------------Pitch-UP---------------------------------------
#define DAT_PitchMult {0.98927889, 0.88411148, 0.79012412, 0.70612828, 0.6310618, 0.56397543, 0.50402081, 0.4504398, 0.40255484, 0.35976038, 0.32151529, 0.28733592, 0.25679006, 0.22949144, 0.20509486, 0.18329181, 0.16380658, 0.14639278, 0.13083018, 0.116922, 0.10449235, 0.09338407, 0.08345668, 0.07458464, 0.06665576, 0.05956977, 0.05323708, 0.0475776, 0.04251976, 0.03799961,}
#define CON_PitMulMin 0.1
#define CON_PitMulMax 3.0

#define DAT_PitchAoA {0.087984804, 0.091978441, 0.09615335, 0.100517759, 0.105080268, 0.10984987, 0.114835965, 0.120048379, 0.125497385, 0.131193722, 0.137148615, 0.143373802, 0.149881551, 0.156684687, 0.163796618, 0.17123136, 0.179003566, 0.187128552, 0.195622333, 0.204501646, 0.213783993, 0.223487666, 0.23363179, 0.244236356, 0.255322264, 0.266911363, 0.279026492, 0.291691527, 0.30493143, 0.318772293, 0.333241393, 0.348367248, 0.364179666, 0.380709811, 0.397990261, 0.416055072, 0.434939846, 0.454681801, 0.475319846, 0.496894653, 0.519448742, 0.543026563, 0.567674584, 0.59344138, 0.620377733, 0.64853673, 0.677973866, 0.708747155, 0.740917247, 0.774547542, 0.809704319,}
#define CON_PitAoAMin 0.151
#define CON_PitAoAMax 0.240
//------------Stall------------------------------------------
#define DAT_StallAoA {0.40571999, 0.42602258, 0.44734113, 0.46972648, 0.49323202, 0.51791379, 0.54383066, 0.57104443, 0.59962, 0.62962553, 0.66113255, 0.69421622, 0.72895542, 0.765433, 0.80373595, 0.84395561, 0.88618791, 0.93053354, 0.97709827, 1.02599315, 1.07733476, 1.13124556, 1.1878541, 1.24729538, 1.30971115, 1.37525027, 1.44406903, 1.51633153, 1.59221012, 1.67188574, 1.75554839, 1.84339761, 1.93564287, 2.03250417, 2.1342125, 2.2410104, 2.35315257, 2.47090643, 2.59455279,}
#define CON_StAoAMin 0.2533
#define CON_StAoAMax 0.4511

//---------Abmessungen und feststehende Gr��en F-104---------

//----thrust and engine-----
#define CON_p_max 44.44 //kN dry thrust
#define CON_p_for 63.86 //kN AB thrust 
#define CON_CeMax 0.85 // kg/s voll Millpower SL
#define CON_FFMax 191.0 // lbs/h/kN bei voll MilPower
#define CON_CeFor 1.112 // kg/s voll AB-Power SL
#define CON_FFAb  441 //lbs/h/kN bei voll AB-Power
#define CON_FuCoMil 190.8 //lbs/kN/h Mil-Power fuel consumption
#define CON_FuCoAB 439.2 //lbs/kN/h AB-Power fuel consumption
#define CON_ThrotIDL 0.55 //correction-factor for Throttle
#define CON_ThrToRPM 0.70// Throttle to RPM modifier 
#define CON_CDeng 0.015 //engine Drag gesch�tzt (immer dabei, nie aus)

//--------measurements fuselage-------------------
#define CON_lgt 16.69 // length in m
#define CON_hgt 4.11 //height in m
#define CON_fa 2.32 // frontal area in sqm
#define CON_ewe 6.390 // empty weight in kg
#define CON_gwe 9.980 // normal gross weight in kg
#define CON_mwe 13.054 // maximal takeoff weight in kg

//---------wing----------------------
#define CON_b 6.68  //wingspan (incl. fuselage) in m
#define CON_A 18.22 // wingarea in sqm
#define CON_AR 2.45 //aspect ratio wingspan�/wingarea
#define CON_roc 3.96 // wing root chord in m
#define CON_mac 2.91 // mean aerodynamic chord
#define CON_tic 1.49 // wing tip chord in m
#define CON_swb 18.1 //sweep-back-angle at 25% chord in degree
#define CON_e 0.815 //wing-efficiency factor aprox. NEU reduziert wegen WingShape
#define CON_pi 3.14159 //die Zahl Pi
#define CON_wda 0.81 // a f�r DELTA-Wave-Drag
#define CON_wdb 2.59 //b f�r DELTA-Wave-Drag
#define CON_Mcrit 0.90 //Mcrit f�r DELTA-Wave-Drag

//---------h and v stab-------------------
#define CON_wshs 3.63 // wingspan horizontal stab. in m
#define CON_wahs 4.48 // wing area horizontal stab. in sqm
#define CON_wavs 4.06 // wing area vertical stab. in sqm
#define CON_hstdUP 0.297 //H-Stab deflection BackStick in radians
#define CON_hstdDN -0.0873 // H-Stab deflection FrontStick in radians
#define CON_rdar 0.51 // rudder area in sqm
#define CON_RdDefGUR 0.105 //deflection Rudder in radians GearUP rudder right
#define CON_RdDefGUL -0.105 //deflection Rudder in radians GearUP rudder left
#define CON_RdDefGDR 0.349 //deflection Rudder in radians GearDown rudder right
#define CON_RdDefGDL -0.349 //deflection Rudder in radians GearDown rudder left

//-----------Flap and ailerons----------------- 
//-----------Flap and ailerons area and travel-----------

//-----------leading edge flaps--------------------------
#define CON_lefa 0.79 // leading edge flap area per side in sqm
#define CON_left0 0.00 // travel leading edge flap stage 0 
#define CON_left1 -0.105 //travel leading edge flap stage 1 in Radians
#define CON_left2 -0.209 //travel leading edge flap stage 2 in Radians 

//----------trailing edge flaps----------------------------
#define CON_tefa 1.07 // trailing edge flap area per side in sqm
#define CON_teft0 0.000 // trailing edge flap travel stage 0 in Radians
#define CON_teft1 -0.113 //trailing edge flap travel stage 1 in Radians
#define CON_teft2 -0.227 //trailing edge flap travel stage 2 in Radians

//----------ailerons----------------------------------------
#define CON_aia 0.88 // aileron area total in sqm
#define CON_aitnu 0.17 // aileron travel normal flight up (gear up) in radians
#define CON_aitnd -0.17 //aileron travel normal flight down (gear up) in radians
#define CON_aitgu 0.349 // aileron travel up gear down in radians
#define CON_aitgd -0.349 // aileron travel down gear down in Radians

//----------Drag and Lift for Flap,Brake and Chute------------------------
//----------Drag and Lift for Flaps and MAX-Speed----------------------------------------------------------
#define CON_FlpD1 0.0125 // Drag both Flaps Stage 1
#define CON_FlpD2 0.025 // Drag both flpas Stage 2
#define CON_FlpL0 0.000 // Lift both flpas in
#define CON_FlpL1 0.21 // Lift both flaps Stage 1
#define CON_FlpL2 0.42  // Lift both Flpas Stage 2
#define CON_FlL1MS 0.85 //Max-Speed for L1 Flaps in Mach
#define CON_FlL2MS 0.40 //Max-Speed for L2 Flaps in Mach

//---------Drag for Speed Brakes-------------------------------------------------------
#define CON_BrkD  0.075 // Drag of SpeedBrake
#define CON_BrkOut 1.0 //speed brake out
#define CON_BrkIn 0.0 //speed brake in
#define CON_BrkAngl 1.39 // 80� in Rad. bzgl. Ausfahrwinkel

//----------Drag for Brake Chute--------------------
#define CON_ChtD 0.55 //Drag Brake-Chute
#define CON_ChtOut 1.0 //Brake Chute out
#define CON_ChtIn 0.0 // Brake Chute in

//-----------Gear drag-------------------------------------------------------
#define CON_GrDD 0.065 //GearDown DRAG
#define CON_GrDT 0.033 // GearTravel Drag
#define CON_GrIn 0.000 // GearIn Drag

//-----------NSW Angle----------------------------------------------------
#define CON_NSWL 1.047 //60� in Rad + is left
#define CON_NSWR -1.047//60� in Rad - is right

//-----------fuel-----------------------------------------------------------
#define CON_fint 3.104 // fuel int. in kg (3.880 l * 0,8)
#define CON_fext 1.018 //fuel in ext. tank per Tank in kg
#define CON_fexch 1.80//fuel exchange in kg/s ext-tank to fuselage-tank
#define CON_fuelmin 15.0//min_fuel in tank
//-----------Ende der Abmessungen------------------------

//---------moments of inertia (Traegheitsmomente nach NASA standard)----------
#define CON_Ix 4811.79 // kg / qm ist 3549 slug / ft� 
#define CON_Iy 79465.84 //kg / qm ist 58611 slug / ft� 
#define CON_Iz 80900.3 // kg / qm ist 59669 slug / ft� 
//-------------------enviromental constants---------------------------------
#define CON_sDay_pr   101325.0 // Std. Day. Airpressure
#define CON_sDay_temp 16.97056275 // �C and eaquals sqrt
#define CON_sDay_den 1.225 // kg/m� Airdensity

#endif