#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F2120
// Address: 0x2f2120 - 0x2f2d78
void sub_002F2120_0x2f2120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2120_0x2f2120");
#endif

    switch (ctx->pc) {
        case 0x2f2120u: goto label_2f2120;
        case 0x2f2124u: goto label_2f2124;
        case 0x2f2128u: goto label_2f2128;
        case 0x2f212cu: goto label_2f212c;
        case 0x2f2130u: goto label_2f2130;
        case 0x2f2134u: goto label_2f2134;
        case 0x2f2138u: goto label_2f2138;
        case 0x2f213cu: goto label_2f213c;
        case 0x2f2140u: goto label_2f2140;
        case 0x2f2144u: goto label_2f2144;
        case 0x2f2148u: goto label_2f2148;
        case 0x2f214cu: goto label_2f214c;
        case 0x2f2150u: goto label_2f2150;
        case 0x2f2154u: goto label_2f2154;
        case 0x2f2158u: goto label_2f2158;
        case 0x2f215cu: goto label_2f215c;
        case 0x2f2160u: goto label_2f2160;
        case 0x2f2164u: goto label_2f2164;
        case 0x2f2168u: goto label_2f2168;
        case 0x2f216cu: goto label_2f216c;
        case 0x2f2170u: goto label_2f2170;
        case 0x2f2174u: goto label_2f2174;
        case 0x2f2178u: goto label_2f2178;
        case 0x2f217cu: goto label_2f217c;
        case 0x2f2180u: goto label_2f2180;
        case 0x2f2184u: goto label_2f2184;
        case 0x2f2188u: goto label_2f2188;
        case 0x2f218cu: goto label_2f218c;
        case 0x2f2190u: goto label_2f2190;
        case 0x2f2194u: goto label_2f2194;
        case 0x2f2198u: goto label_2f2198;
        case 0x2f219cu: goto label_2f219c;
        case 0x2f21a0u: goto label_2f21a0;
        case 0x2f21a4u: goto label_2f21a4;
        case 0x2f21a8u: goto label_2f21a8;
        case 0x2f21acu: goto label_2f21ac;
        case 0x2f21b0u: goto label_2f21b0;
        case 0x2f21b4u: goto label_2f21b4;
        case 0x2f21b8u: goto label_2f21b8;
        case 0x2f21bcu: goto label_2f21bc;
        case 0x2f21c0u: goto label_2f21c0;
        case 0x2f21c4u: goto label_2f21c4;
        case 0x2f21c8u: goto label_2f21c8;
        case 0x2f21ccu: goto label_2f21cc;
        case 0x2f21d0u: goto label_2f21d0;
        case 0x2f21d4u: goto label_2f21d4;
        case 0x2f21d8u: goto label_2f21d8;
        case 0x2f21dcu: goto label_2f21dc;
        case 0x2f21e0u: goto label_2f21e0;
        case 0x2f21e4u: goto label_2f21e4;
        case 0x2f21e8u: goto label_2f21e8;
        case 0x2f21ecu: goto label_2f21ec;
        case 0x2f21f0u: goto label_2f21f0;
        case 0x2f21f4u: goto label_2f21f4;
        case 0x2f21f8u: goto label_2f21f8;
        case 0x2f21fcu: goto label_2f21fc;
        case 0x2f2200u: goto label_2f2200;
        case 0x2f2204u: goto label_2f2204;
        case 0x2f2208u: goto label_2f2208;
        case 0x2f220cu: goto label_2f220c;
        case 0x2f2210u: goto label_2f2210;
        case 0x2f2214u: goto label_2f2214;
        case 0x2f2218u: goto label_2f2218;
        case 0x2f221cu: goto label_2f221c;
        case 0x2f2220u: goto label_2f2220;
        case 0x2f2224u: goto label_2f2224;
        case 0x2f2228u: goto label_2f2228;
        case 0x2f222cu: goto label_2f222c;
        case 0x2f2230u: goto label_2f2230;
        case 0x2f2234u: goto label_2f2234;
        case 0x2f2238u: goto label_2f2238;
        case 0x2f223cu: goto label_2f223c;
        case 0x2f2240u: goto label_2f2240;
        case 0x2f2244u: goto label_2f2244;
        case 0x2f2248u: goto label_2f2248;
        case 0x2f224cu: goto label_2f224c;
        case 0x2f2250u: goto label_2f2250;
        case 0x2f2254u: goto label_2f2254;
        case 0x2f2258u: goto label_2f2258;
        case 0x2f225cu: goto label_2f225c;
        case 0x2f2260u: goto label_2f2260;
        case 0x2f2264u: goto label_2f2264;
        case 0x2f2268u: goto label_2f2268;
        case 0x2f226cu: goto label_2f226c;
        case 0x2f2270u: goto label_2f2270;
        case 0x2f2274u: goto label_2f2274;
        case 0x2f2278u: goto label_2f2278;
        case 0x2f227cu: goto label_2f227c;
        case 0x2f2280u: goto label_2f2280;
        case 0x2f2284u: goto label_2f2284;
        case 0x2f2288u: goto label_2f2288;
        case 0x2f228cu: goto label_2f228c;
        case 0x2f2290u: goto label_2f2290;
        case 0x2f2294u: goto label_2f2294;
        case 0x2f2298u: goto label_2f2298;
        case 0x2f229cu: goto label_2f229c;
        case 0x2f22a0u: goto label_2f22a0;
        case 0x2f22a4u: goto label_2f22a4;
        case 0x2f22a8u: goto label_2f22a8;
        case 0x2f22acu: goto label_2f22ac;
        case 0x2f22b0u: goto label_2f22b0;
        case 0x2f22b4u: goto label_2f22b4;
        case 0x2f22b8u: goto label_2f22b8;
        case 0x2f22bcu: goto label_2f22bc;
        case 0x2f22c0u: goto label_2f22c0;
        case 0x2f22c4u: goto label_2f22c4;
        case 0x2f22c8u: goto label_2f22c8;
        case 0x2f22ccu: goto label_2f22cc;
        case 0x2f22d0u: goto label_2f22d0;
        case 0x2f22d4u: goto label_2f22d4;
        case 0x2f22d8u: goto label_2f22d8;
        case 0x2f22dcu: goto label_2f22dc;
        case 0x2f22e0u: goto label_2f22e0;
        case 0x2f22e4u: goto label_2f22e4;
        case 0x2f22e8u: goto label_2f22e8;
        case 0x2f22ecu: goto label_2f22ec;
        case 0x2f22f0u: goto label_2f22f0;
        case 0x2f22f4u: goto label_2f22f4;
        case 0x2f22f8u: goto label_2f22f8;
        case 0x2f22fcu: goto label_2f22fc;
        case 0x2f2300u: goto label_2f2300;
        case 0x2f2304u: goto label_2f2304;
        case 0x2f2308u: goto label_2f2308;
        case 0x2f230cu: goto label_2f230c;
        case 0x2f2310u: goto label_2f2310;
        case 0x2f2314u: goto label_2f2314;
        case 0x2f2318u: goto label_2f2318;
        case 0x2f231cu: goto label_2f231c;
        case 0x2f2320u: goto label_2f2320;
        case 0x2f2324u: goto label_2f2324;
        case 0x2f2328u: goto label_2f2328;
        case 0x2f232cu: goto label_2f232c;
        case 0x2f2330u: goto label_2f2330;
        case 0x2f2334u: goto label_2f2334;
        case 0x2f2338u: goto label_2f2338;
        case 0x2f233cu: goto label_2f233c;
        case 0x2f2340u: goto label_2f2340;
        case 0x2f2344u: goto label_2f2344;
        case 0x2f2348u: goto label_2f2348;
        case 0x2f234cu: goto label_2f234c;
        case 0x2f2350u: goto label_2f2350;
        case 0x2f2354u: goto label_2f2354;
        case 0x2f2358u: goto label_2f2358;
        case 0x2f235cu: goto label_2f235c;
        case 0x2f2360u: goto label_2f2360;
        case 0x2f2364u: goto label_2f2364;
        case 0x2f2368u: goto label_2f2368;
        case 0x2f236cu: goto label_2f236c;
        case 0x2f2370u: goto label_2f2370;
        case 0x2f2374u: goto label_2f2374;
        case 0x2f2378u: goto label_2f2378;
        case 0x2f237cu: goto label_2f237c;
        case 0x2f2380u: goto label_2f2380;
        case 0x2f2384u: goto label_2f2384;
        case 0x2f2388u: goto label_2f2388;
        case 0x2f238cu: goto label_2f238c;
        case 0x2f2390u: goto label_2f2390;
        case 0x2f2394u: goto label_2f2394;
        case 0x2f2398u: goto label_2f2398;
        case 0x2f239cu: goto label_2f239c;
        case 0x2f23a0u: goto label_2f23a0;
        case 0x2f23a4u: goto label_2f23a4;
        case 0x2f23a8u: goto label_2f23a8;
        case 0x2f23acu: goto label_2f23ac;
        case 0x2f23b0u: goto label_2f23b0;
        case 0x2f23b4u: goto label_2f23b4;
        case 0x2f23b8u: goto label_2f23b8;
        case 0x2f23bcu: goto label_2f23bc;
        case 0x2f23c0u: goto label_2f23c0;
        case 0x2f23c4u: goto label_2f23c4;
        case 0x2f23c8u: goto label_2f23c8;
        case 0x2f23ccu: goto label_2f23cc;
        case 0x2f23d0u: goto label_2f23d0;
        case 0x2f23d4u: goto label_2f23d4;
        case 0x2f23d8u: goto label_2f23d8;
        case 0x2f23dcu: goto label_2f23dc;
        case 0x2f23e0u: goto label_2f23e0;
        case 0x2f23e4u: goto label_2f23e4;
        case 0x2f23e8u: goto label_2f23e8;
        case 0x2f23ecu: goto label_2f23ec;
        case 0x2f23f0u: goto label_2f23f0;
        case 0x2f23f4u: goto label_2f23f4;
        case 0x2f23f8u: goto label_2f23f8;
        case 0x2f23fcu: goto label_2f23fc;
        case 0x2f2400u: goto label_2f2400;
        case 0x2f2404u: goto label_2f2404;
        case 0x2f2408u: goto label_2f2408;
        case 0x2f240cu: goto label_2f240c;
        case 0x2f2410u: goto label_2f2410;
        case 0x2f2414u: goto label_2f2414;
        case 0x2f2418u: goto label_2f2418;
        case 0x2f241cu: goto label_2f241c;
        case 0x2f2420u: goto label_2f2420;
        case 0x2f2424u: goto label_2f2424;
        case 0x2f2428u: goto label_2f2428;
        case 0x2f242cu: goto label_2f242c;
        case 0x2f2430u: goto label_2f2430;
        case 0x2f2434u: goto label_2f2434;
        case 0x2f2438u: goto label_2f2438;
        case 0x2f243cu: goto label_2f243c;
        case 0x2f2440u: goto label_2f2440;
        case 0x2f2444u: goto label_2f2444;
        case 0x2f2448u: goto label_2f2448;
        case 0x2f244cu: goto label_2f244c;
        case 0x2f2450u: goto label_2f2450;
        case 0x2f2454u: goto label_2f2454;
        case 0x2f2458u: goto label_2f2458;
        case 0x2f245cu: goto label_2f245c;
        case 0x2f2460u: goto label_2f2460;
        case 0x2f2464u: goto label_2f2464;
        case 0x2f2468u: goto label_2f2468;
        case 0x2f246cu: goto label_2f246c;
        case 0x2f2470u: goto label_2f2470;
        case 0x2f2474u: goto label_2f2474;
        case 0x2f2478u: goto label_2f2478;
        case 0x2f247cu: goto label_2f247c;
        case 0x2f2480u: goto label_2f2480;
        case 0x2f2484u: goto label_2f2484;
        case 0x2f2488u: goto label_2f2488;
        case 0x2f248cu: goto label_2f248c;
        case 0x2f2490u: goto label_2f2490;
        case 0x2f2494u: goto label_2f2494;
        case 0x2f2498u: goto label_2f2498;
        case 0x2f249cu: goto label_2f249c;
        case 0x2f24a0u: goto label_2f24a0;
        case 0x2f24a4u: goto label_2f24a4;
        case 0x2f24a8u: goto label_2f24a8;
        case 0x2f24acu: goto label_2f24ac;
        case 0x2f24b0u: goto label_2f24b0;
        case 0x2f24b4u: goto label_2f24b4;
        case 0x2f24b8u: goto label_2f24b8;
        case 0x2f24bcu: goto label_2f24bc;
        case 0x2f24c0u: goto label_2f24c0;
        case 0x2f24c4u: goto label_2f24c4;
        case 0x2f24c8u: goto label_2f24c8;
        case 0x2f24ccu: goto label_2f24cc;
        case 0x2f24d0u: goto label_2f24d0;
        case 0x2f24d4u: goto label_2f24d4;
        case 0x2f24d8u: goto label_2f24d8;
        case 0x2f24dcu: goto label_2f24dc;
        case 0x2f24e0u: goto label_2f24e0;
        case 0x2f24e4u: goto label_2f24e4;
        case 0x2f24e8u: goto label_2f24e8;
        case 0x2f24ecu: goto label_2f24ec;
        case 0x2f24f0u: goto label_2f24f0;
        case 0x2f24f4u: goto label_2f24f4;
        case 0x2f24f8u: goto label_2f24f8;
        case 0x2f24fcu: goto label_2f24fc;
        case 0x2f2500u: goto label_2f2500;
        case 0x2f2504u: goto label_2f2504;
        case 0x2f2508u: goto label_2f2508;
        case 0x2f250cu: goto label_2f250c;
        case 0x2f2510u: goto label_2f2510;
        case 0x2f2514u: goto label_2f2514;
        case 0x2f2518u: goto label_2f2518;
        case 0x2f251cu: goto label_2f251c;
        case 0x2f2520u: goto label_2f2520;
        case 0x2f2524u: goto label_2f2524;
        case 0x2f2528u: goto label_2f2528;
        case 0x2f252cu: goto label_2f252c;
        case 0x2f2530u: goto label_2f2530;
        case 0x2f2534u: goto label_2f2534;
        case 0x2f2538u: goto label_2f2538;
        case 0x2f253cu: goto label_2f253c;
        case 0x2f2540u: goto label_2f2540;
        case 0x2f2544u: goto label_2f2544;
        case 0x2f2548u: goto label_2f2548;
        case 0x2f254cu: goto label_2f254c;
        case 0x2f2550u: goto label_2f2550;
        case 0x2f2554u: goto label_2f2554;
        case 0x2f2558u: goto label_2f2558;
        case 0x2f255cu: goto label_2f255c;
        case 0x2f2560u: goto label_2f2560;
        case 0x2f2564u: goto label_2f2564;
        case 0x2f2568u: goto label_2f2568;
        case 0x2f256cu: goto label_2f256c;
        case 0x2f2570u: goto label_2f2570;
        case 0x2f2574u: goto label_2f2574;
        case 0x2f2578u: goto label_2f2578;
        case 0x2f257cu: goto label_2f257c;
        case 0x2f2580u: goto label_2f2580;
        case 0x2f2584u: goto label_2f2584;
        case 0x2f2588u: goto label_2f2588;
        case 0x2f258cu: goto label_2f258c;
        case 0x2f2590u: goto label_2f2590;
        case 0x2f2594u: goto label_2f2594;
        case 0x2f2598u: goto label_2f2598;
        case 0x2f259cu: goto label_2f259c;
        case 0x2f25a0u: goto label_2f25a0;
        case 0x2f25a4u: goto label_2f25a4;
        case 0x2f25a8u: goto label_2f25a8;
        case 0x2f25acu: goto label_2f25ac;
        case 0x2f25b0u: goto label_2f25b0;
        case 0x2f25b4u: goto label_2f25b4;
        case 0x2f25b8u: goto label_2f25b8;
        case 0x2f25bcu: goto label_2f25bc;
        case 0x2f25c0u: goto label_2f25c0;
        case 0x2f25c4u: goto label_2f25c4;
        case 0x2f25c8u: goto label_2f25c8;
        case 0x2f25ccu: goto label_2f25cc;
        case 0x2f25d0u: goto label_2f25d0;
        case 0x2f25d4u: goto label_2f25d4;
        case 0x2f25d8u: goto label_2f25d8;
        case 0x2f25dcu: goto label_2f25dc;
        case 0x2f25e0u: goto label_2f25e0;
        case 0x2f25e4u: goto label_2f25e4;
        case 0x2f25e8u: goto label_2f25e8;
        case 0x2f25ecu: goto label_2f25ec;
        case 0x2f25f0u: goto label_2f25f0;
        case 0x2f25f4u: goto label_2f25f4;
        case 0x2f25f8u: goto label_2f25f8;
        case 0x2f25fcu: goto label_2f25fc;
        case 0x2f2600u: goto label_2f2600;
        case 0x2f2604u: goto label_2f2604;
        case 0x2f2608u: goto label_2f2608;
        case 0x2f260cu: goto label_2f260c;
        case 0x2f2610u: goto label_2f2610;
        case 0x2f2614u: goto label_2f2614;
        case 0x2f2618u: goto label_2f2618;
        case 0x2f261cu: goto label_2f261c;
        case 0x2f2620u: goto label_2f2620;
        case 0x2f2624u: goto label_2f2624;
        case 0x2f2628u: goto label_2f2628;
        case 0x2f262cu: goto label_2f262c;
        case 0x2f2630u: goto label_2f2630;
        case 0x2f2634u: goto label_2f2634;
        case 0x2f2638u: goto label_2f2638;
        case 0x2f263cu: goto label_2f263c;
        case 0x2f2640u: goto label_2f2640;
        case 0x2f2644u: goto label_2f2644;
        case 0x2f2648u: goto label_2f2648;
        case 0x2f264cu: goto label_2f264c;
        case 0x2f2650u: goto label_2f2650;
        case 0x2f2654u: goto label_2f2654;
        case 0x2f2658u: goto label_2f2658;
        case 0x2f265cu: goto label_2f265c;
        case 0x2f2660u: goto label_2f2660;
        case 0x2f2664u: goto label_2f2664;
        case 0x2f2668u: goto label_2f2668;
        case 0x2f266cu: goto label_2f266c;
        case 0x2f2670u: goto label_2f2670;
        case 0x2f2674u: goto label_2f2674;
        case 0x2f2678u: goto label_2f2678;
        case 0x2f267cu: goto label_2f267c;
        case 0x2f2680u: goto label_2f2680;
        case 0x2f2684u: goto label_2f2684;
        case 0x2f2688u: goto label_2f2688;
        case 0x2f268cu: goto label_2f268c;
        case 0x2f2690u: goto label_2f2690;
        case 0x2f2694u: goto label_2f2694;
        case 0x2f2698u: goto label_2f2698;
        case 0x2f269cu: goto label_2f269c;
        case 0x2f26a0u: goto label_2f26a0;
        case 0x2f26a4u: goto label_2f26a4;
        case 0x2f26a8u: goto label_2f26a8;
        case 0x2f26acu: goto label_2f26ac;
        case 0x2f26b0u: goto label_2f26b0;
        case 0x2f26b4u: goto label_2f26b4;
        case 0x2f26b8u: goto label_2f26b8;
        case 0x2f26bcu: goto label_2f26bc;
        case 0x2f26c0u: goto label_2f26c0;
        case 0x2f26c4u: goto label_2f26c4;
        case 0x2f26c8u: goto label_2f26c8;
        case 0x2f26ccu: goto label_2f26cc;
        case 0x2f26d0u: goto label_2f26d0;
        case 0x2f26d4u: goto label_2f26d4;
        case 0x2f26d8u: goto label_2f26d8;
        case 0x2f26dcu: goto label_2f26dc;
        case 0x2f26e0u: goto label_2f26e0;
        case 0x2f26e4u: goto label_2f26e4;
        case 0x2f26e8u: goto label_2f26e8;
        case 0x2f26ecu: goto label_2f26ec;
        case 0x2f26f0u: goto label_2f26f0;
        case 0x2f26f4u: goto label_2f26f4;
        case 0x2f26f8u: goto label_2f26f8;
        case 0x2f26fcu: goto label_2f26fc;
        case 0x2f2700u: goto label_2f2700;
        case 0x2f2704u: goto label_2f2704;
        case 0x2f2708u: goto label_2f2708;
        case 0x2f270cu: goto label_2f270c;
        case 0x2f2710u: goto label_2f2710;
        case 0x2f2714u: goto label_2f2714;
        case 0x2f2718u: goto label_2f2718;
        case 0x2f271cu: goto label_2f271c;
        case 0x2f2720u: goto label_2f2720;
        case 0x2f2724u: goto label_2f2724;
        case 0x2f2728u: goto label_2f2728;
        case 0x2f272cu: goto label_2f272c;
        case 0x2f2730u: goto label_2f2730;
        case 0x2f2734u: goto label_2f2734;
        case 0x2f2738u: goto label_2f2738;
        case 0x2f273cu: goto label_2f273c;
        case 0x2f2740u: goto label_2f2740;
        case 0x2f2744u: goto label_2f2744;
        case 0x2f2748u: goto label_2f2748;
        case 0x2f274cu: goto label_2f274c;
        case 0x2f2750u: goto label_2f2750;
        case 0x2f2754u: goto label_2f2754;
        case 0x2f2758u: goto label_2f2758;
        case 0x2f275cu: goto label_2f275c;
        case 0x2f2760u: goto label_2f2760;
        case 0x2f2764u: goto label_2f2764;
        case 0x2f2768u: goto label_2f2768;
        case 0x2f276cu: goto label_2f276c;
        case 0x2f2770u: goto label_2f2770;
        case 0x2f2774u: goto label_2f2774;
        case 0x2f2778u: goto label_2f2778;
        case 0x2f277cu: goto label_2f277c;
        case 0x2f2780u: goto label_2f2780;
        case 0x2f2784u: goto label_2f2784;
        case 0x2f2788u: goto label_2f2788;
        case 0x2f278cu: goto label_2f278c;
        case 0x2f2790u: goto label_2f2790;
        case 0x2f2794u: goto label_2f2794;
        case 0x2f2798u: goto label_2f2798;
        case 0x2f279cu: goto label_2f279c;
        case 0x2f27a0u: goto label_2f27a0;
        case 0x2f27a4u: goto label_2f27a4;
        case 0x2f27a8u: goto label_2f27a8;
        case 0x2f27acu: goto label_2f27ac;
        case 0x2f27b0u: goto label_2f27b0;
        case 0x2f27b4u: goto label_2f27b4;
        case 0x2f27b8u: goto label_2f27b8;
        case 0x2f27bcu: goto label_2f27bc;
        case 0x2f27c0u: goto label_2f27c0;
        case 0x2f27c4u: goto label_2f27c4;
        case 0x2f27c8u: goto label_2f27c8;
        case 0x2f27ccu: goto label_2f27cc;
        case 0x2f27d0u: goto label_2f27d0;
        case 0x2f27d4u: goto label_2f27d4;
        case 0x2f27d8u: goto label_2f27d8;
        case 0x2f27dcu: goto label_2f27dc;
        case 0x2f27e0u: goto label_2f27e0;
        case 0x2f27e4u: goto label_2f27e4;
        case 0x2f27e8u: goto label_2f27e8;
        case 0x2f27ecu: goto label_2f27ec;
        case 0x2f27f0u: goto label_2f27f0;
        case 0x2f27f4u: goto label_2f27f4;
        case 0x2f27f8u: goto label_2f27f8;
        case 0x2f27fcu: goto label_2f27fc;
        case 0x2f2800u: goto label_2f2800;
        case 0x2f2804u: goto label_2f2804;
        case 0x2f2808u: goto label_2f2808;
        case 0x2f280cu: goto label_2f280c;
        case 0x2f2810u: goto label_2f2810;
        case 0x2f2814u: goto label_2f2814;
        case 0x2f2818u: goto label_2f2818;
        case 0x2f281cu: goto label_2f281c;
        case 0x2f2820u: goto label_2f2820;
        case 0x2f2824u: goto label_2f2824;
        case 0x2f2828u: goto label_2f2828;
        case 0x2f282cu: goto label_2f282c;
        case 0x2f2830u: goto label_2f2830;
        case 0x2f2834u: goto label_2f2834;
        case 0x2f2838u: goto label_2f2838;
        case 0x2f283cu: goto label_2f283c;
        case 0x2f2840u: goto label_2f2840;
        case 0x2f2844u: goto label_2f2844;
        case 0x2f2848u: goto label_2f2848;
        case 0x2f284cu: goto label_2f284c;
        case 0x2f2850u: goto label_2f2850;
        case 0x2f2854u: goto label_2f2854;
        case 0x2f2858u: goto label_2f2858;
        case 0x2f285cu: goto label_2f285c;
        case 0x2f2860u: goto label_2f2860;
        case 0x2f2864u: goto label_2f2864;
        case 0x2f2868u: goto label_2f2868;
        case 0x2f286cu: goto label_2f286c;
        case 0x2f2870u: goto label_2f2870;
        case 0x2f2874u: goto label_2f2874;
        case 0x2f2878u: goto label_2f2878;
        case 0x2f287cu: goto label_2f287c;
        case 0x2f2880u: goto label_2f2880;
        case 0x2f2884u: goto label_2f2884;
        case 0x2f2888u: goto label_2f2888;
        case 0x2f288cu: goto label_2f288c;
        case 0x2f2890u: goto label_2f2890;
        case 0x2f2894u: goto label_2f2894;
        case 0x2f2898u: goto label_2f2898;
        case 0x2f289cu: goto label_2f289c;
        case 0x2f28a0u: goto label_2f28a0;
        case 0x2f28a4u: goto label_2f28a4;
        case 0x2f28a8u: goto label_2f28a8;
        case 0x2f28acu: goto label_2f28ac;
        case 0x2f28b0u: goto label_2f28b0;
        case 0x2f28b4u: goto label_2f28b4;
        case 0x2f28b8u: goto label_2f28b8;
        case 0x2f28bcu: goto label_2f28bc;
        case 0x2f28c0u: goto label_2f28c0;
        case 0x2f28c4u: goto label_2f28c4;
        case 0x2f28c8u: goto label_2f28c8;
        case 0x2f28ccu: goto label_2f28cc;
        case 0x2f28d0u: goto label_2f28d0;
        case 0x2f28d4u: goto label_2f28d4;
        case 0x2f28d8u: goto label_2f28d8;
        case 0x2f28dcu: goto label_2f28dc;
        case 0x2f28e0u: goto label_2f28e0;
        case 0x2f28e4u: goto label_2f28e4;
        case 0x2f28e8u: goto label_2f28e8;
        case 0x2f28ecu: goto label_2f28ec;
        case 0x2f28f0u: goto label_2f28f0;
        case 0x2f28f4u: goto label_2f28f4;
        case 0x2f28f8u: goto label_2f28f8;
        case 0x2f28fcu: goto label_2f28fc;
        case 0x2f2900u: goto label_2f2900;
        case 0x2f2904u: goto label_2f2904;
        case 0x2f2908u: goto label_2f2908;
        case 0x2f290cu: goto label_2f290c;
        case 0x2f2910u: goto label_2f2910;
        case 0x2f2914u: goto label_2f2914;
        case 0x2f2918u: goto label_2f2918;
        case 0x2f291cu: goto label_2f291c;
        case 0x2f2920u: goto label_2f2920;
        case 0x2f2924u: goto label_2f2924;
        case 0x2f2928u: goto label_2f2928;
        case 0x2f292cu: goto label_2f292c;
        case 0x2f2930u: goto label_2f2930;
        case 0x2f2934u: goto label_2f2934;
        case 0x2f2938u: goto label_2f2938;
        case 0x2f293cu: goto label_2f293c;
        case 0x2f2940u: goto label_2f2940;
        case 0x2f2944u: goto label_2f2944;
        case 0x2f2948u: goto label_2f2948;
        case 0x2f294cu: goto label_2f294c;
        case 0x2f2950u: goto label_2f2950;
        case 0x2f2954u: goto label_2f2954;
        case 0x2f2958u: goto label_2f2958;
        case 0x2f295cu: goto label_2f295c;
        case 0x2f2960u: goto label_2f2960;
        case 0x2f2964u: goto label_2f2964;
        case 0x2f2968u: goto label_2f2968;
        case 0x2f296cu: goto label_2f296c;
        case 0x2f2970u: goto label_2f2970;
        case 0x2f2974u: goto label_2f2974;
        case 0x2f2978u: goto label_2f2978;
        case 0x2f297cu: goto label_2f297c;
        case 0x2f2980u: goto label_2f2980;
        case 0x2f2984u: goto label_2f2984;
        case 0x2f2988u: goto label_2f2988;
        case 0x2f298cu: goto label_2f298c;
        case 0x2f2990u: goto label_2f2990;
        case 0x2f2994u: goto label_2f2994;
        case 0x2f2998u: goto label_2f2998;
        case 0x2f299cu: goto label_2f299c;
        case 0x2f29a0u: goto label_2f29a0;
        case 0x2f29a4u: goto label_2f29a4;
        case 0x2f29a8u: goto label_2f29a8;
        case 0x2f29acu: goto label_2f29ac;
        case 0x2f29b0u: goto label_2f29b0;
        case 0x2f29b4u: goto label_2f29b4;
        case 0x2f29b8u: goto label_2f29b8;
        case 0x2f29bcu: goto label_2f29bc;
        case 0x2f29c0u: goto label_2f29c0;
        case 0x2f29c4u: goto label_2f29c4;
        case 0x2f29c8u: goto label_2f29c8;
        case 0x2f29ccu: goto label_2f29cc;
        case 0x2f29d0u: goto label_2f29d0;
        case 0x2f29d4u: goto label_2f29d4;
        case 0x2f29d8u: goto label_2f29d8;
        case 0x2f29dcu: goto label_2f29dc;
        case 0x2f29e0u: goto label_2f29e0;
        case 0x2f29e4u: goto label_2f29e4;
        case 0x2f29e8u: goto label_2f29e8;
        case 0x2f29ecu: goto label_2f29ec;
        case 0x2f29f0u: goto label_2f29f0;
        case 0x2f29f4u: goto label_2f29f4;
        case 0x2f29f8u: goto label_2f29f8;
        case 0x2f29fcu: goto label_2f29fc;
        case 0x2f2a00u: goto label_2f2a00;
        case 0x2f2a04u: goto label_2f2a04;
        case 0x2f2a08u: goto label_2f2a08;
        case 0x2f2a0cu: goto label_2f2a0c;
        case 0x2f2a10u: goto label_2f2a10;
        case 0x2f2a14u: goto label_2f2a14;
        case 0x2f2a18u: goto label_2f2a18;
        case 0x2f2a1cu: goto label_2f2a1c;
        case 0x2f2a20u: goto label_2f2a20;
        case 0x2f2a24u: goto label_2f2a24;
        case 0x2f2a28u: goto label_2f2a28;
        case 0x2f2a2cu: goto label_2f2a2c;
        case 0x2f2a30u: goto label_2f2a30;
        case 0x2f2a34u: goto label_2f2a34;
        case 0x2f2a38u: goto label_2f2a38;
        case 0x2f2a3cu: goto label_2f2a3c;
        case 0x2f2a40u: goto label_2f2a40;
        case 0x2f2a44u: goto label_2f2a44;
        case 0x2f2a48u: goto label_2f2a48;
        case 0x2f2a4cu: goto label_2f2a4c;
        case 0x2f2a50u: goto label_2f2a50;
        case 0x2f2a54u: goto label_2f2a54;
        case 0x2f2a58u: goto label_2f2a58;
        case 0x2f2a5cu: goto label_2f2a5c;
        case 0x2f2a60u: goto label_2f2a60;
        case 0x2f2a64u: goto label_2f2a64;
        case 0x2f2a68u: goto label_2f2a68;
        case 0x2f2a6cu: goto label_2f2a6c;
        case 0x2f2a70u: goto label_2f2a70;
        case 0x2f2a74u: goto label_2f2a74;
        case 0x2f2a78u: goto label_2f2a78;
        case 0x2f2a7cu: goto label_2f2a7c;
        case 0x2f2a80u: goto label_2f2a80;
        case 0x2f2a84u: goto label_2f2a84;
        case 0x2f2a88u: goto label_2f2a88;
        case 0x2f2a8cu: goto label_2f2a8c;
        case 0x2f2a90u: goto label_2f2a90;
        case 0x2f2a94u: goto label_2f2a94;
        case 0x2f2a98u: goto label_2f2a98;
        case 0x2f2a9cu: goto label_2f2a9c;
        case 0x2f2aa0u: goto label_2f2aa0;
        case 0x2f2aa4u: goto label_2f2aa4;
        case 0x2f2aa8u: goto label_2f2aa8;
        case 0x2f2aacu: goto label_2f2aac;
        case 0x2f2ab0u: goto label_2f2ab0;
        case 0x2f2ab4u: goto label_2f2ab4;
        case 0x2f2ab8u: goto label_2f2ab8;
        case 0x2f2abcu: goto label_2f2abc;
        case 0x2f2ac0u: goto label_2f2ac0;
        case 0x2f2ac4u: goto label_2f2ac4;
        case 0x2f2ac8u: goto label_2f2ac8;
        case 0x2f2accu: goto label_2f2acc;
        case 0x2f2ad0u: goto label_2f2ad0;
        case 0x2f2ad4u: goto label_2f2ad4;
        case 0x2f2ad8u: goto label_2f2ad8;
        case 0x2f2adcu: goto label_2f2adc;
        case 0x2f2ae0u: goto label_2f2ae0;
        case 0x2f2ae4u: goto label_2f2ae4;
        case 0x2f2ae8u: goto label_2f2ae8;
        case 0x2f2aecu: goto label_2f2aec;
        case 0x2f2af0u: goto label_2f2af0;
        case 0x2f2af4u: goto label_2f2af4;
        case 0x2f2af8u: goto label_2f2af8;
        case 0x2f2afcu: goto label_2f2afc;
        case 0x2f2b00u: goto label_2f2b00;
        case 0x2f2b04u: goto label_2f2b04;
        case 0x2f2b08u: goto label_2f2b08;
        case 0x2f2b0cu: goto label_2f2b0c;
        case 0x2f2b10u: goto label_2f2b10;
        case 0x2f2b14u: goto label_2f2b14;
        case 0x2f2b18u: goto label_2f2b18;
        case 0x2f2b1cu: goto label_2f2b1c;
        case 0x2f2b20u: goto label_2f2b20;
        case 0x2f2b24u: goto label_2f2b24;
        case 0x2f2b28u: goto label_2f2b28;
        case 0x2f2b2cu: goto label_2f2b2c;
        case 0x2f2b30u: goto label_2f2b30;
        case 0x2f2b34u: goto label_2f2b34;
        case 0x2f2b38u: goto label_2f2b38;
        case 0x2f2b3cu: goto label_2f2b3c;
        case 0x2f2b40u: goto label_2f2b40;
        case 0x2f2b44u: goto label_2f2b44;
        case 0x2f2b48u: goto label_2f2b48;
        case 0x2f2b4cu: goto label_2f2b4c;
        case 0x2f2b50u: goto label_2f2b50;
        case 0x2f2b54u: goto label_2f2b54;
        case 0x2f2b58u: goto label_2f2b58;
        case 0x2f2b5cu: goto label_2f2b5c;
        case 0x2f2b60u: goto label_2f2b60;
        case 0x2f2b64u: goto label_2f2b64;
        case 0x2f2b68u: goto label_2f2b68;
        case 0x2f2b6cu: goto label_2f2b6c;
        case 0x2f2b70u: goto label_2f2b70;
        case 0x2f2b74u: goto label_2f2b74;
        case 0x2f2b78u: goto label_2f2b78;
        case 0x2f2b7cu: goto label_2f2b7c;
        case 0x2f2b80u: goto label_2f2b80;
        case 0x2f2b84u: goto label_2f2b84;
        case 0x2f2b88u: goto label_2f2b88;
        case 0x2f2b8cu: goto label_2f2b8c;
        case 0x2f2b90u: goto label_2f2b90;
        case 0x2f2b94u: goto label_2f2b94;
        case 0x2f2b98u: goto label_2f2b98;
        case 0x2f2b9cu: goto label_2f2b9c;
        case 0x2f2ba0u: goto label_2f2ba0;
        case 0x2f2ba4u: goto label_2f2ba4;
        case 0x2f2ba8u: goto label_2f2ba8;
        case 0x2f2bacu: goto label_2f2bac;
        case 0x2f2bb0u: goto label_2f2bb0;
        case 0x2f2bb4u: goto label_2f2bb4;
        case 0x2f2bb8u: goto label_2f2bb8;
        case 0x2f2bbcu: goto label_2f2bbc;
        case 0x2f2bc0u: goto label_2f2bc0;
        case 0x2f2bc4u: goto label_2f2bc4;
        case 0x2f2bc8u: goto label_2f2bc8;
        case 0x2f2bccu: goto label_2f2bcc;
        case 0x2f2bd0u: goto label_2f2bd0;
        case 0x2f2bd4u: goto label_2f2bd4;
        case 0x2f2bd8u: goto label_2f2bd8;
        case 0x2f2bdcu: goto label_2f2bdc;
        case 0x2f2be0u: goto label_2f2be0;
        case 0x2f2be4u: goto label_2f2be4;
        case 0x2f2be8u: goto label_2f2be8;
        case 0x2f2becu: goto label_2f2bec;
        case 0x2f2bf0u: goto label_2f2bf0;
        case 0x2f2bf4u: goto label_2f2bf4;
        case 0x2f2bf8u: goto label_2f2bf8;
        case 0x2f2bfcu: goto label_2f2bfc;
        case 0x2f2c00u: goto label_2f2c00;
        case 0x2f2c04u: goto label_2f2c04;
        case 0x2f2c08u: goto label_2f2c08;
        case 0x2f2c0cu: goto label_2f2c0c;
        case 0x2f2c10u: goto label_2f2c10;
        case 0x2f2c14u: goto label_2f2c14;
        case 0x2f2c18u: goto label_2f2c18;
        case 0x2f2c1cu: goto label_2f2c1c;
        case 0x2f2c20u: goto label_2f2c20;
        case 0x2f2c24u: goto label_2f2c24;
        case 0x2f2c28u: goto label_2f2c28;
        case 0x2f2c2cu: goto label_2f2c2c;
        case 0x2f2c30u: goto label_2f2c30;
        case 0x2f2c34u: goto label_2f2c34;
        case 0x2f2c38u: goto label_2f2c38;
        case 0x2f2c3cu: goto label_2f2c3c;
        case 0x2f2c40u: goto label_2f2c40;
        case 0x2f2c44u: goto label_2f2c44;
        case 0x2f2c48u: goto label_2f2c48;
        case 0x2f2c4cu: goto label_2f2c4c;
        case 0x2f2c50u: goto label_2f2c50;
        case 0x2f2c54u: goto label_2f2c54;
        case 0x2f2c58u: goto label_2f2c58;
        case 0x2f2c5cu: goto label_2f2c5c;
        case 0x2f2c60u: goto label_2f2c60;
        case 0x2f2c64u: goto label_2f2c64;
        case 0x2f2c68u: goto label_2f2c68;
        case 0x2f2c6cu: goto label_2f2c6c;
        case 0x2f2c70u: goto label_2f2c70;
        case 0x2f2c74u: goto label_2f2c74;
        case 0x2f2c78u: goto label_2f2c78;
        case 0x2f2c7cu: goto label_2f2c7c;
        case 0x2f2c80u: goto label_2f2c80;
        case 0x2f2c84u: goto label_2f2c84;
        case 0x2f2c88u: goto label_2f2c88;
        case 0x2f2c8cu: goto label_2f2c8c;
        case 0x2f2c90u: goto label_2f2c90;
        case 0x2f2c94u: goto label_2f2c94;
        case 0x2f2c98u: goto label_2f2c98;
        case 0x2f2c9cu: goto label_2f2c9c;
        case 0x2f2ca0u: goto label_2f2ca0;
        case 0x2f2ca4u: goto label_2f2ca4;
        case 0x2f2ca8u: goto label_2f2ca8;
        case 0x2f2cacu: goto label_2f2cac;
        case 0x2f2cb0u: goto label_2f2cb0;
        case 0x2f2cb4u: goto label_2f2cb4;
        case 0x2f2cb8u: goto label_2f2cb8;
        case 0x2f2cbcu: goto label_2f2cbc;
        case 0x2f2cc0u: goto label_2f2cc0;
        case 0x2f2cc4u: goto label_2f2cc4;
        case 0x2f2cc8u: goto label_2f2cc8;
        case 0x2f2cccu: goto label_2f2ccc;
        case 0x2f2cd0u: goto label_2f2cd0;
        case 0x2f2cd4u: goto label_2f2cd4;
        case 0x2f2cd8u: goto label_2f2cd8;
        case 0x2f2cdcu: goto label_2f2cdc;
        case 0x2f2ce0u: goto label_2f2ce0;
        case 0x2f2ce4u: goto label_2f2ce4;
        case 0x2f2ce8u: goto label_2f2ce8;
        case 0x2f2cecu: goto label_2f2cec;
        case 0x2f2cf0u: goto label_2f2cf0;
        case 0x2f2cf4u: goto label_2f2cf4;
        case 0x2f2cf8u: goto label_2f2cf8;
        case 0x2f2cfcu: goto label_2f2cfc;
        case 0x2f2d00u: goto label_2f2d00;
        case 0x2f2d04u: goto label_2f2d04;
        case 0x2f2d08u: goto label_2f2d08;
        case 0x2f2d0cu: goto label_2f2d0c;
        case 0x2f2d10u: goto label_2f2d10;
        case 0x2f2d14u: goto label_2f2d14;
        case 0x2f2d18u: goto label_2f2d18;
        case 0x2f2d1cu: goto label_2f2d1c;
        case 0x2f2d20u: goto label_2f2d20;
        case 0x2f2d24u: goto label_2f2d24;
        case 0x2f2d28u: goto label_2f2d28;
        case 0x2f2d2cu: goto label_2f2d2c;
        case 0x2f2d30u: goto label_2f2d30;
        case 0x2f2d34u: goto label_2f2d34;
        case 0x2f2d38u: goto label_2f2d38;
        case 0x2f2d3cu: goto label_2f2d3c;
        case 0x2f2d40u: goto label_2f2d40;
        case 0x2f2d44u: goto label_2f2d44;
        case 0x2f2d48u: goto label_2f2d48;
        case 0x2f2d4cu: goto label_2f2d4c;
        case 0x2f2d50u: goto label_2f2d50;
        case 0x2f2d54u: goto label_2f2d54;
        case 0x2f2d58u: goto label_2f2d58;
        case 0x2f2d5cu: goto label_2f2d5c;
        case 0x2f2d60u: goto label_2f2d60;
        case 0x2f2d64u: goto label_2f2d64;
        case 0x2f2d68u: goto label_2f2d68;
        case 0x2f2d6cu: goto label_2f2d6c;
        case 0x2f2d70u: goto label_2f2d70;
        case 0x2f2d74u: goto label_2f2d74;
        default: break;
    }

    ctx->pc = 0x2f2120u;

