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

// Function: sub_004D95F8
// Address: 0x4d95f8 - 0x4da7b8
void sub_004D95F8_0x4d95f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D95F8_0x4d95f8");
#endif

    switch (ctx->pc) {
        case 0x4d95f8u: goto label_4d95f8;
        case 0x4d95fcu: goto label_4d95fc;
        case 0x4d9600u: goto label_4d9600;
        case 0x4d9604u: goto label_4d9604;
        case 0x4d9608u: goto label_4d9608;
        case 0x4d960cu: goto label_4d960c;
        case 0x4d9610u: goto label_4d9610;
        case 0x4d9614u: goto label_4d9614;
        case 0x4d9618u: goto label_4d9618;
        case 0x4d961cu: goto label_4d961c;
        case 0x4d9620u: goto label_4d9620;
        case 0x4d9624u: goto label_4d9624;
        case 0x4d9628u: goto label_4d9628;
        case 0x4d962cu: goto label_4d962c;
        case 0x4d9630u: goto label_4d9630;
        case 0x4d9634u: goto label_4d9634;
        case 0x4d9638u: goto label_4d9638;
        case 0x4d963cu: goto label_4d963c;
        case 0x4d9640u: goto label_4d9640;
        case 0x4d9644u: goto label_4d9644;
        case 0x4d9648u: goto label_4d9648;
        case 0x4d964cu: goto label_4d964c;
        case 0x4d9650u: goto label_4d9650;
        case 0x4d9654u: goto label_4d9654;
        case 0x4d9658u: goto label_4d9658;
        case 0x4d965cu: goto label_4d965c;
        case 0x4d9660u: goto label_4d9660;
        case 0x4d9664u: goto label_4d9664;
        case 0x4d9668u: goto label_4d9668;
        case 0x4d966cu: goto label_4d966c;
        case 0x4d9670u: goto label_4d9670;
        case 0x4d9674u: goto label_4d9674;
        case 0x4d9678u: goto label_4d9678;
        case 0x4d967cu: goto label_4d967c;
        case 0x4d9680u: goto label_4d9680;
        case 0x4d9684u: goto label_4d9684;
        case 0x4d9688u: goto label_4d9688;
        case 0x4d968cu: goto label_4d968c;
        case 0x4d9690u: goto label_4d9690;
        case 0x4d9694u: goto label_4d9694;
        case 0x4d9698u: goto label_4d9698;
        case 0x4d969cu: goto label_4d969c;
        case 0x4d96a0u: goto label_4d96a0;
        case 0x4d96a4u: goto label_4d96a4;
        case 0x4d96a8u: goto label_4d96a8;
        case 0x4d96acu: goto label_4d96ac;
        case 0x4d96b0u: goto label_4d96b0;
        case 0x4d96b4u: goto label_4d96b4;
        case 0x4d96b8u: goto label_4d96b8;
        case 0x4d96bcu: goto label_4d96bc;
        case 0x4d96c0u: goto label_4d96c0;
        case 0x4d96c4u: goto label_4d96c4;
        case 0x4d96c8u: goto label_4d96c8;
        case 0x4d96ccu: goto label_4d96cc;
        case 0x4d96d0u: goto label_4d96d0;
        case 0x4d96d4u: goto label_4d96d4;
        case 0x4d96d8u: goto label_4d96d8;
        case 0x4d96dcu: goto label_4d96dc;
        case 0x4d96e0u: goto label_4d96e0;
        case 0x4d96e4u: goto label_4d96e4;
        case 0x4d96e8u: goto label_4d96e8;
        case 0x4d96ecu: goto label_4d96ec;
        case 0x4d96f0u: goto label_4d96f0;
        case 0x4d96f4u: goto label_4d96f4;
        case 0x4d96f8u: goto label_4d96f8;
        case 0x4d96fcu: goto label_4d96fc;
        case 0x4d9700u: goto label_4d9700;
        case 0x4d9704u: goto label_4d9704;
        case 0x4d9708u: goto label_4d9708;
        case 0x4d970cu: goto label_4d970c;
        case 0x4d9710u: goto label_4d9710;
        case 0x4d9714u: goto label_4d9714;
        case 0x4d9718u: goto label_4d9718;
        case 0x4d971cu: goto label_4d971c;
        case 0x4d9720u: goto label_4d9720;
        case 0x4d9724u: goto label_4d9724;
        case 0x4d9728u: goto label_4d9728;
        case 0x4d972cu: goto label_4d972c;
        case 0x4d9730u: goto label_4d9730;
        case 0x4d9734u: goto label_4d9734;
        case 0x4d9738u: goto label_4d9738;
        case 0x4d973cu: goto label_4d973c;
        case 0x4d9740u: goto label_4d9740;
        case 0x4d9744u: goto label_4d9744;
        case 0x4d9748u: goto label_4d9748;
        case 0x4d974cu: goto label_4d974c;
        case 0x4d9750u: goto label_4d9750;
        case 0x4d9754u: goto label_4d9754;
        case 0x4d9758u: goto label_4d9758;
        case 0x4d975cu: goto label_4d975c;
        case 0x4d9760u: goto label_4d9760;
        case 0x4d9764u: goto label_4d9764;
        case 0x4d9768u: goto label_4d9768;
        case 0x4d976cu: goto label_4d976c;
        case 0x4d9770u: goto label_4d9770;
        case 0x4d9774u: goto label_4d9774;
        case 0x4d9778u: goto label_4d9778;
        case 0x4d977cu: goto label_4d977c;
        case 0x4d9780u: goto label_4d9780;
        case 0x4d9784u: goto label_4d9784;
        case 0x4d9788u: goto label_4d9788;
        case 0x4d978cu: goto label_4d978c;
        case 0x4d9790u: goto label_4d9790;
        case 0x4d9794u: goto label_4d9794;
        case 0x4d9798u: goto label_4d9798;
        case 0x4d979cu: goto label_4d979c;
        case 0x4d97a0u: goto label_4d97a0;
        case 0x4d97a4u: goto label_4d97a4;
        case 0x4d97a8u: goto label_4d97a8;
        case 0x4d97acu: goto label_4d97ac;
        case 0x4d97b0u: goto label_4d97b0;
        case 0x4d97b4u: goto label_4d97b4;
        case 0x4d97b8u: goto label_4d97b8;
        case 0x4d97bcu: goto label_4d97bc;
        case 0x4d97c0u: goto label_4d97c0;
        case 0x4d97c4u: goto label_4d97c4;
        case 0x4d97c8u: goto label_4d97c8;
        case 0x4d97ccu: goto label_4d97cc;
        case 0x4d97d0u: goto label_4d97d0;
        case 0x4d97d4u: goto label_4d97d4;
        case 0x4d97d8u: goto label_4d97d8;
        case 0x4d97dcu: goto label_4d97dc;
        case 0x4d97e0u: goto label_4d97e0;
        case 0x4d97e4u: goto label_4d97e4;
        case 0x4d97e8u: goto label_4d97e8;
        case 0x4d97ecu: goto label_4d97ec;
        case 0x4d97f0u: goto label_4d97f0;
        case 0x4d97f4u: goto label_4d97f4;
        case 0x4d97f8u: goto label_4d97f8;
        case 0x4d97fcu: goto label_4d97fc;
        case 0x4d9800u: goto label_4d9800;
        case 0x4d9804u: goto label_4d9804;
        case 0x4d9808u: goto label_4d9808;
        case 0x4d980cu: goto label_4d980c;
        case 0x4d9810u: goto label_4d9810;
        case 0x4d9814u: goto label_4d9814;
        case 0x4d9818u: goto label_4d9818;
        case 0x4d981cu: goto label_4d981c;
        case 0x4d9820u: goto label_4d9820;
        case 0x4d9824u: goto label_4d9824;
        case 0x4d9828u: goto label_4d9828;
        case 0x4d982cu: goto label_4d982c;
        case 0x4d9830u: goto label_4d9830;
        case 0x4d9834u: goto label_4d9834;
        case 0x4d9838u: goto label_4d9838;
        case 0x4d983cu: goto label_4d983c;
        case 0x4d9840u: goto label_4d9840;
        case 0x4d9844u: goto label_4d9844;
        case 0x4d9848u: goto label_4d9848;
        case 0x4d984cu: goto label_4d984c;
        case 0x4d9850u: goto label_4d9850;
        case 0x4d9854u: goto label_4d9854;
        case 0x4d9858u: goto label_4d9858;
        case 0x4d985cu: goto label_4d985c;
        case 0x4d9860u: goto label_4d9860;
        case 0x4d9864u: goto label_4d9864;
        case 0x4d9868u: goto label_4d9868;
        case 0x4d986cu: goto label_4d986c;
        case 0x4d9870u: goto label_4d9870;
        case 0x4d9874u: goto label_4d9874;
        case 0x4d9878u: goto label_4d9878;
        case 0x4d987cu: goto label_4d987c;
        case 0x4d9880u: goto label_4d9880;
        case 0x4d9884u: goto label_4d9884;
        case 0x4d9888u: goto label_4d9888;
        case 0x4d988cu: goto label_4d988c;
        case 0x4d9890u: goto label_4d9890;
        case 0x4d9894u: goto label_4d9894;
        case 0x4d9898u: goto label_4d9898;
        case 0x4d989cu: goto label_4d989c;
        case 0x4d98a0u: goto label_4d98a0;
        case 0x4d98a4u: goto label_4d98a4;
        case 0x4d98a8u: goto label_4d98a8;
        case 0x4d98acu: goto label_4d98ac;
        case 0x4d98b0u: goto label_4d98b0;
        case 0x4d98b4u: goto label_4d98b4;
        case 0x4d98b8u: goto label_4d98b8;
        case 0x4d98bcu: goto label_4d98bc;
        case 0x4d98c0u: goto label_4d98c0;
        case 0x4d98c4u: goto label_4d98c4;
        case 0x4d98c8u: goto label_4d98c8;
        case 0x4d98ccu: goto label_4d98cc;
        case 0x4d98d0u: goto label_4d98d0;
        case 0x4d98d4u: goto label_4d98d4;
        case 0x4d98d8u: goto label_4d98d8;
        case 0x4d98dcu: goto label_4d98dc;
        case 0x4d98e0u: goto label_4d98e0;
        case 0x4d98e4u: goto label_4d98e4;
        case 0x4d98e8u: goto label_4d98e8;
        case 0x4d98ecu: goto label_4d98ec;
        case 0x4d98f0u: goto label_4d98f0;
        case 0x4d98f4u: goto label_4d98f4;
        case 0x4d98f8u: goto label_4d98f8;
        case 0x4d98fcu: goto label_4d98fc;
        case 0x4d9900u: goto label_4d9900;
        case 0x4d9904u: goto label_4d9904;
        case 0x4d9908u: goto label_4d9908;
        case 0x4d990cu: goto label_4d990c;
        case 0x4d9910u: goto label_4d9910;
        case 0x4d9914u: goto label_4d9914;
        case 0x4d9918u: goto label_4d9918;
        case 0x4d991cu: goto label_4d991c;
        case 0x4d9920u: goto label_4d9920;
        case 0x4d9924u: goto label_4d9924;
        case 0x4d9928u: goto label_4d9928;
        case 0x4d992cu: goto label_4d992c;
        case 0x4d9930u: goto label_4d9930;
        case 0x4d9934u: goto label_4d9934;
        case 0x4d9938u: goto label_4d9938;
        case 0x4d993cu: goto label_4d993c;
        case 0x4d9940u: goto label_4d9940;
        case 0x4d9944u: goto label_4d9944;
        case 0x4d9948u: goto label_4d9948;
        case 0x4d994cu: goto label_4d994c;
        case 0x4d9950u: goto label_4d9950;
        case 0x4d9954u: goto label_4d9954;
        case 0x4d9958u: goto label_4d9958;
        case 0x4d995cu: goto label_4d995c;
        case 0x4d9960u: goto label_4d9960;
        case 0x4d9964u: goto label_4d9964;
        case 0x4d9968u: goto label_4d9968;
        case 0x4d996cu: goto label_4d996c;
        case 0x4d9970u: goto label_4d9970;
        case 0x4d9974u: goto label_4d9974;
        case 0x4d9978u: goto label_4d9978;
        case 0x4d997cu: goto label_4d997c;
        case 0x4d9980u: goto label_4d9980;
        case 0x4d9984u: goto label_4d9984;
        case 0x4d9988u: goto label_4d9988;
        case 0x4d998cu: goto label_4d998c;
        case 0x4d9990u: goto label_4d9990;
        case 0x4d9994u: goto label_4d9994;
        case 0x4d9998u: goto label_4d9998;
        case 0x4d999cu: goto label_4d999c;
        case 0x4d99a0u: goto label_4d99a0;
        case 0x4d99a4u: goto label_4d99a4;
        case 0x4d99a8u: goto label_4d99a8;
        case 0x4d99acu: goto label_4d99ac;
        case 0x4d99b0u: goto label_4d99b0;
        case 0x4d99b4u: goto label_4d99b4;
        case 0x4d99b8u: goto label_4d99b8;
        case 0x4d99bcu: goto label_4d99bc;
        case 0x4d99c0u: goto label_4d99c0;
        case 0x4d99c4u: goto label_4d99c4;
        case 0x4d99c8u: goto label_4d99c8;
        case 0x4d99ccu: goto label_4d99cc;
        case 0x4d99d0u: goto label_4d99d0;
        case 0x4d99d4u: goto label_4d99d4;
        case 0x4d99d8u: goto label_4d99d8;
        case 0x4d99dcu: goto label_4d99dc;
        case 0x4d99e0u: goto label_4d99e0;
        case 0x4d99e4u: goto label_4d99e4;
        case 0x4d99e8u: goto label_4d99e8;
        case 0x4d99ecu: goto label_4d99ec;
        case 0x4d99f0u: goto label_4d99f0;
        case 0x4d99f4u: goto label_4d99f4;
        case 0x4d99f8u: goto label_4d99f8;
        case 0x4d99fcu: goto label_4d99fc;
        case 0x4d9a00u: goto label_4d9a00;
        case 0x4d9a04u: goto label_4d9a04;
        case 0x4d9a08u: goto label_4d9a08;
        case 0x4d9a0cu: goto label_4d9a0c;
        case 0x4d9a10u: goto label_4d9a10;
        case 0x4d9a14u: goto label_4d9a14;
        case 0x4d9a18u: goto label_4d9a18;
        case 0x4d9a1cu: goto label_4d9a1c;
        case 0x4d9a20u: goto label_4d9a20;
        case 0x4d9a24u: goto label_4d9a24;
        case 0x4d9a28u: goto label_4d9a28;
        case 0x4d9a2cu: goto label_4d9a2c;
        case 0x4d9a30u: goto label_4d9a30;
        case 0x4d9a34u: goto label_4d9a34;
        case 0x4d9a38u: goto label_4d9a38;
        case 0x4d9a3cu: goto label_4d9a3c;
        case 0x4d9a40u: goto label_4d9a40;
        case 0x4d9a44u: goto label_4d9a44;
        case 0x4d9a48u: goto label_4d9a48;
        case 0x4d9a4cu: goto label_4d9a4c;
        case 0x4d9a50u: goto label_4d9a50;
        case 0x4d9a54u: goto label_4d9a54;
        case 0x4d9a58u: goto label_4d9a58;
        case 0x4d9a5cu: goto label_4d9a5c;
        case 0x4d9a60u: goto label_4d9a60;
        case 0x4d9a64u: goto label_4d9a64;
        case 0x4d9a68u: goto label_4d9a68;
        case 0x4d9a6cu: goto label_4d9a6c;
        case 0x4d9a70u: goto label_4d9a70;
        case 0x4d9a74u: goto label_4d9a74;
        case 0x4d9a78u: goto label_4d9a78;
        case 0x4d9a7cu: goto label_4d9a7c;
        case 0x4d9a80u: goto label_4d9a80;
        case 0x4d9a84u: goto label_4d9a84;
        case 0x4d9a88u: goto label_4d9a88;
        case 0x4d9a8cu: goto label_4d9a8c;
        case 0x4d9a90u: goto label_4d9a90;
        case 0x4d9a94u: goto label_4d9a94;
        case 0x4d9a98u: goto label_4d9a98;
        case 0x4d9a9cu: goto label_4d9a9c;
        case 0x4d9aa0u: goto label_4d9aa0;
        case 0x4d9aa4u: goto label_4d9aa4;
        case 0x4d9aa8u: goto label_4d9aa8;
        case 0x4d9aacu: goto label_4d9aac;
        case 0x4d9ab0u: goto label_4d9ab0;
        case 0x4d9ab4u: goto label_4d9ab4;
        case 0x4d9ab8u: goto label_4d9ab8;
        case 0x4d9abcu: goto label_4d9abc;
        case 0x4d9ac0u: goto label_4d9ac0;
        case 0x4d9ac4u: goto label_4d9ac4;
        case 0x4d9ac8u: goto label_4d9ac8;
        case 0x4d9accu: goto label_4d9acc;
        case 0x4d9ad0u: goto label_4d9ad0;
        case 0x4d9ad4u: goto label_4d9ad4;
        case 0x4d9ad8u: goto label_4d9ad8;
        case 0x4d9adcu: goto label_4d9adc;
        case 0x4d9ae0u: goto label_4d9ae0;
        case 0x4d9ae4u: goto label_4d9ae4;
        case 0x4d9ae8u: goto label_4d9ae8;
        case 0x4d9aecu: goto label_4d9aec;
        case 0x4d9af0u: goto label_4d9af0;
        case 0x4d9af4u: goto label_4d9af4;
        case 0x4d9af8u: goto label_4d9af8;
        case 0x4d9afcu: goto label_4d9afc;
        case 0x4d9b00u: goto label_4d9b00;
        case 0x4d9b04u: goto label_4d9b04;
        case 0x4d9b08u: goto label_4d9b08;
        case 0x4d9b0cu: goto label_4d9b0c;
        case 0x4d9b10u: goto label_4d9b10;
        case 0x4d9b14u: goto label_4d9b14;
        case 0x4d9b18u: goto label_4d9b18;
        case 0x4d9b1cu: goto label_4d9b1c;
        case 0x4d9b20u: goto label_4d9b20;
        case 0x4d9b24u: goto label_4d9b24;
        case 0x4d9b28u: goto label_4d9b28;
        case 0x4d9b2cu: goto label_4d9b2c;
        case 0x4d9b30u: goto label_4d9b30;
        case 0x4d9b34u: goto label_4d9b34;
        case 0x4d9b38u: goto label_4d9b38;
        case 0x4d9b3cu: goto label_4d9b3c;
        case 0x4d9b40u: goto label_4d9b40;
        case 0x4d9b44u: goto label_4d9b44;
        case 0x4d9b48u: goto label_4d9b48;
        case 0x4d9b4cu: goto label_4d9b4c;
        case 0x4d9b50u: goto label_4d9b50;
        case 0x4d9b54u: goto label_4d9b54;
        case 0x4d9b58u: goto label_4d9b58;
        case 0x4d9b5cu: goto label_4d9b5c;
        case 0x4d9b60u: goto label_4d9b60;
        case 0x4d9b64u: goto label_4d9b64;
        case 0x4d9b68u: goto label_4d9b68;
        case 0x4d9b6cu: goto label_4d9b6c;
        case 0x4d9b70u: goto label_4d9b70;
        case 0x4d9b74u: goto label_4d9b74;
        case 0x4d9b78u: goto label_4d9b78;
        case 0x4d9b7cu: goto label_4d9b7c;
        case 0x4d9b80u: goto label_4d9b80;
        case 0x4d9b84u: goto label_4d9b84;
        case 0x4d9b88u: goto label_4d9b88;
        case 0x4d9b8cu: goto label_4d9b8c;
        case 0x4d9b90u: goto label_4d9b90;
        case 0x4d9b94u: goto label_4d9b94;
        case 0x4d9b98u: goto label_4d9b98;
        case 0x4d9b9cu: goto label_4d9b9c;
        case 0x4d9ba0u: goto label_4d9ba0;
        case 0x4d9ba4u: goto label_4d9ba4;
        case 0x4d9ba8u: goto label_4d9ba8;
        case 0x4d9bacu: goto label_4d9bac;
        case 0x4d9bb0u: goto label_4d9bb0;
        case 0x4d9bb4u: goto label_4d9bb4;
        case 0x4d9bb8u: goto label_4d9bb8;
        case 0x4d9bbcu: goto label_4d9bbc;
        case 0x4d9bc0u: goto label_4d9bc0;
        case 0x4d9bc4u: goto label_4d9bc4;
        case 0x4d9bc8u: goto label_4d9bc8;
        case 0x4d9bccu: goto label_4d9bcc;
        case 0x4d9bd0u: goto label_4d9bd0;
        case 0x4d9bd4u: goto label_4d9bd4;
        case 0x4d9bd8u: goto label_4d9bd8;
        case 0x4d9bdcu: goto label_4d9bdc;
        case 0x4d9be0u: goto label_4d9be0;
        case 0x4d9be4u: goto label_4d9be4;
        case 0x4d9be8u: goto label_4d9be8;
        case 0x4d9becu: goto label_4d9bec;
        case 0x4d9bf0u: goto label_4d9bf0;
        case 0x4d9bf4u: goto label_4d9bf4;
        case 0x4d9bf8u: goto label_4d9bf8;
        case 0x4d9bfcu: goto label_4d9bfc;
        case 0x4d9c00u: goto label_4d9c00;
        case 0x4d9c04u: goto label_4d9c04;
        case 0x4d9c08u: goto label_4d9c08;
        case 0x4d9c0cu: goto label_4d9c0c;
        case 0x4d9c10u: goto label_4d9c10;
        case 0x4d9c14u: goto label_4d9c14;
        case 0x4d9c18u: goto label_4d9c18;
        case 0x4d9c1cu: goto label_4d9c1c;
        case 0x4d9c20u: goto label_4d9c20;
        case 0x4d9c24u: goto label_4d9c24;
        case 0x4d9c28u: goto label_4d9c28;
        case 0x4d9c2cu: goto label_4d9c2c;
        case 0x4d9c30u: goto label_4d9c30;
        case 0x4d9c34u: goto label_4d9c34;
        case 0x4d9c38u: goto label_4d9c38;
        case 0x4d9c3cu: goto label_4d9c3c;
        case 0x4d9c40u: goto label_4d9c40;
        case 0x4d9c44u: goto label_4d9c44;
        case 0x4d9c48u: goto label_4d9c48;
        case 0x4d9c4cu: goto label_4d9c4c;
        case 0x4d9c50u: goto label_4d9c50;
        case 0x4d9c54u: goto label_4d9c54;
        case 0x4d9c58u: goto label_4d9c58;
        case 0x4d9c5cu: goto label_4d9c5c;
        case 0x4d9c60u: goto label_4d9c60;
        case 0x4d9c64u: goto label_4d9c64;
        case 0x4d9c68u: goto label_4d9c68;
        case 0x4d9c6cu: goto label_4d9c6c;
        case 0x4d9c70u: goto label_4d9c70;
        case 0x4d9c74u: goto label_4d9c74;
        case 0x4d9c78u: goto label_4d9c78;
        case 0x4d9c7cu: goto label_4d9c7c;
        case 0x4d9c80u: goto label_4d9c80;
        case 0x4d9c84u: goto label_4d9c84;
        case 0x4d9c88u: goto label_4d9c88;
        case 0x4d9c8cu: goto label_4d9c8c;
        case 0x4d9c90u: goto label_4d9c90;
        case 0x4d9c94u: goto label_4d9c94;
        case 0x4d9c98u: goto label_4d9c98;
        case 0x4d9c9cu: goto label_4d9c9c;
        case 0x4d9ca0u: goto label_4d9ca0;
        case 0x4d9ca4u: goto label_4d9ca4;
        case 0x4d9ca8u: goto label_4d9ca8;
        case 0x4d9cacu: goto label_4d9cac;
        case 0x4d9cb0u: goto label_4d9cb0;
        case 0x4d9cb4u: goto label_4d9cb4;
        case 0x4d9cb8u: goto label_4d9cb8;
        case 0x4d9cbcu: goto label_4d9cbc;
        case 0x4d9cc0u: goto label_4d9cc0;
        case 0x4d9cc4u: goto label_4d9cc4;
        case 0x4d9cc8u: goto label_4d9cc8;
        case 0x4d9cccu: goto label_4d9ccc;
        case 0x4d9cd0u: goto label_4d9cd0;
        case 0x4d9cd4u: goto label_4d9cd4;
        case 0x4d9cd8u: goto label_4d9cd8;
        case 0x4d9cdcu: goto label_4d9cdc;
        case 0x4d9ce0u: goto label_4d9ce0;
        case 0x4d9ce4u: goto label_4d9ce4;
        case 0x4d9ce8u: goto label_4d9ce8;
        case 0x4d9cecu: goto label_4d9cec;
        case 0x4d9cf0u: goto label_4d9cf0;
        case 0x4d9cf4u: goto label_4d9cf4;
        case 0x4d9cf8u: goto label_4d9cf8;
        case 0x4d9cfcu: goto label_4d9cfc;
        case 0x4d9d00u: goto label_4d9d00;
        case 0x4d9d04u: goto label_4d9d04;
        case 0x4d9d08u: goto label_4d9d08;
        case 0x4d9d0cu: goto label_4d9d0c;
        case 0x4d9d10u: goto label_4d9d10;
        case 0x4d9d14u: goto label_4d9d14;
        case 0x4d9d18u: goto label_4d9d18;
        case 0x4d9d1cu: goto label_4d9d1c;
        case 0x4d9d20u: goto label_4d9d20;
        case 0x4d9d24u: goto label_4d9d24;
        case 0x4d9d28u: goto label_4d9d28;
        case 0x4d9d2cu: goto label_4d9d2c;
        case 0x4d9d30u: goto label_4d9d30;
        case 0x4d9d34u: goto label_4d9d34;
        case 0x4d9d38u: goto label_4d9d38;
        case 0x4d9d3cu: goto label_4d9d3c;
        case 0x4d9d40u: goto label_4d9d40;
        case 0x4d9d44u: goto label_4d9d44;
        case 0x4d9d48u: goto label_4d9d48;
        case 0x4d9d4cu: goto label_4d9d4c;
        case 0x4d9d50u: goto label_4d9d50;
        case 0x4d9d54u: goto label_4d9d54;
        case 0x4d9d58u: goto label_4d9d58;
        case 0x4d9d5cu: goto label_4d9d5c;
        case 0x4d9d60u: goto label_4d9d60;
        case 0x4d9d64u: goto label_4d9d64;
        case 0x4d9d68u: goto label_4d9d68;
        case 0x4d9d6cu: goto label_4d9d6c;
        case 0x4d9d70u: goto label_4d9d70;
        case 0x4d9d74u: goto label_4d9d74;
        case 0x4d9d78u: goto label_4d9d78;
        case 0x4d9d7cu: goto label_4d9d7c;
        case 0x4d9d80u: goto label_4d9d80;
        case 0x4d9d84u: goto label_4d9d84;
        case 0x4d9d88u: goto label_4d9d88;
        case 0x4d9d8cu: goto label_4d9d8c;
        case 0x4d9d90u: goto label_4d9d90;
        case 0x4d9d94u: goto label_4d9d94;
        case 0x4d9d98u: goto label_4d9d98;
        case 0x4d9d9cu: goto label_4d9d9c;
        case 0x4d9da0u: goto label_4d9da0;
        case 0x4d9da4u: goto label_4d9da4;
        case 0x4d9da8u: goto label_4d9da8;
        case 0x4d9dacu: goto label_4d9dac;
        case 0x4d9db0u: goto label_4d9db0;
        case 0x4d9db4u: goto label_4d9db4;
        case 0x4d9db8u: goto label_4d9db8;
        case 0x4d9dbcu: goto label_4d9dbc;
        case 0x4d9dc0u: goto label_4d9dc0;
        case 0x4d9dc4u: goto label_4d9dc4;
        case 0x4d9dc8u: goto label_4d9dc8;
        case 0x4d9dccu: goto label_4d9dcc;
        case 0x4d9dd0u: goto label_4d9dd0;
        case 0x4d9dd4u: goto label_4d9dd4;
        case 0x4d9dd8u: goto label_4d9dd8;
        case 0x4d9ddcu: goto label_4d9ddc;
        case 0x4d9de0u: goto label_4d9de0;
        case 0x4d9de4u: goto label_4d9de4;
        case 0x4d9de8u: goto label_4d9de8;
        case 0x4d9decu: goto label_4d9dec;
        case 0x4d9df0u: goto label_4d9df0;
        case 0x4d9df4u: goto label_4d9df4;
        case 0x4d9df8u: goto label_4d9df8;
        case 0x4d9dfcu: goto label_4d9dfc;
        case 0x4d9e00u: goto label_4d9e00;
        case 0x4d9e04u: goto label_4d9e04;
        case 0x4d9e08u: goto label_4d9e08;
        case 0x4d9e0cu: goto label_4d9e0c;
        case 0x4d9e10u: goto label_4d9e10;
        case 0x4d9e14u: goto label_4d9e14;
        case 0x4d9e18u: goto label_4d9e18;
        case 0x4d9e1cu: goto label_4d9e1c;
        case 0x4d9e20u: goto label_4d9e20;
        case 0x4d9e24u: goto label_4d9e24;
        case 0x4d9e28u: goto label_4d9e28;
        case 0x4d9e2cu: goto label_4d9e2c;
        case 0x4d9e30u: goto label_4d9e30;
        case 0x4d9e34u: goto label_4d9e34;
        case 0x4d9e38u: goto label_4d9e38;
        case 0x4d9e3cu: goto label_4d9e3c;
        case 0x4d9e40u: goto label_4d9e40;
        case 0x4d9e44u: goto label_4d9e44;
        case 0x4d9e48u: goto label_4d9e48;
        case 0x4d9e4cu: goto label_4d9e4c;
        case 0x4d9e50u: goto label_4d9e50;
        case 0x4d9e54u: goto label_4d9e54;
        case 0x4d9e58u: goto label_4d9e58;
        case 0x4d9e5cu: goto label_4d9e5c;
        case 0x4d9e60u: goto label_4d9e60;
        case 0x4d9e64u: goto label_4d9e64;
        case 0x4d9e68u: goto label_4d9e68;
        case 0x4d9e6cu: goto label_4d9e6c;
        case 0x4d9e70u: goto label_4d9e70;
        case 0x4d9e74u: goto label_4d9e74;
        case 0x4d9e78u: goto label_4d9e78;
        case 0x4d9e7cu: goto label_4d9e7c;
        case 0x4d9e80u: goto label_4d9e80;
        case 0x4d9e84u: goto label_4d9e84;
        case 0x4d9e88u: goto label_4d9e88;
        case 0x4d9e8cu: goto label_4d9e8c;
        case 0x4d9e90u: goto label_4d9e90;
        case 0x4d9e94u: goto label_4d9e94;
        case 0x4d9e98u: goto label_4d9e98;
        case 0x4d9e9cu: goto label_4d9e9c;
        case 0x4d9ea0u: goto label_4d9ea0;
        case 0x4d9ea4u: goto label_4d9ea4;
        case 0x4d9ea8u: goto label_4d9ea8;
        case 0x4d9eacu: goto label_4d9eac;
        case 0x4d9eb0u: goto label_4d9eb0;
        case 0x4d9eb4u: goto label_4d9eb4;
        case 0x4d9eb8u: goto label_4d9eb8;
        case 0x4d9ebcu: goto label_4d9ebc;
        case 0x4d9ec0u: goto label_4d9ec0;
        case 0x4d9ec4u: goto label_4d9ec4;
        case 0x4d9ec8u: goto label_4d9ec8;
        case 0x4d9eccu: goto label_4d9ecc;
        case 0x4d9ed0u: goto label_4d9ed0;
        case 0x4d9ed4u: goto label_4d9ed4;
        case 0x4d9ed8u: goto label_4d9ed8;
        case 0x4d9edcu: goto label_4d9edc;
        case 0x4d9ee0u: goto label_4d9ee0;
        case 0x4d9ee4u: goto label_4d9ee4;
        case 0x4d9ee8u: goto label_4d9ee8;
        case 0x4d9eecu: goto label_4d9eec;
        case 0x4d9ef0u: goto label_4d9ef0;
        case 0x4d9ef4u: goto label_4d9ef4;
        case 0x4d9ef8u: goto label_4d9ef8;
        case 0x4d9efcu: goto label_4d9efc;
        case 0x4d9f00u: goto label_4d9f00;
        case 0x4d9f04u: goto label_4d9f04;
        case 0x4d9f08u: goto label_4d9f08;
        case 0x4d9f0cu: goto label_4d9f0c;
        case 0x4d9f10u: goto label_4d9f10;
        case 0x4d9f14u: goto label_4d9f14;
        case 0x4d9f18u: goto label_4d9f18;
        case 0x4d9f1cu: goto label_4d9f1c;
        case 0x4d9f20u: goto label_4d9f20;
        case 0x4d9f24u: goto label_4d9f24;
        case 0x4d9f28u: goto label_4d9f28;
        case 0x4d9f2cu: goto label_4d9f2c;
        case 0x4d9f30u: goto label_4d9f30;
        case 0x4d9f34u: goto label_4d9f34;
        case 0x4d9f38u: goto label_4d9f38;
        case 0x4d9f3cu: goto label_4d9f3c;
        case 0x4d9f40u: goto label_4d9f40;
        case 0x4d9f44u: goto label_4d9f44;
        case 0x4d9f48u: goto label_4d9f48;
        case 0x4d9f4cu: goto label_4d9f4c;
        case 0x4d9f50u: goto label_4d9f50;
        case 0x4d9f54u: goto label_4d9f54;
        case 0x4d9f58u: goto label_4d9f58;
        case 0x4d9f5cu: goto label_4d9f5c;
        case 0x4d9f60u: goto label_4d9f60;
        case 0x4d9f64u: goto label_4d9f64;
        case 0x4d9f68u: goto label_4d9f68;
        case 0x4d9f6cu: goto label_4d9f6c;
        case 0x4d9f70u: goto label_4d9f70;
        case 0x4d9f74u: goto label_4d9f74;
        case 0x4d9f78u: goto label_4d9f78;
        case 0x4d9f7cu: goto label_4d9f7c;
        case 0x4d9f80u: goto label_4d9f80;
        case 0x4d9f84u: goto label_4d9f84;
        case 0x4d9f88u: goto label_4d9f88;
        case 0x4d9f8cu: goto label_4d9f8c;
        case 0x4d9f90u: goto label_4d9f90;
        case 0x4d9f94u: goto label_4d9f94;
        case 0x4d9f98u: goto label_4d9f98;
        case 0x4d9f9cu: goto label_4d9f9c;
        case 0x4d9fa0u: goto label_4d9fa0;
        case 0x4d9fa4u: goto label_4d9fa4;
        case 0x4d9fa8u: goto label_4d9fa8;
        case 0x4d9facu: goto label_4d9fac;
        case 0x4d9fb0u: goto label_4d9fb0;
        case 0x4d9fb4u: goto label_4d9fb4;
        case 0x4d9fb8u: goto label_4d9fb8;
        case 0x4d9fbcu: goto label_4d9fbc;
        case 0x4d9fc0u: goto label_4d9fc0;
        case 0x4d9fc4u: goto label_4d9fc4;
        case 0x4d9fc8u: goto label_4d9fc8;
        case 0x4d9fccu: goto label_4d9fcc;
        case 0x4d9fd0u: goto label_4d9fd0;
        case 0x4d9fd4u: goto label_4d9fd4;
        case 0x4d9fd8u: goto label_4d9fd8;
        case 0x4d9fdcu: goto label_4d9fdc;
        case 0x4d9fe0u: goto label_4d9fe0;
        case 0x4d9fe4u: goto label_4d9fe4;
        case 0x4d9fe8u: goto label_4d9fe8;
        case 0x4d9fecu: goto label_4d9fec;
        case 0x4d9ff0u: goto label_4d9ff0;
        case 0x4d9ff4u: goto label_4d9ff4;
        case 0x4d9ff8u: goto label_4d9ff8;
        case 0x4d9ffcu: goto label_4d9ffc;
        case 0x4da000u: goto label_4da000;
        case 0x4da004u: goto label_4da004;
        case 0x4da008u: goto label_4da008;
        case 0x4da00cu: goto label_4da00c;
        case 0x4da010u: goto label_4da010;
        case 0x4da014u: goto label_4da014;
        case 0x4da018u: goto label_4da018;
        case 0x4da01cu: goto label_4da01c;
        case 0x4da020u: goto label_4da020;
        case 0x4da024u: goto label_4da024;
        case 0x4da028u: goto label_4da028;
        case 0x4da02cu: goto label_4da02c;
        case 0x4da030u: goto label_4da030;
        case 0x4da034u: goto label_4da034;
        case 0x4da038u: goto label_4da038;
        case 0x4da03cu: goto label_4da03c;
        case 0x4da040u: goto label_4da040;
        case 0x4da044u: goto label_4da044;
        case 0x4da048u: goto label_4da048;
        case 0x4da04cu: goto label_4da04c;
        case 0x4da050u: goto label_4da050;
        case 0x4da054u: goto label_4da054;
        case 0x4da058u: goto label_4da058;
        case 0x4da05cu: goto label_4da05c;
        case 0x4da060u: goto label_4da060;
        case 0x4da064u: goto label_4da064;
        case 0x4da068u: goto label_4da068;
        case 0x4da06cu: goto label_4da06c;
        case 0x4da070u: goto label_4da070;
        case 0x4da074u: goto label_4da074;
        case 0x4da078u: goto label_4da078;
        case 0x4da07cu: goto label_4da07c;
        case 0x4da080u: goto label_4da080;
        case 0x4da084u: goto label_4da084;
        case 0x4da088u: goto label_4da088;
        case 0x4da08cu: goto label_4da08c;
        case 0x4da090u: goto label_4da090;
        case 0x4da094u: goto label_4da094;
        case 0x4da098u: goto label_4da098;
        case 0x4da09cu: goto label_4da09c;
        case 0x4da0a0u: goto label_4da0a0;
        case 0x4da0a4u: goto label_4da0a4;
        case 0x4da0a8u: goto label_4da0a8;
        case 0x4da0acu: goto label_4da0ac;
        case 0x4da0b0u: goto label_4da0b0;
        case 0x4da0b4u: goto label_4da0b4;
        case 0x4da0b8u: goto label_4da0b8;
        case 0x4da0bcu: goto label_4da0bc;
        case 0x4da0c0u: goto label_4da0c0;
        case 0x4da0c4u: goto label_4da0c4;
        case 0x4da0c8u: goto label_4da0c8;
        case 0x4da0ccu: goto label_4da0cc;
        case 0x4da0d0u: goto label_4da0d0;
        case 0x4da0d4u: goto label_4da0d4;
        case 0x4da0d8u: goto label_4da0d8;
        case 0x4da0dcu: goto label_4da0dc;
        case 0x4da0e0u: goto label_4da0e0;
        case 0x4da0e4u: goto label_4da0e4;
        case 0x4da0e8u: goto label_4da0e8;
        case 0x4da0ecu: goto label_4da0ec;
        case 0x4da0f0u: goto label_4da0f0;
        case 0x4da0f4u: goto label_4da0f4;
        case 0x4da0f8u: goto label_4da0f8;
        case 0x4da0fcu: goto label_4da0fc;
        case 0x4da100u: goto label_4da100;
        case 0x4da104u: goto label_4da104;
        case 0x4da108u: goto label_4da108;
        case 0x4da10cu: goto label_4da10c;
        case 0x4da110u: goto label_4da110;
        case 0x4da114u: goto label_4da114;
        case 0x4da118u: goto label_4da118;
        case 0x4da11cu: goto label_4da11c;
        case 0x4da120u: goto label_4da120;
        case 0x4da124u: goto label_4da124;
        case 0x4da128u: goto label_4da128;
        case 0x4da12cu: goto label_4da12c;
        case 0x4da130u: goto label_4da130;
        case 0x4da134u: goto label_4da134;
        case 0x4da138u: goto label_4da138;
        case 0x4da13cu: goto label_4da13c;
        case 0x4da140u: goto label_4da140;
        case 0x4da144u: goto label_4da144;
        case 0x4da148u: goto label_4da148;
        case 0x4da14cu: goto label_4da14c;
        case 0x4da150u: goto label_4da150;
        case 0x4da154u: goto label_4da154;
        case 0x4da158u: goto label_4da158;
        case 0x4da15cu: goto label_4da15c;
        case 0x4da160u: goto label_4da160;
        case 0x4da164u: goto label_4da164;
        case 0x4da168u: goto label_4da168;
        case 0x4da16cu: goto label_4da16c;
        case 0x4da170u: goto label_4da170;
        case 0x4da174u: goto label_4da174;
        case 0x4da178u: goto label_4da178;
        case 0x4da17cu: goto label_4da17c;
        case 0x4da180u: goto label_4da180;
        case 0x4da184u: goto label_4da184;
        case 0x4da188u: goto label_4da188;
        case 0x4da18cu: goto label_4da18c;
        case 0x4da190u: goto label_4da190;
        case 0x4da194u: goto label_4da194;
        case 0x4da198u: goto label_4da198;
        case 0x4da19cu: goto label_4da19c;
        case 0x4da1a0u: goto label_4da1a0;
        case 0x4da1a4u: goto label_4da1a4;
        case 0x4da1a8u: goto label_4da1a8;
        case 0x4da1acu: goto label_4da1ac;
        case 0x4da1b0u: goto label_4da1b0;
        case 0x4da1b4u: goto label_4da1b4;
        case 0x4da1b8u: goto label_4da1b8;
        case 0x4da1bcu: goto label_4da1bc;
        case 0x4da1c0u: goto label_4da1c0;
        case 0x4da1c4u: goto label_4da1c4;
        case 0x4da1c8u: goto label_4da1c8;
        case 0x4da1ccu: goto label_4da1cc;
        case 0x4da1d0u: goto label_4da1d0;
        case 0x4da1d4u: goto label_4da1d4;
        case 0x4da1d8u: goto label_4da1d8;
        case 0x4da1dcu: goto label_4da1dc;
        case 0x4da1e0u: goto label_4da1e0;
        case 0x4da1e4u: goto label_4da1e4;
        case 0x4da1e8u: goto label_4da1e8;
        case 0x4da1ecu: goto label_4da1ec;
        case 0x4da1f0u: goto label_4da1f0;
        case 0x4da1f4u: goto label_4da1f4;
        case 0x4da1f8u: goto label_4da1f8;
        case 0x4da1fcu: goto label_4da1fc;
        case 0x4da200u: goto label_4da200;
        case 0x4da204u: goto label_4da204;
        case 0x4da208u: goto label_4da208;
        case 0x4da20cu: goto label_4da20c;
        case 0x4da210u: goto label_4da210;
        case 0x4da214u: goto label_4da214;
        case 0x4da218u: goto label_4da218;
        case 0x4da21cu: goto label_4da21c;
        case 0x4da220u: goto label_4da220;
        case 0x4da224u: goto label_4da224;
        case 0x4da228u: goto label_4da228;
        case 0x4da22cu: goto label_4da22c;
        case 0x4da230u: goto label_4da230;
        case 0x4da234u: goto label_4da234;
        case 0x4da238u: goto label_4da238;
        case 0x4da23cu: goto label_4da23c;
        case 0x4da240u: goto label_4da240;
        case 0x4da244u: goto label_4da244;
        case 0x4da248u: goto label_4da248;
        case 0x4da24cu: goto label_4da24c;
        case 0x4da250u: goto label_4da250;
        case 0x4da254u: goto label_4da254;
        case 0x4da258u: goto label_4da258;
        case 0x4da25cu: goto label_4da25c;
        case 0x4da260u: goto label_4da260;
        case 0x4da264u: goto label_4da264;
        case 0x4da268u: goto label_4da268;
        case 0x4da26cu: goto label_4da26c;
        case 0x4da270u: goto label_4da270;
        case 0x4da274u: goto label_4da274;
        case 0x4da278u: goto label_4da278;
        case 0x4da27cu: goto label_4da27c;
        case 0x4da280u: goto label_4da280;
        case 0x4da284u: goto label_4da284;
        case 0x4da288u: goto label_4da288;
        case 0x4da28cu: goto label_4da28c;
        case 0x4da290u: goto label_4da290;
        case 0x4da294u: goto label_4da294;
        case 0x4da298u: goto label_4da298;
        case 0x4da29cu: goto label_4da29c;
        case 0x4da2a0u: goto label_4da2a0;
        case 0x4da2a4u: goto label_4da2a4;
        case 0x4da2a8u: goto label_4da2a8;
        case 0x4da2acu: goto label_4da2ac;
        case 0x4da2b0u: goto label_4da2b0;
        case 0x4da2b4u: goto label_4da2b4;
        case 0x4da2b8u: goto label_4da2b8;
        case 0x4da2bcu: goto label_4da2bc;
        case 0x4da2c0u: goto label_4da2c0;
        case 0x4da2c4u: goto label_4da2c4;
        case 0x4da2c8u: goto label_4da2c8;
        case 0x4da2ccu: goto label_4da2cc;
        case 0x4da2d0u: goto label_4da2d0;
        case 0x4da2d4u: goto label_4da2d4;
        case 0x4da2d8u: goto label_4da2d8;
        case 0x4da2dcu: goto label_4da2dc;
        case 0x4da2e0u: goto label_4da2e0;
        case 0x4da2e4u: goto label_4da2e4;
        case 0x4da2e8u: goto label_4da2e8;
        case 0x4da2ecu: goto label_4da2ec;
        case 0x4da2f0u: goto label_4da2f0;
        case 0x4da2f4u: goto label_4da2f4;
        case 0x4da2f8u: goto label_4da2f8;
        case 0x4da2fcu: goto label_4da2fc;
        case 0x4da300u: goto label_4da300;
        case 0x4da304u: goto label_4da304;
        case 0x4da308u: goto label_4da308;
        case 0x4da30cu: goto label_4da30c;
        case 0x4da310u: goto label_4da310;
        case 0x4da314u: goto label_4da314;
        case 0x4da318u: goto label_4da318;
        case 0x4da31cu: goto label_4da31c;
        case 0x4da320u: goto label_4da320;
        case 0x4da324u: goto label_4da324;
        case 0x4da328u: goto label_4da328;
        case 0x4da32cu: goto label_4da32c;
        case 0x4da330u: goto label_4da330;
        case 0x4da334u: goto label_4da334;
        case 0x4da338u: goto label_4da338;
        case 0x4da33cu: goto label_4da33c;
        case 0x4da340u: goto label_4da340;
        case 0x4da344u: goto label_4da344;
        case 0x4da348u: goto label_4da348;
        case 0x4da34cu: goto label_4da34c;
        case 0x4da350u: goto label_4da350;
        case 0x4da354u: goto label_4da354;
        case 0x4da358u: goto label_4da358;
        case 0x4da35cu: goto label_4da35c;
        case 0x4da360u: goto label_4da360;
        case 0x4da364u: goto label_4da364;
        case 0x4da368u: goto label_4da368;
        case 0x4da36cu: goto label_4da36c;
        case 0x4da370u: goto label_4da370;
        case 0x4da374u: goto label_4da374;
        case 0x4da378u: goto label_4da378;
        case 0x4da37cu: goto label_4da37c;
        case 0x4da380u: goto label_4da380;
        case 0x4da384u: goto label_4da384;
        case 0x4da388u: goto label_4da388;
        case 0x4da38cu: goto label_4da38c;
        case 0x4da390u: goto label_4da390;
        case 0x4da394u: goto label_4da394;
        case 0x4da398u: goto label_4da398;
        case 0x4da39cu: goto label_4da39c;
        case 0x4da3a0u: goto label_4da3a0;
        case 0x4da3a4u: goto label_4da3a4;
        case 0x4da3a8u: goto label_4da3a8;
        case 0x4da3acu: goto label_4da3ac;
        case 0x4da3b0u: goto label_4da3b0;
        case 0x4da3b4u: goto label_4da3b4;
        case 0x4da3b8u: goto label_4da3b8;
        case 0x4da3bcu: goto label_4da3bc;
        case 0x4da3c0u: goto label_4da3c0;
        case 0x4da3c4u: goto label_4da3c4;
        case 0x4da3c8u: goto label_4da3c8;
        case 0x4da3ccu: goto label_4da3cc;
        case 0x4da3d0u: goto label_4da3d0;
        case 0x4da3d4u: goto label_4da3d4;
        case 0x4da3d8u: goto label_4da3d8;
        case 0x4da3dcu: goto label_4da3dc;
        case 0x4da3e0u: goto label_4da3e0;
        case 0x4da3e4u: goto label_4da3e4;
        case 0x4da3e8u: goto label_4da3e8;
        case 0x4da3ecu: goto label_4da3ec;
        case 0x4da3f0u: goto label_4da3f0;
        case 0x4da3f4u: goto label_4da3f4;
        case 0x4da3f8u: goto label_4da3f8;
        case 0x4da3fcu: goto label_4da3fc;
        case 0x4da400u: goto label_4da400;
        case 0x4da404u: goto label_4da404;
        case 0x4da408u: goto label_4da408;
        case 0x4da40cu: goto label_4da40c;
        case 0x4da410u: goto label_4da410;
        case 0x4da414u: goto label_4da414;
        case 0x4da418u: goto label_4da418;
        case 0x4da41cu: goto label_4da41c;
        case 0x4da420u: goto label_4da420;
        case 0x4da424u: goto label_4da424;
        case 0x4da428u: goto label_4da428;
        case 0x4da42cu: goto label_4da42c;
        case 0x4da430u: goto label_4da430;
        case 0x4da434u: goto label_4da434;
        case 0x4da438u: goto label_4da438;
        case 0x4da43cu: goto label_4da43c;
        case 0x4da440u: goto label_4da440;
        case 0x4da444u: goto label_4da444;
        case 0x4da448u: goto label_4da448;
        case 0x4da44cu: goto label_4da44c;
        case 0x4da450u: goto label_4da450;
        case 0x4da454u: goto label_4da454;
        case 0x4da458u: goto label_4da458;
        case 0x4da45cu: goto label_4da45c;
        case 0x4da460u: goto label_4da460;
        case 0x4da464u: goto label_4da464;
        case 0x4da468u: goto label_4da468;
        case 0x4da46cu: goto label_4da46c;
        case 0x4da470u: goto label_4da470;
        case 0x4da474u: goto label_4da474;
        case 0x4da478u: goto label_4da478;
        case 0x4da47cu: goto label_4da47c;
        case 0x4da480u: goto label_4da480;
        case 0x4da484u: goto label_4da484;
        case 0x4da488u: goto label_4da488;
        case 0x4da48cu: goto label_4da48c;
        case 0x4da490u: goto label_4da490;
        case 0x4da494u: goto label_4da494;
        case 0x4da498u: goto label_4da498;
        case 0x4da49cu: goto label_4da49c;
        case 0x4da4a0u: goto label_4da4a0;
        case 0x4da4a4u: goto label_4da4a4;
        case 0x4da4a8u: goto label_4da4a8;
        case 0x4da4acu: goto label_4da4ac;
        case 0x4da4b0u: goto label_4da4b0;
        case 0x4da4b4u: goto label_4da4b4;
        case 0x4da4b8u: goto label_4da4b8;
        case 0x4da4bcu: goto label_4da4bc;
        case 0x4da4c0u: goto label_4da4c0;
        case 0x4da4c4u: goto label_4da4c4;
        case 0x4da4c8u: goto label_4da4c8;
        case 0x4da4ccu: goto label_4da4cc;
        case 0x4da4d0u: goto label_4da4d0;
        case 0x4da4d4u: goto label_4da4d4;
        case 0x4da4d8u: goto label_4da4d8;
        case 0x4da4dcu: goto label_4da4dc;
        case 0x4da4e0u: goto label_4da4e0;
        case 0x4da4e4u: goto label_4da4e4;
        case 0x4da4e8u: goto label_4da4e8;
        case 0x4da4ecu: goto label_4da4ec;
        case 0x4da4f0u: goto label_4da4f0;
        case 0x4da4f4u: goto label_4da4f4;
        case 0x4da4f8u: goto label_4da4f8;
        case 0x4da4fcu: goto label_4da4fc;
        case 0x4da500u: goto label_4da500;
        case 0x4da504u: goto label_4da504;
        case 0x4da508u: goto label_4da508;
        case 0x4da50cu: goto label_4da50c;
        case 0x4da510u: goto label_4da510;
        case 0x4da514u: goto label_4da514;
        case 0x4da518u: goto label_4da518;
        case 0x4da51cu: goto label_4da51c;
        case 0x4da520u: goto label_4da520;
        case 0x4da524u: goto label_4da524;
        case 0x4da528u: goto label_4da528;
        case 0x4da52cu: goto label_4da52c;
        case 0x4da530u: goto label_4da530;
        case 0x4da534u: goto label_4da534;
        case 0x4da538u: goto label_4da538;
        case 0x4da53cu: goto label_4da53c;
        case 0x4da540u: goto label_4da540;
        case 0x4da544u: goto label_4da544;
        case 0x4da548u: goto label_4da548;
        case 0x4da54cu: goto label_4da54c;
        case 0x4da550u: goto label_4da550;
        case 0x4da554u: goto label_4da554;
        case 0x4da558u: goto label_4da558;
        case 0x4da55cu: goto label_4da55c;
        case 0x4da560u: goto label_4da560;
        case 0x4da564u: goto label_4da564;
        case 0x4da568u: goto label_4da568;
        case 0x4da56cu: goto label_4da56c;
        case 0x4da570u: goto label_4da570;
        case 0x4da574u: goto label_4da574;
        case 0x4da578u: goto label_4da578;
        case 0x4da57cu: goto label_4da57c;
        case 0x4da580u: goto label_4da580;
        case 0x4da584u: goto label_4da584;
        case 0x4da588u: goto label_4da588;
        case 0x4da58cu: goto label_4da58c;
        case 0x4da590u: goto label_4da590;
        case 0x4da594u: goto label_4da594;
        case 0x4da598u: goto label_4da598;
        case 0x4da59cu: goto label_4da59c;
        case 0x4da5a0u: goto label_4da5a0;
        case 0x4da5a4u: goto label_4da5a4;
        case 0x4da5a8u: goto label_4da5a8;
        case 0x4da5acu: goto label_4da5ac;
        case 0x4da5b0u: goto label_4da5b0;
        case 0x4da5b4u: goto label_4da5b4;
        case 0x4da5b8u: goto label_4da5b8;
        case 0x4da5bcu: goto label_4da5bc;
        case 0x4da5c0u: goto label_4da5c0;
        case 0x4da5c4u: goto label_4da5c4;
        case 0x4da5c8u: goto label_4da5c8;
        case 0x4da5ccu: goto label_4da5cc;
        case 0x4da5d0u: goto label_4da5d0;
        case 0x4da5d4u: goto label_4da5d4;
        case 0x4da5d8u: goto label_4da5d8;
        case 0x4da5dcu: goto label_4da5dc;
        case 0x4da5e0u: goto label_4da5e0;
        case 0x4da5e4u: goto label_4da5e4;
        case 0x4da5e8u: goto label_4da5e8;
        case 0x4da5ecu: goto label_4da5ec;
        case 0x4da5f0u: goto label_4da5f0;
        case 0x4da5f4u: goto label_4da5f4;
        case 0x4da5f8u: goto label_4da5f8;
        case 0x4da5fcu: goto label_4da5fc;
        case 0x4da600u: goto label_4da600;
        case 0x4da604u: goto label_4da604;
        case 0x4da608u: goto label_4da608;
        case 0x4da60cu: goto label_4da60c;
        case 0x4da610u: goto label_4da610;
        case 0x4da614u: goto label_4da614;
        case 0x4da618u: goto label_4da618;
        case 0x4da61cu: goto label_4da61c;
        case 0x4da620u: goto label_4da620;
        case 0x4da624u: goto label_4da624;
        case 0x4da628u: goto label_4da628;
        case 0x4da62cu: goto label_4da62c;
        case 0x4da630u: goto label_4da630;
        case 0x4da634u: goto label_4da634;
        case 0x4da638u: goto label_4da638;
        case 0x4da63cu: goto label_4da63c;
        case 0x4da640u: goto label_4da640;
        case 0x4da644u: goto label_4da644;
        case 0x4da648u: goto label_4da648;
        case 0x4da64cu: goto label_4da64c;
        case 0x4da650u: goto label_4da650;
        case 0x4da654u: goto label_4da654;
        case 0x4da658u: goto label_4da658;
        case 0x4da65cu: goto label_4da65c;
        case 0x4da660u: goto label_4da660;
        case 0x4da664u: goto label_4da664;
        case 0x4da668u: goto label_4da668;
        case 0x4da66cu: goto label_4da66c;
        case 0x4da670u: goto label_4da670;
        case 0x4da674u: goto label_4da674;
        case 0x4da678u: goto label_4da678;
        case 0x4da67cu: goto label_4da67c;
        case 0x4da680u: goto label_4da680;
        case 0x4da684u: goto label_4da684;
        case 0x4da688u: goto label_4da688;
        case 0x4da68cu: goto label_4da68c;
        case 0x4da690u: goto label_4da690;
        case 0x4da694u: goto label_4da694;
        case 0x4da698u: goto label_4da698;
        case 0x4da69cu: goto label_4da69c;
        case 0x4da6a0u: goto label_4da6a0;
        case 0x4da6a4u: goto label_4da6a4;
        case 0x4da6a8u: goto label_4da6a8;
        case 0x4da6acu: goto label_4da6ac;
        case 0x4da6b0u: goto label_4da6b0;
        case 0x4da6b4u: goto label_4da6b4;
        case 0x4da6b8u: goto label_4da6b8;
        case 0x4da6bcu: goto label_4da6bc;
        case 0x4da6c0u: goto label_4da6c0;
        case 0x4da6c4u: goto label_4da6c4;
        case 0x4da6c8u: goto label_4da6c8;
        case 0x4da6ccu: goto label_4da6cc;
        case 0x4da6d0u: goto label_4da6d0;
        case 0x4da6d4u: goto label_4da6d4;
        case 0x4da6d8u: goto label_4da6d8;
        case 0x4da6dcu: goto label_4da6dc;
        case 0x4da6e0u: goto label_4da6e0;
        case 0x4da6e4u: goto label_4da6e4;
        case 0x4da6e8u: goto label_4da6e8;
        case 0x4da6ecu: goto label_4da6ec;
        case 0x4da6f0u: goto label_4da6f0;
        case 0x4da6f4u: goto label_4da6f4;
        case 0x4da6f8u: goto label_4da6f8;
        case 0x4da6fcu: goto label_4da6fc;
        case 0x4da700u: goto label_4da700;
        case 0x4da704u: goto label_4da704;
        case 0x4da708u: goto label_4da708;
        case 0x4da70cu: goto label_4da70c;
        case 0x4da710u: goto label_4da710;
        case 0x4da714u: goto label_4da714;
        case 0x4da718u: goto label_4da718;
        case 0x4da71cu: goto label_4da71c;
        case 0x4da720u: goto label_4da720;
        case 0x4da724u: goto label_4da724;
        case 0x4da728u: goto label_4da728;
        case 0x4da72cu: goto label_4da72c;
        case 0x4da730u: goto label_4da730;
        case 0x4da734u: goto label_4da734;
        case 0x4da738u: goto label_4da738;
        case 0x4da73cu: goto label_4da73c;
        case 0x4da740u: goto label_4da740;
        case 0x4da744u: goto label_4da744;
        case 0x4da748u: goto label_4da748;
        case 0x4da74cu: goto label_4da74c;
        case 0x4da750u: goto label_4da750;
        case 0x4da754u: goto label_4da754;
        case 0x4da758u: goto label_4da758;
        case 0x4da75cu: goto label_4da75c;
        case 0x4da760u: goto label_4da760;
        case 0x4da764u: goto label_4da764;
        case 0x4da768u: goto label_4da768;
        case 0x4da76cu: goto label_4da76c;
        case 0x4da770u: goto label_4da770;
        case 0x4da774u: goto label_4da774;
        case 0x4da778u: goto label_4da778;
        case 0x4da77cu: goto label_4da77c;
        case 0x4da780u: goto label_4da780;
        case 0x4da784u: goto label_4da784;
        case 0x4da788u: goto label_4da788;
        case 0x4da78cu: goto label_4da78c;
        case 0x4da790u: goto label_4da790;
        case 0x4da794u: goto label_4da794;
        case 0x4da798u: goto label_4da798;
        case 0x4da79cu: goto label_4da79c;
        case 0x4da7a0u: goto label_4da7a0;
        case 0x4da7a4u: goto label_4da7a4;
        case 0x4da7a8u: goto label_4da7a8;
        case 0x4da7acu: goto label_4da7ac;
        case 0x4da7b0u: goto label_4da7b0;
        case 0x4da7b4u: goto label_4da7b4;
        default: break;
    }

    ctx->pc = 0x4d95f8u;