label_2f2120:
    // 0x2f2120: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f2120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2f2124:
    // 0x2f2124: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2f2124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2f2128:
    // 0x2f2128: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f2128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f212c:
    // 0x2f212c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f212cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2f2130:
    // 0x2f2130: 0x26250058  addiu       $a1, $s1, 0x58
    ctx->pc = 0x2f2130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_2f2134:
    // 0x2f2134: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f2134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2f2138:
    // 0x2f2138: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2f2138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_2f213c:
    // 0x2f213c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f213cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f2140:
    // 0x2f2140: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f2144:
    if (ctx->pc == 0x2F2144u) {
        ctx->pc = 0x2F2144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2140u;
        // 0x2f2144: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2148u;
        goto label_2f2148;
    }
    ctx->pc = 0x2F2140u;
    {
        const bool branch_taken_0x2f2140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2140) {
            ctx->pc = 0x2F2144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2140u;
            // 0x2f2144: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F215Cu;
            goto label_2f215c;
        }
    }
    ctx->pc = 0x2F2148u;
label_2f2148:
    // 0x2f2148: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f2148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f214c:
    // 0x2f214c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f214cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2f2150:
    // 0x2f2150: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2f2154:
    if (ctx->pc == 0x2F2154u) {
        ctx->pc = 0x2F2154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2150u;
        // 0x2f2154: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2158u;
        goto label_2f2158;
    }
    ctx->pc = 0x2F2150u;
    {
        const bool branch_taken_0x2f2150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f2150) {
            ctx->pc = 0x2F2154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2150u;
            // 0x2f2154: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2168u;
            goto label_2f2168;
        }
    }
    ctx->pc = 0x2F2158u;
label_2f2158:
    // 0x2f2158: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f2158u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f215c:
    // 0x2f215c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f215cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2160:
    // 0x2f2160: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f2160u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f2164:
    // 0x2f2164: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2f2164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2f2168:
    // 0x2f2168: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2168u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f216c:
    // 0x2f216c: 0x34a50068  ori         $a1, $a1, 0x68
    ctx->pc = 0x2f216cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)104);
label_2f2170:
    // 0x2f2170: 0x34c600fe  ori         $a2, $a2, 0xFE
    ctx->pc = 0x2f2170u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)254);
label_2f2174:
    // 0x2f2174: 0xc0bb966  jal         func_2EE598
label_2f2178:
    if (ctx->pc == 0x2F2178u) {
        ctx->pc = 0x2F2178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2174u;
        // 0x2f2178: 0x26320060  addiu       $s2, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F217Cu;
        goto label_2f217c;
    }
    ctx->pc = 0x2F2174u;
    SET_GPR_U32(ctx, 31, 0x2F217Cu);
    ctx->pc = 0x2F2178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2174u;
    // 0x2f2178: 0x26320060  addiu       $s2, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F2174u, 0x2F217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F217Cu;
label_2f217c:
    // 0x2f217c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f217cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f2180:
    // 0x2f2180: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f2184:
    if (ctx->pc == 0x2F2184u) {
        ctx->pc = 0x2F2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2180u;
        // 0x2f2184: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2188u;
        goto label_2f2188;
    }
    ctx->pc = 0x2F2180u;
    {
        const bool branch_taken_0x2f2180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2180) {
            ctx->pc = 0x2F2184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2180u;
            // 0x2f2184: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F219Cu;
            goto label_2f219c;
        }
    }
    ctx->pc = 0x2F2188u;
label_2f2188:
    // 0x2f2188: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f2188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f218c:
    // 0x2f218c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f218cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f2190:
    // 0x2f2190: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2f2194:
    if (ctx->pc == 0x2F2194u) {
        ctx->pc = 0x2F2194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2190u;
        // 0x2f2194: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2198u;
        goto label_2f2198;
    }
    ctx->pc = 0x2F2190u;
    {
        const bool branch_taken_0x2f2190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2190u;
        // 0x2f2194: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2190) {
            ctx->pc = 0x2F21A8u;
            goto label_2f21a8;
        }
    }
    ctx->pc = 0x2F2198u;
label_2f2198:
    // 0x2f2198: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f2198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2f219c:
    // 0x2f219c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f219cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f21a0:
    // 0x2f21a0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f21a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2f21a4:
    // 0x2f21a4: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2f21a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2f21a8:
    // 0x2f21a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f21a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f21ac:
    // 0x2f21ac: 0x34a50069  ori         $a1, $a1, 0x69
    ctx->pc = 0x2f21acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)105);
label_2f21b0:
    // 0x2f21b0: 0xc0bb966  jal         func_2EE598
label_2f21b4:
    if (ctx->pc == 0x2F21B4u) {
        ctx->pc = 0x2F21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21B0u;
        // 0x2f21b4: 0x26300068  addiu       $s0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F21B8u;
        goto label_2f21b8;
    }
    ctx->pc = 0x2F21B0u;
    SET_GPR_U32(ctx, 31, 0x2F21B8u);
    ctx->pc = 0x2F21B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F21B0u;
    // 0x2f21b4: 0x26300068  addiu       $s0, $s1, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F21B0u, 0x2F21B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F21B8u;
label_2f21b8:
    // 0x2f21b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f21b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f21bc:
    // 0x2f21bc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f21c0:
    if (ctx->pc == 0x2F21C0u) {
        ctx->pc = 0x2F21C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21BCu;
        // 0x2f21c0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F21C4u;
        goto label_2f21c4;
    }
    ctx->pc = 0x2F21BCu;
    {
        const bool branch_taken_0x2f21bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f21bc) {
            ctx->pc = 0x2F21C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F21BCu;
            // 0x2f21c0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F21D8u;
            goto label_2f21d8;
        }
    }
    ctx->pc = 0x2F21C4u;
label_2f21c4:
    // 0x2f21c4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f21c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f21c8:
    // 0x2f21c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f21c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2f21cc:
    // 0x2f21cc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2f21d0:
    if (ctx->pc == 0x2F21D0u) {
        ctx->pc = 0x2F21D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21CCu;
        // 0x2f21d0: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F21D4u;
        goto label_2f21d4;
    }
    ctx->pc = 0x2F21CCu;
    {
        const bool branch_taken_0x2f21cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F21D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21CCu;
        // 0x2f21d0: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f21cc) {
            ctx->pc = 0x2F21E4u;
            goto label_2f21e4;
        }
    }
    ctx->pc = 0x2F21D4u;
label_2f21d4:
    // 0x2f21d4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f21d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f21d8:
    // 0x2f21d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f21d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f21dc:
    // 0x2f21dc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f21dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2f21e0:
    // 0x2f21e0: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2f21e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2f21e4:
    // 0x2f21e4: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f21e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f21e8:
    // 0x2f21e8: 0x34a5006c  ori         $a1, $a1, 0x6C
    ctx->pc = 0x2f21e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)108);
label_2f21ec:
    // 0x2f21ec: 0xc0bb966  jal         func_2EE598
label_2f21f0:
    if (ctx->pc == 0x2F21F0u) {
        ctx->pc = 0x2F21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21ECu;
        // 0x2f21f0: 0x34c60101  ori         $a2, $a2, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F21F4u;
        goto label_2f21f4;
    }
    ctx->pc = 0x2F21ECu;
    SET_GPR_U32(ctx, 31, 0x2F21F4u);
    ctx->pc = 0x2F21F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F21ECu;
    // 0x2f21f0: 0x34c60101  ori         $a2, $a2, 0x101 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F21ECu, 0x2F21F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F21F4u;
label_2f21f4:
    // 0x2f21f4: 0x26250070  addiu       $a1, $s1, 0x70
    ctx->pc = 0x2f21f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_2f21f8:
    // 0x2f21f8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f21f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f21fc:
    // 0x2f21fc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f2200:
    if (ctx->pc == 0x2F2200u) {
        ctx->pc = 0x2F2200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21FCu;
        // 0x2f2200: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2204u;
        goto label_2f2204;
    }
    ctx->pc = 0x2F21FCu;
    {
        const bool branch_taken_0x2f21fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f21fc) {
            ctx->pc = 0x2F2200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F21FCu;
            // 0x2f2200: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2218u;
            goto label_2f2218;
        }
    }
    ctx->pc = 0x2F2204u;
label_2f2204:
    // 0x2f2204: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f2204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f2208:
    // 0x2f2208: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f2208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2f220c:
    // 0x2f220c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2f2210:
    if (ctx->pc == 0x2F2210u) {
        ctx->pc = 0x2F2210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F220Cu;
        // 0x2f2210: 0x8e230148  lw          $v1, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2214u;
        goto label_2f2214;
    }
    ctx->pc = 0x2F220Cu;
    {
        const bool branch_taken_0x2f220c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f220c) {
            ctx->pc = 0x2F2210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F220Cu;
            // 0x2f2210: 0x8e230148  lw          $v1, 0x148($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2224u;
            goto label_2f2224;
        }
    }
    ctx->pc = 0x2F2214u;
label_2f2214:
    // 0x2f2214: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f2214u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f2218:
    // 0x2f2218: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f221c:
    // 0x2f221c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f221cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f2220:
    // 0x2f2220: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x2f2220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_2f2224:
    // 0x2f2224: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x2f2224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_2f2228:
    // 0x2f2228: 0x3c06000a  lui         $a2, 0xA
    ctx->pc = 0x2f2228u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)10 << 16));
label_2f222c:
    // 0x2f222c: 0x34420105  ori         $v0, $v0, 0x105
    ctx->pc = 0x2f222cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)261);
label_2f2230:
    // 0x2f2230: 0x34c60031  ori         $a2, $a2, 0x31
    ctx->pc = 0x2f2230u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49);
label_2f2234:
    // 0x2f2234: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2f2234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2f2238:
    // 0x2f2238: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x2f2238u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_2f223c:
    // 0x2f223c: 0xc0bb966  jal         func_2EE598
label_2f2240:
    if (ctx->pc == 0x2F2240u) {
        ctx->pc = 0x2F2240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F223Cu;
        // 0x2f2240: 0x34a5006f  ori         $a1, $a1, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2244u;
        goto label_2f2244;
    }
    ctx->pc = 0x2F223Cu;
    SET_GPR_U32(ctx, 31, 0x2F2244u);
    ctx->pc = 0x2F2240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F223Cu;
    // 0x2f2240: 0x34a5006f  ori         $a1, $a1, 0x6F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)111);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F223Cu, 0x2F2244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2244u;
label_2f2244:
    // 0x2f2244: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f2244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f2248:
    // 0x2f2248: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f224c:
    if (ctx->pc == 0x2F224Cu) {
        ctx->pc = 0x2F224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2248u;
        // 0x2f224c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2250u;
        goto label_2f2250;
    }
    ctx->pc = 0x2F2248u;
    {
        const bool branch_taken_0x2f2248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2248) {
            ctx->pc = 0x2F224Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2248u;
            // 0x2f224c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2264u;
            goto label_2f2264;
        }
    }
    ctx->pc = 0x2F2250u;
label_2f2250:
    // 0x2f2250: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f2250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f2254:
    // 0x2f2254: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f2254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f2258:
    // 0x2f2258: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2f225c:
    if (ctx->pc == 0x2F225Cu) {
        ctx->pc = 0x2F225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2258u;
        // 0x2f225c: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2260u;
        goto label_2f2260;
    }
    ctx->pc = 0x2F2258u;
    {
        const bool branch_taken_0x2f2258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2258u;
        // 0x2f225c: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2258) {
            ctx->pc = 0x2F2270u;
            goto label_2f2270;
        }
    }
    ctx->pc = 0x2F2260u;
label_2f2260:
    // 0x2f2260: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f2260u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2f2264:
    // 0x2f2264: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2268:
    // 0x2f2268: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f2268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2f226c:
    // 0x2f226c: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f226cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2270:
    // 0x2f2270: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2f2270u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2f2274:
    // 0x2f2274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2278:
    // 0x2f2278: 0x34c6006b  ori         $a2, $a2, 0x6B
    ctx->pc = 0x2f2278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)107);
label_2f227c:
    // 0x2f227c: 0xc0bb96a  jal         func_2EE5A8
label_2f2280:
    if (ctx->pc == 0x2F2280u) {
        ctx->pc = 0x2F2280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F227Cu;
        // 0x2f2280: 0x34e70100  ori         $a3, $a3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2284u;
        goto label_2f2284;
    }
    ctx->pc = 0x2F227Cu;
    SET_GPR_U32(ctx, 31, 0x2F2284u);
    ctx->pc = 0x2F2280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F227Cu;
    // 0x2f2280: 0x34e70100  ori         $a3, $a3, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F227Cu, 0x2F2284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2284u;
label_2f2284:
    // 0x2f2284: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f2284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f2288:
    // 0x2f2288: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f228c:
    if (ctx->pc == 0x2F228Cu) {
        ctx->pc = 0x2F228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2288u;
        // 0x2f228c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2290u;
        goto label_2f2290;
    }
    ctx->pc = 0x2F2288u;
    {
        const bool branch_taken_0x2f2288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2288) {
            ctx->pc = 0x2F228Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2288u;
            // 0x2f228c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F22A4u;
            goto label_2f22a4;
        }
    }
    ctx->pc = 0x2F2290u;
label_2f2290:
    // 0x2f2290: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f2290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f2294:
    // 0x2f2294: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f2294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f2298:
    // 0x2f2298: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2f229c:
    if (ctx->pc == 0x2F229Cu) {
        ctx->pc = 0x2F229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2298u;
        // 0x2f229c: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F22A0u;
        goto label_2f22a0;
    }
    ctx->pc = 0x2F2298u;
    {
        const bool branch_taken_0x2f2298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2298u;
        // 0x2f229c: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2298) {
            ctx->pc = 0x2F22B0u;
            goto label_2f22b0;
        }
    }
    ctx->pc = 0x2F22A0u;
label_2f22a0:
    // 0x2f22a0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f22a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2f22a4:
    // 0x2f22a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f22a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f22a8:
    // 0x2f22a8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f22a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2f22ac:
    // 0x2f22ac: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f22acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f22b0:
    // 0x2f22b0: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2f22b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2f22b4:
    // 0x2f22b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f22b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f22b8:
    // 0x2f22b8: 0x34c6006a  ori         $a2, $a2, 0x6A
    ctx->pc = 0x2f22b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)106);