label_4d95f8:
    // 0x4d95f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d95f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d95fc:
    // 0x4d95fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d95fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d9600:
    // 0x4d9600: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d9600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d9604:
    // 0x4d9604: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d9604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d9608:
    // 0x4d9608: 0x8136dc6  j           func_4DB718
label_4d960c:
    if (ctx->pc == 0x4D960Cu) {
        ctx->pc = 0x4D960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9608u;
        // 0x4d960c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D9610u;
        goto label_4d9610;
    }
    ctx->pc = 0x4D9608u;
    ctx->pc = 0x4D960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9608u;
    // 0x4d960c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB718u, 0x4D9608u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4D9610u;
label_4d9610:
    // 0x4d9610: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d9610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d9614:
    // 0x4d9614: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d9614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d9618:
    // 0x4d9618: 0x3e00008  jr          $ra
label_4d961c:
    if (ctx->pc == 0x4D961Cu) {
        ctx->pc = 0x4D961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9618u;
        // 0x4d961c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D9620u;
        goto label_4d9620;
    }
    ctx->pc = 0x4D9618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9618u;
        // 0x4d961c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D9618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D9620u;
label_4d9620:
    // 0x4d9620: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d9620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4d9624:
    // 0x4d9624: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4d9624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_4d9628:
    // 0x4d9628: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4d9628u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d962c:
    // 0x4d962c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4d962cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_4d9630:
    // 0x4d9630: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4d9630u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