label_2f22bc:
    // 0x2f22bc: 0xc0bb96a  jal         func_2EE5A8
label_2f22c0:
    if (ctx->pc == 0x2F22C0u) {
        ctx->pc = 0x2F22C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22BCu;
        // 0x2f22c0: 0x34e700ff  ori         $a3, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F22C4u;
        goto label_2f22c4;
    }
    ctx->pc = 0x2F22BCu;
    SET_GPR_U32(ctx, 31, 0x2F22C4u);
    ctx->pc = 0x2F22C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F22BCu;
    // 0x2f22c0: 0x34e700ff  ori         $a3, $a3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F22BCu, 0x2F22C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F22C4u;
label_2f22c4:
    // 0x2f22c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f22c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f22c8:
    // 0x2f22c8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f22cc:
    if (ctx->pc == 0x2F22CCu) {
        ctx->pc = 0x2F22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22C8u;
        // 0x2f22cc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F22D0u;
        goto label_2f22d0;
    }
    ctx->pc = 0x2F22C8u;
    {
        const bool branch_taken_0x2f22c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f22c8) {
            ctx->pc = 0x2F22CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F22C8u;
            // 0x2f22cc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F22E4u;
            goto label_2f22e4;
        }
    }
    ctx->pc = 0x2F22D0u;
label_2f22d0:
    // 0x2f22d0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f22d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f22d4:
    // 0x2f22d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2f22d8:
    // 0x2f22d8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2f22dc:
    if (ctx->pc == 0x2F22DCu) {
        ctx->pc = 0x2F22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22D8u;
        // 0x2f22dc: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F22E0u;
        goto label_2f22e0;
    }
    ctx->pc = 0x2F22D8u;
    {
        const bool branch_taken_0x2f22d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22D8u;
        // 0x2f22dc: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f22d8) {
            ctx->pc = 0x2F22F0u;
            goto label_2f22f0;
        }
    }
    ctx->pc = 0x2F22E0u;
label_2f22e0:
    // 0x2f22e0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f22e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f22e4:
    // 0x2f22e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f22e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f22e8:
    // 0x2f22e8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f22e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2f22ec:
    // 0x2f22ec: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f22ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f22f0:
    // 0x2f22f0: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2f22f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2f22f4:
    // 0x2f22f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f22f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f22f8:
    // 0x2f22f8: 0x34c6006d  ori         $a2, $a2, 0x6D
    ctx->pc = 0x2f22f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)109);
label_2f22fc:
    // 0x2f22fc: 0xc0bb96a  jal         func_2EE5A8
label_2f2300:
    if (ctx->pc == 0x2F2300u) {
        ctx->pc = 0x2F2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22FCu;
        // 0x2f2300: 0x34e70103  ori         $a3, $a3, 0x103 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)259);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2304u;
        goto label_2f2304;
    }
    ctx->pc = 0x2F22FCu;
    SET_GPR_U32(ctx, 31, 0x2F2304u);
    ctx->pc = 0x2F2300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F22FCu;
    // 0x2f2300: 0x34e70103  ori         $a3, $a3, 0x103 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)259);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F22FCu, 0x2F2304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2304u;
label_2f2304:
    // 0x2f2304: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f2304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f2308:
    // 0x2f2308: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f230c:
    if (ctx->pc == 0x2F230Cu) {
        ctx->pc = 0x2F230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2308u;
        // 0x2f230c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2310u;
        goto label_2f2310;
    }
    ctx->pc = 0x2F2308u;
    {
        const bool branch_taken_0x2f2308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2308) {
            ctx->pc = 0x2F230Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2308u;
            // 0x2f230c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2324u;
            goto label_2f2324;
        }
    }
    ctx->pc = 0x2F2310u;
label_2f2310:
    // 0x2f2310: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f2310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f2314:
    // 0x2f2314: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f2314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2f2318:
    // 0x2f2318: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2f231c:
    if (ctx->pc == 0x2F231Cu) {
        ctx->pc = 0x2F231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2318u;
        // 0x2f231c: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2320u;
        goto label_2f2320;
    }
    ctx->pc = 0x2F2318u;
    {
        const bool branch_taken_0x2f2318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2318u;
        // 0x2f231c: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2318) {
            ctx->pc = 0x2F2330u;
            goto label_2f2330;
        }
    }
    ctx->pc = 0x2F2320u;
label_2f2320:
    // 0x2f2320: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f2320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2f2324:
    // 0x2f2324: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2328:
    // 0x2f2328: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f2328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f232c:
    // 0x2f232c: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f232cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2330:
    // 0x2f2330: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2f2330u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
label_2f2334:
    // 0x2f2334: 0x34e70102  ori         $a3, $a3, 0x102
    ctx->pc = 0x2f2334u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)258);
label_2f2338:
    // 0x2f2338: 0x34c6006e  ori         $a2, $a2, 0x6E
    ctx->pc = 0x2f2338u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)110);
label_2f233c:
    // 0x2f233c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f233cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2340:
    // 0x2f2340: 0xc0bb96a  jal         func_2EE5A8
label_2f2344:
    if (ctx->pc == 0x2F2344u) {
        ctx->pc = 0x2F2344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2340u;
        // 0x2f2344: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2348u;
        goto label_2f2348;
    }
    ctx->pc = 0x2F2340u;
    SET_GPR_U32(ctx, 31, 0x2F2348u);
    ctx->pc = 0x2F2344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2340u;
    // 0x2f2344: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2340u, 0x2F2348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2348u;
label_2f2348:
    // 0x2f2348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f2348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f234c:
    // 0x2f234c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f234cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f2350:
    // 0x2f2350: 0xc0bcf2c  jal         func_2F3CB0
label_2f2354:
    if (ctx->pc == 0x2F2354u) {
        ctx->pc = 0x2F2354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2350u;
        // 0x2f2354: 0x2610f514  addiu       $s0, $s0, -0xAEC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2358u;
        goto label_2f2358;
    }
    ctx->pc = 0x2F2350u;
    SET_GPR_U32(ctx, 31, 0x2F2358u);
    ctx->pc = 0x2F2354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2350u;
    // 0x2f2354: 0x2610f514  addiu       $s0, $s0, -0xAEC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3CB0u, 0x2F2350u, 0x2F2358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2358u;
label_2f2358:
    // 0x2f2358: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f2358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f235c:
    // 0x2f235c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f235cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f2360:
    // 0x2f2360: 0xc0bb966  jal         func_2EE598
label_2f2364:
    if (ctx->pc == 0x2F2364u) {
        ctx->pc = 0x2F2364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2360u;
        // 0x2f2364: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2368u;
        goto label_2f2368;
    }
    ctx->pc = 0x2F2360u;
    SET_GPR_U32(ctx, 31, 0x2F2368u);
    ctx->pc = 0x2F2364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2360u;
    // 0x2f2364: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F2360u, 0x2F2368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2368u;
label_2f2368:
    // 0x2f2368: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f2368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f236c:
    // 0x2f236c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f236cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f2370:
    // 0x2f2370: 0xc0bb966  jal         func_2EE598
label_2f2374:
    if (ctx->pc == 0x2F2374u) {
        ctx->pc = 0x2F2374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2370u;
        // 0x2f2374: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2378u;
        goto label_2f2378;
    }
    ctx->pc = 0x2F2370u;
    SET_GPR_U32(ctx, 31, 0x2F2378u);
    ctx->pc = 0x2F2374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2370u;
    // 0x2f2374: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F2370u, 0x2F2378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2378u;
label_2f2378:
    // 0x2f2378: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f2378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f237c:
    // 0x2f237c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f237cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f2380:
    // 0x2f2380: 0xc0bb966  jal         func_2EE598
label_2f2384:
    if (ctx->pc == 0x2F2384u) {
        ctx->pc = 0x2F2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2380u;
        // 0x2f2384: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2388u;
        goto label_2f2388;
    }
    ctx->pc = 0x2F2380u;
    SET_GPR_U32(ctx, 31, 0x2F2388u);
    ctx->pc = 0x2F2384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2380u;
    // 0x2f2384: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F2380u, 0x2F2388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2388u;
label_2f2388:
    // 0x2f2388: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f2388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f238c:
    // 0x2f238c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f238cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f2390:
    // 0x2f2390: 0xc0bb966  jal         func_2EE598
label_2f2394:
    if (ctx->pc == 0x2F2394u) {
        ctx->pc = 0x2F2394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2390u;
        // 0x2f2394: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2398u;
        goto label_2f2398;
    }
    ctx->pc = 0x2F2390u;
    SET_GPR_U32(ctx, 31, 0x2F2398u);
    ctx->pc = 0x2F2394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2390u;
    // 0x2f2394: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F2390u, 0x2F2398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2398u;
label_2f2398:
    // 0x2f2398: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f2398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f239c:
    // 0x2f239c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f239cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f23a0:
    // 0x2f23a0: 0xc0bb966  jal         func_2EE598
label_2f23a4:
    if (ctx->pc == 0x2F23A4u) {
        ctx->pc = 0x2F23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23A0u;
        // 0x2f23a4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F23A8u;
        goto label_2f23a8;
    }
    ctx->pc = 0x2F23A0u;
    SET_GPR_U32(ctx, 31, 0x2F23A8u);
    ctx->pc = 0x2F23A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F23A0u;
    // 0x2f23a4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F23A0u, 0x2F23A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F23A8u;
label_2f23a8:
    // 0x2f23a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f23a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f23ac:
    // 0x2f23ac: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f23acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f23b0:
    // 0x2f23b0: 0xc0bb966  jal         func_2EE598
label_2f23b4:
    if (ctx->pc == 0x2F23B4u) {
        ctx->pc = 0x2F23B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23B0u;
        // 0x2f23b4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F23B8u;
        goto label_2f23b8;
    }
    ctx->pc = 0x2F23B0u;
    SET_GPR_U32(ctx, 31, 0x2F23B8u);
    ctx->pc = 0x2F23B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F23B0u;
    // 0x2f23b4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F23B0u, 0x2F23B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F23B8u;
label_2f23b8:
    // 0x2f23b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f23b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f23bc:
    // 0x2f23bc: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f23bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f23c0:
    // 0x2f23c0: 0xc0bb966  jal         func_2EE598
label_2f23c4:
    if (ctx->pc == 0x2F23C4u) {
        ctx->pc = 0x2F23C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23C0u;
        // 0x2f23c4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F23C8u;
        goto label_2f23c8;
    }
    ctx->pc = 0x2F23C0u;
    SET_GPR_U32(ctx, 31, 0x2F23C8u);
    ctx->pc = 0x2F23C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F23C0u;
    // 0x2f23c4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F23C0u, 0x2F23C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F23C8u;
label_2f23c8:
    // 0x2f23c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f23c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f23cc:
    // 0x2f23cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f23ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f23d0:
    // 0x2f23d0: 0xc0bb966  jal         func_2EE598
label_2f23d4:
    if (ctx->pc == 0x2F23D4u) {
        ctx->pc = 0x2F23D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23D0u;
        // 0x2f23d4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F23D8u;
        goto label_2f23d8;
    }
    ctx->pc = 0x2F23D0u;
    SET_GPR_U32(ctx, 31, 0x2F23D8u);
    ctx->pc = 0x2F23D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F23D0u;
    // 0x2f23d4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2F23D0u, 0x2F23D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F23D8u;
label_2f23d8:
    // 0x2f23d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f23d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f23dc:
    // 0x2f23dc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f23dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f23e0:
    // 0x2f23e0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f23e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f23e4:
    // 0x2f23e4: 0x34c60159  ori         $a2, $a2, 0x159
    ctx->pc = 0x2f23e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)345);
label_2f23e8:
    // 0x2f23e8: 0xc0bb96a  jal         func_2EE5A8
label_2f23ec:
    if (ctx->pc == 0x2F23ECu) {
        ctx->pc = 0x2F23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23E8u;
        // 0x2f23ec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F23F0u;
        goto label_2f23f0;
    }
    ctx->pc = 0x2F23E8u;
    SET_GPR_U32(ctx, 31, 0x2F23F0u);
    ctx->pc = 0x2F23ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F23E8u;
    // 0x2f23ec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F23E8u, 0x2F23F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F23F0u;
label_2f23f0:
    // 0x2f23f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f23f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f23f4:
    // 0x2f23f4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f23f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f23f8:
    // 0x2f23f8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f23f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f23fc:
    // 0x2f23fc: 0x34c6015a  ori         $a2, $a2, 0x15A
    ctx->pc = 0x2f23fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)346);
label_2f2400:
    // 0x2f2400: 0xc0bb96a  jal         func_2EE5A8
label_2f2404:
    if (ctx->pc == 0x2F2404u) {
        ctx->pc = 0x2F2404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2400u;
        // 0x2f2404: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2408u;
        goto label_2f2408;
    }
    ctx->pc = 0x2F2400u;
    SET_GPR_U32(ctx, 31, 0x2F2408u);
    ctx->pc = 0x2F2404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2400u;
    // 0x2f2404: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2400u, 0x2F2408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2408u;
label_2f2408:
    // 0x2f2408: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f2408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f240c:
    // 0x2f240c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f240cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f2410:
    // 0x2f2410: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2410u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2414:
    // 0x2f2414: 0x34c6015b  ori         $a2, $a2, 0x15B
    ctx->pc = 0x2f2414u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)347);
label_2f2418:
    // 0x2f2418: 0xc0bb96a  jal         func_2EE5A8
label_2f241c:
    if (ctx->pc == 0x2F241Cu) {
        ctx->pc = 0x2F241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2418u;
        // 0x2f241c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2420u;
        goto label_2f2420;
    }
    ctx->pc = 0x2F2418u;
    SET_GPR_U32(ctx, 31, 0x2F2420u);
    ctx->pc = 0x2F241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2418u;
    // 0x2f241c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2418u, 0x2F2420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2420u;
label_2f2420:
    // 0x2f2420: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f2420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2424:
    // 0x2f2424: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f2424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f2428:
    // 0x2f2428: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2428u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f242c:
    // 0x2f242c: 0x34c6015c  ori         $a2, $a2, 0x15C
    ctx->pc = 0x2f242cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)348);
label_2f2430:
    // 0x2f2430: 0xc0bb96a  jal         func_2EE5A8
label_2f2434:
    if (ctx->pc == 0x2F2434u) {
        ctx->pc = 0x2F2434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2430u;
        // 0x2f2434: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2438u;
        goto label_2f2438;
    }
    ctx->pc = 0x2F2430u;
    SET_GPR_U32(ctx, 31, 0x2F2438u);
    ctx->pc = 0x2F2434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2430u;
    // 0x2f2434: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2430u, 0x2F2438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2438u;
label_2f2438:
    // 0x2f2438: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f2438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f243c:
    // 0x2f243c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f243cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f2440:
    // 0x2f2440: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2444:
    // 0x2f2444: 0x34c6015d  ori         $a2, $a2, 0x15D
    ctx->pc = 0x2f2444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)349);
label_2f2448:
    // 0x2f2448: 0xc0bb96a  jal         func_2EE5A8
label_2f244c:
    if (ctx->pc == 0x2F244Cu) {
        ctx->pc = 0x2F244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2448u;
        // 0x2f244c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2450u;
        goto label_2f2450;
    }
    ctx->pc = 0x2F2448u;
    SET_GPR_U32(ctx, 31, 0x2F2450u);
    ctx->pc = 0x2F244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2448u;
    // 0x2f244c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2448u, 0x2F2450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2450u;
label_2f2450:
    // 0x2f2450: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f2450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f2454:
    // 0x2f2454: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f2454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f2458:
    // 0x2f2458: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2458u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f245c:
    // 0x2f245c: 0x34c6015e  ori         $a2, $a2, 0x15E
    ctx->pc = 0x2f245cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)350);
label_2f2460:
    // 0x2f2460: 0xc0bb96a  jal         func_2EE5A8
label_2f2464:
    if (ctx->pc == 0x2F2464u) {
        ctx->pc = 0x2F2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2460u;
        // 0x2f2464: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2468u;
        goto label_2f2468;
    }
    ctx->pc = 0x2F2460u;
    SET_GPR_U32(ctx, 31, 0x2F2468u);
    ctx->pc = 0x2F2464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2460u;
    // 0x2f2464: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2460u, 0x2F2468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2468u;
label_2f2468:
    // 0x2f2468: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f2468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f246c:
    // 0x2f246c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f246cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f2470:
    // 0x2f2470: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2470u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2474:
    // 0x2f2474: 0x34c6015f  ori         $a2, $a2, 0x15F
    ctx->pc = 0x2f2474u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)351);
label_2f2478:
    // 0x2f2478: 0xc0bb96a  jal         func_2EE5A8
label_2f247c:
    if (ctx->pc == 0x2F247Cu) {
        ctx->pc = 0x2F247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2478u;
        // 0x2f247c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2480u;
        goto label_2f2480;
    }
    ctx->pc = 0x2F2478u;
    SET_GPR_U32(ctx, 31, 0x2F2480u);
    ctx->pc = 0x2F247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2478u;
    // 0x2f247c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2478u, 0x2F2480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2480u;
label_2f2480:
    // 0x2f2480: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f2480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f2484:
    // 0x2f2484: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f2484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f2488:
    // 0x2f2488: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2488u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f248c:
    // 0x2f248c: 0x34c60160  ori         $a2, $a2, 0x160
    ctx->pc = 0x2f248cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)352);
label_2f2490:
    // 0x2f2490: 0xc0bb96a  jal         func_2EE5A8
label_2f2494:
    if (ctx->pc == 0x2F2494u) {
        ctx->pc = 0x2F2494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2490u;
        // 0x2f2494: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2498u;
        goto label_2f2498;
    }
    ctx->pc = 0x2F2490u;
    SET_GPR_U32(ctx, 31, 0x2F2498u);
    ctx->pc = 0x2F2494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2490u;
    // 0x2f2494: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2490u, 0x2F2498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2498u;
label_2f2498:
    // 0x2f2498: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f2498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f249c:
    // 0x2f249c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f249cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f24a0:
    // 0x2f24a0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f24a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f24a4:
    // 0x2f24a4: 0x34c60203  ori         $a2, $a2, 0x203
    ctx->pc = 0x2f24a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)515);
label_2f24a8:
    // 0x2f24a8: 0xc0bb96a  jal         func_2EE5A8
label_2f24ac:
    if (ctx->pc == 0x2F24ACu) {
        ctx->pc = 0x2F24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F24A8u;
        // 0x2f24ac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F24B0u;
        goto label_2f24b0;
    }
    ctx->pc = 0x2F24A8u;
    SET_GPR_U32(ctx, 31, 0x2F24B0u);
    ctx->pc = 0x2F24ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F24A8u;
    // 0x2f24ac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F24A8u, 0x2F24B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F24B0u;
label_2f24b0:
    // 0x2f24b0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2f24b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f24b4:
    // 0x2f24b4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f24b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f24b8:
    // 0x2f24b8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f24b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f24bc:
    // 0x2f24bc: 0x34c60162  ori         $a2, $a2, 0x162
    ctx->pc = 0x2f24bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)354);
label_2f24c0:
    // 0x2f24c0: 0xc0bb96a  jal         func_2EE5A8