label_4d9634:
    // 0x4d9634: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4d9634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_4d9638:
    // 0x4d9638: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4d9638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_4d963c:
    // 0x4d963c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4d963cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_4d9640:
    // 0x4d9640: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4d9640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_4d9644:
    // 0x4d9644: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4d9644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_4d9648:
    // 0x4d9648: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4d9648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_4d964c:
    // 0x4d964c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4d964cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_4d9650:
    // 0x4d9650: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4d9650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_4d9654:
    // 0x4d9654: 0xc12b5dc  jal         func_4AD770
label_4d9658:
    if (ctx->pc == 0x4D9658u) {
        ctx->pc = 0x4D9658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9654u;
        // 0x4d9658: 0x269e0018  addiu       $fp, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D965Cu;
        goto label_4d965c;
    }
    ctx->pc = 0x4D9654u;
    SET_GPR_U32(ctx, 31, 0x4D965Cu);
    ctx->pc = 0x4D9658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9654u;
    // 0x4d9658: 0x269e0018  addiu       $fp, $s4, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4D9654u, 0x4D965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D965Cu;
label_4d965c:
    // 0x4d965c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x4d965cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d9660:
    // 0x4d9660: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x4d9660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_4d9664:
    // 0x4d9664: 0xa5620008  sh          $v0, 0x8($t3)
    ctx->pc = 0x4d9664u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 8), (uint16_t)GPR_U32(ctx, 2));
label_4d9668:
    // 0x4d9668: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x4d9668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_4d966c:
    // 0x4d966c: 0x240304cc  addiu       $v1, $zero, 0x4CC
    ctx->pc = 0x4d966cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1228));
label_4d9670:
    // 0x4d9670: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4d9670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d9674:
    // 0x4d9674: 0xa563000c  sh          $v1, 0xC($t3)
    ctx->pc = 0x4d9674u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 12), (uint16_t)GPR_U32(ctx, 3));
label_4d9678:
    // 0x4d9678: 0x26830014  addiu       $v1, $s4, 0x14
    ctx->pc = 0x4d9678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_4d967c:
    // 0x4d967c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4d967cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4d9680:
    // 0x4d9680: 0x25660010  addiu       $a2, $t3, 0x10
    ctx->pc = 0x4d9680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_4d9684:
    // 0x4d9684: 0xa564016a  sh          $a0, 0x16A($t3)
    ctx->pc = 0x4d9684u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 362), (uint16_t)GPR_U32(ctx, 4));
label_4d9688:
    // 0x4d9688: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4d9688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4d968c:
    // 0x4d968c: 0xad740140  sw          $s4, 0x140($t3)
    ctx->pc = 0x4d968cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 20));
label_4d9690:
    // 0x4d9690: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4d9690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4d9694:
    // 0x4d9694: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4d9694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_4d9698:
    // 0x4d9698: 0x248c10fc  addiu       $t4, $a0, 0x10FC
    ctx->pc = 0x4d9698u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 4348));
label_4d969c:
    // 0x4d969c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4d969cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4d96a0:
    // 0x4d96a0: 0x25670014  addiu       $a3, $t3, 0x14
    ctx->pc = 0x4d96a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
label_4d96a4:
    // 0x4d96a4: 0x25680018  addiu       $t0, $t3, 0x18
    ctx->pc = 0x4d96a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 24));
label_4d96a8:
    // 0x4d96a8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4d96a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_4d96ac:
    // 0x4d96ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4d96acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4d96b0:
    // 0x4d96b0: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x4d96b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_4d96b4:
    // 0x4d96b4: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4d96b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4d96b8:
    // 0x4d96b8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4d96b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_4d96bc:
    // 0x4d96bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d96bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4d96c0:
    // 0x4d96c0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4d96c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4d96c4:
    // 0x4d96c4: 0x26a61114  addiu       $a2, $s5, 0x1114
    ctx->pc = 0x4d96c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4372));
label_4d96c8:
    // 0x4d96c8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4d96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4d96cc:
    // 0x4d96cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4d96ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4d96d0:
    // 0x4d96d0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4d96d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4d96d4:
    // 0x4d96d4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4d96d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_4d96d8:
    // 0x4d96d8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d96d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4d96dc:
    // 0x4d96dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d96dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d96e0:
    // 0x4d96e0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4d96e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4d96e4:
    // 0x4d96e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d96e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d96e8:
    // 0x4d96e8: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4d96e8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_4d96ec:
    // 0x4d96ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d96ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d96f0:
    // 0x4d96f0: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4d96f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_4d96f4:
    // 0x4d96f4: 0x24420c4c  addiu       $v0, $v0, 0xC4C
    ctx->pc = 0x4d96f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3148));
label_4d96f8:
    // 0x4d96f8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4d96f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4d96fc:
    // 0x4d96fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d96fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d9700:
    // 0x4d9700: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4d9700u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_4d9704:
    // 0x4d9704: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4d9704u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_4d9708:
    // 0x4d9708: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4d9708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4d970c:
    // 0x4d970c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d970cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d9710:
    // 0x4d9710: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d9710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d9714:
    // 0x4d9714: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4d9714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_4d9718:
    // 0x4d9718: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d9718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d971c:
    // 0x4d971c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4d971cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4d9720:
    // 0x4d9720: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4d9720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4d9724:
    // 0x4d9724: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4d9724u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4d9728:
    // 0x4d9728: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4d9728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_4d972c:
    // 0x4d972c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d972cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4d9730:
    // 0x4d9730: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4d9730u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_4d9734:
    // 0x4d9734: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4d9734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4d9738:
    // 0x4d9738: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d9738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d973c:
    // 0x4d973c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4d973cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_4d9740:
    // 0x4d9740: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4d9740u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4d9744:
    // 0x4d9744: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4d9744u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4d9748:
    // 0x4d9748: 0x4600044  bltz        $v1, . + 4 + (0x44 << 2)
label_4d974c:
    if (ctx->pc == 0x4D974Cu) {
        ctx->pc = 0x4D974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9748u;
        // 0x4d974c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D9750u;
        goto label_4d9750;
    }
    ctx->pc = 0x4D9748u;
    {
        const bool branch_taken_0x4d9748 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4D974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9748u;
        // 0x4d974c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9748) {
            ctx->pc = 0x4D985Cu;
            goto label_4d985c;
        }
    }
    ctx->pc = 0x4D9750u;
label_4d9750:
    // 0x4d9750: 0x180982d  daddu       $s3, $t4, $zero
    ctx->pc = 0x4d9750u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_4d9754:
    // 0x4d9754: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4d9754u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_4d9758:
    // 0x4d9758: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d9758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4d975c:
    // 0x4d975c: 0x0  nop
    ctx->pc = 0x4d975cu;
    // NOP
label_4d9760:
    // 0x4d9760: 0xc12b5dc  jal         func_4AD770
label_4d9764:
    if (ctx->pc == 0x4D9764u) {
        ctx->pc = 0x4D9764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9760u;
        // 0x4d9764: 0x86500000  lh          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D9768u;
        goto label_4d9768;
    }
    ctx->pc = 0x4D9760u;
    SET_GPR_U32(ctx, 31, 0x4D9768u);
    ctx->pc = 0x4D9764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9760u;
    // 0x4d9764: 0x86500000  lh          $s0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4D9760u, 0x4D9768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9768u;
label_4d9768:
    // 0x4d9768: 0x2404006a  addiu       $a0, $zero, 0x6A
    ctx->pc = 0x4d9768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_4d976c:
    // 0x4d976c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x4d976cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d9770:
    // 0x4d9770: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4d9770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d9774:
    // 0x4d9774: 0x2111825  or          $v1, $s0, $s1
    ctx->pc = 0x4d9774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
label_4d9778:
    // 0x4d9778: 0x240504cd  addiu       $a1, $zero, 0x4CD
    ctx->pc = 0x4d9778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1229));
label_4d977c:
    // 0x4d977c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d977cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d9780:
    // 0x4d9780: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d9780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d9784:
    // 0x4d9784: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d9784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4d9788:
    // 0x4d9788: 0x25670010  addiu       $a3, $t3, 0x10
    ctx->pc = 0x4d9788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_4d978c:
    // 0x4d978c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4d978cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4d9790:
    // 0x4d9790: 0x25680014  addiu       $t0, $t3, 0x14
    ctx->pc = 0x4d9790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
label_4d9794:
    // 0x4d9794: 0xa5640008  sh          $a0, 0x8($t3)
    ctx->pc = 0x4d9794u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 8), (uint16_t)GPR_U32(ctx, 4));
label_4d9798:
    // 0x4d9798: 0x25690018  addiu       $t1, $t3, 0x18
    ctx->pc = 0x4d9798u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 24));
label_4d979c:
    // 0x4d979c: 0xa565000c  sh          $a1, 0xC($t3)
    ctx->pc = 0x4d979cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 12), (uint16_t)GPR_U32(ctx, 5));
label_4d97a0:
    // 0x4d97a0: 0xa566016a  sh          $a2, 0x16A($t3)
    ctx->pc = 0x4d97a0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 362), (uint16_t)GPR_U32(ctx, 6));
label_4d97a4:
    // 0x4d97a4: 0xad740140  sw          $s4, 0x140($t3)
    ctx->pc = 0x4d97a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 20));
label_4d97a8:
    // 0x4d97a8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4d97a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d97ac:
    // 0x4d97ac: 0xa56201be  sh          $v0, 0x1BE($t3)
    ctx->pc = 0x4d97acu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 446), (uint16_t)GPR_U32(ctx, 2));
label_4d97b0:
    // 0x4d97b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4d97b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4d97b4:
    // 0x4d97b4: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x4d97b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4d97b8:
    // 0x4d97b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4d97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d97bc:
    // 0x4d97bc: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4d97bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_4d97c0:
    // 0x4d97c0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4d97c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4d97c4:
    // 0x4d97c4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4d97c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_4d97c8:
    // 0x4d97c8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4d97c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4d97cc:
    // 0x4d97cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4d97ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4d97d0:
    // 0x4d97d0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d97d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d97d4:
    // 0x4d97d4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d97d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_4d97d8:
    // 0x4d97d8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d97d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4d97dc:
    // 0x4d97dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d97dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d97e0:
    // 0x4d97e0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d97e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d97e4:
    // 0x4d97e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d97e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d97e8:
    // 0x4d97e8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d97e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4d97ec:
    // 0x4d97ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d97ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d97f0:
    // 0x4d97f0: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4d97f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4d97f4:
    // 0x4d97f4: 0x24420c4c  addiu       $v0, $v0, 0xC4C
    ctx->pc = 0x4d97f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3148));
label_4d97f8:
    // 0x4d97f8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d97f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d97fc:
    // 0x4d97fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d97fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d9800:
    // 0x4d9800: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d9800u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4d9804:
    // 0x4d9804: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4d9804u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4d9808:
    // 0x4d9808: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4d9808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4d980c:
    // 0x4d980c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d980cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d9810:
    // 0x4d9810: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d9810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d9814:
    // 0x4d9814: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d9814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_4d9818:
    // 0x4d9818: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d9818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d981c:
    // 0x4d981c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4d981cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_4d9820:
    // 0x4d9820: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4d9820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4d9824:
    // 0x4d9824: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4d9824u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4d9828:
    // 0x4d9828: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d9828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_4d982c:
    // 0x4d982c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d982cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4d9830:
    // 0x4d9830: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4d9830u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_4d9834:
    // 0x4d9834: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4d9834u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d9838:
    // 0x4d9838: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d9838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d983c:
    // 0x4d983c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4d983cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4d9840:
    // 0x4d9840: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d9840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d9844:
    // 0x4d9844: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d9844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d9848:
    // 0x4d9848: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d9848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d984c:
    // 0x4d984c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d984cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4d9850:
    // 0x4d9850: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4d9850u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d9854:
    // 0x4d9854: 0x441ffc2  bgez        $v0, . + 4 + (-0x3E << 2)
label_4d9858:
    if (ctx->pc == 0x4D9858u) {
        ctx->pc = 0x4D9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9854u;
        // 0x4d9858: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D985Cu;
        goto label_4d985c;
    }
    ctx->pc = 0x4D9854u;
    {
        const bool branch_taken_0x4d9854 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4D9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9854u;
        // 0x4d9858: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9854) {
            ctx->pc = 0x4D9760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d9760;
        }
    }
    ctx->pc = 0x4D985Cu;
label_4d985c:
    // 0x4d985c: 0x26a81114  addiu       $t0, $s5, 0x1114
    ctx->pc = 0x4d985cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4372));
label_4d9860:
    // 0x4d9860: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4d9860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4d9864:
    // 0x4d9864: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4d9864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4d9868:
    // 0x4d9868: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x4d9868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
label_4d986c:
    // 0x4d986c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d986cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d9870:
    // 0x4d9870: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d9870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d9874:
    // 0x4d9874: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4d9874u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_4d9878:
    // 0x4d9878: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4d9878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4d987c:
    // 0x4d987c: 0x440007a  bltz        $v0, . + 4 + (0x7A << 2)
label_4d9880:
    if (ctx->pc == 0x4D9880u) {
        ctx->pc = 0x4D9880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D987Cu;
        // 0x4d9880: 0x3c03007f  lui         $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D9884u;
        goto label_4d9884;
    }
    ctx->pc = 0x4D987Cu;
    {
        const bool branch_taken_0x4d987c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4D9880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D987Cu;
        // 0x4d9880: 0x3c03007f  lui         $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d987c) {
            ctx->pc = 0x4D9A68u;
            goto label_4d9a68;
        }
    }
    ctx->pc = 0x4D9884u;
label_4d9884:
    // 0x4d9884: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4d9884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4d9888:
    // 0x4d9888: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d9888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4d988c:
    // 0x4d988c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d988cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4d9890:
    // 0x4d9890: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x4d9890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4d9894:
    // 0x4d9894: 0x247610fc  addiu       $s6, $v1, 0x10FC
    ctx->pc = 0x4d9894u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4348));
label_4d9898:
    // 0x4d9898: 0x24951108  addiu       $s5, $a0, 0x1108
    ctx->pc = 0x4d9898u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4360));
label_4d989c:
    // 0x4d989c: 0x24b31110  addiu       $s3, $a1, 0x1110
    ctx->pc = 0x4d989cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4368));
label_4d98a0:
    // 0x4d98a0: 0x24d7110c  addiu       $s7, $a2, 0x110C
    ctx->pc = 0x4d98a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), 4364));
label_4d98a4:
    // 0x4d98a4: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4d98a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_4d98a8:
    // 0x4d98a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d98a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4d98ac:
    // 0x4d98ac: 0x0  nop
    ctx->pc = 0x4d98acu;
    // NOP
label_4d98b0:
    // 0x4d98b0: 0xc12b5dc  jal         func_4AD770
label_4d98b4:
    if (ctx->pc == 0x4D98B4u) {
        ctx->pc = 0x4D98B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D98B0u;
        // 0x4d98b4: 0x86500000  lh          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D98B8u;
        goto label_4d98b8;
    }
    ctx->pc = 0x4D98B0u;
    SET_GPR_U32(ctx, 31, 0x4D98B8u);
    ctx->pc = 0x4D98B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D98B0u;
    // 0x4d98b4: 0x86500000  lh          $s0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4D98B0u, 0x4D98B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D98B8u;
label_4d98b8:
    // 0x4d98b8: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x4d98b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_4d98bc:
    // 0x4d98bc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x4d98bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d98c0:
    // 0x4d98c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4d98c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d98c4:
    // 0x4d98c4: 0x2111825  or          $v1, $s0, $s1
    ctx->pc = 0x4d98c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
label_4d98c8:
    // 0x4d98c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d98c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d98cc:
    // 0x4d98cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d98ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d98d0:
    // 0x4d98d0: 0x25680010  addiu       $t0, $t3, 0x10
    ctx->pc = 0x4d98d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_4d98d4:
    // 0x4d98d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d98d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4d98d8:
    // 0x4d98d8: 0x25690014  addiu       $t1, $t3, 0x14
    ctx->pc = 0x4d98d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
label_4d98dc:
    // 0x4d98dc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4d98dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4d98e0:
    // 0x4d98e0: 0x256a0018  addiu       $t2, $t3, 0x18
    ctx->pc = 0x4d98e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 24));
label_4d98e4:
    // 0x4d98e4: 0xa5640008  sh          $a0, 0x8($t3)
    ctx->pc = 0x4d98e4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 8), (uint16_t)GPR_U32(ctx, 4));
label_4d98e8:
    // 0x4d98e8: 0xa565016a  sh          $a1, 0x16A($t3)
    ctx->pc = 0x4d98e8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 362), (uint16_t)GPR_U32(ctx, 5));
label_4d98ec:
    // 0x4d98ec: 0xad740140  sw          $s4, 0x140($t3)
    ctx->pc = 0x4d98ecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 320), GPR_U32(ctx, 20));
label_4d98f0:
    // 0x4d98f0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4d98f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_4d98f4:
    // 0x4d98f4: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4d98f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d98f8:
    // 0x4d98f8: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4d98f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_4d98fc:
    // 0x4d98fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d98fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4d9900:
    // 0x4d9900: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4d9900u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_4d9904:
    // 0x4d9904: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d9904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d9908:
    // 0x4d9908: 0x86c40000  lh          $a0, 0x0($s6)
    ctx->pc = 0x4d9908u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4d990c:
    // 0x4d990c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x4d990cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4d9910:
    // 0x4d9910: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4d9910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4d9914:
    // 0x4d9914: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d9914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d9918:
    // 0x4d9918: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d9918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d991c:
    // 0x4d991c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d991cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d9920:
    // 0x4d9920: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4d9920u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_4d9924:
    // 0x4d9924: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4d9924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_4d9928:
    // 0x4d9928: 0x24637b60  addiu       $v1, $v1, 0x7B60
    ctx->pc = 0x4d9928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31584));
label_4d992c:
    // 0x4d992c: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4d992cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4d9930:
    // 0x4d9930: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d9930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d9934:
    // 0x4d9934: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d9934u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4d9938:
    // 0x4d9938: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d9938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d993c:
    // 0x4d993c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d993cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d9940:
    // 0x4d9940: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4d9940u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4d9944:
    // 0x4d9944: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d9944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4d9948:
    // 0x4d9948: 0xa563000c  sh          $v1, 0xC($t3)
    ctx->pc = 0x4d9948u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 12), (uint16_t)GPR_U32(ctx, 3));
label_4d994c:
    // 0x4d994c: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x4d994cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_4d9950:
    // 0x4d9950: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4d9950u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4d9954:
    // 0x4d9954: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4d9954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4d9958:
    // 0x4d9958: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4d9958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
label_4d995c:
    // 0x4d995c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4d995cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d9960:
    // 0x4d9960: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d9960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_4d9964:
    // 0x4d9964: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d9964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4d9968:
    // 0x4d9968: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x4d9968u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4d996c:
    // 0x4d996c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d996cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4d9970:
    // 0x4d9970: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4d9970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4d9974:
    // 0x4d9974: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x4d9974u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_4d9978:
    // 0x4d9978: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d9978u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4d997c:
    // 0x4d997c: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4d997cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