label_2f24c4:
    if (ctx->pc == 0x2F24C4u) {
        ctx->pc = 0x2F24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F24C0u;
        // 0x2f24c4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F24C8u;
        goto label_2f24c8;
    }
    ctx->pc = 0x2F24C0u;
    SET_GPR_U32(ctx, 31, 0x2F24C8u);
    ctx->pc = 0x2F24C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F24C0u;
    // 0x2f24c4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F24C0u, 0x2F24C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F24C8u;
label_2f24c8:
    // 0x2f24c8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f24c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f24cc:
    // 0x2f24cc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f24ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f24d0:
    // 0x2f24d0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f24d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f24d4:
    // 0x2f24d4: 0x34c60161  ori         $a2, $a2, 0x161
    ctx->pc = 0x2f24d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)353);
label_2f24d8:
    // 0x2f24d8: 0xc0bb96a  jal         func_2EE5A8
label_2f24dc:
    if (ctx->pc == 0x2F24DCu) {
        ctx->pc = 0x2F24DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F24D8u;
        // 0x2f24dc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F24E0u;
        goto label_2f24e0;
    }
    ctx->pc = 0x2F24D8u;
    SET_GPR_U32(ctx, 31, 0x2F24E0u);
    ctx->pc = 0x2F24DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F24D8u;
    // 0x2f24dc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F24D8u, 0x2F24E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F24E0u;
label_2f24e0:
    // 0x2f24e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f24e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f24e4:
    // 0x2f24e4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f24e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f24e8:
    // 0x2f24e8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f24e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f24ec:
    // 0x2f24ec: 0x34c6014e  ori         $a2, $a2, 0x14E
    ctx->pc = 0x2f24ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)334);
label_2f24f0:
    // 0x2f24f0: 0xc0bb96a  jal         func_2EE5A8
label_2f24f4:
    if (ctx->pc == 0x2F24F4u) {
        ctx->pc = 0x2F24F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F24F0u;
        // 0x2f24f4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F24F8u;
        goto label_2f24f8;
    }
    ctx->pc = 0x2F24F0u;
    SET_GPR_U32(ctx, 31, 0x2F24F8u);
    ctx->pc = 0x2F24F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F24F0u;
    // 0x2f24f4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F24F0u, 0x2F24F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F24F8u;
label_2f24f8:
    // 0x2f24f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f24f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f24fc:
    // 0x2f24fc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f24fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f2500:
    // 0x2f2500: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2500u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2504:
    // 0x2f2504: 0x34c6014f  ori         $a2, $a2, 0x14F
    ctx->pc = 0x2f2504u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)335);
label_2f2508:
    // 0x2f2508: 0xc0bb96a  jal         func_2EE5A8
label_2f250c:
    if (ctx->pc == 0x2F250Cu) {
        ctx->pc = 0x2F250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2508u;
        // 0x2f250c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2510u;
        goto label_2f2510;
    }
    ctx->pc = 0x2F2508u;
    SET_GPR_U32(ctx, 31, 0x2F2510u);
    ctx->pc = 0x2F250Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2508u;
    // 0x2f250c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2508u, 0x2F2510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2510u;
label_2f2510:
    // 0x2f2510: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f2510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f2514:
    // 0x2f2514: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f2514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f2518:
    // 0x2f2518: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f251c:
    // 0x2f251c: 0x34c60150  ori         $a2, $a2, 0x150
    ctx->pc = 0x2f251cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)336);
label_2f2520:
    // 0x2f2520: 0xc0bb96a  jal         func_2EE5A8
label_2f2524:
    if (ctx->pc == 0x2F2524u) {
        ctx->pc = 0x2F2524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2520u;
        // 0x2f2524: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2528u;
        goto label_2f2528;
    }
    ctx->pc = 0x2F2520u;
    SET_GPR_U32(ctx, 31, 0x2F2528u);
    ctx->pc = 0x2F2524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2520u;
    // 0x2f2524: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2520u, 0x2F2528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2528u;
label_2f2528:
    // 0x2f2528: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f2528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f252c:
    // 0x2f252c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f252cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f2530:
    // 0x2f2530: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2530u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2534:
    // 0x2f2534: 0x34c60151  ori         $a2, $a2, 0x151
    ctx->pc = 0x2f2534u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)337);
label_2f2538:
    // 0x2f2538: 0xc0bb96a  jal         func_2EE5A8
label_2f253c:
    if (ctx->pc == 0x2F253Cu) {
        ctx->pc = 0x2F253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2538u;
        // 0x2f253c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2540u;
        goto label_2f2540;
    }
    ctx->pc = 0x2F2538u;
    SET_GPR_U32(ctx, 31, 0x2F2540u);
    ctx->pc = 0x2F253Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2538u;
    // 0x2f253c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2538u, 0x2F2540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2540u;
label_2f2540:
    // 0x2f2540: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f2540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f2544:
    // 0x2f2544: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f2544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f2548:
    // 0x2f2548: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2548u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f254c:
    // 0x2f254c: 0x34c60152  ori         $a2, $a2, 0x152
    ctx->pc = 0x2f254cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)338);
label_2f2550:
    // 0x2f2550: 0xc0bb96a  jal         func_2EE5A8
label_2f2554:
    if (ctx->pc == 0x2F2554u) {
        ctx->pc = 0x2F2554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2550u;
        // 0x2f2554: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2558u;
        goto label_2f2558;
    }
    ctx->pc = 0x2F2550u;
    SET_GPR_U32(ctx, 31, 0x2F2558u);
    ctx->pc = 0x2F2554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2550u;
    // 0x2f2554: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2550u, 0x2F2558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2558u;
label_2f2558:
    // 0x2f2558: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f2558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f255c:
    // 0x2f255c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f255cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f2560:
    // 0x2f2560: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2560u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2564:
    // 0x2f2564: 0x34c60153  ori         $a2, $a2, 0x153
    ctx->pc = 0x2f2564u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)339);
label_2f2568:
    // 0x2f2568: 0xc0bb96a  jal         func_2EE5A8
label_2f256c:
    if (ctx->pc == 0x2F256Cu) {
        ctx->pc = 0x2F256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2568u;
        // 0x2f256c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2570u;
        goto label_2f2570;
    }
    ctx->pc = 0x2F2568u;
    SET_GPR_U32(ctx, 31, 0x2F2570u);
    ctx->pc = 0x2F256Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2568u;
    // 0x2f256c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2568u, 0x2F2570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2570u;
label_2f2570:
    // 0x2f2570: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f2570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f2574:
    // 0x2f2574: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f2574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f2578:
    // 0x2f2578: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2578u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f257c:
    // 0x2f257c: 0x34c60154  ori         $a2, $a2, 0x154
    ctx->pc = 0x2f257cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)340);
label_2f2580:
    // 0x2f2580: 0xc0bb96a  jal         func_2EE5A8
label_2f2584:
    if (ctx->pc == 0x2F2584u) {
        ctx->pc = 0x2F2584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2580u;
        // 0x2f2584: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2588u;
        goto label_2f2588;
    }
    ctx->pc = 0x2F2580u;
    SET_GPR_U32(ctx, 31, 0x2F2588u);
    ctx->pc = 0x2F2584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2580u;
    // 0x2f2584: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2580u, 0x2F2588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2588u;
label_2f2588:
    // 0x2f2588: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f2588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f258c:
    // 0x2f258c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f258cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f2590:
    // 0x2f2590: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2590u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2594:
    // 0x2f2594: 0x34c60155  ori         $a2, $a2, 0x155
    ctx->pc = 0x2f2594u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)341);
label_2f2598:
    // 0x2f2598: 0xc0bb96a  jal         func_2EE5A8
label_2f259c:
    if (ctx->pc == 0x2F259Cu) {
        ctx->pc = 0x2F259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2598u;
        // 0x2f259c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F25A0u;
        goto label_2f25a0;
    }
    ctx->pc = 0x2F2598u;
    SET_GPR_U32(ctx, 31, 0x2F25A0u);
    ctx->pc = 0x2F259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2598u;
    // 0x2f259c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2598u, 0x2F25A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F25A0u;
label_2f25a0:
    // 0x2f25a0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f25a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f25a4:
    // 0x2f25a4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f25a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f25a8:
    // 0x2f25a8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f25a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f25ac:
    // 0x2f25ac: 0x34c60202  ori         $a2, $a2, 0x202
    ctx->pc = 0x2f25acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)514);
label_2f25b0:
    // 0x2f25b0: 0xc0bb96a  jal         func_2EE5A8
label_2f25b4:
    if (ctx->pc == 0x2F25B4u) {
        ctx->pc = 0x2F25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25B0u;
        // 0x2f25b4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F25B8u;
        goto label_2f25b8;
    }
    ctx->pc = 0x2F25B0u;
    SET_GPR_U32(ctx, 31, 0x2F25B8u);
    ctx->pc = 0x2F25B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F25B0u;
    // 0x2f25b4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F25B0u, 0x2F25B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F25B8u;
label_2f25b8:
    // 0x2f25b8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2f25b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f25bc:
    // 0x2f25bc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f25bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f25c0:
    // 0x2f25c0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f25c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f25c4:
    // 0x2f25c4: 0x34c60157  ori         $a2, $a2, 0x157
    ctx->pc = 0x2f25c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)343);
label_2f25c8:
    // 0x2f25c8: 0xc0bb96a  jal         func_2EE5A8
label_2f25cc:
    if (ctx->pc == 0x2F25CCu) {
        ctx->pc = 0x2F25CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25C8u;
        // 0x2f25cc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F25D0u;
        goto label_2f25d0;
    }
    ctx->pc = 0x2F25C8u;
    SET_GPR_U32(ctx, 31, 0x2F25D0u);
    ctx->pc = 0x2F25CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F25C8u;
    // 0x2f25cc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F25C8u, 0x2F25D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F25D0u;
label_2f25d0:
    // 0x2f25d0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f25d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f25d4:
    // 0x2f25d4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f25d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f25d8:
    // 0x2f25d8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f25d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f25dc:
    // 0x2f25dc: 0x34c60156  ori         $a2, $a2, 0x156
    ctx->pc = 0x2f25dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)342);
label_2f25e0:
    // 0x2f25e0: 0xc0bb96a  jal         func_2EE5A8
label_2f25e4:
    if (ctx->pc == 0x2F25E4u) {
        ctx->pc = 0x2F25E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25E0u;
        // 0x2f25e4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F25E8u;
        goto label_2f25e8;
    }
    ctx->pc = 0x2F25E0u;
    SET_GPR_U32(ctx, 31, 0x2F25E8u);
    ctx->pc = 0x2F25E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F25E0u;
    // 0x2f25e4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F25E0u, 0x2F25E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F25E8u;
label_2f25e8:
    // 0x2f25e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f25e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f25ec:
    // 0x2f25ec: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f25ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f25f0:
    // 0x2f25f0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f25f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f25f4:
    // 0x2f25f4: 0x34c6016f  ori         $a2, $a2, 0x16F
    ctx->pc = 0x2f25f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)367);
label_2f25f8:
    // 0x2f25f8: 0xc0bb96a  jal         func_2EE5A8
label_2f25fc:
    if (ctx->pc == 0x2F25FCu) {
        ctx->pc = 0x2F25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25F8u;
        // 0x2f25fc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2600u;
        goto label_2f2600;
    }
    ctx->pc = 0x2F25F8u;
    SET_GPR_U32(ctx, 31, 0x2F2600u);
    ctx->pc = 0x2F25FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F25F8u;
    // 0x2f25fc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F25F8u, 0x2F2600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2600u;
label_2f2600:
    // 0x2f2600: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2604:
    // 0x2f2604: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f2604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f2608:
    // 0x2f2608: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2608u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f260c:
    // 0x2f260c: 0x34c60170  ori         $a2, $a2, 0x170
    ctx->pc = 0x2f260cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)368);
label_2f2610:
    // 0x2f2610: 0xc0bb96a  jal         func_2EE5A8
label_2f2614:
    if (ctx->pc == 0x2F2614u) {
        ctx->pc = 0x2F2614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2610u;
        // 0x2f2614: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2618u;
        goto label_2f2618;
    }
    ctx->pc = 0x2F2610u;
    SET_GPR_U32(ctx, 31, 0x2F2618u);
    ctx->pc = 0x2F2614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2610u;
    // 0x2f2614: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2610u, 0x2F2618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2618u;
label_2f2618:
    // 0x2f2618: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f2618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f261c:
    // 0x2f261c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f261cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f2620:
    // 0x2f2620: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2620u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2624:
    // 0x2f2624: 0x34c60171  ori         $a2, $a2, 0x171
    ctx->pc = 0x2f2624u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)369);
label_2f2628:
    // 0x2f2628: 0xc0bb96a  jal         func_2EE5A8
label_2f262c:
    if (ctx->pc == 0x2F262Cu) {
        ctx->pc = 0x2F262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2628u;
        // 0x2f262c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2630u;
        goto label_2f2630;
    }
    ctx->pc = 0x2F2628u;
    SET_GPR_U32(ctx, 31, 0x2F2630u);
    ctx->pc = 0x2F262Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2628u;
    // 0x2f262c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2628u, 0x2F2630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2630u;
label_2f2630:
    // 0x2f2630: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f2630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2634:
    // 0x2f2634: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f2634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f2638:
    // 0x2f2638: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2638u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f263c:
    // 0x2f263c: 0x34c60172  ori         $a2, $a2, 0x172
    ctx->pc = 0x2f263cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)370);
label_2f2640:
    // 0x2f2640: 0xc0bb96a  jal         func_2EE5A8
label_2f2644:
    if (ctx->pc == 0x2F2644u) {
        ctx->pc = 0x2F2644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2640u;
        // 0x2f2644: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2648u;
        goto label_2f2648;
    }
    ctx->pc = 0x2F2640u;
    SET_GPR_U32(ctx, 31, 0x2F2648u);
    ctx->pc = 0x2F2644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2640u;
    // 0x2f2644: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2640u, 0x2F2648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2648u;
label_2f2648:
    // 0x2f2648: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f2648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f264c:
    // 0x2f264c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f264cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f2650:
    // 0x2f2650: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2650u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2654:
    // 0x2f2654: 0x34c60173  ori         $a2, $a2, 0x173
    ctx->pc = 0x2f2654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)371);
label_2f2658:
    // 0x2f2658: 0xc0bb96a  jal         func_2EE5A8
label_2f265c:
    if (ctx->pc == 0x2F265Cu) {
        ctx->pc = 0x2F265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2658u;
        // 0x2f265c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2660u;
        goto label_2f2660;
    }
    ctx->pc = 0x2F2658u;
    SET_GPR_U32(ctx, 31, 0x2F2660u);
    ctx->pc = 0x2F265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2658u;
    // 0x2f265c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2658u, 0x2F2660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2660u;
label_2f2660:
    // 0x2f2660: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f2660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f2664:
    // 0x2f2664: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f2664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f2668:
    // 0x2f2668: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f266c:
    // 0x2f266c: 0x34c60174  ori         $a2, $a2, 0x174
    ctx->pc = 0x2f266cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)372);
label_2f2670:
    // 0x2f2670: 0xc0bb96a  jal         func_2EE5A8
label_2f2674:
    if (ctx->pc == 0x2F2674u) {
        ctx->pc = 0x2F2674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2670u;
        // 0x2f2674: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2678u;
        goto label_2f2678;
    }
    ctx->pc = 0x2F2670u;
    SET_GPR_U32(ctx, 31, 0x2F2678u);
    ctx->pc = 0x2F2674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2670u;
    // 0x2f2674: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2670u, 0x2F2678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2678u;
label_2f2678:
    // 0x2f2678: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f2678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f267c:
    // 0x2f267c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f267cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f2680:
    // 0x2f2680: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2680u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2684:
    // 0x2f2684: 0x34c60175  ori         $a2, $a2, 0x175
    ctx->pc = 0x2f2684u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)373);
label_2f2688:
    // 0x2f2688: 0xc0bb96a  jal         func_2EE5A8
label_2f268c:
    if (ctx->pc == 0x2F268Cu) {
        ctx->pc = 0x2F268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2688u;
        // 0x2f268c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2690u;
        goto label_2f2690;
    }
    ctx->pc = 0x2F2688u;
    SET_GPR_U32(ctx, 31, 0x2F2690u);
    ctx->pc = 0x2F268Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2688u;
    // 0x2f268c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2688u, 0x2F2690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2690u;
label_2f2690:
    // 0x2f2690: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f2690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f2694:
    // 0x2f2694: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f2694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f2698:
    // 0x2f2698: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2698u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f269c:
    // 0x2f269c: 0x34c60176  ori         $a2, $a2, 0x176
    ctx->pc = 0x2f269cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)374);
label_2f26a0:
    // 0x2f26a0: 0xc0bb96a  jal         func_2EE5A8
label_2f26a4:
    if (ctx->pc == 0x2F26A4u) {
        ctx->pc = 0x2F26A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26A0u;
        // 0x2f26a4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F26A8u;
        goto label_2f26a8;
    }
    ctx->pc = 0x2F26A0u;
    SET_GPR_U32(ctx, 31, 0x2F26A8u);
    ctx->pc = 0x2F26A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F26A0u;
    // 0x2f26a4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F26A0u, 0x2F26A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F26A8u;
label_2f26a8:
    // 0x2f26a8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f26a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f26ac:
    // 0x2f26ac: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f26acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f26b0:
    // 0x2f26b0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f26b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f26b4:
    // 0x2f26b4: 0x34c60205  ori         $a2, $a2, 0x205
    ctx->pc = 0x2f26b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)517);
label_2f26b8:
    // 0x2f26b8: 0xc0bb96a  jal         func_2EE5A8
label_2f26bc:
    if (ctx->pc == 0x2F26BCu) {
        ctx->pc = 0x2F26BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26B8u;
        // 0x2f26bc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F26C0u;
        goto label_2f26c0;
    }
    ctx->pc = 0x2F26B8u;
    SET_GPR_U32(ctx, 31, 0x2F26C0u);
    ctx->pc = 0x2F26BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F26B8u;
    // 0x2f26bc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F26B8u, 0x2F26C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F26C0u;
label_2f26c0:
    // 0x2f26c0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2f26c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f26c4:
    // 0x2f26c4: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f26c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f26c8:
    // 0x2f26c8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f26c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f26cc:
    // 0x2f26cc: 0x34c60178  ori         $a2, $a2, 0x178
    ctx->pc = 0x2f26ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)376);
label_2f26d0:
    // 0x2f26d0: 0xc0bb96a  jal         func_2EE5A8
label_2f26d4:
    if (ctx->pc == 0x2F26D4u) {
        ctx->pc = 0x2F26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26D0u;
        // 0x2f26d4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F26D8u;
        goto label_2f26d8;
    }
    ctx->pc = 0x2F26D0u;
    SET_GPR_U32(ctx, 31, 0x2F26D8u);
    ctx->pc = 0x2F26D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F26D0u;
    // 0x2f26d4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F26D0u, 0x2F26D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F26D8u;
label_2f26d8:
    // 0x2f26d8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f26d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f26dc:
    // 0x2f26dc: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2f26dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f26e0:
    // 0x2f26e0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f26e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f26e4:
    // 0x2f26e4: 0x34c60177  ori         $a2, $a2, 0x177
    ctx->pc = 0x2f26e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)375);
label_2f26e8:
    // 0x2f26e8: 0xc0bb96a  jal         func_2EE5A8
label_2f26ec:
    if (ctx->pc == 0x2F26ECu) {
        ctx->pc = 0x2F26ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26E8u;
        // 0x2f26ec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F26F0u;
        goto label_2f26f0;
    }
    ctx->pc = 0x2F26E8u;
    SET_GPR_U32(ctx, 31, 0x2F26F0u);
    ctx->pc = 0x2F26ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F26E8u;
    // 0x2f26ec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F26E8u, 0x2F26F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F26F0u;
label_2f26f0:
    // 0x2f26f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f26f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f26f4:
    // 0x2f26f4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f26f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f26f8:
    // 0x2f26f8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f26f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f26fc:
    // 0x2f26fc: 0x34c60164  ori         $a2, $a2, 0x164
    ctx->pc = 0x2f26fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)356);
label_2f2700:
    // 0x2f2700: 0xc0bb96a  jal         func_2EE5A8
label_2f2704:
    if (ctx->pc == 0x2F2704u) {
        ctx->pc = 0x2F2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2700u;
        // 0x2f2704: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2708u;
        goto label_2f2708;
    }
    ctx->pc = 0x2F2700u;
    SET_GPR_U32(ctx, 31, 0x2F2708u);
    ctx->pc = 0x2F2704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2700u;
    // 0x2f2704: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2700u, 0x2F2708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2708u;
label_2f2708:
    // 0x2f2708: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f270c:
    // 0x2f270c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f270cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f2710:
    // 0x2f2710: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2710u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2714:
    // 0x2f2714: 0x34c60165  ori         $a2, $a2, 0x165
    ctx->pc = 0x2f2714u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)357);
label_2f2718:
    // 0x2f2718: 0xc0bb96a  jal         func_2EE5A8
label_2f271c:
    if (ctx->pc == 0x2F271Cu) {
        ctx->pc = 0x2F271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2718u;
        // 0x2f271c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2720u;
        goto label_2f2720;
    }
    ctx->pc = 0x2F2718u;
    SET_GPR_U32(ctx, 31, 0x2F2720u);
    ctx->pc = 0x2F271Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2718u;
    // 0x2f271c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2718u, 0x2F2720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2720u;
label_2f2720:
    // 0x2f2720: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f2720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f2724:
    // 0x2f2724: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f2724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f2728:
    // 0x2f2728: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2728u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f272c:
    // 0x2f272c: 0x34c60166  ori         $a2, $a2, 0x166
    ctx->pc = 0x2f272cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)358);
label_2f2730:
    // 0x2f2730: 0xc0bb96a  jal         func_2EE5A8
label_2f2734:
    if (ctx->pc == 0x2F2734u) {
        ctx->pc = 0x2F2734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2730u;
        // 0x2f2734: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2738u;
        goto label_2f2738;
    }
    ctx->pc = 0x2F2730u;
    SET_GPR_U32(ctx, 31, 0x2F2738u);
    ctx->pc = 0x2F2734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2730u;
    // 0x2f2734: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2730u, 0x2F2738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2738u;
label_2f2738:
    // 0x2f2738: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f2738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f273c:
    // 0x2f273c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f273cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f2740:
    // 0x2f2740: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2740u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2744:
    // 0x2f2744: 0x34c60167  ori         $a2, $a2, 0x167
    ctx->pc = 0x2f2744u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)359);
label_2f2748:
    // 0x2f2748: 0xc0bb96a  jal         func_2EE5A8
label_2f274c:
    if (ctx->pc == 0x2F274Cu) {
        ctx->pc = 0x2F274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2748u;
        // 0x2f274c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2750u;
        goto label_2f2750;
    }
    ctx->pc = 0x2F2748u;
    SET_GPR_U32(ctx, 31, 0x2F2750u);
    ctx->pc = 0x2F274Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2748u;
    // 0x2f274c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2748u, 0x2F2750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2750u;
label_2f2750:
    // 0x2f2750: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f2750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f2754:
    // 0x2f2754: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f2754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f2758:
    // 0x2f2758: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f275c:
    // 0x2f275c: 0x34c60168  ori         $a2, $a2, 0x168
    ctx->pc = 0x2f275cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)360);
label_2f2760:
    // 0x2f2760: 0xc0bb96a  jal         func_2EE5A8
label_2f2764:
    if (ctx->pc == 0x2F2764u) {
        ctx->pc = 0x2F2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2760u;
        // 0x2f2764: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2768u;
        goto label_2f2768;
    }
    ctx->pc = 0x2F2760u;
    SET_GPR_U32(ctx, 31, 0x2F2768u);
    ctx->pc = 0x2F2764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2760u;
    // 0x2f2764: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2760u, 0x2F2768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2768u;
label_2f2768:
    // 0x2f2768: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f2768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f276c:
    // 0x2f276c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f276cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f2770:
    // 0x2f2770: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2770u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2774:
    // 0x2f2774: 0x34c60169  ori         $a2, $a2, 0x169
    ctx->pc = 0x2f2774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)361);
label_2f2778:
    // 0x2f2778: 0xc0bb96a  jal         func_2EE5A8
label_2f277c:
    if (ctx->pc == 0x2F277Cu) {
        ctx->pc = 0x2F277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2778u;
        // 0x2f277c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2780u;
        goto label_2f2780;
    }
    ctx->pc = 0x2F2778u;
    SET_GPR_U32(ctx, 31, 0x2F2780u);
    ctx->pc = 0x2F277Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2778u;
    // 0x2f277c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2778u, 0x2F2780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2780u;
label_2f2780:
    // 0x2f2780: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f2780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f2784:
    // 0x2f2784: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f2784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f2788:
    // 0x2f2788: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2788u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f278c:
    // 0x2f278c: 0x34c6016a  ori         $a2, $a2, 0x16A
    ctx->pc = 0x2f278cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)362);
label_2f2790:
    // 0x2f2790: 0xc0bb96a  jal         func_2EE5A8
label_2f2794:
    if (ctx->pc == 0x2F2794u) {
        ctx->pc = 0x2F2794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2790u;
        // 0x2f2794: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2798u;
        goto label_2f2798;
    }
    ctx->pc = 0x2F2790u;
    SET_GPR_U32(ctx, 31, 0x2F2798u);
    ctx->pc = 0x2F2794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2790u;
    // 0x2f2794: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2790u, 0x2F2798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2798u;
label_2f2798:
    // 0x2f2798: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f2798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f279c:
    // 0x2f279c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f279cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f27a0:
    // 0x2f27a0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f27a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f27a4:
    // 0x2f27a4: 0x34c6016b  ori         $a2, $a2, 0x16B
    ctx->pc = 0x2f27a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)363);
label_2f27a8:
    // 0x2f27a8: 0xc0bb96a  jal         func_2EE5A8
label_2f27ac:
    if (ctx->pc == 0x2F27ACu) {
        ctx->pc = 0x2F27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F27A8u;
        // 0x2f27ac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F27B0u;
        goto label_2f27b0;
    }
    ctx->pc = 0x2F27A8u;
    SET_GPR_U32(ctx, 31, 0x2F27B0u);
    ctx->pc = 0x2F27ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F27A8u;
    // 0x2f27ac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F27A8u, 0x2F27B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F27B0u;
label_2f27b0:
    // 0x2f27b0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f27b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f27b4:
    // 0x2f27b4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f27b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f27b8:
    // 0x2f27b8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f27b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f27bc:
    // 0x2f27bc: 0x34c60204  ori         $a2, $a2, 0x204
    ctx->pc = 0x2f27bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)516);
label_2f27c0:
    // 0x2f27c0: 0xc0bb96a  jal         func_2EE5A8
label_2f27c4:
    if (ctx->pc == 0x2F27C4u) {
        ctx->pc = 0x2F27C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F27C0u;
        // 0x2f27c4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F27C8u;
        goto label_2f27c8;
    }
    ctx->pc = 0x2F27C0u;
    SET_GPR_U32(ctx, 31, 0x2F27C8u);
    ctx->pc = 0x2F27C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F27C0u;
    // 0x2f27c4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F27C0u, 0x2F27C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F27C8u;
label_2f27c8:
    // 0x2f27c8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2f27c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f27cc:
    // 0x2f27cc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f27ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f27d0:
    // 0x2f27d0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f27d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f27d4:
    // 0x2f27d4: 0x34c6016d  ori         $a2, $a2, 0x16D
    ctx->pc = 0x2f27d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)365);
label_2f27d8:
    // 0x2f27d8: 0xc0bb96a  jal         func_2EE5A8
label_2f27dc:
    if (ctx->pc == 0x2F27DCu) {
        ctx->pc = 0x2F27DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F27D8u;
        // 0x2f27dc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F27E0u;
        goto label_2f27e0;
    }
    ctx->pc = 0x2F27D8u;
    SET_GPR_U32(ctx, 31, 0x2F27E0u);
    ctx->pc = 0x2F27DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F27D8u;
    // 0x2f27dc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F27D8u, 0x2F27E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F27E0u;
label_2f27e0:
    // 0x2f27e0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f27e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f27e4:
    // 0x2f27e4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f27e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f27e8:
    // 0x2f27e8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f27e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f27ec:
    // 0x2f27ec: 0x34c6016c  ori         $a2, $a2, 0x16C
    ctx->pc = 0x2f27ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)364);
label_2f27f0:
    // 0x2f27f0: 0xc0bb96a  jal         func_2EE5A8
label_2f27f4:
    if (ctx->pc == 0x2F27F4u) {
        ctx->pc = 0x2F27F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F27F0u;
        // 0x2f27f4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F27F8u;
        goto label_2f27f8;
    }
    ctx->pc = 0x2F27F0u;
    SET_GPR_U32(ctx, 31, 0x2F27F8u);
    ctx->pc = 0x2F27F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F27F0u;
    // 0x2f27f4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F27F0u, 0x2F27F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F27F8u;
label_2f27f8:
    // 0x2f27f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f27f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f27fc:
    // 0x2f27fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f27fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f2800:
    // 0x2f2800: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2800u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2804:
    // 0x2f2804: 0x34c6017a  ori         $a2, $a2, 0x17A
    ctx->pc = 0x2f2804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)378);
label_2f2808:
    // 0x2f2808: 0xc0bb96a  jal         func_2EE5A8
label_2f280c:
    if (ctx->pc == 0x2F280Cu) {
        ctx->pc = 0x2F280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2808u;
        // 0x2f280c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2810u;
        goto label_2f2810;
    }
    ctx->pc = 0x2F2808u;
    SET_GPR_U32(ctx, 31, 0x2F2810u);
    ctx->pc = 0x2F280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2808u;
    // 0x2f280c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2808u, 0x2F2810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2810u;
label_2f2810:
    // 0x2f2810: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2814:
    // 0x2f2814: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f2814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f2818:
    // 0x2f2818: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2818u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f281c:
    // 0x2f281c: 0x34c6017b  ori         $a2, $a2, 0x17B
    ctx->pc = 0x2f281cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)379);
label_2f2820:
    // 0x2f2820: 0xc0bb96a  jal         func_2EE5A8
label_2f2824:
    if (ctx->pc == 0x2F2824u) {
        ctx->pc = 0x2F2824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2820u;
        // 0x2f2824: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2828u;
        goto label_2f2828;
    }
    ctx->pc = 0x2F2820u;
    SET_GPR_U32(ctx, 31, 0x2F2828u);
    ctx->pc = 0x2F2824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2820u;
    // 0x2f2824: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2820u, 0x2F2828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2828u;
label_2f2828:
    // 0x2f2828: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f2828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f282c:
    // 0x2f282c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f282cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f2830:
    // 0x2f2830: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2830u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2834:
    // 0x2f2834: 0x34c6017c  ori         $a2, $a2, 0x17C
    ctx->pc = 0x2f2834u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)380);
label_2f2838:
    // 0x2f2838: 0xc0bb96a  jal         func_2EE5A8
label_2f283c:
    if (ctx->pc == 0x2F283Cu) {
        ctx->pc = 0x2F283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2838u;
        // 0x2f283c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2840u;
        goto label_2f2840;
    }
    ctx->pc = 0x2F2838u;
    SET_GPR_U32(ctx, 31, 0x2F2840u);
    ctx->pc = 0x2F283Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2838u;
    // 0x2f283c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2838u, 0x2F2840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2840u;
label_2f2840:
    // 0x2f2840: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f2840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2844:
    // 0x2f2844: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f2844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f2848:
    // 0x2f2848: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2848u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f284c:
    // 0x2f284c: 0x34c6017d  ori         $a2, $a2, 0x17D
    ctx->pc = 0x2f284cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)381);
label_2f2850:
    // 0x2f2850: 0xc0bb96a  jal         func_2EE5A8
label_2f2854:
    if (ctx->pc == 0x2F2854u) {
        ctx->pc = 0x2F2854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2850u;
        // 0x2f2854: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2858u;
        goto label_2f2858;
    }
    ctx->pc = 0x2F2850u;
    SET_GPR_U32(ctx, 31, 0x2F2858u);
    ctx->pc = 0x2F2854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2850u;
    // 0x2f2854: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2850u, 0x2F2858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2858u;
label_2f2858:
    // 0x2f2858: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f2858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f285c:
    // 0x2f285c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f285cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f2860:
    // 0x2f2860: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2860u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2864:
    // 0x2f2864: 0x34c6017e  ori         $a2, $a2, 0x17E
    ctx->pc = 0x2f2864u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)382);
label_2f2868:
    // 0x2f2868: 0xc0bb96a  jal         func_2EE5A8
label_2f286c:
    if (ctx->pc == 0x2F286Cu) {
        ctx->pc = 0x2F286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2868u;
        // 0x2f286c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2870u;
        goto label_2f2870;
    }
    ctx->pc = 0x2F2868u;
    SET_GPR_U32(ctx, 31, 0x2F2870u);
    ctx->pc = 0x2F286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2868u;
    // 0x2f286c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2868u, 0x2F2870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2870u;
label_2f2870:
    // 0x2f2870: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f2870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f2874:
    // 0x2f2874: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f2874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f2878:
    // 0x2f2878: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2878u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f287c:
    // 0x2f287c: 0x34c6017f  ori         $a2, $a2, 0x17F
    ctx->pc = 0x2f287cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)383);
label_2f2880:
    // 0x2f2880: 0xc0bb96a  jal         func_2EE5A8
label_2f2884:
    if (ctx->pc == 0x2F2884u) {
        ctx->pc = 0x2F2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2880u;
        // 0x2f2884: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2888u;
        goto label_2f2888;
    }
    ctx->pc = 0x2F2880u;
    SET_GPR_U32(ctx, 31, 0x2F2888u);
    ctx->pc = 0x2F2884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2880u;
    // 0x2f2884: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2880u, 0x2F2888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2888u;
label_2f2888:
    // 0x2f2888: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f2888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f288c:
    // 0x2f288c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f288cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f2890:
    // 0x2f2890: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2890u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2894:
    // 0x2f2894: 0x34c60180  ori         $a2, $a2, 0x180
    ctx->pc = 0x2f2894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)384);
label_2f2898:
    // 0x2f2898: 0xc0bb96a  jal         func_2EE5A8
label_2f289c:
    if (ctx->pc == 0x2F289Cu) {
        ctx->pc = 0x2F289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2898u;
        // 0x2f289c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F28A0u;
        goto label_2f28a0;
    }
    ctx->pc = 0x2F2898u;
    SET_GPR_U32(ctx, 31, 0x2F28A0u);
    ctx->pc = 0x2F289Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2898u;
    // 0x2f289c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2898u, 0x2F28A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F28A0u;
label_2f28a0:
    // 0x2f28a0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f28a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f28a4:
    // 0x2f28a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f28a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f28a8:
    // 0x2f28a8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f28a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f28ac:
    // 0x2f28ac: 0x34c60181  ori         $a2, $a2, 0x181
    ctx->pc = 0x2f28acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)385);
label_2f28b0:
    // 0x2f28b0: 0xc0bb96a  jal         func_2EE5A8
label_2f28b4:
    if (ctx->pc == 0x2F28B4u) {
        ctx->pc = 0x2F28B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28B0u;
        // 0x2f28b4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F28B8u;
        goto label_2f28b8;
    }
    ctx->pc = 0x2F28B0u;
    SET_GPR_U32(ctx, 31, 0x2F28B8u);
    ctx->pc = 0x2F28B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F28B0u;
    // 0x2f28b4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F28B0u, 0x2F28B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F28B8u;
label_2f28b8:
    // 0x2f28b8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f28b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f28bc:
    // 0x2f28bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f28bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f28c0:
    // 0x2f28c0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f28c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f28c4:
    // 0x2f28c4: 0x34c60206  ori         $a2, $a2, 0x206
    ctx->pc = 0x2f28c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)518);
label_2f28c8:
    // 0x2f28c8: 0xc0bb96a  jal         func_2EE5A8
label_2f28cc:
    if (ctx->pc == 0x2F28CCu) {
        ctx->pc = 0x2F28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28C8u;
        // 0x2f28cc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F28D0u;
        goto label_2f28d0;
    }
    ctx->pc = 0x2F28C8u;
    SET_GPR_U32(ctx, 31, 0x2F28D0u);
    ctx->pc = 0x2F28CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F28C8u;
    // 0x2f28cc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F28C8u, 0x2F28D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F28D0u;
label_2f28d0:
    // 0x2f28d0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2f28d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f28d4:
    // 0x2f28d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f28d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f28d8:
    // 0x2f28d8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f28d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f28dc:
    // 0x2f28dc: 0x34c60183  ori         $a2, $a2, 0x183
    ctx->pc = 0x2f28dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)387);
label_2f28e0:
    // 0x2f28e0: 0xc0bb96a  jal         func_2EE5A8
label_2f28e4:
    if (ctx->pc == 0x2F28E4u) {
        ctx->pc = 0x2F28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28E0u;
        // 0x2f28e4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F28E8u;
        goto label_2f28e8;
    }
    ctx->pc = 0x2F28E0u;
    SET_GPR_U32(ctx, 31, 0x2F28E8u);
    ctx->pc = 0x2F28E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F28E0u;
    // 0x2f28e4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F28E0u, 0x2F28E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F28E8u;
label_2f28e8:
    // 0x2f28e8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f28e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f28ec:
    // 0x2f28ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2f28ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f28f0:
    // 0x2f28f0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f28f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f28f4:
    // 0x2f28f4: 0x34c60182  ori         $a2, $a2, 0x182
    ctx->pc = 0x2f28f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)386);
label_2f28f8:
    // 0x2f28f8: 0xc0bb96a  jal         func_2EE5A8
label_2f28fc:
    if (ctx->pc == 0x2F28FCu) {
        ctx->pc = 0x2F28FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28F8u;
        // 0x2f28fc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2900u;
        goto label_2f2900;
    }
    ctx->pc = 0x2F28F8u;
    SET_GPR_U32(ctx, 31, 0x2F2900u);
    ctx->pc = 0x2F28FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F28F8u;
    // 0x2f28fc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F28F8u, 0x2F2900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2900u;
label_2f2900:
    // 0x2f2900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2904:
    // 0x2f2904: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f2904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f2908:
    // 0x2f2908: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2908u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f290c:
    // 0x2f290c: 0x34c60185  ori         $a2, $a2, 0x185
    ctx->pc = 0x2f290cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)389);