label_4d9980:
    // 0x4d9980: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d9980u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4d9984:
    // 0x4d9984: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4d9984u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
label_4d9988:
    // 0x4d9988: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d9988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4d998c:
    // 0x4d998c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4d998cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4d9990:
    // 0x4d9990: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x4d9990u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4d9994:
    // 0x4d9994: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4d9994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4d9998:
    // 0x4d9998: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4d9998u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_4d999c:
    // 0x4d999c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d999cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_4d99a0:
    // 0x4d99a0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d99a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4d99a4:
    // 0x4d99a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d99a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4d99a8:
    // 0x4d99a8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d99a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_4d99ac:
    // 0x4d99ac: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4d99acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4d99b0:
    // 0x4d99b0: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4d99b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
label_4d99b4:
    // 0x4d99b4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4d99b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4d99b8:
    // 0x4d99b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4d99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4d99bc:
    // 0x4d99bc: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x4d99bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_4d99c0:
    // 0x4d99c0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d99c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_4d99c4:
    // 0x4d99c4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d99c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4d99c8:
    // 0x4d99c8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d99c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4d99cc:
    // 0x4d99cc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d99ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d99d0:
    // 0x4d99d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d99d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d99d4:
    // 0x4d99d4: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d99d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4d99d8:
    // 0x4d99d8: 0xaee70000  sw          $a3, 0x0($s7)
    ctx->pc = 0x4d99d8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 7));
label_4d99dc:
    // 0x4d99dc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4d99dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4d99e0:
    // 0x4d99e0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d99e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_4d99e4:
    // 0x4d99e4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d99e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4d99e8:
    // 0x4d99e8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d99e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4d99ec:
    // 0x4d99ec: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4d99ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
label_4d99f0:
    // 0x4d99f0: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x4d99f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_4d99f4:
    // 0x4d99f4: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4d99f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
label_4d99f8:
    // 0x4d99f8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4d99f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4d99fc:
    // 0x4d99fc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d99fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d9a00:
    // 0x4d9a00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d9a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4d9a04:
    // 0x4d9a04: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4d9a04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_4d9a08:
    // 0x4d9a08: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x4d9a08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_4d9a0c:
    // 0x4d9a0c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4d9a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4d9a10:
    // 0x4d9a10: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d9a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4d9a14:
    // 0x4d9a14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d9a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d9a18:
    // 0x4d9a18: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d9a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d9a1c:
    // 0x4d9a1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d9a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4d9a20:
    // 0x4d9a20: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4d9a20u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_4d9a24:
    // 0x4d9a24: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4d9a24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4d9a28:
    // 0x4d9a28: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4d9a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4d9a2c:
    // 0x4d9a2c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d9a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4d9a30:
    // 0x4d9a30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d9a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d9a34:
    // 0x4d9a34: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d9a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d9a38:
    // 0x4d9a38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d9a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4d9a3c:
    // 0x4d9a3c: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4d9a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_4d9a40:
    // 0x4d9a40: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4d9a40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d9a44:
    // 0x4d9a44: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4d9a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d9a48:
    // 0x4d9a48: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4d9a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4d9a4c:
    // 0x4d9a4c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d9a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4d9a50:
    // 0x4d9a50: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d9a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_4d9a54:
    // 0x4d9a54: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4d9a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4d9a58:
    // 0x4d9a58: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4d9a58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_4d9a5c:
    // 0x4d9a5c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4d9a5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d9a60:
    // 0x4d9a60: 0x441ff93  bgez        $v0, . + 4 + (-0x6D << 2)
label_4d9a64:
    if (ctx->pc == 0x4D9A64u) {
        ctx->pc = 0x4D9A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9A60u;
        // 0x4d9a64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D9A68u;
        goto label_4d9a68;
    }
    ctx->pc = 0x4D9A60u;
    {
        const bool branch_taken_0x4d9a60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4D9A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9A60u;
        // 0x4d9a64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9a60) {
            ctx->pc = 0x4D98B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d98b0;
        }
    }
    ctx->pc = 0x4D9A68u;
label_4d9a68:
    // 0x4d9a68: 0x268301bc  addiu       $v1, $s4, 0x1BC
    ctx->pc = 0x4d9a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 444));
label_4d9a6c:
    // 0x4d9a6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d9a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4d9a70:
    // 0x4d9a70: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d9a70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d9a74:
    // 0x4d9a74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4d9a74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d9a78:
    // 0x4d9a78: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4d9a78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d9a7c:
    // 0x4d9a7c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d9a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4d9a80:
    // 0x4d9a80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4d9a80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d9a84:
    // 0x4d9a84: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4d9a84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d9a88:
    // 0x4d9a88: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4d9a88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d9a8c:
    // 0x4d9a8c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4d9a8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4d9a90:
    // 0x4d9a90: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4d9a90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d9a94:
    // 0x4d9a94: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4d9a94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4d9a98:
    // 0x4d9a98: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4d9a98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4d9a9c:
    // 0x4d9a9c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4d9a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_4d9aa0:
    // 0x4d9aa0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d9aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d9aa4:
    // 0x4d9aa4: 0x81366ac  j           func_4D9AB0
label_4d9aa8:
    if (ctx->pc == 0x4D9AA8u) {
        ctx->pc = 0x4D9AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9AA4u;
        // 0x4d9aa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D9AACu;
        goto label_4d9aac;
    }
    ctx->pc = 0x4D9AA4u;
    ctx->pc = 0x4D9AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9AA4u;
    // 0x4d9aa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D9AB0u;
    goto label_4d9ab0;
    ctx->pc = 0x4D9AACu;
label_4d9aac:
    // 0x4d9aac: 0x0  nop
    ctx->pc = 0x4d9aacu;
    // NOP
label_4d9ab0:
    // 0x4d9ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d9ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4d9ab4:
    // 0x4d9ab4: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4d9ab4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
label_4d9ab8:
    // 0x4d9ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d9ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4d9abc:
    // 0x4d9abc: 0x25291100  addiu       $t1, $t1, 0x1100
    ctx->pc = 0x4d9abcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4352));
label_4d9ac0:
    // 0x4d9ac0: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4d9ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
label_4d9ac4:
    // 0x4d9ac4: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4d9ac4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_4d9ac8:
    // 0x4d9ac8: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4d9ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4d9acc:
    // 0x4d9acc: 0x24e71104  addiu       $a3, $a3, 0x1104
    ctx->pc = 0x4d9accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4356));
label_4d9ad0:
    // 0x4d9ad0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4d9ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4d9ad4:
    // 0x4d9ad4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4d9ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4d9ad8:
    // 0x4d9ad8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d9ad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4d9adc:
    // 0x4d9adc: 0x34a52800  ori         $a1, $a1, 0x2800
    ctx->pc = 0x4d9adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10240);
label_4d9ae0:
    // 0x4d9ae0: 0x30c22800  andi        $v0, $a2, 0x2800
    ctx->pc = 0x4d9ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)10240);
label_4d9ae4:
    // 0x4d9ae4: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x4d9ae4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_4d9ae8:
    // 0x4d9ae8: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4d9ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
label_4d9aec:
    // 0x4d9aec: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4d9aecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
label_4d9af0:
    // 0x4d9af0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d9af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4d9af4:
    // 0x4d9af4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d9af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4d9af8:
    // 0x4d9af8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4d9af8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4d9afc:
    // 0x4d9afc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d9afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d9b00:
    // 0x4d9b00: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4d9b00u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
label_4d9b04:
    // 0x4d9b04: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x4d9b04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d9b08:
    // 0x4d9b08: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4d9b08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4d9b0c:
    // 0x4d9b0c: 0x8d0c111c  lw          $t4, 0x111C($t0)
    ctx->pc = 0x4d9b0cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4380)));
label_4d9b10:
    // 0x4d9b10: 0x24a810fc  addiu       $t0, $a1, 0x10FC
    ctx->pc = 0x4d9b10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4348));
label_4d9b14:
    // 0x4d9b14: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d9b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d9b18:
    // 0x4d9b18: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4d9b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4d9b1c:
    // 0x4d9b1c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4d9b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_4d9b20:
    // 0x4d9b20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d9b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d9b24:
    // 0x4d9b24: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d9b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4d9b28:
    // 0x4d9b28: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4d9b28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4d9b2c:
    // 0x4d9b2c: 0x8d820008  lw          $v0, 0x8($t4)
    ctx->pc = 0x4d9b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
label_4d9b30:
    // 0x4d9b30: 0x94e60000  lhu         $a2, 0x0($a3)
    ctx->pc = 0x4d9b30u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4d9b34:
    // 0x4d9b34: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4d9b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_4d9b38:
    // 0x4d9b38: 0x85290000  lh          $t1, 0x0($t1)
    ctx->pc = 0x4d9b38u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4d9b3c:
    // 0x4d9b3c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d9b3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4d9b40:
    // 0x4d9b40: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x4d9b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_4d9b44:
    // 0x4d9b44: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4d9b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_4d9b48:
    // 0x4d9b48: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x4d9b48u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
label_4d9b4c:
    // 0x4d9b4c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4d9b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4d9b50:
    // 0x4d9b50: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4d9b50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_4d9b54:
    // 0x4d9b54: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d9b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4d9b58:
    // 0x4d9b58: 0x8d620018  lw          $v0, 0x18($t3)
    ctx->pc = 0x4d9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
label_4d9b5c:
    // 0x4d9b5c: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4d9b5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4d9b60:
    // 0x4d9b60: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4d9b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_4d9b64:
    // 0x4d9b64: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d9b64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4d9b68:
    // 0x4d9b68: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4d9b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4d9b6c:
    // 0x4d9b6c: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4d9b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_4d9b70:
    // 0x4d9b70: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4d9b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_4d9b74:
    // 0x4d9b74: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4d9b74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_4d9b78:
    // 0x4d9b78: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d9b78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4d9b7c:
    // 0x4d9b7c: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4d9b7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4d9b80:
    // 0x4d9b80: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4d9b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_4d9b84:
    // 0x4d9b84: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4d9b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_4d9b88:
    // 0x4d9b88: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4d9b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4d9b8c:
    // 0x4d9b8c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4d9b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_4d9b90:
    // 0x4d9b90: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4d9b90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4d9b94:
    // 0x4d9b94: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x4d9b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_4d9b98:
    // 0x4d9b98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4d9b9c:
    if (ctx->pc == 0x4D9B9Cu) {
        ctx->pc = 0x4D9B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9B98u;
        // 0x4d9b9c: 0x34a3ffff  ori         $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D9BA0u;
        goto label_4d9ba0;
    }
    ctx->pc = 0x4D9B98u;
    {
        const bool branch_taken_0x4d9b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9B98u;
        // 0x4d9b9c: 0x34a3ffff  ori         $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9b98) {
            ctx->pc = 0x4D9BB0u;
            goto label_4d9bb0;
        }
    }
    ctx->pc = 0x4D9BA0u;
label_4d9ba0:
    // 0x4d9ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d9ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d9ba4:
    // 0x4d9ba4: 0x8136dcc  j           func_4DB730
label_4d9ba8:
    if (ctx->pc == 0x4D9BA8u) {
        ctx->pc = 0x4D9BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9BA4u;
        // 0x4d9ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D9BACu;
        goto label_4d9bac;
    }
    ctx->pc = 0x4D9BA4u;
    ctx->pc = 0x4D9BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9BA4u;
    // 0x4d9ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB730u;
    sub_004DB730_0x4db730(rdram, ctx, runtime); return;
    ctx->pc = 0x4D9BACu;
label_4d9bac:
    // 0x4d9bac: 0x0  nop
    ctx->pc = 0x4d9bacu;
    // NOP
label_4d9bb0:
    // 0x4d9bb0: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4d9bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4d9bb4:
    // 0x4d9bb4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4d9bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_4d9bb8:
    // 0x4d9bb8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d9bb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4d9bbc:
    // 0x4d9bbc: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4d9bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_4d9bc0:
    // 0x4d9bc0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4d9bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d9bc4:
    // 0x4d9bc4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4d9bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_4d9bc8:
    // 0x4d9bc8: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x4d9bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d9bcc:
    // 0x4d9bcc: 0x8d630010  lw          $v1, 0x10($t3)
    ctx->pc = 0x4d9bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
label_4d9bd0:
    // 0x4d9bd0: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4d9bd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4d9bd4:
    // 0x4d9bd4: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4d9bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
label_4d9bd8:
    // 0x4d9bd8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4d9bd8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_4d9bdc:
    // 0x4d9bdc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4d9bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d9be0:
    // 0x4d9be0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4d9be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_4d9be4:
    // 0x4d9be4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4d9be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4d9be8:
    // 0x4d9be8: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4d9be8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_4d9bec:
    // 0x4d9bec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d9becu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4d9bf0:
    // 0x4d9bf0: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4d9bf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4d9bf4:
    // 0x4d9bf4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4d9bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_4d9bf8:
    // 0x4d9bf8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4d9bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_4d9bfc:
    // 0x4d9bfc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4d9bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4d9c00:
    // 0x4d9c00: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4d9c00u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_4d9c04:
    // 0x4d9c04: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4d9c04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4d9c08:
    // 0x4d9c08: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x4d9c08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_4d9c0c:
    // 0x4d9c0c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4d9c10:
    if (ctx->pc == 0x4D9C10u) {
        ctx->pc = 0x4D9C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9C0Cu;
        // 0x4d9c10: 0x256301bc  addiu       $v1, $t3, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 444));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D9C14u;
        goto label_4d9c14;
    }
    ctx->pc = 0x4D9C0Cu;
    {
        const bool branch_taken_0x4d9c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d9c0c) {
            ctx->pc = 0x4D9C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9C0Cu;
            // 0x4d9c10: 0x256301bc  addiu       $v1, $t3, 0x1BC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 444));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9C20u;
            goto label_4d9c20;
        }
    }
    ctx->pc = 0x4D9C14u;
label_4d9c14:
    // 0x4d9c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d9c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d9c18:
    // 0x4d9c18: 0x8136dcc  j           func_4DB730
label_4d9c1c:
    if (ctx->pc == 0x4D9C1Cu) {
        ctx->pc = 0x4D9C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9C18u;
        // 0x4d9c1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D9C20u;
        goto label_4d9c20;
    }
    ctx->pc = 0x4D9C18u;
    ctx->pc = 0x4D9C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9C18u;
    // 0x4d9c1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB730u;
    sub_004DB730_0x4db730(rdram, ctx, runtime); return;
    ctx->pc = 0x4D9C20u;
label_4d9c20:
    // 0x4d9c20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d9c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d9c24:
    // 0x4d9c24: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d9c24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d9c28:
    // 0x4d9c28: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4d9c2c:
    // 0x4d9c2c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d9c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d9c30:
    // 0x4d9c30: 0x8136dcc  j           func_4DB730
label_4d9c34:
    if (ctx->pc == 0x4D9C34u) {
        ctx->pc = 0x4D9C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9C30u;
        // 0x4d9c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D9C38u;
        goto label_4d9c38;
    }
    ctx->pc = 0x4D9C30u;
    ctx->pc = 0x4D9C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9C30u;
    // 0x4d9c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB730u;
    sub_004DB730_0x4db730(rdram, ctx, runtime); return;
    ctx->pc = 0x4D9C38u;
label_4d9c38:
    // 0x4d9c38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d9c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4d9c3c:
    // 0x4d9c3c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d9c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4d9c40:
    // 0x4d9c40: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4d9c40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d9c44:
    // 0x4d9c44: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d9c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4d9c48:
    // 0x4d9c48: 0x26950018  addiu       $s5, $s4, 0x18
    ctx->pc = 0x4d9c48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_4d9c4c:
    // 0x4d9c4c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d9c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4d9c50:
    // 0x4d9c50: 0x26960014  addiu       $s6, $s4, 0x14
    ctx->pc = 0x4d9c50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_4d9c54:
    // 0x4d9c54: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4d9c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_4d9c58:
    // 0x4d9c58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d9c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d9c5c:
    // 0x4d9c5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d9c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d9c60:
    // 0x4d9c60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d9c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4d9c64:
    // 0x4d9c64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d9c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4d9c68:
    // 0x4d9c68: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4d9c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_4d9c6c:
    // 0x4d9c6c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4d9c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_4d9c70:
    // 0x4d9c70: 0xc12b5dc  jal         func_4AD770
label_4d9c74:
    if (ctx->pc == 0x4D9C74u) {
        ctx->pc = 0x4D9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9C70u;
        // 0x4d9c74: 0x26970010  addiu       $s7, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D9C78u;
        goto label_4d9c78;
    }
    ctx->pc = 0x4D9C70u;
    SET_GPR_U32(ctx, 31, 0x4D9C78u);
    ctx->pc = 0x4D9C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9C70u;
    // 0x4d9c74: 0x26970010  addiu       $s7, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4D9C70u, 0x4D9C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9C78u;
label_4d9c78:
    // 0x4d9c78: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4d9c78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d9c7c:
    // 0x4d9c7c: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x4d9c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_4d9c80:
    // 0x4d9c80: 0x24030440  addiu       $v1, $zero, 0x440
    ctx->pc = 0x4d9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
label_4d9c84:
    // 0x4d9c84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4d9c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d9c88:
    // 0x4d9c88: 0xa524016a  sh          $a0, 0x16A($t1)
    ctx->pc = 0x4d9c88u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 362), (uint16_t)GPR_U32(ctx, 4));
label_4d9c8c:
    // 0x4d9c8c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4d9c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4d9c90:
    // 0x4d9c90: 0xa5220008  sh          $v0, 0x8($t1)
    ctx->pc = 0x4d9c90u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 8), (uint16_t)GPR_U32(ctx, 2));
label_4d9c94:
    // 0x4d9c94: 0x25260010  addiu       $a2, $t1, 0x10
    ctx->pc = 0x4d9c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_4d9c98:
    // 0x4d9c98: 0xa523000c  sh          $v1, 0xC($t1)
    ctx->pc = 0x4d9c98u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 12), (uint16_t)GPR_U32(ctx, 3));
label_4d9c9c:
    // 0x4d9c9c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4d9c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4d9ca0:
    // 0x4d9ca0: 0xad340140  sw          $s4, 0x140($t1)
    ctx->pc = 0x4d9ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 320), GPR_U32(ctx, 20));
label_4d9ca4:
    // 0x4d9ca4: 0x248a10fc  addiu       $t2, $a0, 0x10FC
    ctx->pc = 0x4d9ca4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4348));
label_4d9ca8:
    // 0x4d9ca8: 0x25270014  addiu       $a3, $t1, 0x14
    ctx->pc = 0x4d9ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
label_4d9cac:
    // 0x4d9cac: 0x25280018  addiu       $t0, $t1, 0x18
    ctx->pc = 0x4d9cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
label_4d9cb0:
    // 0x4d9cb0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4d9cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4d9cb4:
    // 0x4d9cb4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4d9cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_4d9cb8:
    // 0x4d9cb8: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4d9cb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4d9cbc:
    // 0x4d9cbc: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x4d9cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_4d9cc0:
    // 0x4d9cc0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4d9cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_4d9cc4:
    // 0x4d9cc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d9cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4d9cc8:
    // 0x4d9cc8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d9cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4d9ccc:
    // 0x4d9ccc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4d9cccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4d9cd0:
    // 0x4d9cd0: 0x24461114  addiu       $a2, $v0, 0x1114
    ctx->pc = 0x4d9cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4372));
label_4d9cd4:
    // 0x4d9cd4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4d9cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_4d9cd8:
    // 0x4d9cd8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4d9cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4d9cdc:
    // 0x4d9cdc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4d9cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_4d9ce0:
    // 0x4d9ce0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d9ce0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4d9ce4:
    // 0x4d9ce4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d9ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d9ce8:
    // 0x4d9ce8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4d9ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4d9cec:
    // 0x4d9cec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d9cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d9cf0:
    // 0x4d9cf0: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4d9cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_4d9cf4:
    // 0x4d9cf4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d9cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d9cf8:
    // 0x4d9cf8: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4d9cf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_4d9cfc:
    // 0x4d9cfc: 0x24421800  addiu       $v0, $v0, 0x1800
    ctx->pc = 0x4d9cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6144));