label_2f2910:
    // 0x2f2910: 0xc0bb96a  jal         func_2EE5A8
label_2f2914:
    if (ctx->pc == 0x2F2914u) {
        ctx->pc = 0x2F2914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2910u;
        // 0x2f2914: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2918u;
        goto label_2f2918;
    }
    ctx->pc = 0x2F2910u;
    SET_GPR_U32(ctx, 31, 0x2F2918u);
    ctx->pc = 0x2F2914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2910u;
    // 0x2f2914: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2910u, 0x2F2918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2918u;
label_2f2918:
    // 0x2f2918: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f291c:
    // 0x2f291c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f291cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f2920:
    // 0x2f2920: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2920u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2924:
    // 0x2f2924: 0x34c60186  ori         $a2, $a2, 0x186
    ctx->pc = 0x2f2924u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)390);
label_2f2928:
    // 0x2f2928: 0xc0bb96a  jal         func_2EE5A8
label_2f292c:
    if (ctx->pc == 0x2F292Cu) {
        ctx->pc = 0x2F292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2928u;
        // 0x2f292c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2930u;
        goto label_2f2930;
    }
    ctx->pc = 0x2F2928u;
    SET_GPR_U32(ctx, 31, 0x2F2930u);
    ctx->pc = 0x2F292Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2928u;
    // 0x2f292c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2928u, 0x2F2930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2930u;
label_2f2930:
    // 0x2f2930: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f2930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f2934:
    // 0x2f2934: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f2934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f2938:
    // 0x2f2938: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2938u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f293c:
    // 0x2f293c: 0x34c60187  ori         $a2, $a2, 0x187
    ctx->pc = 0x2f293cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)391);
label_2f2940:
    // 0x2f2940: 0xc0bb96a  jal         func_2EE5A8
label_2f2944:
    if (ctx->pc == 0x2F2944u) {
        ctx->pc = 0x2F2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2940u;
        // 0x2f2944: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2948u;
        goto label_2f2948;
    }
    ctx->pc = 0x2F2940u;
    SET_GPR_U32(ctx, 31, 0x2F2948u);
    ctx->pc = 0x2F2944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2940u;
    // 0x2f2944: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2940u, 0x2F2948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2948u;
label_2f2948:
    // 0x2f2948: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f2948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f294c:
    // 0x2f294c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f294cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f2950:
    // 0x2f2950: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2950u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2954:
    // 0x2f2954: 0x34c60188  ori         $a2, $a2, 0x188
    ctx->pc = 0x2f2954u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)392);
label_2f2958:
    // 0x2f2958: 0xc0bb96a  jal         func_2EE5A8
label_2f295c:
    if (ctx->pc == 0x2F295Cu) {
        ctx->pc = 0x2F295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2958u;
        // 0x2f295c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2960u;
        goto label_2f2960;
    }
    ctx->pc = 0x2F2958u;
    SET_GPR_U32(ctx, 31, 0x2F2960u);
    ctx->pc = 0x2F295Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2958u;
    // 0x2f295c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2958u, 0x2F2960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2960u;
label_2f2960:
    // 0x2f2960: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f2960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f2964:
    // 0x2f2964: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f2964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f2968:
    // 0x2f2968: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2968u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f296c:
    // 0x2f296c: 0x34c60189  ori         $a2, $a2, 0x189
    ctx->pc = 0x2f296cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)393);
label_2f2970:
    // 0x2f2970: 0xc0bb96a  jal         func_2EE5A8
label_2f2974:
    if (ctx->pc == 0x2F2974u) {
        ctx->pc = 0x2F2974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2970u;
        // 0x2f2974: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2978u;
        goto label_2f2978;
    }
    ctx->pc = 0x2F2970u;
    SET_GPR_U32(ctx, 31, 0x2F2978u);
    ctx->pc = 0x2F2974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2970u;
    // 0x2f2974: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2970u, 0x2F2978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2978u;
label_2f2978:
    // 0x2f2978: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f2978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f297c:
    // 0x2f297c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f297cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f2980:
    // 0x2f2980: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2980u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2984:
    // 0x2f2984: 0x34c6018a  ori         $a2, $a2, 0x18A
    ctx->pc = 0x2f2984u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)394);
label_2f2988:
    // 0x2f2988: 0xc0bb96a  jal         func_2EE5A8
label_2f298c:
    if (ctx->pc == 0x2F298Cu) {
        ctx->pc = 0x2F298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2988u;
        // 0x2f298c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2990u;
        goto label_2f2990;
    }
    ctx->pc = 0x2F2988u;
    SET_GPR_U32(ctx, 31, 0x2F2990u);
    ctx->pc = 0x2F298Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2988u;
    // 0x2f298c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2988u, 0x2F2990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2990u;
label_2f2990:
    // 0x2f2990: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f2990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f2994:
    // 0x2f2994: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f2994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f2998:
    // 0x2f2998: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2998u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f299c:
    // 0x2f299c: 0x34c6018b  ori         $a2, $a2, 0x18B
    ctx->pc = 0x2f299cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)395);
label_2f29a0:
    // 0x2f29a0: 0xc0bb96a  jal         func_2EE5A8
label_2f29a4:
    if (ctx->pc == 0x2F29A4u) {
        ctx->pc = 0x2F29A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29A0u;
        // 0x2f29a4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F29A8u;
        goto label_2f29a8;
    }
    ctx->pc = 0x2F29A0u;
    SET_GPR_U32(ctx, 31, 0x2F29A8u);
    ctx->pc = 0x2F29A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F29A0u;
    // 0x2f29a4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F29A0u, 0x2F29A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F29A8u;
label_2f29a8:
    // 0x2f29a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f29a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f29ac:
    // 0x2f29ac: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f29acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f29b0:
    // 0x2f29b0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f29b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f29b4:
    // 0x2f29b4: 0x34c6018c  ori         $a2, $a2, 0x18C
    ctx->pc = 0x2f29b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)396);
label_2f29b8:
    // 0x2f29b8: 0xc0bb96a  jal         func_2EE5A8
label_2f29bc:
    if (ctx->pc == 0x2F29BCu) {
        ctx->pc = 0x2F29BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29B8u;
        // 0x2f29bc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F29C0u;
        goto label_2f29c0;
    }
    ctx->pc = 0x2F29B8u;
    SET_GPR_U32(ctx, 31, 0x2F29C0u);
    ctx->pc = 0x2F29BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F29B8u;
    // 0x2f29bc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F29B8u, 0x2F29C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F29C0u;
label_2f29c0:
    // 0x2f29c0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f29c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f29c4:
    // 0x2f29c4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f29c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f29c8:
    // 0x2f29c8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f29c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f29cc:
    // 0x2f29cc: 0x34c60207  ori         $a2, $a2, 0x207
    ctx->pc = 0x2f29ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)519);
label_2f29d0:
    // 0x2f29d0: 0xc0bb96a  jal         func_2EE5A8
label_2f29d4:
    if (ctx->pc == 0x2F29D4u) {
        ctx->pc = 0x2F29D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29D0u;
        // 0x2f29d4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F29D8u;
        goto label_2f29d8;
    }
    ctx->pc = 0x2F29D0u;
    SET_GPR_U32(ctx, 31, 0x2F29D8u);
    ctx->pc = 0x2F29D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F29D0u;
    // 0x2f29d4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F29D0u, 0x2F29D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F29D8u;
label_2f29d8:
    // 0x2f29d8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2f29d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f29dc:
    // 0x2f29dc: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f29dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f29e0:
    // 0x2f29e0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f29e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f29e4:
    // 0x2f29e4: 0x34c6018e  ori         $a2, $a2, 0x18E
    ctx->pc = 0x2f29e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)398);
label_2f29e8:
    // 0x2f29e8: 0xc0bb96a  jal         func_2EE5A8
label_2f29ec:
    if (ctx->pc == 0x2F29ECu) {
        ctx->pc = 0x2F29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29E8u;
        // 0x2f29ec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F29F0u;
        goto label_2f29f0;
    }
    ctx->pc = 0x2F29E8u;
    SET_GPR_U32(ctx, 31, 0x2F29F0u);
    ctx->pc = 0x2F29ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F29E8u;
    // 0x2f29ec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F29E8u, 0x2F29F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F29F0u;
label_2f29f0:
    // 0x2f29f0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f29f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f29f4:
    // 0x2f29f4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2f29f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f29f8:
    // 0x2f29f8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f29f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f29fc:
    // 0x2f29fc: 0x34c6018d  ori         $a2, $a2, 0x18D
    ctx->pc = 0x2f29fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)397);
label_2f2a00:
    // 0x2f2a00: 0xc0bb96a  jal         func_2EE5A8
label_2f2a04:
    if (ctx->pc == 0x2F2A04u) {
        ctx->pc = 0x2F2A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A00u;
        // 0x2f2a04: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2A08u;
        goto label_2f2a08;
    }
    ctx->pc = 0x2F2A00u;
    SET_GPR_U32(ctx, 31, 0x2F2A08u);
    ctx->pc = 0x2F2A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2A00u;
    // 0x2f2a04: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2A00u, 0x2F2A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2A08u;
label_2f2a08:
    // 0x2f2a08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2a0c:
    // 0x2f2a0c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f2a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f2a10:
    // 0x2f2a10: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2a10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2a14:
    // 0x2f2a14: 0x34c6019b  ori         $a2, $a2, 0x19B
    ctx->pc = 0x2f2a14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)411);
label_2f2a18:
    // 0x2f2a18: 0xc0bb96a  jal         func_2EE5A8
label_2f2a1c:
    if (ctx->pc == 0x2F2A1Cu) {
        ctx->pc = 0x2F2A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A18u;
        // 0x2f2a1c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2A20u;
        goto label_2f2a20;
    }
    ctx->pc = 0x2F2A18u;
    SET_GPR_U32(ctx, 31, 0x2F2A20u);
    ctx->pc = 0x2F2A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2A18u;
    // 0x2f2a1c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2A18u, 0x2F2A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2A20u;
label_2f2a20:
    // 0x2f2a20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2a24:
    // 0x2f2a24: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f2a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f2a28:
    // 0x2f2a28: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2a28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2a2c:
    // 0x2f2a2c: 0x34c6019c  ori         $a2, $a2, 0x19C
    ctx->pc = 0x2f2a2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)412);
label_2f2a30:
    // 0x2f2a30: 0xc0bb96a  jal         func_2EE5A8
label_2f2a34:
    if (ctx->pc == 0x2F2A34u) {
        ctx->pc = 0x2F2A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A30u;
        // 0x2f2a34: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2A38u;
        goto label_2f2a38;
    }
    ctx->pc = 0x2F2A30u;
    SET_GPR_U32(ctx, 31, 0x2F2A38u);
    ctx->pc = 0x2F2A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2A30u;
    // 0x2f2a34: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2A30u, 0x2F2A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2A38u;
label_2f2a38:
    // 0x2f2a38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f2a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f2a3c:
    // 0x2f2a3c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f2a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f2a40:
    // 0x2f2a40: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2a40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2a44:
    // 0x2f2a44: 0x34c6019d  ori         $a2, $a2, 0x19D
    ctx->pc = 0x2f2a44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)413);
label_2f2a48:
    // 0x2f2a48: 0xc0bb96a  jal         func_2EE5A8
label_2f2a4c:
    if (ctx->pc == 0x2F2A4Cu) {
        ctx->pc = 0x2F2A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A48u;
        // 0x2f2a4c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2A50u;
        goto label_2f2a50;
    }
    ctx->pc = 0x2F2A48u;
    SET_GPR_U32(ctx, 31, 0x2F2A50u);
    ctx->pc = 0x2F2A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2A48u;
    // 0x2f2a4c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2A48u, 0x2F2A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2A50u;
label_2f2a50:
    // 0x2f2a50: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f2a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2a54:
    // 0x2f2a54: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f2a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f2a58:
    // 0x2f2a58: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2a58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2a5c:
    // 0x2f2a5c: 0x34c6019e  ori         $a2, $a2, 0x19E
    ctx->pc = 0x2f2a5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)414);
label_2f2a60:
    // 0x2f2a60: 0xc0bb96a  jal         func_2EE5A8
label_2f2a64:
    if (ctx->pc == 0x2F2A64u) {
        ctx->pc = 0x2F2A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A60u;
        // 0x2f2a64: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2A68u;
        goto label_2f2a68;
    }
    ctx->pc = 0x2F2A60u;
    SET_GPR_U32(ctx, 31, 0x2F2A68u);
    ctx->pc = 0x2F2A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2A60u;
    // 0x2f2a64: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2A60u, 0x2F2A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2A68u;
label_2f2a68:
    // 0x2f2a68: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f2a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f2a6c:
    // 0x2f2a6c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f2a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f2a70:
    // 0x2f2a70: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2a70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2a74:
    // 0x2f2a74: 0x34c6019f  ori         $a2, $a2, 0x19F
    ctx->pc = 0x2f2a74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)415);
label_2f2a78:
    // 0x2f2a78: 0xc0bb96a  jal         func_2EE5A8
label_2f2a7c:
    if (ctx->pc == 0x2F2A7Cu) {
        ctx->pc = 0x2F2A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A78u;
        // 0x2f2a7c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2A80u;
        goto label_2f2a80;
    }
    ctx->pc = 0x2F2A78u;
    SET_GPR_U32(ctx, 31, 0x2F2A80u);
    ctx->pc = 0x2F2A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2A78u;
    // 0x2f2a7c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2A78u, 0x2F2A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2A80u;
label_2f2a80:
    // 0x2f2a80: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f2a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f2a84:
    // 0x2f2a84: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f2a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f2a88:
    // 0x2f2a88: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2a88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2a8c:
    // 0x2f2a8c: 0x34c601a0  ori         $a2, $a2, 0x1A0
    ctx->pc = 0x2f2a8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)416);
label_2f2a90:
    // 0x2f2a90: 0xc0bb96a  jal         func_2EE5A8
label_2f2a94:
    if (ctx->pc == 0x2F2A94u) {
        ctx->pc = 0x2F2A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A90u;
        // 0x2f2a94: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2A98u;
        goto label_2f2a98;
    }
    ctx->pc = 0x2F2A90u;
    SET_GPR_U32(ctx, 31, 0x2F2A98u);
    ctx->pc = 0x2F2A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2A90u;
    // 0x2f2a94: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2A90u, 0x2F2A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2A98u;
label_2f2a98:
    // 0x2f2a98: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f2a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f2a9c:
    // 0x2f2a9c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f2a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f2aa0:
    // 0x2f2aa0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2aa4:
    // 0x2f2aa4: 0x34c601a1  ori         $a2, $a2, 0x1A1
    ctx->pc = 0x2f2aa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)417);
label_2f2aa8:
    // 0x2f2aa8: 0xc0bb96a  jal         func_2EE5A8
label_2f2aac:
    if (ctx->pc == 0x2F2AACu) {
        ctx->pc = 0x2F2AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AA8u;
        // 0x2f2aac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2AB0u;
        goto label_2f2ab0;
    }
    ctx->pc = 0x2F2AA8u;
    SET_GPR_U32(ctx, 31, 0x2F2AB0u);
    ctx->pc = 0x2F2AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2AA8u;
    // 0x2f2aac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2AA8u, 0x2F2AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2AB0u;
label_2f2ab0:
    // 0x2f2ab0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f2ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f2ab4:
    // 0x2f2ab4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f2ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f2ab8:
    // 0x2f2ab8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2abc:
    // 0x2f2abc: 0x34c601a2  ori         $a2, $a2, 0x1A2
    ctx->pc = 0x2f2abcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)418);
label_2f2ac0:
    // 0x2f2ac0: 0xc0bb96a  jal         func_2EE5A8
label_2f2ac4:
    if (ctx->pc == 0x2F2AC4u) {
        ctx->pc = 0x2F2AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AC0u;
        // 0x2f2ac4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2AC8u;
        goto label_2f2ac8;
    }
    ctx->pc = 0x2F2AC0u;
    SET_GPR_U32(ctx, 31, 0x2F2AC8u);
    ctx->pc = 0x2F2AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2AC0u;
    // 0x2f2ac4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2AC0u, 0x2F2AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2AC8u;
label_2f2ac8:
    // 0x2f2ac8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f2ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f2acc:
    // 0x2f2acc: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f2accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f2ad0:
    // 0x2f2ad0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2ad4:
    // 0x2f2ad4: 0x34c60209  ori         $a2, $a2, 0x209
    ctx->pc = 0x2f2ad4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)521);
label_2f2ad8:
    // 0x2f2ad8: 0xc0bb96a  jal         func_2EE5A8
label_2f2adc:
    if (ctx->pc == 0x2F2ADCu) {
        ctx->pc = 0x2F2ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AD8u;
        // 0x2f2adc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2AE0u;
        goto label_2f2ae0;
    }
    ctx->pc = 0x2F2AD8u;
    SET_GPR_U32(ctx, 31, 0x2F2AE0u);
    ctx->pc = 0x2F2ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2AD8u;
    // 0x2f2adc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2AD8u, 0x2F2AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2AE0u;
label_2f2ae0:
    // 0x2f2ae0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2f2ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f2ae4:
    // 0x2f2ae4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f2ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f2ae8:
    // 0x2f2ae8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2aec:
    // 0x2f2aec: 0x34c601a4  ori         $a2, $a2, 0x1A4
    ctx->pc = 0x2f2aecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)420);
label_2f2af0:
    // 0x2f2af0: 0xc0bb96a  jal         func_2EE5A8
label_2f2af4:
    if (ctx->pc == 0x2F2AF4u) {
        ctx->pc = 0x2F2AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AF0u;
        // 0x2f2af4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2AF8u;
        goto label_2f2af8;
    }
    ctx->pc = 0x2F2AF0u;
    SET_GPR_U32(ctx, 31, 0x2F2AF8u);
    ctx->pc = 0x2F2AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2AF0u;
    // 0x2f2af4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2AF0u, 0x2F2AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2AF8u;
label_2f2af8:
    // 0x2f2af8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f2af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f2afc:
    // 0x2f2afc: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2f2afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f2b00:
    // 0x2f2b00: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2b00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2b04:
    // 0x2f2b04: 0x34c601a3  ori         $a2, $a2, 0x1A3
    ctx->pc = 0x2f2b04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)419);
label_2f2b08:
    // 0x2f2b08: 0xc0bb96a  jal         func_2EE5A8
label_2f2b0c:
    if (ctx->pc == 0x2F2B0Cu) {
        ctx->pc = 0x2F2B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B08u;
        // 0x2f2b0c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B10u;
        goto label_2f2b10;
    }
    ctx->pc = 0x2F2B08u;
    SET_GPR_U32(ctx, 31, 0x2F2B10u);
    ctx->pc = 0x2F2B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2B08u;
    // 0x2f2b0c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2B08u, 0x2F2B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B10u;
label_2f2b10:
    // 0x2f2b10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2b14:
    // 0x2f2b14: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f2b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f2b18:
    // 0x2f2b18: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2b18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2b1c:
    // 0x2f2b1c: 0x34c60190  ori         $a2, $a2, 0x190
    ctx->pc = 0x2f2b1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
label_2f2b20:
    // 0x2f2b20: 0xc0bb96a  jal         func_2EE5A8
label_2f2b24:
    if (ctx->pc == 0x2F2B24u) {
        ctx->pc = 0x2F2B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B20u;
        // 0x2f2b24: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B28u;
        goto label_2f2b28;
    }
    ctx->pc = 0x2F2B20u;
    SET_GPR_U32(ctx, 31, 0x2F2B28u);
    ctx->pc = 0x2F2B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2B20u;
    // 0x2f2b24: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2B20u, 0x2F2B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B28u;
label_2f2b28:
    // 0x2f2b28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2b2c:
    // 0x2f2b2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f2b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f2b30:
    // 0x2f2b30: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2b30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2b34:
    // 0x2f2b34: 0x34c60191  ori         $a2, $a2, 0x191
    ctx->pc = 0x2f2b34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)401);
label_2f2b38:
    // 0x2f2b38: 0xc0bb96a  jal         func_2EE5A8
label_2f2b3c:
    if (ctx->pc == 0x2F2B3Cu) {
        ctx->pc = 0x2F2B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B38u;
        // 0x2f2b3c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B40u;
        goto label_2f2b40;
    }
    ctx->pc = 0x2F2B38u;
    SET_GPR_U32(ctx, 31, 0x2F2B40u);
    ctx->pc = 0x2F2B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2B38u;
    // 0x2f2b3c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2B38u, 0x2F2B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B40u;
label_2f2b40:
    // 0x2f2b40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f2b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f2b44:
    // 0x2f2b44: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f2b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f2b48:
    // 0x2f2b48: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2b48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2b4c:
    // 0x2f2b4c: 0x34c60192  ori         $a2, $a2, 0x192
    ctx->pc = 0x2f2b4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)402);
label_2f2b50:
    // 0x2f2b50: 0xc0bb96a  jal         func_2EE5A8
label_2f2b54:
    if (ctx->pc == 0x2F2B54u) {
        ctx->pc = 0x2F2B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B50u;
        // 0x2f2b54: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B58u;
        goto label_2f2b58;
    }
    ctx->pc = 0x2F2B50u;
    SET_GPR_U32(ctx, 31, 0x2F2B58u);
    ctx->pc = 0x2F2B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2B50u;
    // 0x2f2b54: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2B50u, 0x2F2B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B58u;
label_2f2b58:
    // 0x2f2b58: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f2b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2b5c:
    // 0x2f2b5c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f2b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f2b60:
    // 0x2f2b60: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2b60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2b64:
    // 0x2f2b64: 0x34c60193  ori         $a2, $a2, 0x193
    ctx->pc = 0x2f2b64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)403);
label_2f2b68:
    // 0x2f2b68: 0xc0bb96a  jal         func_2EE5A8
label_2f2b6c:
    if (ctx->pc == 0x2F2B6Cu) {
        ctx->pc = 0x2F2B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B68u;
        // 0x2f2b6c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B70u;
        goto label_2f2b70;
    }
    ctx->pc = 0x2F2B68u;
    SET_GPR_U32(ctx, 31, 0x2F2B70u);
    ctx->pc = 0x2F2B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2B68u;
    // 0x2f2b6c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2B68u, 0x2F2B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B70u;
label_2f2b70:
    // 0x2f2b70: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f2b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f2b74:
    // 0x2f2b74: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f2b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f2b78:
    // 0x2f2b78: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2b78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2b7c:
    // 0x2f2b7c: 0x34c60194  ori         $a2, $a2, 0x194
    ctx->pc = 0x2f2b7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)404);
label_2f2b80:
    // 0x2f2b80: 0xc0bb96a  jal         func_2EE5A8
label_2f2b84:
    if (ctx->pc == 0x2F2B84u) {
        ctx->pc = 0x2F2B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B80u;
        // 0x2f2b84: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B88u;
        goto label_2f2b88;
    }
    ctx->pc = 0x2F2B80u;
    SET_GPR_U32(ctx, 31, 0x2F2B88u);
    ctx->pc = 0x2F2B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2B80u;
    // 0x2f2b84: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2B80u, 0x2F2B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B88u;
label_2f2b88:
    // 0x2f2b88: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f2b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f2b8c:
    // 0x2f2b8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f2b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f2b90:
    // 0x2f2b90: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2b90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2b94:
    // 0x2f2b94: 0x34c60195  ori         $a2, $a2, 0x195
    ctx->pc = 0x2f2b94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)405);
label_2f2b98:
    // 0x2f2b98: 0xc0bb96a  jal         func_2EE5A8
label_2f2b9c:
    if (ctx->pc == 0x2F2B9Cu) {
        ctx->pc = 0x2F2B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B98u;
        // 0x2f2b9c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2BA0u;
        goto label_2f2ba0;
    }
    ctx->pc = 0x2F2B98u;
    SET_GPR_U32(ctx, 31, 0x2F2BA0u);
    ctx->pc = 0x2F2B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2B98u;
    // 0x2f2b9c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2B98u, 0x2F2BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2BA0u;
label_2f2ba0:
    // 0x2f2ba0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f2ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f2ba4:
    // 0x2f2ba4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f2ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f2ba8:
    // 0x2f2ba8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2bac:
    // 0x2f2bac: 0x34c60196  ori         $a2, $a2, 0x196
    ctx->pc = 0x2f2bacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)406);
label_2f2bb0:
    // 0x2f2bb0: 0xc0bb96a  jal         func_2EE5A8
label_2f2bb4:
    if (ctx->pc == 0x2F2BB4u) {
        ctx->pc = 0x2F2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2BB0u;
        // 0x2f2bb4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2BB8u;
        goto label_2f2bb8;
    }
    ctx->pc = 0x2F2BB0u;
    SET_GPR_U32(ctx, 31, 0x2F2BB8u);
    ctx->pc = 0x2F2BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2BB0u;
    // 0x2f2bb4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2BB0u, 0x2F2BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2BB8u;
label_2f2bb8:
    // 0x2f2bb8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f2bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f2bbc:
    // 0x2f2bbc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f2bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f2bc0:
    // 0x2f2bc0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2bc4:
    // 0x2f2bc4: 0x34c60197  ori         $a2, $a2, 0x197
    ctx->pc = 0x2f2bc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)407);
label_2f2bc8:
    // 0x2f2bc8: 0xc0bb96a  jal         func_2EE5A8
label_2f2bcc:
    if (ctx->pc == 0x2F2BCCu) {
        ctx->pc = 0x2F2BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2BC8u;
        // 0x2f2bcc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2BD0u;
        goto label_2f2bd0;
    }
    ctx->pc = 0x2F2BC8u;
    SET_GPR_U32(ctx, 31, 0x2F2BD0u);
    ctx->pc = 0x2F2BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2BC8u;
    // 0x2f2bcc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2BC8u, 0x2F2BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2BD0u;
label_2f2bd0:
    // 0x2f2bd0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f2bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f2bd4:
    // 0x2f2bd4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f2bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f2bd8:
    // 0x2f2bd8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2bdc:
    // 0x2f2bdc: 0x34c60208  ori         $a2, $a2, 0x208
    ctx->pc = 0x2f2bdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)520);
label_2f2be0:
    // 0x2f2be0: 0xc0bb96a  jal         func_2EE5A8
label_2f2be4:
    if (ctx->pc == 0x2F2BE4u) {
        ctx->pc = 0x2F2BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2BE0u;
        // 0x2f2be4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2BE8u;
        goto label_2f2be8;
    }
    ctx->pc = 0x2F2BE0u;
    SET_GPR_U32(ctx, 31, 0x2F2BE8u);
    ctx->pc = 0x2F2BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2BE0u;
    // 0x2f2be4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2BE0u, 0x2F2BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2BE8u;
label_2f2be8:
    // 0x2f2be8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2f2be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f2bec:
    // 0x2f2bec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f2becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f2bf0:
    // 0x2f2bf0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2bf4:
    // 0x2f2bf4: 0x34c60199  ori         $a2, $a2, 0x199
    ctx->pc = 0x2f2bf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)409);
label_2f2bf8:
    // 0x2f2bf8: 0xc0bb96a  jal         func_2EE5A8
label_2f2bfc:
    if (ctx->pc == 0x2F2BFCu) {
        ctx->pc = 0x2F2BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2BF8u;
        // 0x2f2bfc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C00u;
        goto label_2f2c00;
    }
    ctx->pc = 0x2F2BF8u;
    SET_GPR_U32(ctx, 31, 0x2F2C00u);
    ctx->pc = 0x2F2BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2BF8u;
    // 0x2f2bfc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2BF8u, 0x2F2C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C00u;
label_2f2c00:
    // 0x2f2c00: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f2c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f2c04:
    // 0x2f2c04: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f2c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f2c08:
    // 0x2f2c08: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2f2c08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_2f2c0c:
    // 0x2f2c0c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2f2c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f2c10:
    // 0x2f2c10: 0xc0bb96a  jal         func_2EE5A8
label_2f2c14:
    if (ctx->pc == 0x2F2C14u) {
        ctx->pc = 0x2F2C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C10u;
        // 0x2f2c14: 0x34c60198  ori         $a2, $a2, 0x198 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)408);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C18u;
        goto label_2f2c18;
    }
    ctx->pc = 0x2F2C10u;
    SET_GPR_U32(ctx, 31, 0x2F2C18u);
    ctx->pc = 0x2F2C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2C10u;
    // 0x2f2c14: 0x34c60198  ori         $a2, $a2, 0x198 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)408);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5A8u, 0x2F2C10u, 0x2F2C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C18u;
label_2f2c18:
    // 0x2f2c18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f2c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f2c1c:
    // 0x2f2c1c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2f2c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f2c20:
    // 0x2f2c20: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f2c24:
    // 0x2f2c24: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f2c28:
    // 0x2f2c28: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f2c28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2c2c:
    // 0x2f2c2c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f2c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f2c30:
    // 0x2f2c30: 0x60f809  jalr        $v1
label_2f2c34:
    if (ctx->pc == 0x2F2C34u) {
        ctx->pc = 0x2F2C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C30u;
        // 0x2f2c34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C38u;
        goto label_2f2c38;
    }
    ctx->pc = 0x2F2C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2C38u);
        ctx->pc = 0x2F2C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C30u;
        // 0x2f2c34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2C30u, 0x2F2C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2C38u;
label_2f2c38:
    // 0x2f2c38: 0x2605ffe8  addiu       $a1, $s0, -0x18
    ctx->pc = 0x2f2c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
label_2f2c3c:
    // 0x2f2c3c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2f2c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f2c40:
    // 0x2f2c40: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f2c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f2c44:
    // 0x2f2c44: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f2c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f2c48:
    // 0x2f2c48: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f2c48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2c4c:
    // 0x2f2c4c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f2c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f2c50:
    // 0x2f2c50: 0x60f809  jalr        $v1
label_2f2c54:
    if (ctx->pc == 0x2F2C54u) {
        ctx->pc = 0x2F2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C50u;
        // 0x2f2c54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C58u;
        goto label_2f2c58;
    }
    ctx->pc = 0x2F2C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2C58u);
        ctx->pc = 0x2F2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C50u;
        // 0x2f2c54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2C50u, 0x2F2C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2C58u;
label_2f2c58:
    // 0x2f2c58: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x2f2c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_2f2c5c:
    // 0x2f2c5c: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x2f2c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f2c60:
    // 0x2f2c60: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f2c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f2c64:
    // 0x2f2c64: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f2c68:
    // 0x2f2c68: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f2c68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2c6c:
    // 0x2f2c6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f2c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f2c70:
    // 0x2f2c70: 0x60f809  jalr        $v1
label_2f2c74:
    if (ctx->pc == 0x2F2C74u) {
        ctx->pc = 0x2F2C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C70u;
        // 0x2f2c74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C78u;
        goto label_2f2c78;
    }
    ctx->pc = 0x2F2C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2C78u);
        ctx->pc = 0x2F2C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C70u;
        // 0x2f2c74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2C70u, 0x2F2C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2C78u;
label_2f2c78:
    // 0x2f2c78: 0x2605fff4  addiu       $a1, $s0, -0xC
    ctx->pc = 0x2f2c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
label_2f2c7c:
    // 0x2f2c7c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2f2c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f2c80:
    // 0x2f2c80: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f2c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f2c84:
    // 0x2f2c84: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f2c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f2c88:
    // 0x2f2c88: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f2c88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2c8c:
    // 0x2f2c8c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f2c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f2c90:
    // 0x2f2c90: 0x60f809  jalr        $v1
label_2f2c94:
    if (ctx->pc == 0x2F2C94u) {
        ctx->pc = 0x2F2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C90u;
        // 0x2f2c94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C98u;
        goto label_2f2c98;
    }
    ctx->pc = 0x2F2C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2C98u);
        ctx->pc = 0x2F2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C90u;
        // 0x2f2c94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2C90u, 0x2F2C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2C98u;
label_2f2c98:
    // 0x2f2c98: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x2f2c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2f2c9c:
    // 0x2f2c9c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2f2c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f2ca0:
    // 0x2f2ca0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f2ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f2ca4:
    // 0x2f2ca4: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f2ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f2ca8:
    // 0x2f2ca8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f2ca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2cac:
    // 0x2f2cac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f2cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f2cb0:
    // 0x2f2cb0: 0x60f809  jalr        $v1
label_2f2cb4:
    if (ctx->pc == 0x2F2CB4u) {
        ctx->pc = 0x2F2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CB0u;
        // 0x2f2cb4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2CB8u;
        goto label_2f2cb8;
    }
    ctx->pc = 0x2F2CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2CB8u);
        ctx->pc = 0x2F2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CB0u;
        // 0x2f2cb4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2CB0u, 0x2F2CB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2CB8u;
label_2f2cb8:
    // 0x2f2cb8: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x2f2cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
label_2f2cbc:
    // 0x2f2cbc: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x2f2cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f2cc0:
    // 0x2f2cc0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f2cc4:
    // 0x2f2cc4: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f2cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f2cc8:
    // 0x2f2cc8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f2cc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2ccc:
    // 0x2f2ccc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f2cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f2cd0:
    // 0x2f2cd0: 0x60f809  jalr        $v1
label_2f2cd4:
    if (ctx->pc == 0x2F2CD4u) {
        ctx->pc = 0x2F2CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CD0u;
        // 0x2f2cd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2CD8u;
        goto label_2f2cd8;
    }
    ctx->pc = 0x2F2CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2CD8u);
        ctx->pc = 0x2F2CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CD0u;
        // 0x2f2cd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2CD0u, 0x2F2CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2CD8u;
label_2f2cd8:
    // 0x2f2cd8: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x2f2cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_2f2cdc:
    // 0x2f2cdc: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x2f2cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f2ce0:
    // 0x2f2ce0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f2ce4:
    // 0x2f2ce4: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f2ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f2ce8:
    // 0x2f2ce8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f2ce8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2cec:
    // 0x2f2cec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f2cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f2cf0:
    // 0x2f2cf0: 0x60f809  jalr        $v1
label_2f2cf4:
    if (ctx->pc == 0x2F2CF4u) {
        ctx->pc = 0x2F2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CF0u;
        // 0x2f2cf4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2CF8u;
        goto label_2f2cf8;
    }
    ctx->pc = 0x2F2CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2CF8u);
        ctx->pc = 0x2F2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CF0u;
        // 0x2f2cf4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2CF0u, 0x2F2CF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2CF8u;
label_2f2cf8:
    // 0x2f2cf8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2f2cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2f2cfc:
    // 0x2f2cfc: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x2f2cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f2d00:
    // 0x2f2d00: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f2d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f2d04:
    // 0x2f2d04: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f2d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f2d08:
    // 0x2f2d08: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f2d08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2d0c:
    // 0x2f2d0c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f2d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f2d10:
    // 0x2f2d10: 0x60f809  jalr        $v1
label_2f2d14:
    if (ctx->pc == 0x2F2D14u) {
        ctx->pc = 0x2F2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D10u;
        // 0x2f2d14: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2D18u;
        goto label_2f2d18;
    }
    ctx->pc = 0x2F2D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2D18u);
        ctx->pc = 0x2F2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D10u;
        // 0x2f2d14: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2D10u, 0x2F2D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2D18u;
label_2f2d18:
    // 0x2f2d18: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f2d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f2d1c:
    // 0x2f2d1c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f2d20:
    if (ctx->pc == 0x2F2D20u) {
        ctx->pc = 0x2F2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D1Cu;
        // 0x2f2d20: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2D24u;
        goto label_2f2d24;
    }
    ctx->pc = 0x2F2D1Cu;
    {
        const bool branch_taken_0x2f2d1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d1c) {
            ctx->pc = 0x2F2D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2D1Cu;
            // 0x2f2d20: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2D38u;
            goto label_2f2d38;
        }
    }
    ctx->pc = 0x2F2D24u;
label_2f2d24:
    // 0x2f2d24: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f2d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f2d28:
    // 0x2f2d28: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f2d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f2d2c:
    // 0x2f2d2c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f2d30:
    if (ctx->pc == 0x2F2D30u) {
        ctx->pc = 0x2F2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D2Cu;
        // 0x2f2d30: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2D34u;
        goto label_2f2d34;
    }
    ctx->pc = 0x2F2D2Cu;
    {
        const bool branch_taken_0x2f2d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D2Cu;
        // 0x2f2d30: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d2c) {
            ctx->pc = 0x2F2D40u;
            goto label_2f2d40;
        }
    }
    ctx->pc = 0x2F2D34u;
label_2f2d34:
    // 0x2f2d34: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f2d34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2f2d38:
    // 0x2f2d38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f2d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2d3c:
    // 0x2f2d3c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f2d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2f2d40:
    // 0x2f2d40: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f2d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f2d44:
    // 0x2f2d44: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2f2d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2f2d48:
    // 0x2f2d48: 0x24a5f5bc  addiu       $a1, $a1, -0xA44
    ctx->pc = 0x2f2d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964668));
label_2f2d4c:
    // 0x2f2d4c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f2d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f2d50:
    // 0x2f2d50: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f2d50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2d54:
    // 0x2f2d54: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f2d58:
    // 0x2f2d58: 0x60f809  jalr        $v1
label_2f2d5c:
    if (ctx->pc == 0x2F2D5Cu) {
        ctx->pc = 0x2F2D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D58u;
        // 0x2f2d5c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2D60u;
        goto label_2f2d60;
    }
    ctx->pc = 0x2F2D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2D60u);
        ctx->pc = 0x2F2D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D58u;
        // 0x2f2d5c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2D58u, 0x2F2D60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2D60u;
label_2f2d60:
    // 0x2f2d60: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f2d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f2d64:
    // 0x2f2d64: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2f2d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2f2d68:
    // 0x2f2d68: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f2d68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f2d6c:
    // 0x2f2d6c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2f2d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2f2d70:
    // 0x2f2d70: 0x3e00008  jr          $ra
label_2f2d74:
    if (ctx->pc == 0x2F2D74u) {
        ctx->pc = 0x2F2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D70u;
        // 0x2f2d74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2D78u;
        goto label_fallthrough_0x2f2d70;
    }
    ctx->pc = 0x2F2D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D70u;
        // 0x2f2d74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f2d70:
    ctx->pc = 0x2F2D78u;
}