label_4d9d00:
    // 0x4d9d00: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4d9d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4d9d04:
    // 0x4d9d04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d9d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d9d08:
    // 0x4d9d08: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4d9d08u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_4d9d0c:
    // 0x4d9d0c: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4d9d0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_4d9d10:
    // 0x4d9d10: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4d9d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4d9d14:
    // 0x4d9d14: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d9d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d9d18:
    // 0x4d9d18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d9d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d9d1c:
    // 0x4d9d1c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4d9d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_4d9d20:
    // 0x4d9d20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d9d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d9d24:
    // 0x4d9d24: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4d9d24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4d9d28:
    // 0x4d9d28: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4d9d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4d9d2c:
    // 0x4d9d2c: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4d9d2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4d9d30:
    // 0x4d9d30: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4d9d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_4d9d34:
    // 0x4d9d34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d9d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4d9d38:
    // 0x4d9d38: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4d9d38u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_4d9d3c:
    // 0x4d9d3c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4d9d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4d9d40:
    // 0x4d9d40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d9d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d9d44:
    // 0x4d9d44: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4d9d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_4d9d48:
    // 0x4d9d48: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4d9d48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4d9d4c:
    // 0x4d9d4c: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4d9d4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4d9d50:
    // 0x4d9d50: 0x4600055  bltz        $v1, . + 4 + (0x55 << 2)
label_4d9d54:
    if (ctx->pc == 0x4D9D54u) {
        ctx->pc = 0x4D9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9D50u;
        // 0x4d9d54: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D9D58u;
        goto label_4d9d58;
    }
    ctx->pc = 0x4D9D50u;
    {
        const bool branch_taken_0x4d9d50 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4D9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9D50u;
        // 0x4d9d54: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9d50) {
            ctx->pc = 0x4D9EA8u;
            goto label_4d9ea8;
        }
    }
    ctx->pc = 0x4D9D58u;
label_4d9d58:
    // 0x4d9d58: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4d9d58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4d9d5c:
    // 0x4d9d5c: 0x245e7b88  addiu       $fp, $v0, 0x7B88
    ctx->pc = 0x4d9d5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 31624));
label_4d9d60:
    // 0x4d9d60: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x4d9d60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4d9d64:
    // 0x4d9d64: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4d9d64u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_4d9d68:
    // 0x4d9d68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d9d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4d9d6c:
    // 0x4d9d6c: 0x0  nop
    ctx->pc = 0x4d9d6cu;
    // NOP
label_4d9d70:
    // 0x4d9d70: 0xc12b5dc  jal         func_4AD770
label_4d9d74:
    if (ctx->pc == 0x4D9D74u) {
        ctx->pc = 0x4D9D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9D70u;
        // 0x4d9d74: 0x86700000  lh          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D9D78u;
        goto label_4d9d78;
    }
    ctx->pc = 0x4D9D70u;
    SET_GPR_U32(ctx, 31, 0x4D9D78u);
    ctx->pc = 0x4D9D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9D70u;
    // 0x4d9d74: 0x86700000  lh          $s0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4D9D70u, 0x4D9D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9D78u;
label_4d9d78:
    // 0x4d9d78: 0x2403006b  addiu       $v1, $zero, 0x6B
    ctx->pc = 0x4d9d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_4d9d7c:
    // 0x4d9d7c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4d9d7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d9d80:
    // 0x4d9d80: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4d9d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d9d84:
    // 0x4d9d84: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x4d9d84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
label_4d9d88:
    // 0x4d9d88: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4d9d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d9d8c:
    // 0x4d9d8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d9d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d9d90:
    // 0x4d9d90: 0x24050443  addiu       $a1, $zero, 0x443
    ctx->pc = 0x4d9d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1091));
label_4d9d94:
    // 0x4d9d94: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4d9d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4d9d98:
    // 0x4d9d98: 0x25260010  addiu       $a2, $t1, 0x10
    ctx->pc = 0x4d9d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_4d9d9c:
    // 0x4d9d9c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d9d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4d9da0:
    // 0x4d9da0: 0x25270018  addiu       $a3, $t1, 0x18
    ctx->pc = 0x4d9da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
label_4d9da4:
    // 0x4d9da4: 0xa5230008  sh          $v1, 0x8($t1)
    ctx->pc = 0x4d9da4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 8), (uint16_t)GPR_U32(ctx, 3));
label_4d9da8:
    // 0x4d9da8: 0x25280014  addiu       $t0, $t1, 0x14
    ctx->pc = 0x4d9da8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
label_4d9dac:
    // 0x4d9dac: 0xa524016a  sh          $a0, 0x16A($t1)
    ctx->pc = 0x4d9dacu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 362), (uint16_t)GPR_U32(ctx, 4));
label_4d9db0:
    // 0x4d9db0: 0xa525000c  sh          $a1, 0xC($t1)
    ctx->pc = 0x4d9db0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 12), (uint16_t)GPR_U32(ctx, 5));
label_4d9db4:
    // 0x4d9db4: 0xad340140  sw          $s4, 0x140($t1)
    ctx->pc = 0x4d9db4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 320), GPR_U32(ctx, 20));
label_4d9db8:
    // 0x4d9db8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d9db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d9dbc:
    // 0x4d9dbc: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4d9dbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4d9dc0:
    // 0x4d9dc0: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4d9dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_4d9dc4:
    // 0x4d9dc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d9dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4d9dc8:
    // 0x4d9dc8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d9dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4d9dcc:
    // 0x4d9dcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d9dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d9dd0:
    // 0x4d9dd0: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4d9dd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d9dd4:
    // 0x4d9dd4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d9dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d9dd8:
    // 0x4d9dd8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d9dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d9ddc:
    // 0x4d9ddc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d9ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d9de0:
    // 0x4d9de0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d9de0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4d9de4:
    // 0x4d9de4: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4d9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4d9de8:
    // 0x4d9de8: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4d9de8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4d9dec:
    // 0x4d9dec: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d9decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_4d9df0:
    // 0x4d9df0: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x4d9df0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d9df4:
    // 0x4d9df4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d9df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4d9df8:
    // 0x4d9df8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4d9df8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4d9dfc:
    // 0x4d9dfc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4d9dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4d9e00:
    // 0x4d9e00: 0x42443  sra         $a0, $a0, 17
    ctx->pc = 0x4d9e00u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 17));
label_4d9e04:
    // 0x4d9e04: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4d9e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4d9e08:
    // 0x4d9e08: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x4d9e08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4d9e0c:
    // 0x4d9e0c: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4d9e0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4d9e10:
    // 0x4d9e10: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x4d9e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
label_4d9e14:
    // 0x4d9e14: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d9e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_4d9e18:
    // 0x4d9e18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d9e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4d9e1c:
    // 0x4d9e1c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4d9e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4d9e20:
    // 0x4d9e20: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4d9e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_4d9e24:
    // 0x4d9e24: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d9e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d9e28:
    // 0x4d9e28: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d9e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_4d9e2c:
    // 0x4d9e2c: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x4d9e2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4d9e30:
    // 0x4d9e30: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d9e30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4d9e34:
    // 0x4d9e34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d9e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d9e38:
    // 0x4d9e38: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d9e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d9e3c:
    // 0x4d9e3c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d9e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d9e40:
    // 0x4d9e40: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d9e40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4d9e44:
    // 0x4d9e44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d9e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d9e48:
    // 0x4d9e48: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4d9e48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d9e4c:
    // 0x4d9e4c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4d9e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4d9e50:
    // 0x4d9e50: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d9e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d9e54:
    // 0x4d9e54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d9e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d9e58:
    // 0x4d9e58: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d9e58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4d9e5c:
    // 0x4d9e5c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4d9e5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d9e60:
    // 0x4d9e60: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4d9e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4d9e64:
    // 0x4d9e64: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d9e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d9e68:
    // 0x4d9e68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d9e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d9e6c:
    // 0x4d9e6c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d9e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_4d9e70:
    // 0x4d9e70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d9e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d9e74:
    // 0x4d9e74: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4d9e74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_4d9e78:
    // 0x4d9e78: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4d9e78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4d9e7c:
    // 0x4d9e7c: 0xa52201be  sh          $v0, 0x1BE($t1)
    ctx->pc = 0x4d9e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 446), (uint16_t)GPR_U32(ctx, 2));
label_4d9e80:
    // 0x4d9e80: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4d9e80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4d9e84:
    // 0x4d9e84: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4d9e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d9e88:
    // 0x4d9e88: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4d9e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4d9e8c:
    // 0x4d9e8c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d9e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4d9e90:
    // 0x4d9e90: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d9e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_4d9e94:
    // 0x4d9e94: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4d9e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4d9e98:
    // 0x4d9e98: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4d9e98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_4d9e9c:
    // 0x4d9e9c: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4d9e9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4d9ea0:
    // 0x4d9ea0: 0x441ffb3  bgez        $v0, . + 4 + (-0x4D << 2)
label_4d9ea4:
    if (ctx->pc == 0x4D9EA4u) {
        ctx->pc = 0x4D9EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9EA0u;
        // 0x4d9ea4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D9EA8u;
        goto label_4d9ea8;
    }
    ctx->pc = 0x4D9EA0u;
    {
        const bool branch_taken_0x4d9ea0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4D9EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9EA0u;
        // 0x4d9ea4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9ea0) {
            ctx->pc = 0x4D9D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d9d70;
        }
    }
    ctx->pc = 0x4D9EA8u;
label_4d9ea8:
    // 0x4d9ea8: 0x268301bc  addiu       $v1, $s4, 0x1BC
    ctx->pc = 0x4d9ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 444));
label_4d9eac:
    // 0x4d9eac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d9eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4d9eb0:
    // 0x4d9eb0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d9eb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d9eb4:
    // 0x4d9eb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d9eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d9eb8:
    // 0x4d9eb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d9eb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d9ebc:
    // 0x4d9ebc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4d9ec0:
    // 0x4d9ec0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d9ec0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d9ec4:
    // 0x4d9ec4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d9ec4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d9ec8:
    // 0x4d9ec8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d9ec8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d9ecc:
    // 0x4d9ecc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d9eccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d9ed0:
    // 0x4d9ed0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d9ed0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d9ed4:
    // 0x4d9ed4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d9ed4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4d9ed8:
    // 0x4d9ed8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d9ed8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d9edc:
    // 0x4d9edc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d9edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4d9ee0:
    // 0x4d9ee0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d9ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d9ee4:
    // 0x4d9ee4: 0x81367bc  j           func_4D9EF0
label_4d9ee8:
    if (ctx->pc == 0x4D9EE8u) {
        ctx->pc = 0x4D9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9EE4u;
        // 0x4d9ee8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D9EECu;
        goto label_4d9eec;
    }
    ctx->pc = 0x4D9EE4u;
    ctx->pc = 0x4D9EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9EE4u;
    // 0x4d9ee8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D9EF0u;
    goto label_4d9ef0;
    ctx->pc = 0x4D9EECu;
label_4d9eec:
    // 0x4d9eec: 0x0  nop
    ctx->pc = 0x4d9eecu;
    // NOP
label_4d9ef0:
    // 0x4d9ef0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4d9ef4:
    // 0x4d9ef4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d9ef4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4d9ef8:
    // 0x4d9ef8: 0x244d1100  addiu       $t5, $v0, 0x1100
    ctx->pc = 0x4d9ef8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4352));
label_4d9efc:
    // 0x4d9efc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d9efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4d9f00:
    // 0x4d9f00: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4d9f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_4d9f04:
    // 0x4d9f04: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4d9f04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4d9f08:
    // 0x4d9f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d9f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4d9f0c:
    // 0x4d9f0c: 0x34c61000  ori         $a2, $a2, 0x1000
    ctx->pc = 0x4d9f0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4096);
label_4d9f10:
    // 0x4d9f10: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d9f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4d9f14:
    // 0x4d9f14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d9f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d9f18:
    // 0x4d9f18: 0x24a910fc  addiu       $t1, $a1, 0x10FC
    ctx->pc = 0x4d9f18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4348));
label_4d9f1c:
    // 0x4d9f1c: 0x663824  and         $a3, $v1, $a2
    ctx->pc = 0x4d9f1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_4d9f20:
    // 0x4d9f20: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x4d9f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4d9f24:
    // 0x4d9f24: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4d9f24u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_4d9f28:
    // 0x4d9f28: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x4d9f28u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
label_4d9f2c:
    // 0x4d9f2c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x4d9f2cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d9f30:
    // 0x4d9f30: 0x8c4e111c  lw          $t6, 0x111C($v0)
    ctx->pc = 0x4d9f30u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4380)));
label_4d9f34:
    // 0x4d9f34: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d9f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4d9f38:
    // 0x4d9f38: 0x85a60000  lh          $a2, 0x0($t5)
    ctx->pc = 0x4d9f38u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_4d9f3c:
    // 0x4d9f3c: 0x85c20006  lh          $v0, 0x6($t6)
    ctx->pc = 0x4d9f3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 6)));
label_4d9f40:
    // 0x4d9f40: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4d9f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_4d9f44:
    // 0x4d9f44: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4d9f44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4d9f48:
    // 0x4d9f48: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4d9f48u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
label_4d9f4c:
    // 0x4d9f4c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d9f4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4d9f50:
    // 0x4d9f50: 0x8d820014  lw          $v0, 0x14($t4)
    ctx->pc = 0x4d9f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
label_4d9f54:
    // 0x4d9f54: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4d9f54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4d9f58:
    // 0x4d9f58: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4d9f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_4d9f5c:
    // 0x4d9f5c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d9f5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4d9f60:
    // 0x4d9f60: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4d9f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4d9f64:
    // 0x4d9f64: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4d9f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_4d9f68:
    // 0x4d9f68: 0xa35824  and         $t3, $a1, $v1
    ctx->pc = 0x4d9f68u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_4d9f6c:
    // 0x4d9f6c: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x4d9f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
label_4d9f70:
    // 0x4d9f70: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4d9f70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4d9f74:
    // 0x4d9f74: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4d9f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4d9f78:
    // 0x4d9f78: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
label_4d9f7c:
    if (ctx->pc == 0x4D9F7Cu) {
        ctx->pc = 0x4D9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9F78u;
        // 0x4d9f7c: 0x3c05007f  lui         $a1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D9F80u;
        goto label_4d9f80;
    }
    ctx->pc = 0x4D9F78u;
    {
        const bool branch_taken_0x4d9f78 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4d9f78) {
            ctx->pc = 0x4D9F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9F78u;
            // 0x4d9f7c: 0x3c05007f  lui         $a1, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9F90u;
            goto label_4d9f90;
        }
    }
    ctx->pc = 0x4D9F80u;
label_4d9f80:
    // 0x4d9f80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d9f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d9f84:
    // 0x4d9f84: 0x8136dcc  j           func_4DB730
label_4d9f88:
    if (ctx->pc == 0x4D9F88u) {
        ctx->pc = 0x4D9F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9F84u;
        // 0x4d9f88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D9F8Cu;
        goto label_4d9f8c;
    }
    ctx->pc = 0x4D9F84u;
    ctx->pc = 0x4D9F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9F84u;
    // 0x4d9f88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB730u;
    sub_004DB730_0x4db730(rdram, ctx, runtime); return;
    ctx->pc = 0x4D9F8Cu;
label_4d9f8c:
    // 0x4d9f8c: 0x0  nop
    ctx->pc = 0x4d9f8cu;
    // NOP
label_4d9f90:
    // 0x4d9f90: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d9f90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4d9f94:
    // 0x4d9f94: 0x24a51104  addiu       $a1, $a1, 0x1104
    ctx->pc = 0x4d9f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4356));
label_4d9f98:
    // 0x4d9f98: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4d9f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4d9f9c:
    // 0x4d9f9c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d9f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d9fa0:
    // 0x4d9fa0: 0x30e80200  andi        $t0, $a3, 0x200
    ctx->pc = 0x4d9fa0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)512);
label_4d9fa4:
    // 0x4d9fa4: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x4d9fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_4d9fa8:
    // 0x4d9fa8: 0x3566ffff  ori         $a2, $t3, 0xFFFF
    ctx->pc = 0x4d9fa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
label_4d9fac:
    // 0x4d9fac: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4d9facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
label_4d9fb0:
    // 0x4d9fb0: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d9fb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4d9fb4:
    // 0x4d9fb4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4d9fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
label_4d9fb8:
    // 0x4d9fb8: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x4d9fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
label_4d9fbc:
    // 0x4d9fbc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d9fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d9fc0:
    // 0x4d9fc0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d9fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d9fc4:
    // 0x4d9fc4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4d9fc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d9fc8:
    // 0x4d9fc8: 0x85a80000  lh          $t0, 0x0($t5)
    ctx->pc = 0x4d9fc8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_4d9fcc:
    // 0x4d9fcc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d9fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d9fd0:
    // 0x4d9fd0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4d9fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_4d9fd4:
    // 0x4d9fd4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d9fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d9fd8:
    // 0x4d9fd8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d9fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d9fdc:
    // 0x4d9fdc: 0x8dc20008  lw          $v0, 0x8($t6)
    ctx->pc = 0x4d9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
label_4d9fe0:
    // 0x4d9fe0: 0x94a70000  lhu         $a3, 0x0($a1)
    ctx->pc = 0x4d9fe0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d9fe4:
    // 0x4d9fe4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4d9fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_4d9fe8:
    // 0x4d9fe8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d9fe8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4d9fec:
    // 0x4d9fec: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4d9fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_4d9ff0:
    // 0x4d9ff0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d9ff0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_4d9ff4:
    // 0x4d9ff4: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4d9ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
label_4d9ff8:
    // 0x4d9ff8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d9ff8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4d9ffc:
    // 0x4d9ffc: 0x8d820018  lw          $v0, 0x18($t4)
    ctx->pc = 0x4d9ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
label_4da000:
    // 0x4da000: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4da000u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4da004:
    // 0x4da004: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4da004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_4da008:
    // 0x4da008: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4da008u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4da00c:
    // 0x4da00c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4da00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4da010:
    // 0x4da010: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4da010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_4da014:
    // 0x4da014: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4da014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_4da018:
    // 0x4da018: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4da018u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
label_4da01c:
    // 0x4da01c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4da01cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4da020:
    // 0x4da020: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4da020u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4da024:
    // 0x4da024: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x4da024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_4da028:
    // 0x4da028: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4da028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_4da02c:
    // 0x4da02c: 0xc22824  and         $a1, $a2, $v0
    ctx->pc = 0x4da02cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_4da030:
    // 0x4da030: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4da030u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
label_4da034:
    // 0x4da034: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4da034u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4da038:
    // 0x4da038: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x4da038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_4da03c:
    // 0x4da03c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4da040:
    if (ctx->pc == 0x4DA040u) {
        ctx->pc = 0x4DA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA03Cu;
        // 0x4da040: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA044u;
        goto label_4da044;
    }
    ctx->pc = 0x4DA03Cu;
    {
        const bool branch_taken_0x4da03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4da03c) {
            ctx->pc = 0x4DA040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DA03Cu;
            // 0x4da040: 0x8dc20000  lw          $v0, 0x0($t6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DA050u;
            goto label_4da050;
        }
    }
    ctx->pc = 0x4DA044u;
label_4da044:
    // 0x4da044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4da044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4da048:
    // 0x4da048: 0x8136dcc  j           func_4DB730
label_4da04c:
    if (ctx->pc == 0x4DA04Cu) {
        ctx->pc = 0x4DA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA048u;
        // 0x4da04c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA050u;
        goto label_4da050;
    }
    ctx->pc = 0x4DA048u;
    ctx->pc = 0x4DA04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA048u;
    // 0x4da04c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB730u;
    sub_004DB730_0x4db730(rdram, ctx, runtime); return;
    ctx->pc = 0x4DA050u;
label_4da050:
    // 0x4da050: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4da050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4da054:
    // 0x4da054: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4da054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_4da058:
    // 0x4da058: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4da058u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4da05c:
    // 0x4da05c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4da05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_4da060:
    // 0x4da060: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4da060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4da064:
    // 0x4da064: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4da064u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
label_4da068:
    // 0x4da068: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4da068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4da06c:
    // 0x4da06c: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x4da06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
label_4da070:
    // 0x4da070: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4da070u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4da074:
    // 0x4da074: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4da074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_4da078:
    // 0x4da078: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4da078u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4da07c:
    // 0x4da07c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4da07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4da080:
    // 0x4da080: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4da080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_4da084:
    // 0x4da084: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4da084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_4da088:
    // 0x4da088: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4da088u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
label_4da08c:
    // 0x4da08c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4da08cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4da090:
    // 0x4da090: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4da090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4da094:
    // 0x4da094: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x4da094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_4da098:
    // 0x4da098: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4da098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_4da09c:
    // 0x4da09c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4da09cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4da0a0:
    // 0x4da0a0: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4da0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
label_4da0a4:
    // 0x4da0a4: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4da0a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4da0a8:
    // 0x4da0a8: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x4da0a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_4da0ac:
    // 0x4da0ac: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4da0b0:
    if (ctx->pc == 0x4DA0B0u) {
        ctx->pc = 0x4DA0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA0ACu;
        // 0x4da0b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA0B4u;
        goto label_4da0b4;
    }
    ctx->pc = 0x4DA0ACu;
    {
        const bool branch_taken_0x4da0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4da0ac) {
            ctx->pc = 0x4DA0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DA0ACu;
            // 0x4da0b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DA0C0u;
            goto label_4da0c0;
        }
    }
    ctx->pc = 0x4DA0B4u;
label_4da0b4:
    // 0x4da0b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4da0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4da0b8:
    // 0x4da0b8: 0x8136dcc  j           func_4DB730
label_4da0bc:
    if (ctx->pc == 0x4DA0BCu) {
        ctx->pc = 0x4DA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA0B8u;
        // 0x4da0bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA0C0u;
        goto label_4da0c0;
    }
    ctx->pc = 0x4DA0B8u;
    ctx->pc = 0x4DA0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA0B8u;
    // 0x4da0bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB730u;
    sub_004DB730_0x4db730(rdram, ctx, runtime); return;
    ctx->pc = 0x4DA0C0u;
label_4da0c0:
    // 0x4da0c0: 0x258501bc  addiu       $a1, $t4, 0x1BC
    ctx->pc = 0x4da0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 444));
label_4da0c4:
    // 0x4da0c4: 0xa582016a  sh          $v0, 0x16A($t4)
    ctx->pc = 0x4da0c4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 362), (uint16_t)GPR_U32(ctx, 2));
label_4da0c8:
    // 0x4da0c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4da0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4da0cc:
    // 0x4da0cc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4da0ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4da0d0:
    // 0x4da0d0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4da0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_4da0d4:
    // 0x4da0d4: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4da0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_4da0d8:
    // 0x4da0d8: 0x8136dcc  j           func_4DB730
label_4da0dc:
    if (ctx->pc == 0x4DA0DCu) {
        ctx->pc = 0x4DA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA0D8u;
        // 0x4da0dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA0E0u;
        goto label_4da0e0;
    }
    ctx->pc = 0x4DA0D8u;
    ctx->pc = 0x4DA0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA0D8u;
    // 0x4da0dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB730u;
    sub_004DB730_0x4db730(rdram, ctx, runtime); return;
    ctx->pc = 0x4DA0E0u;
label_4da0e0:
    // 0x4da0e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4da0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4da0e4:
    // 0x4da0e4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4da0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4da0e8:
    // 0x4da0e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4da0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4da0ec:
    // 0x4da0ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4da0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4da0f0:
    // 0x4da0f0: 0x24451114  addiu       $a1, $v0, 0x1114
    ctx->pc = 0x4da0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4372));
label_4da0f4:
    // 0x4da0f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4da0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4da0f8:
    // 0x4da0f8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4da0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4da0fc:
    // 0x4da0fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4da0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4da100:
    // 0x4da100: 0x34630007  ori         $v1, $v1, 0x7
    ctx->pc = 0x4da100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
label_4da104:
    // 0x4da104: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4da104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4da108:
    // 0x4da108: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4da108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4da10c:
    // 0x4da10c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4da10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4da110:
    // 0x4da110: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4da110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_4da114:
    // 0x4da114: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4da114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4da118:
    // 0x4da118: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4da118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4da11c:
    // 0x4da11c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4da11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4da120:
    // 0x4da120: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4da120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4da124:
    // 0x4da124: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4da124u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4da128:
    // 0x4da128: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4da128u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4da12c:
    // 0x4da12c: 0x4600051  bltz        $v1, . + 4 + (0x51 << 2)
label_4da130:
    if (ctx->pc == 0x4DA130u) {
        ctx->pc = 0x4DA130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA12Cu;
        // 0x4da130: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA134u;
        goto label_4da134;
    }
    ctx->pc = 0x4DA12Cu;
    {
        const bool branch_taken_0x4da12c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4DA130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA12Cu;
        // 0x4da130: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da12c) {
            ctx->pc = 0x4DA274u;
            goto label_4da274;
        }
    }
    ctx->pc = 0x4DA134u;
label_4da134:
    // 0x4da134: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4da134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4da138:
    // 0x4da138: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4da138u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4da13c:
    // 0x4da13c: 0x245110fc  addiu       $s1, $v0, 0x10FC
    ctx->pc = 0x4da13cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4348));
label_4da140:
    // 0x4da140: 0x26970010  addiu       $s7, $s4, 0x10
    ctx->pc = 0x4da140u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_4da144:
    // 0x4da144: 0x26960014  addiu       $s6, $s4, 0x14
    ctx->pc = 0x4da144u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_4da148:
    // 0x4da148: 0x26950018  addiu       $s5, $s4, 0x18
    ctx->pc = 0x4da148u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_4da14c:
    // 0x4da14c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4da14cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_4da150:
    // 0x4da150: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4da150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4da154:
    // 0x4da154: 0x0  nop
    ctx->pc = 0x4da154u;
    // NOP
label_4da158:
    // 0x4da158: 0xc12b5dc  jal         func_4AD770
label_4da15c:
    if (ctx->pc == 0x4DA15Cu) {
        ctx->pc = 0x4DA15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA158u;
        // 0x4da15c: 0x86700000  lh          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA160u;
        goto label_4da160;
    }
    ctx->pc = 0x4DA158u;
    SET_GPR_U32(ctx, 31, 0x4DA160u);
    ctx->pc = 0x4DA15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA158u;
    // 0x4da15c: 0x86700000  lh          $s0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4DA158u, 0x4DA160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA160u;
label_4da160:
    // 0x4da160: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4da160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4da164:
    // 0x4da164: 0x2128025  or          $s0, $s0, $s2
    ctx->pc = 0x4da164u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
label_4da168:
    // 0x4da168: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x4da168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_4da16c:
    // 0x4da16c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4da16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4da170:
    // 0x4da170: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4da170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4da174:
    // 0x4da174: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4da174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_4da178:
    // 0x4da178: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4da178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4da17c:
    // 0x4da17c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4da17cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4da180:
    // 0x4da180: 0x34a504bb  ori         $a1, $a1, 0x4BB
    ctx->pc = 0x4da180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1211);
label_4da184:
    // 0x4da184: 0xa4440008  sh          $a0, 0x8($v0)
    ctx->pc = 0x4da184u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 4));
label_4da188:
    // 0x4da188: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x4da188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4da18c:
    // 0x4da18c: 0xa446016a  sh          $a2, 0x16A($v0)
    ctx->pc = 0x4da18cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 362), (uint16_t)GPR_U32(ctx, 6));
label_4da190:
    // 0x4da190: 0x24480014  addiu       $t0, $v0, 0x14
    ctx->pc = 0x4da190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_4da194:
    // 0x4da194: 0xac540140  sw          $s4, 0x140($v0)
    ctx->pc = 0x4da194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 20));
label_4da198:
    // 0x4da198: 0x24490018  addiu       $t1, $v0, 0x18
    ctx->pc = 0x4da198u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_4da19c:
    // 0x4da19c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4da19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4da1a0:
    // 0x4da1a0: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x4da1a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4da1a4:
    // 0x4da1a4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4da1a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4da1a8:
    // 0x4da1a8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4da1a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_4da1ac:
    // 0x4da1ac: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4da1acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_4da1b0:
    // 0x4da1b0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4da1b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4da1b4:
    // 0x4da1b4: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4da1b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4da1b8:
    // 0x4da1b8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4da1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4da1bc:
    // 0x4da1bc: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4da1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_4da1c0:
    // 0x4da1c0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4da1c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4da1c4:
    // 0x4da1c4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4da1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_4da1c8:
    // 0x4da1c8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4da1c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4da1cc:
    // 0x4da1cc: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x4da1ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
label_4da1d0:
    // 0x4da1d0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4da1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4da1d4:
    // 0x4da1d4: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4da1d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4da1d8:
    // 0x4da1d8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4da1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_4da1dc:
    // 0x4da1dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4da1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4da1e0:
    // 0x4da1e0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4da1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4da1e4:
    // 0x4da1e4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4da1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_4da1e8:
    // 0x4da1e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4da1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4da1ec:
    // 0x4da1ec: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4da1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_4da1f0:
    // 0x4da1f0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4da1f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4da1f4:
    // 0x4da1f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4da1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4da1f8:
    // 0x4da1f8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4da1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_4da1fc:
    // 0x4da1fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4da1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4da200:
    // 0x4da200: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4da200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4da204:
    // 0x4da204: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4da204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4da208:
    // 0x4da208: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4da208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4da20c:
    // 0x4da20c: 0x24422000  addiu       $v0, $v0, 0x2000
    ctx->pc = 0x4da20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
label_4da210:
    // 0x4da210: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4da210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_4da214:
    // 0x4da214: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4da214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4da218:
    // 0x4da218: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4da218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4da21c:
    // 0x4da21c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4da21cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4da220:
    // 0x4da220: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4da220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4da224:
    // 0x4da224: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4da224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4da228:
    // 0x4da228: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4da228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4da22c:
    // 0x4da22c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4da22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_4da230:
    // 0x4da230: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4da230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4da234:
    // 0x4da234: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4da234u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_4da238:
    // 0x4da238: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4da238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4da23c:
    // 0x4da23c: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4da23cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4da240:
    // 0x4da240: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4da240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_4da244:
    // 0x4da244: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4da244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4da248:
    // 0x4da248: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4da248u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_4da24c:
    // 0x4da24c: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4da24cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4da250:
    // 0x4da250: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4da250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4da254:
    // 0x4da254: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4da254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4da258:
    // 0x4da258: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4da258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_4da25c:
    // 0x4da25c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4da25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4da260:
    // 0x4da260: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4da260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4da264:
    // 0x4da264: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4da264u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4da268:
    // 0x4da268: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4da268u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4da26c:
    // 0x4da26c: 0x441ffba  bgez        $v0, . + 4 + (-0x46 << 2)
label_4da270:
    if (ctx->pc == 0x4DA270u) {
        ctx->pc = 0x4DA270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA26Cu;
        // 0x4da270: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA274u;
        goto label_4da274;
    }
    ctx->pc = 0x4DA26Cu;
    {
        const bool branch_taken_0x4da26c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4DA270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA26Cu;
        // 0x4da270: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da26c) {
            ctx->pc = 0x4DA158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4da158;
        }
    }
    ctx->pc = 0x4DA274u;
label_4da274:
    // 0x4da274: 0x268301bc  addiu       $v1, $s4, 0x1BC
    ctx->pc = 0x4da274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 444));
label_4da278:
    // 0x4da278: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4da278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4da27c:
    // 0x4da27c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4da27cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4da280:
    // 0x4da280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4da280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4da284:
    // 0x4da284: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4da284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4da288:
    // 0x4da288: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4da288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4da28c:
    // 0x4da28c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4da28cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4da290:
    // 0x4da290: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4da290u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4da294:
    // 0x4da294: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4da294u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4da298:
    // 0x4da298: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4da298u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4da29c:
    // 0x4da29c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4da29cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4da2a0:
    // 0x4da2a0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4da2a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4da2a4:
    // 0x4da2a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4da2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4da2a8:
    // 0x4da2a8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4da2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4da2ac:
    // 0x4da2ac: 0x81368ae  j           func_4DA2B8
label_4da2b0:
    if (ctx->pc == 0x4DA2B0u) {
        ctx->pc = 0x4DA2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA2ACu;
        // 0x4da2b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA2B4u;
        goto label_4da2b4;
    }
    ctx->pc = 0x4DA2ACu;
    ctx->pc = 0x4DA2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA2ACu;
    // 0x4da2b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DA2B8u;
    goto label_4da2b8;
    ctx->pc = 0x4DA2B4u;
label_4da2b4:
    // 0x4da2b4: 0x0  nop
    ctx->pc = 0x4da2b4u;
    // NOP
label_4da2b8:
    // 0x4da2b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4da2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4da2bc:
    // 0x4da2bc: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4da2bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
label_4da2c0:
    // 0x4da2c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4da2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4da2c4:
    // 0x4da2c4: 0x25081100  addiu       $t0, $t0, 0x1100
    ctx->pc = 0x4da2c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4352));
label_4da2c8:
    // 0x4da2c8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4da2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_4da2cc:
    // 0x4da2cc: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4da2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4da2d0:
    // 0x4da2d0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4da2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4da2d4:
    // 0x4da2d4: 0x34e71a00  ori         $a3, $a3, 0x1A00
    ctx->pc = 0x4da2d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)6656);
label_4da2d8:
    // 0x4da2d8: 0x24c610fc  addiu       $a2, $a2, 0x10FC
    ctx->pc = 0x4da2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4348));
label_4da2dc:
    // 0x4da2dc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4da2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4da2e0:
    // 0x4da2e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4da2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4da2e4:
    // 0x4da2e4: 0x8c49111c  lw          $t1, 0x111C($v0)
    ctx->pc = 0x4da2e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4380)));
label_4da2e8:
    // 0x4da2e8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4da2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_4da2ec:
    // 0x4da2ec: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4da2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_4da2f0:
    // 0x4da2f0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4da2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4da2f4:
    // 0x4da2f4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x4da2f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4da2f8:
    // 0x4da2f8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4da2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_4da2fc:
    // 0x4da2fc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4da2fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4da300:
    // 0x4da300: 0x85220006  lh          $v0, 0x6($t1)
    ctx->pc = 0x4da300u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
label_4da304:
    // 0x4da304: 0x85090000  lh          $t1, 0x0($t0)
    ctx->pc = 0x4da304u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4da308:
    // 0x4da308: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4da308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4da30c:
    // 0x4da30c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4da30cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4da310:
    // 0x4da310: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4da310u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_4da314:
    // 0x4da314: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4da314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4da318:
    // 0x4da318: 0x8d420014  lw          $v0, 0x14($t2)
    ctx->pc = 0x4da318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
label_4da31c:
    // 0x4da31c: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4da31cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4da320:
    // 0x4da320: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4da320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_4da324:
    // 0x4da324: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4da324u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4da328:
    // 0x4da328: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4da328u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4da32c:
    // 0x4da32c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4da32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_4da330:
    // 0x4da330: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4da330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_4da334:
    // 0x4da334: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4da334u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_4da338:
    // 0x4da338: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4da338u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4da33c:
    // 0x4da33c: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x4da33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_4da340:
    // 0x4da340: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_4da344:
    if (ctx->pc == 0x4DA344u) {
        ctx->pc = 0x4DA344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA340u;
        // 0x4da344: 0x254b01bc  addiu       $t3, $t2, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 444));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA348u;
        goto label_4da348;
    }
    ctx->pc = 0x4DA340u;
    {
        const bool branch_taken_0x4da340 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4DA344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA340u;
        // 0x4da344: 0x254b01bc  addiu       $t3, $t2, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da340) {
            ctx->pc = 0x4DA358u;
            goto label_4da358;
        }
    }
    ctx->pc = 0x4DA348u;
label_4da348:
    // 0x4da348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4da348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4da34c:
    // 0x4da34c: 0x8136dcc  j           func_4DB730
label_4da350:
    if (ctx->pc == 0x4DA350u) {
        ctx->pc = 0x4DA350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA34Cu;
        // 0x4da350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA354u;
        goto label_4da354;
    }
    ctx->pc = 0x4DA34Cu;
    ctx->pc = 0x4DA350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA34Cu;
    // 0x4da350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB730u;
    sub_004DB730_0x4db730(rdram, ctx, runtime); return;
    ctx->pc = 0x4DA354u;
label_4da354:
    // 0x4da354: 0x0  nop
    ctx->pc = 0x4da354u;
    // NOP
label_4da358:
    // 0x4da358: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4da358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4da35c:
    // 0x4da35c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4da35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4da360:
    // 0x4da360: 0xa543016a  sh          $v1, 0x16A($t2)
    ctx->pc = 0x4da360u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 362), (uint16_t)GPR_U32(ctx, 3));
label_4da364:
    // 0x4da364: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4da364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_4da368:
    // 0x4da368: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4da368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4da36c:
    // 0x4da36c: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x4da36cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
label_4da370:
    // 0x4da370: 0x8136dcc  j           func_4DB730
label_4da374:
    if (ctx->pc == 0x4DA374u) {
        ctx->pc = 0x4DA374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA370u;
        // 0x4da374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA378u;
        goto label_4da378;
    }
    ctx->pc = 0x4DA370u;
    ctx->pc = 0x4DA374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA370u;
    // 0x4da374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB730u;
    sub_004DB730_0x4db730(rdram, ctx, runtime); return;
    ctx->pc = 0x4DA378u;
label_4da378:
    // 0x4da378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4da378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4da37c:
    // 0x4da37c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4da37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4da380:
    // 0x4da380: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4da380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_4da384:
    // 0x4da384: 0xc12b5f2  jal         func_4AD7C8
label_4da388:
    if (ctx->pc == 0x4DA388u) {
        ctx->pc = 0x4DA388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA384u;
        // 0x4da388: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA38Cu;
        goto label_4da38c;
    }
    ctx->pc = 0x4DA384u;
    SET_GPR_U32(ctx, 31, 0x4DA38Cu);
    ctx->pc = 0x4DA388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA384u;
    // 0x4da388: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD7C8u, 0x4DA384u, 0x4DA38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA38Cu;
label_4da38c:
    // 0x4da38c: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x4da38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_4da390:
    // 0x4da390: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4da390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
label_4da394:
    // 0x4da394: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4da394u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
label_4da398:
    // 0x4da398: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x4da398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4da39c:
    // 0x4da39c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4da39cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_4da3a0:
    // 0x4da3a0: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4da3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4da3a4:
    // 0x4da3a4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4da3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4da3a8:
    // 0x4da3a8: 0x24c610fc  addiu       $a2, $a2, 0x10FC
    ctx->pc = 0x4da3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4348));
label_4da3ac:
    // 0x4da3ac: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4da3acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4da3b0:
    // 0x4da3b0: 0x24480014  addiu       $t0, $v0, 0x14
    ctx->pc = 0x4da3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_4da3b4:
    // 0x4da3b4: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4da3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_4da3b8:
    // 0x4da3b8: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x4da3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_4da3bc:
    // 0x4da3bc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4da3bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4da3c0:
    // 0x4da3c0: 0x260901bc  addiu       $t1, $s0, 0x1BC
    ctx->pc = 0x4da3c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
label_4da3c4:
    // 0x4da3c4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4da3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4da3c8:
    // 0x4da3c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4da3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4da3cc:
    // 0x4da3cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4da3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4da3d0:
    // 0x4da3d0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4da3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4da3d4:
    // 0x4da3d4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4da3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4da3d8:
    // 0x4da3d8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4da3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_4da3dc:
    // 0x4da3dc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4da3dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_4da3e0:
    // 0x4da3e0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4da3e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4da3e4:
    // 0x4da3e4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4da3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_4da3e8:
    // 0x4da3e8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4da3e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_4da3ec:
    // 0x4da3ec: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4da3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_4da3f0:
    // 0x4da3f0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4da3f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4da3f4:
    // 0x4da3f4: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4da3f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4da3f8:
    // 0x4da3f8: 0x24632000  addiu       $v1, $v1, 0x2000
    ctx->pc = 0x4da3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
label_4da3fc:
    // 0x4da3fc: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4da3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_4da400:
    // 0x4da400: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4da400u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_4da404:
    // 0x4da404: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4da404u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_4da408:
    // 0x4da408: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4da408u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4da40c:
    // 0x4da40c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4da40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4da410:
    // 0x4da410: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4da410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4da414:
    // 0x4da414: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x4da414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_4da418:
    // 0x4da418: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4da418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4da41c:
    // 0x4da41c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4da41cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_4da420:
    // 0x4da420: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4da420u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_4da424:
    // 0x4da424: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x4da424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4da428:
    // 0x4da428: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x4da428u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4da42c:
    // 0x4da42c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4da42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_4da430:
    // 0x4da430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4da430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4da434:
    // 0x4da434: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4da434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_4da438:
    // 0x4da438: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4da438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_4da43c:
    // 0x4da43c: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4da43cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4da440:
    // 0x4da440: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4da440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4da444:
    // 0x4da444: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4da444u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
label_4da448:
    // 0x4da448: 0x8136914  j           func_4DA450
label_4da44c:
    if (ctx->pc == 0x4DA44Cu) {
        ctx->pc = 0x4DA44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA448u;
        // 0x4da44c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA450u;
        goto label_4da450;
    }
    ctx->pc = 0x4DA448u;
    ctx->pc = 0x4DA44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA448u;
    // 0x4da44c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DA450u;
    goto label_4da450;
    ctx->pc = 0x4DA450u;
label_4da450:
    // 0x4da450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4da450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4da454:
    // 0x4da454: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4da454u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4da458:
    // 0x4da458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4da458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4da45c:
    // 0x4da45c: 0x24c610fc  addiu       $a2, $a2, 0x10FC
    ctx->pc = 0x4da45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4348));
label_4da460:
    // 0x4da460: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4da460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4da464:
    // 0x4da464: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4da464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4da468:
    // 0x4da468: 0x84e5016a  lh          $a1, 0x16A($a3)
    ctx->pc = 0x4da468u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 362)));
label_4da46c:
    // 0x4da46c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4da46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4da470:
    // 0x4da470: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4da470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_4da474:
    // 0x4da474: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4da474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4da478:
    // 0x4da478: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4da478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_4da47c:
    // 0x4da47c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4da47cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4da480:
    // 0x4da480: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4da480u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4da484:
    // 0x4da484: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x4da484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_4da488:
    // 0x4da488: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_4da48c:
    if (ctx->pc == 0x4DA48Cu) {
        ctx->pc = 0x4DA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA488u;
        // 0x4da48c: 0x24e801bc  addiu       $t0, $a3, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 444));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA490u;
        goto label_4da490;
    }
    ctx->pc = 0x4DA488u;
    {
        const bool branch_taken_0x4da488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA488u;
        // 0x4da48c: 0x24e801bc  addiu       $t0, $a3, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da488) {
            ctx->pc = 0x4DA4B8u;
            goto label_4da4b8;
        }
    }
    ctx->pc = 0x4DA490u;
label_4da490:
    // 0x4da490: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4da490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4da494:
    // 0x4da494: 0xa4e00160  sh          $zero, 0x160($a3)
    ctx->pc = 0x4da494u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 352), (uint16_t)GPR_U32(ctx, 0));
label_4da498:
    // 0x4da498: 0xa4e2015e  sh          $v0, 0x15E($a3)
    ctx->pc = 0x4da498u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 350), (uint16_t)GPR_U32(ctx, 2));
label_4da49c:
    // 0x4da49c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4da49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4da4a0:
    // 0x4da4a0: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4da4a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4da4a4:
    // 0x4da4a4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4da4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4da4a8:
    // 0x4da4a8: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4da4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
label_4da4ac:
    // 0x4da4ac: 0x8136932  j           func_4DA4C8
label_4da4b0:
    if (ctx->pc == 0x4DA4B0u) {
        ctx->pc = 0x4DA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA4ACu;
        // 0x4da4b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA4B4u;
        goto label_4da4b4;
    }
    ctx->pc = 0x4DA4ACu;
    ctx->pc = 0x4DA4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA4ACu;
    // 0x4da4b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DA4C8u;
    goto label_4da4c8;
    ctx->pc = 0x4DA4B4u;
label_4da4b4:
    // 0x4da4b4: 0x0  nop
    ctx->pc = 0x4da4b4u;
    // NOP
label_4da4b8:
    // 0x4da4b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4da4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4da4bc:
    // 0x4da4bc: 0x3e00008  jr          $ra
label_4da4c0:
    if (ctx->pc == 0x4DA4C0u) {
        ctx->pc = 0x4DA4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA4BCu;
        // 0x4da4c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA4C4u;
        goto label_4da4c4;
    }
    ctx->pc = 0x4DA4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA4BCu;
        // 0x4da4c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA4C4u;
label_4da4c4:
    // 0x4da4c4: 0x0  nop
    ctx->pc = 0x4da4c4u;
    // NOP
label_4da4c8:
    // 0x4da4c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4da4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4da4cc:
    // 0x4da4cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4da4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4da4d0:
    // 0x4da4d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4da4d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4da4d4:
    // 0x4da4d4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4da4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4da4d8:
    // 0x4da4d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4da4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4da4dc:
    // 0x4da4dc: 0x2626015e  addiu       $a2, $s1, 0x15E
    ctx->pc = 0x4da4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
label_4da4e0:
    // 0x4da4e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4da4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4da4e4:
    // 0x4da4e4: 0x26270160  addiu       $a3, $s1, 0x160
    ctx->pc = 0x4da4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
label_4da4e8:
    // 0x4da4e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4da4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4da4ec:
    // 0x4da4ec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4da4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4da4f0:
    // 0x4da4f0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4da4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4da4f4:
    // 0x4da4f4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4da4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4da4f8:
    // 0x4da4f8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4da4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_4da4fc:
    // 0x4da4fc: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4da4fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4da500:
    // 0x4da500: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4da500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4da504:
    // 0x4da504: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x4da504u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_4da508:
    // 0x4da508: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4da508u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4da50c:
    // 0x4da50c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4da50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4da510:
    // 0x4da510: 0x21483  sra         $v0, $v0, 18
    ctx->pc = 0x4da510u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 18));
label_4da514:
    // 0x4da514: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4da514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4da518:
    // 0x4da518: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x4da518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_4da51c:
    // 0x4da51c: 0x24a57b90  addiu       $a1, $a1, 0x7B90
    ctx->pc = 0x4da51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31632));
label_4da520:
    // 0x4da520: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4da520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4da524:
    // 0x4da524: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4da524u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4da528:
    // 0x4da528: 0x10640022  beq         $v1, $a0, . + 4 + (0x22 << 2)
label_4da52c:
    if (ctx->pc == 0x4DA52Cu) {
        ctx->pc = 0x4DA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA528u;
        // 0x4da52c: 0x3c160054  lui         $s6, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA530u;
        goto label_4da530;
    }
    ctx->pc = 0x4DA528u;
    {
        const bool branch_taken_0x4da528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4DA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA528u;
        // 0x4da52c: 0x3c160054  lui         $s6, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da528) {
            ctx->pc = 0x4DA5B4u;
            goto label_4da5b4;
        }
    }
    ctx->pc = 0x4DA530u;
label_4da530:
    // 0x4da530: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4da530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4da534:
    // 0x4da534: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4da534u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4da538:
    // 0x4da538: 0x245210fc  addiu       $s2, $v0, 0x10FC
    ctx->pc = 0x4da538u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4348));
label_4da53c:
    // 0x4da53c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4da53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4da540:
    // 0x4da540: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x4da540u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
label_4da544:
    // 0x4da544: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x4da544u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4da548:
    // 0x4da548: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4da548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4da54c:
    // 0x4da54c: 0x0  nop
    ctx->pc = 0x4da54cu;
    // NOP
label_4da550:
    // 0x4da550: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4da550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4da554:
    // 0x4da554: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4da554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4da558:
    // 0x4da558: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4da558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
label_4da55c:
    // 0x4da55c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4da55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4da560:
    // 0x4da560: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4da560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4da564:
    // 0x4da564: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4da564u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4da568:
    // 0x4da568: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4da568u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4da56c:
    // 0x4da56c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4da56cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4da570:
    // 0x4da570: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_4da574:
    if (ctx->pc == 0x4DA574u) {
        ctx->pc = 0x4DA578u;
        goto label_4da578;
    }
    ctx->pc = 0x4DA570u;
    {
        const bool branch_taken_0x4da570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4da570) {
            ctx->pc = 0x4DA5F0u;
            goto label_4da5f0;
        }
    }
    ctx->pc = 0x4DA578u;
label_4da578:
    // 0x4da578: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4da578u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4da57c:
    // 0x4da57c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4da57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4da580:
    // 0x4da580: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4da580u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_4da584:
    // 0x4da584: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4da584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4da588:
    // 0x4da588: 0x60f809  jalr        $v1
label_4da58c:
    if (ctx->pc == 0x4DA58Cu) {
        ctx->pc = 0x4DA58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA588u;
        // 0x4da58c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA590u;
        goto label_4da590;
    }
    ctx->pc = 0x4DA588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DA590u);
        ctx->pc = 0x4DA58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA588u;
        // 0x4da58c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA588u, 0x4DA590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DA590u;
label_4da590:
    // 0x4da590: 0x26c57b90  addiu       $a1, $s6, 0x7B90
    ctx->pc = 0x4da590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 31632));
label_4da594:
    // 0x4da594: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4da594u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4da598:
    // 0x4da598: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4da598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4da59c:
    // 0x4da59c: 0x21483  sra         $v0, $v0, 18
    ctx->pc = 0x4da59cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 18));
label_4da5a0:
    // 0x4da5a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4da5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4da5a4:
    // 0x4da5a4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x4da5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4da5a8:
    // 0x4da5a8: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4da5a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4da5ac:
    // 0x4da5ac: 0x5474ffe8  bnel        $v1, $s4, . + 4 + (-0x18 << 2)
label_4da5b0:
    if (ctx->pc == 0x4DA5B0u) {
        ctx->pc = 0x4DA5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA5ACu;
        // 0x4da5b0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA5B4u;
        goto label_4da5b4;
    }
    ctx->pc = 0x4DA5ACu;
    {
        const bool branch_taken_0x4da5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x4da5ac) {
            ctx->pc = 0x4DA5B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DA5ACu;
            // 0x4da5b0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DA550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4da550;
        }
    }
    ctx->pc = 0x4DA5B4u;
label_4da5b4:
    // 0x4da5b4: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4da5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
label_4da5b8:
    // 0x4da5b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4da5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4da5bc:
    // 0x4da5bc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4da5bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4da5c0:
    // 0x4da5c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4da5c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4da5c4:
    // 0x4da5c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4da5c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4da5c8:
    // 0x4da5c8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4da5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4da5cc:
    // 0x4da5cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4da5ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4da5d0:
    // 0x4da5d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4da5d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4da5d4:
    // 0x4da5d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4da5d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4da5d8:
    // 0x4da5d8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4da5d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4da5dc:
    // 0x4da5dc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4da5dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4da5e0:
    // 0x4da5e0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4da5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4da5e4:
    // 0x4da5e4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4da5e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4da5e8:
    // 0x4da5e8: 0x8136988  j           func_4DA620
label_4da5ec:
    if (ctx->pc == 0x4DA5ECu) {
        ctx->pc = 0x4DA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA5E8u;
        // 0x4da5ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA5F0u;
        goto label_4da5f0;
    }
    ctx->pc = 0x4DA5E8u;
    ctx->pc = 0x4DA5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA5E8u;
    // 0x4da5ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DA620u;
    goto label_4da620;
    ctx->pc = 0x4DA5F0u;
label_4da5f0:
    // 0x4da5f0: 0xc136dcc  jal         func_4DB730
label_4da5f4:
    if (ctx->pc == 0x4DA5F4u) {
        ctx->pc = 0x4DA5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA5F0u;
        // 0x4da5f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA5F8u;
        goto label_4da5f8;
    }
    ctx->pc = 0x4DA5F0u;
    SET_GPR_U32(ctx, 31, 0x4DA5F8u);
    ctx->pc = 0x4DA5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA5F0u;
    // 0x4da5f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB730u, 0x4DA5F0u, 0x4DA5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA5F8u;
label_4da5f8:
    // 0x4da5f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4da5f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4da5fc:
    // 0x4da5fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4da5fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4da600:
    // 0x4da600: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4da600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4da604:
    // 0x4da604: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4da604u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4da608:
    // 0x4da608: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4da608u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4da60c:
    // 0x4da60c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4da60cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4da610:
    // 0x4da610: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4da610u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4da614:
    // 0x4da614: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4da614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4da618:
    // 0x4da618: 0x3e00008  jr          $ra
label_4da61c:
    if (ctx->pc == 0x4DA61Cu) {
        ctx->pc = 0x4DA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA618u;
        // 0x4da61c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA620u;
        goto label_4da620;
    }
    ctx->pc = 0x4DA618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA618u;
        // 0x4da61c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA620u;
label_4da620:
    // 0x4da620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4da620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4da624:
    // 0x4da624: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4da624u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
label_4da628:
    // 0x4da628: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4da628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4da62c:
    // 0x4da62c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4da62cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4da630:
    // 0x4da630: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4da630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_4da634:
    // 0x4da634: 0x25291100  addiu       $t1, $t1, 0x1100
    ctx->pc = 0x4da634u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4352));
label_4da638:
    // 0x4da638: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4da638u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
label_4da63c:
    // 0x4da63c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4da63cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_4da640:
    // 0x4da640: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4da640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4da644:
    // 0x4da644: 0x24e71104  addiu       $a3, $a3, 0x1104
    ctx->pc = 0x4da644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4356));
label_4da648:
    // 0x4da648: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4da648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4da64c:
    // 0x4da64c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4da64cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4da650:
    // 0x4da650: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4da650u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4da654:
    // 0x4da654: 0x34a50a00  ori         $a1, $a1, 0xA00
    ctx->pc = 0x4da654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2560);
label_4da658:
    // 0x4da658: 0x30c20a00  andi        $v0, $a2, 0xA00
    ctx->pc = 0x4da658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2560);
label_4da65c:
    // 0x4da65c: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x4da65cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_4da660:
    // 0x4da660: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4da660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
label_4da664:
    // 0x4da664: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4da664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4da668:
    // 0x4da668: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4da668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4da66c:
    // 0x4da66c: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4da66cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
label_4da670:
    // 0x4da670: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4da670u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4da674:
    // 0x4da674: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4da674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4da678:
    // 0x4da678: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4da678u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
label_4da67c:
    // 0x4da67c: 0x24a610fc  addiu       $a2, $a1, 0x10FC
    ctx->pc = 0x4da67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4348));
label_4da680:
    // 0x4da680: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4da680u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4da684:
    // 0x4da684: 0x8d08111c  lw          $t0, 0x111C($t0)
    ctx->pc = 0x4da684u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4380)));
label_4da688:
    // 0x4da688: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4da688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4da68c:
    // 0x4da68c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4da68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4da690:
    // 0x4da690: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4da690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_4da694:
    // 0x4da694: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4da694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4da698:
    // 0x4da698: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4da698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4da69c:
    // 0x4da69c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4da69cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4da6a0:
    // 0x4da6a0: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x4da6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_4da6a4:
    // 0x4da6a4: 0x85290000  lh          $t1, 0x0($t1)
    ctx->pc = 0x4da6a4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4da6a8:
    // 0x4da6a8: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4da6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_4da6ac:
    // 0x4da6ac: 0x94e70000  lhu         $a3, 0x0($a3)
    ctx->pc = 0x4da6acu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4da6b0:
    // 0x4da6b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4da6b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4da6b4:
    // 0x4da6b4: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4da6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_4da6b8:
    // 0x4da6b8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4da6b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4da6bc:
    // 0x4da6bc: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4da6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_4da6c0:
    // 0x4da6c0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4da6c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4da6c4:
    // 0x4da6c4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4da6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4da6c8:
    // 0x4da6c8: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4da6c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4da6cc:
    // 0x4da6cc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4da6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_4da6d0:
    // 0x4da6d0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4da6d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4da6d4:
    // 0x4da6d4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4da6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4da6d8:
    // 0x4da6d8: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4da6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_4da6dc:
    // 0x4da6dc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4da6dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_4da6e0:
    // 0x4da6e0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4da6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_4da6e4:
    // 0x4da6e4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4da6e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4da6e8:
    // 0x4da6e8: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4da6e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4da6ec:
    // 0x4da6ec: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4da6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_4da6f0:
    // 0x4da6f0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4da6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_4da6f4:
    // 0x4da6f4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4da6f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4da6f8:
    // 0x4da6f8: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4da6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_4da6fc:
    // 0x4da6fc: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4da6fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4da700:
    // 0x4da700: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x4da700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_4da704:
    // 0x4da704: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4da708:
    if (ctx->pc == 0x4DA708u) {
        ctx->pc = 0x4DA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA704u;
        // 0x4da708: 0x34a3ffff  ori         $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA70Cu;
        goto label_4da70c;
    }
    ctx->pc = 0x4DA704u;
    {
        const bool branch_taken_0x4da704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA704u;
        // 0x4da708: 0x34a3ffff  ori         $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da704) {
            ctx->pc = 0x4DA780u;
            goto label_4da780;
        }
    }
    ctx->pc = 0x4DA70Cu;
label_4da70c:
    // 0x4da70c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4da70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4da710:
    // 0x4da710: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4da710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_4da714:
    // 0x4da714: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4da714u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4da718:
    // 0x4da718: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4da718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_4da71c:
    // 0x4da71c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4da71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4da720:
    // 0x4da720: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4da720u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4da724:
    // 0x4da724: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x4da724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4da728:
    // 0x4da728: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4da728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4da72c:
    // 0x4da72c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4da72cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4da730:
    // 0x4da730: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4da730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
label_4da734:
    // 0x4da734: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4da734u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_4da738:
    // 0x4da738: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4da738u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4da73c:
    // 0x4da73c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4da73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_4da740:
    // 0x4da740: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4da740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4da744:
    // 0x4da744: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4da744u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_4da748:
    // 0x4da748: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4da748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4da74c:
    // 0x4da74c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4da74cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4da750:
    // 0x4da750: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4da750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_4da754:
    // 0x4da754: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4da754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_4da758:
    // 0x4da758: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4da758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4da75c:
    // 0x4da75c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4da75cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_4da760:
    // 0x4da760: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4da760u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4da764:
    // 0x4da764: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x4da764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_4da768:
    // 0x4da768: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4da76c:
    if (ctx->pc == 0x4DA76Cu) {
        ctx->pc = 0x4DA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA768u;
        // 0x4da76c: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA770u;
        goto label_4da770;
    }
    ctx->pc = 0x4DA768u;
    {
        const bool branch_taken_0x4da768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA768u;
        // 0x4da76c: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da768) {
            ctx->pc = 0x4DA780u;
            goto label_4da780;
        }
    }
    ctx->pc = 0x4DA770u;
label_4da770:
    // 0x4da770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4da770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4da774:
    // 0x4da774: 0x8136dcc  j           func_4DB730
label_4da778:
    if (ctx->pc == 0x4DA778u) {
        ctx->pc = 0x4DA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA774u;
        // 0x4da778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA77Cu;
        goto label_4da77c;
    }
    ctx->pc = 0x4DA774u;
    ctx->pc = 0x4DA778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA774u;
    // 0x4da778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB730u;
    sub_004DB730_0x4db730(rdram, ctx, runtime); return;
    ctx->pc = 0x4DA77Cu;
label_4da77c:
    // 0x4da77c: 0x0  nop
    ctx->pc = 0x4da77cu;
    // NOP
label_4da780:
    // 0x4da780: 0xc136bca  jal         func_4DAF28
label_4da784:
    if (ctx->pc == 0x4DA784u) {
        ctx->pc = 0x4DA784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA780u;
        // 0x4da784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA788u;
        goto label_4da788;
    }
    ctx->pc = 0x4DA780u;
    SET_GPR_U32(ctx, 31, 0x4DA788u);
    ctx->pc = 0x4DA784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA780u;
    // 0x4da784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAF28u, 0x4DA780u, 0x4DA788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA788u;
label_4da788:
    // 0x4da788: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4da788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4da78c:
    // 0x4da78c: 0xa602016a  sh          $v0, 0x16A($s0)
    ctx->pc = 0x4da78cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 362), (uint16_t)GPR_U32(ctx, 2));
label_4da790:
    // 0x4da790: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4da790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
label_4da794:
    // 0x4da794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4da794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4da798:
    // 0x4da798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4da798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4da79c:
    // 0x4da79c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4da79cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4da7a0:
    // 0x4da7a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4da7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4da7a4:
    // 0x4da7a4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4da7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4da7a8:
    // 0x4da7a8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4da7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4da7ac:
    // 0x4da7ac: 0x8136dcc  j           func_4DB730
label_4da7b0:
    if (ctx->pc == 0x4DA7B0u) {
        ctx->pc = 0x4DA7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA7ACu;
        // 0x4da7b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA7B4u;
        goto label_4da7b4;
    }
    ctx->pc = 0x4DA7ACu;
    ctx->pc = 0x4DA7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA7ACu;
    // 0x4da7b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB730u;
    sub_004DB730_0x4db730(rdram, ctx, runtime); return;
    ctx->pc = 0x4DA7B4u;
label_4da7b4:
    // 0x4da7b4: 0x0  nop
    ctx->pc = 0x4da7b4u;
    // NOP
    ctx->pc = 0x4da7b8u;
}
