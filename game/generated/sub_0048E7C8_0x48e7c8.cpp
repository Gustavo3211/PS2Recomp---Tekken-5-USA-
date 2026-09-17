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

// Function: sub_0048E7C8
// Address: 0x48e7c8 - 0x48eb20
void sub_0048E7C8_0x48e7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E7C8_0x48e7c8");
#endif

    switch (ctx->pc) {
        case 0x48e7c8u: goto label_48e7c8;
        case 0x48e7ccu: goto label_48e7cc;
        case 0x48e7d0u: goto label_48e7d0;
        case 0x48e7d4u: goto label_48e7d4;
        case 0x48e7d8u: goto label_48e7d8;
        case 0x48e7dcu: goto label_48e7dc;
        case 0x48e7e0u: goto label_48e7e0;
        case 0x48e7e4u: goto label_48e7e4;
        case 0x48e7e8u: goto label_48e7e8;
        case 0x48e7ecu: goto label_48e7ec;
        case 0x48e7f0u: goto label_48e7f0;
        case 0x48e7f4u: goto label_48e7f4;
        case 0x48e7f8u: goto label_48e7f8;
        case 0x48e7fcu: goto label_48e7fc;
        case 0x48e800u: goto label_48e800;
        case 0x48e804u: goto label_48e804;
        case 0x48e808u: goto label_48e808;
        case 0x48e80cu: goto label_48e80c;
        case 0x48e810u: goto label_48e810;
        case 0x48e814u: goto label_48e814;
        case 0x48e818u: goto label_48e818;
        case 0x48e81cu: goto label_48e81c;
        case 0x48e820u: goto label_48e820;
        case 0x48e824u: goto label_48e824;
        case 0x48e828u: goto label_48e828;
        case 0x48e82cu: goto label_48e82c;
        case 0x48e830u: goto label_48e830;
        case 0x48e834u: goto label_48e834;
        case 0x48e838u: goto label_48e838;
        case 0x48e83cu: goto label_48e83c;
        case 0x48e840u: goto label_48e840;
        case 0x48e844u: goto label_48e844;
        case 0x48e848u: goto label_48e848;
        case 0x48e84cu: goto label_48e84c;
        case 0x48e850u: goto label_48e850;
        case 0x48e854u: goto label_48e854;
        case 0x48e858u: goto label_48e858;
        case 0x48e85cu: goto label_48e85c;
        case 0x48e860u: goto label_48e860;
        case 0x48e864u: goto label_48e864;
        case 0x48e868u: goto label_48e868;
        case 0x48e86cu: goto label_48e86c;
        case 0x48e870u: goto label_48e870;
        case 0x48e874u: goto label_48e874;
        case 0x48e878u: goto label_48e878;
        case 0x48e87cu: goto label_48e87c;
        case 0x48e880u: goto label_48e880;
        case 0x48e884u: goto label_48e884;
        case 0x48e888u: goto label_48e888;
        case 0x48e88cu: goto label_48e88c;
        case 0x48e890u: goto label_48e890;
        case 0x48e894u: goto label_48e894;
        case 0x48e898u: goto label_48e898;
        case 0x48e89cu: goto label_48e89c;
        case 0x48e8a0u: goto label_48e8a0;
        case 0x48e8a4u: goto label_48e8a4;
        case 0x48e8a8u: goto label_48e8a8;
        case 0x48e8acu: goto label_48e8ac;
        case 0x48e8b0u: goto label_48e8b0;
        case 0x48e8b4u: goto label_48e8b4;
        case 0x48e8b8u: goto label_48e8b8;
        case 0x48e8bcu: goto label_48e8bc;
        case 0x48e8c0u: goto label_48e8c0;
        case 0x48e8c4u: goto label_48e8c4;
        case 0x48e8c8u: goto label_48e8c8;
        case 0x48e8ccu: goto label_48e8cc;
        case 0x48e8d0u: goto label_48e8d0;
        case 0x48e8d4u: goto label_48e8d4;
        case 0x48e8d8u: goto label_48e8d8;
        case 0x48e8dcu: goto label_48e8dc;
        case 0x48e8e0u: goto label_48e8e0;
        case 0x48e8e4u: goto label_48e8e4;
        case 0x48e8e8u: goto label_48e8e8;
        case 0x48e8ecu: goto label_48e8ec;
        case 0x48e8f0u: goto label_48e8f0;
        case 0x48e8f4u: goto label_48e8f4;
        case 0x48e8f8u: goto label_48e8f8;
        case 0x48e8fcu: goto label_48e8fc;
        case 0x48e900u: goto label_48e900;
        case 0x48e904u: goto label_48e904;
        case 0x48e908u: goto label_48e908;
        case 0x48e90cu: goto label_48e90c;
        case 0x48e910u: goto label_48e910;
        case 0x48e914u: goto label_48e914;
        case 0x48e918u: goto label_48e918;
        case 0x48e91cu: goto label_48e91c;
        case 0x48e920u: goto label_48e920;
        case 0x48e924u: goto label_48e924;
        case 0x48e928u: goto label_48e928;
        case 0x48e92cu: goto label_48e92c;
        case 0x48e930u: goto label_48e930;
        case 0x48e934u: goto label_48e934;
        case 0x48e938u: goto label_48e938;
        case 0x48e93cu: goto label_48e93c;
        case 0x48e940u: goto label_48e940;
        case 0x48e944u: goto label_48e944;
        case 0x48e948u: goto label_48e948;
        case 0x48e94cu: goto label_48e94c;
        case 0x48e950u: goto label_48e950;
        case 0x48e954u: goto label_48e954;
        case 0x48e958u: goto label_48e958;
        case 0x48e95cu: goto label_48e95c;
        case 0x48e960u: goto label_48e960;
        case 0x48e964u: goto label_48e964;
        case 0x48e968u: goto label_48e968;
        case 0x48e96cu: goto label_48e96c;
        case 0x48e970u: goto label_48e970;
        case 0x48e974u: goto label_48e974;
        case 0x48e978u: goto label_48e978;
        case 0x48e97cu: goto label_48e97c;
        case 0x48e980u: goto label_48e980;
        case 0x48e984u: goto label_48e984;
        case 0x48e988u: goto label_48e988;
        case 0x48e98cu: goto label_48e98c;
        case 0x48e990u: goto label_48e990;
        case 0x48e994u: goto label_48e994;
        case 0x48e998u: goto label_48e998;
        case 0x48e99cu: goto label_48e99c;
        case 0x48e9a0u: goto label_48e9a0;
        case 0x48e9a4u: goto label_48e9a4;
        case 0x48e9a8u: goto label_48e9a8;
        case 0x48e9acu: goto label_48e9ac;
        case 0x48e9b0u: goto label_48e9b0;
        case 0x48e9b4u: goto label_48e9b4;
        case 0x48e9b8u: goto label_48e9b8;
        case 0x48e9bcu: goto label_48e9bc;
        case 0x48e9c0u: goto label_48e9c0;
        case 0x48e9c4u: goto label_48e9c4;
        case 0x48e9c8u: goto label_48e9c8;
        case 0x48e9ccu: goto label_48e9cc;
        case 0x48e9d0u: goto label_48e9d0;
        case 0x48e9d4u: goto label_48e9d4;
        case 0x48e9d8u: goto label_48e9d8;
        case 0x48e9dcu: goto label_48e9dc;
        case 0x48e9e0u: goto label_48e9e0;
        case 0x48e9e4u: goto label_48e9e4;
        case 0x48e9e8u: goto label_48e9e8;
        case 0x48e9ecu: goto label_48e9ec;
        case 0x48e9f0u: goto label_48e9f0;
        case 0x48e9f4u: goto label_48e9f4;
        case 0x48e9f8u: goto label_48e9f8;
        case 0x48e9fcu: goto label_48e9fc;
        case 0x48ea00u: goto label_48ea00;
        case 0x48ea04u: goto label_48ea04;
        case 0x48ea08u: goto label_48ea08;
        case 0x48ea0cu: goto label_48ea0c;
        case 0x48ea10u: goto label_48ea10;
        case 0x48ea14u: goto label_48ea14;
        case 0x48ea18u: goto label_48ea18;
        case 0x48ea1cu: goto label_48ea1c;
        case 0x48ea20u: goto label_48ea20;
        case 0x48ea24u: goto label_48ea24;
        case 0x48ea28u: goto label_48ea28;
        case 0x48ea2cu: goto label_48ea2c;
        case 0x48ea30u: goto label_48ea30;
        case 0x48ea34u: goto label_48ea34;
        case 0x48ea38u: goto label_48ea38;
        case 0x48ea3cu: goto label_48ea3c;
        case 0x48ea40u: goto label_48ea40;
        case 0x48ea44u: goto label_48ea44;
        case 0x48ea48u: goto label_48ea48;
        case 0x48ea4cu: goto label_48ea4c;
        case 0x48ea50u: goto label_48ea50;
        case 0x48ea54u: goto label_48ea54;
        case 0x48ea58u: goto label_48ea58;
        case 0x48ea5cu: goto label_48ea5c;
        case 0x48ea60u: goto label_48ea60;
        case 0x48ea64u: goto label_48ea64;
        case 0x48ea68u: goto label_48ea68;
        case 0x48ea6cu: goto label_48ea6c;
        case 0x48ea70u: goto label_48ea70;
        case 0x48ea74u: goto label_48ea74;
        case 0x48ea78u: goto label_48ea78;
        case 0x48ea7cu: goto label_48ea7c;
        case 0x48ea80u: goto label_48ea80;
        case 0x48ea84u: goto label_48ea84;
        case 0x48ea88u: goto label_48ea88;
        case 0x48ea8cu: goto label_48ea8c;
        case 0x48ea90u: goto label_48ea90;
        case 0x48ea94u: goto label_48ea94;
        case 0x48ea98u: goto label_48ea98;
        case 0x48ea9cu: goto label_48ea9c;
        case 0x48eaa0u: goto label_48eaa0;
        case 0x48eaa4u: goto label_48eaa4;
        case 0x48eaa8u: goto label_48eaa8;
        case 0x48eaacu: goto label_48eaac;
        case 0x48eab0u: goto label_48eab0;
        case 0x48eab4u: goto label_48eab4;
        case 0x48eab8u: goto label_48eab8;
        case 0x48eabcu: goto label_48eabc;
        case 0x48eac0u: goto label_48eac0;
        case 0x48eac4u: goto label_48eac4;
        case 0x48eac8u: goto label_48eac8;
        case 0x48eaccu: goto label_48eacc;
        case 0x48ead0u: goto label_48ead0;
        case 0x48ead4u: goto label_48ead4;
        case 0x48ead8u: goto label_48ead8;
        case 0x48eadcu: goto label_48eadc;
        case 0x48eae0u: goto label_48eae0;
        case 0x48eae4u: goto label_48eae4;
        case 0x48eae8u: goto label_48eae8;
        case 0x48eaecu: goto label_48eaec;
        case 0x48eaf0u: goto label_48eaf0;
        case 0x48eaf4u: goto label_48eaf4;
        case 0x48eaf8u: goto label_48eaf8;
        case 0x48eafcu: goto label_48eafc;
        case 0x48eb00u: goto label_48eb00;
        case 0x48eb04u: goto label_48eb04;
        case 0x48eb08u: goto label_48eb08;
        case 0x48eb0cu: goto label_48eb0c;
        case 0x48eb10u: goto label_48eb10;
        case 0x48eb14u: goto label_48eb14;
        case 0x48eb18u: goto label_48eb18;
        case 0x48eb1cu: goto label_48eb1c;
        default: break;
    }

    ctx->pc = 0x48e7c8u;

label_48e7c8:
    // 0x48e7c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48e7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_48e7cc:
    // 0x48e7cc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_48e7d0:
    // 0x48e7d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48e7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48e7d4:
    // 0x48e7d4: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x48e7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
label_48e7d8:
    // 0x48e7d8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x48e7d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_48e7dc:
    // 0x48e7dc: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x48e7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_48e7e0:
    // 0x48e7e0: 0x28420014  slti        $v0, $v0, 0x14
    ctx->pc = 0x48e7e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
label_48e7e4:
    // 0x48e7e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_48e7e8:
    if (ctx->pc == 0x48E7E8u) {
        ctx->pc = 0x48E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E7E4u;
        // 0x48e7e8: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E7ECu;
        goto label_48e7ec;
    }
    ctx->pc = 0x48E7E4u;
    {
        const bool branch_taken_0x48e7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E7E4u;
        // 0x48e7e8: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e7e4) {
            ctx->pc = 0x48E800u;
            goto label_48e800;
        }
    }
    ctx->pc = 0x48E7ECu;
label_48e7ec:
    // 0x48e7ec: 0xc12381a  jal         func_48E068
label_48e7f0:
    if (ctx->pc == 0x48E7F0u) {
        ctx->pc = 0x48E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E7ECu;
        // 0x48e7f0: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E7F4u;
        goto label_48e7f4;
    }
    ctx->pc = 0x48E7ECu;
    SET_GPR_U32(ctx, 31, 0x48E7F4u);
    ctx->pc = 0x48E7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E7ECu;
    // 0x48e7f0: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E068u, 0x48E7ECu, 0x48E7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E7F4u;
label_48e7f4:
    // 0x48e7f4: 0x10000005  b           . + 4 + (0x5 << 2)
label_48e7f8:
    if (ctx->pc == 0x48E7F8u) {
        ctx->pc = 0x48E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E7F4u;
        // 0x48e7f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E7FCu;
        goto label_48e7fc;
    }
    ctx->pc = 0x48E7F4u;
    {
        const bool branch_taken_0x48e7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E7F4u;
        // 0x48e7f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e7f4) {
            ctx->pc = 0x48E80Cu;
            goto label_48e80c;
        }
    }
    ctx->pc = 0x48E7FCu;
label_48e7fc:
    // 0x48e7fc: 0x0  nop
    ctx->pc = 0x48e7fcu;
    // NOP
label_48e800:
    // 0x48e800: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x48e800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_48e804:
    // 0x48e804: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x48e804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_48e808:
    // 0x48e808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48e80c:
    // 0x48e80c: 0x8123a06  j           func_48E818
label_48e810:
    if (ctx->pc == 0x48E810u) {
        ctx->pc = 0x48E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E80Cu;
        // 0x48e810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E814u;
        goto label_48e814;
    }
    ctx->pc = 0x48E80Cu;
    ctx->pc = 0x48E810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E80Cu;
    // 0x48e810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E818u;
    goto label_48e818;
    ctx->pc = 0x48E814u;
label_48e814:
    // 0x48e814: 0x0  nop
    ctx->pc = 0x48e814u;
    // NOP
label_48e818:
    // 0x48e818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48e818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_48e81c:
    // 0x48e81c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_48e820:
    // 0x48e820: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48e820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_48e824:
    // 0x48e824: 0x2471d600  addiu       $s1, $v1, -0x2A00
    ctx->pc = 0x48e824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956544));
label_48e828:
    // 0x48e828: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48e828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_48e82c:
    // 0x48e82c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48e82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_48e830:
    // 0x48e830: 0x96220054  lhu         $v0, 0x54($s1)
    ctx->pc = 0x48e830u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_48e834:
    // 0x48e834: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x48e834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_48e838:
    // 0x48e838: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_48e83c:
    if (ctx->pc == 0x48E83Cu) {
        ctx->pc = 0x48E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E838u;
        // 0x48e83c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E840u;
        goto label_48e840;
    }
    ctx->pc = 0x48E838u;
    {
        const bool branch_taken_0x48e838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e838) {
            ctx->pc = 0x48E83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48E838u;
            // 0x48e83c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48E858u;
            goto label_48e858;
        }
    }
    ctx->pc = 0x48E840u;
label_48e840:
    // 0x48e840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48e840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48e844:
    // 0x48e844: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48e844u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_48e848:
    // 0x48e848: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48e848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48e84c:
    // 0x48e84c: 0x8123a38  j           func_48E8E0
label_48e850:
    if (ctx->pc == 0x48E850u) {
        ctx->pc = 0x48E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E84Cu;
        // 0x48e850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E854u;
        goto label_48e854;
    }
    ctx->pc = 0x48E84Cu;
    ctx->pc = 0x48E850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E84Cu;
    // 0x48e850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E8E0u;
    goto label_48e8e0;
    ctx->pc = 0x48E854u;
label_48e854:
    // 0x48e854: 0x0  nop
    ctx->pc = 0x48e854u;
    // NOP
label_48e858:
    // 0x48e858: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x48e858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48e85c:
    // 0x48e85c: 0x2470d680  addiu       $s0, $v1, -0x2980
    ctx->pc = 0x48e85cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
label_48e860:
    // 0x48e860: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x48e860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_48e864:
    // 0x48e864: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x48e864u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
label_48e868:
    // 0x48e868: 0xc124910  jal         func_492440
label_48e86c:
    if (ctx->pc == 0x48E86Cu) {
        ctx->pc = 0x48E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E868u;
        // 0x48e86c: 0xa600000a  sh          $zero, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E870u;
        goto label_48e870;
    }
    ctx->pc = 0x48E868u;
    SET_GPR_U32(ctx, 31, 0x48E870u);
    ctx->pc = 0x48E86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E868u;
    // 0x48e86c: 0xa600000a  sh          $zero, 0xA($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x48E868u, 0x48E870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E870u;
label_48e870:
    // 0x48e870: 0xc1233c0  jal         func_48CF00
label_48e874:
    if (ctx->pc == 0x48E874u) {
        ctx->pc = 0x48E878u;
        goto label_48e878;
    }
    ctx->pc = 0x48E870u;
    SET_GPR_U32(ctx, 31, 0x48E878u);
    ctx->pc = 0x48CF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF00u, 0x48E870u, 0x48E878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E878u;
label_48e878:
    // 0x48e878: 0x86040024  lh          $a0, 0x24($s0)
    ctx->pc = 0x48e878u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_48e87c:
    // 0x48e87c: 0xc124ae6  jal         func_492B98
label_48e880:
    if (ctx->pc == 0x48E880u) {
        ctx->pc = 0x48E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E87Cu;
        // 0x48e880: 0xa600001a  sh          $zero, 0x1A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E884u;
        goto label_48e884;
    }
    ctx->pc = 0x48E87Cu;
    SET_GPR_U32(ctx, 31, 0x48E884u);
    ctx->pc = 0x48E880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E87Cu;
    // 0x48e880: 0xa600001a  sh          $zero, 0x1A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492B98u, 0x48E87Cu, 0x48E884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E884u;
label_48e884:
    // 0x48e884: 0xc124136  jal         func_4904D8
label_48e888:
    if (ctx->pc == 0x48E888u) {
        ctx->pc = 0x48E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E884u;
        // 0x48e888: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E88Cu;
        goto label_48e88c;
    }
    ctx->pc = 0x48E884u;
    SET_GPR_U32(ctx, 31, 0x48E88Cu);
    ctx->pc = 0x48E888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E884u;
    // 0x48e888: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904D8u, 0x48E884u, 0x48E88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E88Cu;
label_48e88c:
    // 0x48e88c: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x48e88cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_48e890:
    // 0x48e890: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x48e890u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_48e894:
    // 0x48e894: 0x26060096  addiu       $a2, $s0, 0x96
    ctx->pc = 0x48e894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 150));
label_48e898:
    // 0x48e898: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x48e898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_48e89c:
    // 0x48e89c: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x48e89cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_48e8a0:
    // 0x48e8a0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x48e8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_48e8a4:
    // 0x48e8a4: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x48e8a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_48e8a8:
    // 0x48e8a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48e8ac:
    // 0x48e8ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x48e8acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48e8b0:
    // 0x48e8b0: 0x45180a  movz        $v1, $v0, $a1
    ctx->pc = 0x48e8b0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_48e8b4:
    // 0x48e8b4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_48e8b8:
    if (ctx->pc == 0x48E8B8u) {
        ctx->pc = 0x48E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E8B4u;
        // 0x48e8b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E8BCu;
        goto label_48e8bc;
    }
    ctx->pc = 0x48E8B4u;
    {
        const bool branch_taken_0x48e8b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x48E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E8B4u;
        // 0x48e8b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e8b4) {
            ctx->pc = 0x48E8C8u;
            goto label_48e8c8;
        }
    }
    ctx->pc = 0x48E8BCu;
label_48e8bc:
    // 0x48e8bc: 0xa6022210  sh          $v0, 0x2210($s0)
    ctx->pc = 0x48e8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8720), (uint16_t)GPR_U32(ctx, 2));
label_48e8c0:
    // 0x48e8c0: 0xc122cc6  jal         func_48B318
label_48e8c4:
    if (ctx->pc == 0x48E8C4u) {
        ctx->pc = 0x48E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E8C0u;
        // 0x48e8c4: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E8C8u;
        goto label_48e8c8;
    }
    ctx->pc = 0x48E8C0u;
    SET_GPR_U32(ctx, 31, 0x48E8C8u);
    ctx->pc = 0x48E8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E8C0u;
    // 0x48e8c4: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B318u, 0x48E8C0u, 0x48E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E8C8u;
label_48e8c8:
    // 0x48e8c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48e8c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48e8cc:
    // 0x48e8cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48e8ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_48e8d0:
    // 0x48e8d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48e8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48e8d4:
    // 0x48e8d4: 0x3e00008  jr          $ra
label_48e8d8:
    if (ctx->pc == 0x48E8D8u) {
        ctx->pc = 0x48E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E8D4u;
        // 0x48e8d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E8DCu;
        goto label_48e8dc;
    }
    ctx->pc = 0x48E8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E8D4u;
        // 0x48e8d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E8DCu;
label_48e8dc:
    // 0x48e8dc: 0x0  nop
    ctx->pc = 0x48e8dcu;
    // NOP
label_48e8e0:
    // 0x48e8e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48e8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_48e8e4:
    // 0x48e8e4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_48e8e8:
    // 0x48e8e8: 0x2443d680  addiu       $v1, $v0, -0x2980
    ctx->pc = 0x48e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
label_48e8ec:
    // 0x48e8ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48e8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_48e8f0:
    // 0x48e8f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48e8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_48e8f4:
    // 0x48e8f4: 0x24710014  addiu       $s1, $v1, 0x14
    ctx->pc = 0x48e8f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_48e8f8:
    // 0x48e8f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x48e8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_48e8fc:
    // 0x48e8fc: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x48e8fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_48e900:
    // 0x48e900: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x48e900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_48e904:
    // 0x48e904: 0x24730012  addiu       $s3, $v1, 0x12
    ctx->pc = 0x48e904u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 18));
label_48e908:
    // 0x48e908: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x48e908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_48e90c:
    // 0x48e90c: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x48e90cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_48e910:
    // 0x48e910: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x48e910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_48e914:
    // 0x48e914: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x48e914u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_48e918:
    // 0x48e918: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x48e918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_48e91c:
    // 0x48e91c: 0x24b0deb8  addiu       $s0, $a1, -0x2148
    ctx->pc = 0x48e91cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958776));
label_48e920:
    // 0x48e920: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x48e920u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_48e924:
    // 0x48e924: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x48e924u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_48e928:
    // 0x48e928: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x48e928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_48e92c:
    // 0x48e92c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48e92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_48e930:
    // 0x48e930: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x48e930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_48e934:
    // 0x48e934: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48e934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_48e938:
    // 0x48e938: 0x1070000b  beq         $v1, $s0, . + 4 + (0xB << 2)
label_48e93c:
    if (ctx->pc == 0x48E93Cu) {
        ctx->pc = 0x48E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E938u;
        // 0x48e93c: 0x26b422d4  addiu       $s4, $s5, 0x22D4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 8916));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E940u;
        goto label_48e940;
    }
    ctx->pc = 0x48E938u;
    {
        const bool branch_taken_0x48e938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x48E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E938u;
        // 0x48e93c: 0x26b422d4  addiu       $s4, $s5, 0x22D4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 8916));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e938) {
            ctx->pc = 0x48E968u;
            goto label_48e968;
        }
    }
    ctx->pc = 0x48E940u;
label_48e940:
    // 0x48e940: 0xc12376c  jal         func_48DDB0
label_48e944:
    if (ctx->pc == 0x48E944u) {
        ctx->pc = 0x48E948u;
        goto label_48e948;
    }
    ctx->pc = 0x48E940u;
    SET_GPR_U32(ctx, 31, 0x48E948u);
    ctx->pc = 0x48DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DDB0u, 0x48E940u, 0x48E948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E948u;
label_48e948:
    // 0x48e948: 0x2121024  and         $v0, $s0, $s2
    ctx->pc = 0x48e948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 18));
label_48e94c:
    // 0x48e94c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x48e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_48e950:
    // 0x48e950: 0xa6300000  sh          $s0, 0x0($s1)
    ctx->pc = 0x48e950u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 16));
label_48e954:
    // 0x48e954: 0xc1232f2  jal         func_48CBC8
label_48e958:
    if (ctx->pc == 0x48E958u) {
        ctx->pc = 0x48E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E954u;
        // 0x48e958: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E95Cu;
        goto label_48e95c;
    }
    ctx->pc = 0x48E954u;
    SET_GPR_U32(ctx, 31, 0x48E95Cu);
    ctx->pc = 0x48E958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E954u;
    // 0x48e958: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x48E954u, 0x48E95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E95Cu;
label_48e95c:
    // 0x48e95c: 0x1000000d  b           . + 4 + (0xD << 2)
label_48e960:
    if (ctx->pc == 0x48E960u) {
        ctx->pc = 0x48E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E95Cu;
        // 0x48e960: 0xa440001e  sh          $zero, 0x1E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 30), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E964u;
        goto label_48e964;
    }
    ctx->pc = 0x48E95Cu;
    {
        const bool branch_taken_0x48e95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E95Cu;
        // 0x48e960: 0xa440001e  sh          $zero, 0x1E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 30), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e95c) {
            ctx->pc = 0x48E994u;
            goto label_48e994;
        }
    }
    ctx->pc = 0x48E964u;
label_48e964:
    // 0x48e964: 0x0  nop
    ctx->pc = 0x48e964u;
    // NOP
label_48e968:
    // 0x48e968: 0xc1232f2  jal         func_48CBC8
label_48e96c:
    if (ctx->pc == 0x48E96Cu) {
        ctx->pc = 0x48E970u;
        goto label_48e970;
    }
    ctx->pc = 0x48E968u;
    SET_GPR_U32(ctx, 31, 0x48E970u);
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x48E968u, 0x48E970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E970u;
label_48e970:
    // 0x48e970: 0x8443001e  lh          $v1, 0x1E($v0)
    ctx->pc = 0x48e970u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 30)));
label_48e974:
    // 0x48e974: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_48e978:
    if (ctx->pc == 0x48E978u) {
        ctx->pc = 0x48E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E974u;
        // 0x48e978: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E97Cu;
        goto label_48e97c;
    }
    ctx->pc = 0x48E974u;
    {
        const bool branch_taken_0x48e974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E974u;
        // 0x48e978: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e974) {
            ctx->pc = 0x48E994u;
            goto label_48e994;
        }
    }
    ctx->pc = 0x48E97Cu;
label_48e97c:
    // 0x48e97c: 0xc1233ec  jal         func_48CFB0
label_48e980:
    if (ctx->pc == 0x48E980u) {
        ctx->pc = 0x48E984u;
        goto label_48e984;
    }
    ctx->pc = 0x48E97Cu;
    SET_GPR_U32(ctx, 31, 0x48E984u);
    ctx->pc = 0x48CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CFB0u, 0x48E97Cu, 0x48E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E984u;
label_48e984:
    // 0x48e984: 0xc1233ec  jal         func_48CFB0
label_48e988:
    if (ctx->pc == 0x48E988u) {
        ctx->pc = 0x48E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E984u;
        // 0x48e988: 0x240400d5  addiu       $a0, $zero, 0xD5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E98Cu;
        goto label_48e98c;
    }
    ctx->pc = 0x48E984u;
    SET_GPR_U32(ctx, 31, 0x48E98Cu);
    ctx->pc = 0x48E988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E984u;
    // 0x48e988: 0x240400d5  addiu       $a0, $zero, 0xD5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CFB0u, 0x48E984u, 0x48E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E98Cu;
label_48e98c:
    // 0x48e98c: 0xc123700  jal         func_48DC00
label_48e990:
    if (ctx->pc == 0x48E990u) {
        ctx->pc = 0x48E994u;
        goto label_48e994;
    }
    ctx->pc = 0x48E98Cu;
    SET_GPR_U32(ctx, 31, 0x48E994u);
    ctx->pc = 0x48DC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DC00u, 0x48E98Cu, 0x48E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E994u;
label_48e994:
    // 0x48e994: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x48e994u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_48e998:
    // 0x48e998: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_48e99c:
    if (ctx->pc == 0x48E99Cu) {
        ctx->pc = 0x48E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E998u;
        // 0x48e99c: 0xa6a00016  sh          $zero, 0x16($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 22), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E9A0u;
        goto label_48e9a0;
    }
    ctx->pc = 0x48E998u;
    {
        const bool branch_taken_0x48e998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e998) {
            ctx->pc = 0x48E99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48E998u;
            // 0x48e99c: 0xa6a00016  sh          $zero, 0x16($s5) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 21), 22), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48E9B4u;
            goto label_48e9b4;
        }
    }
    ctx->pc = 0x48E9A0u;
label_48e9a0:
    // 0x48e9a0: 0xc123b70  jal         func_48EDC0
label_48e9a4:
    if (ctx->pc == 0x48E9A4u) {
        ctx->pc = 0x48E9A8u;
        goto label_48e9a8;
    }
    ctx->pc = 0x48E9A0u;
    SET_GPR_U32(ctx, 31, 0x48E9A8u);
    ctx->pc = 0x48EDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EDC0u, 0x48E9A0u, 0x48E9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E9A8u;
label_48e9a8:
    // 0x48e9a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48e9ac:
    // 0x48e9ac: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x48e9acu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_48e9b0:
    // 0x48e9b0: 0xa6a00016  sh          $zero, 0x16($s5)
    ctx->pc = 0x48e9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 22), (uint16_t)GPR_U32(ctx, 0));
label_48e9b4:
    // 0x48e9b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48e9b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48e9b8:
    // 0x48e9b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48e9b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_48e9bc:
    // 0x48e9bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48e9bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48e9c0:
    // 0x48e9c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x48e9c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_48e9c4:
    // 0x48e9c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x48e9c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48e9c8:
    // 0x48e9c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x48e9c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_48e9cc:
    // 0x48e9cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x48e9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_48e9d0:
    // 0x48e9d0: 0x8123a76  j           func_48E9D8
label_48e9d4:
    if (ctx->pc == 0x48E9D4u) {
        ctx->pc = 0x48E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E9D0u;
        // 0x48e9d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48E9D8u;
        goto label_48e9d8;
    }
    ctx->pc = 0x48E9D0u;
    ctx->pc = 0x48E9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E9D0u;
    // 0x48e9d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E9D8u;
    goto label_48e9d8;
    ctx->pc = 0x48E9D8u;
label_48e9d8:
    // 0x48e9d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48e9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_48e9dc:
    // 0x48e9dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48e9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_48e9e0:
    // 0x48e9e0: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x48e9e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
label_48e9e4:
    // 0x48e9e4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x48e9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_48e9e8:
    // 0x48e9e8: 0x2636d680  addiu       $s6, $s1, -0x2980
    ctx->pc = 0x48e9e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
label_48e9ec:
    // 0x48e9ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48e9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_48e9f0:
    // 0x48e9f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x48e9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_48e9f4:
    // 0x48e9f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x48e9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_48e9f8:
    // 0x48e9f8: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x48e9f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_48e9fc:
    // 0x48e9fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x48e9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_48ea00:
    // 0x48ea00: 0x2493000e  addiu       $s3, $a0, 0xE
    ctx->pc = 0x48ea00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 14));
label_48ea04:
    // 0x48ea04: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x48ea04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_48ea08:
    // 0x48ea08: 0x24940010  addiu       $s4, $a0, 0x10
    ctx->pc = 0x48ea08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_48ea0c:
    // 0x48ea0c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x48ea0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_48ea10:
    // 0x48ea10: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x48ea10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_48ea14:
    // 0x48ea14: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x48ea14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_48ea18:
    // 0x48ea18: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x48ea18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_48ea1c:
    // 0x48ea1c: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x48ea1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_48ea20:
    // 0x48ea20: 0x94820016  lhu         $v0, 0x16($a0)
    ctx->pc = 0x48ea20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
label_48ea24:
    // 0x48ea24: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x48ea24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_48ea28:
    // 0x48ea28: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x48ea28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
label_48ea2c:
    // 0x48ea2c: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x48ea2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_48ea30:
    // 0x48ea30: 0xa38024  and         $s0, $a1, $v1
    ctx->pc = 0x48ea30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_48ea34:
    // 0x48ea34: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x48ea34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_48ea38:
    // 0x48ea38: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x48ea38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_48ea3c:
    // 0x48ea3c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_48ea40:
    if (ctx->pc == 0x48EA40u) {
        ctx->pc = 0x48EA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EA3Cu;
        // 0x48ea40: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EA44u;
        goto label_48ea44;
    }
    ctx->pc = 0x48EA3Cu;
    {
        const bool branch_taken_0x48ea3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48EA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EA3Cu;
        // 0x48ea40: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ea3c) {
            ctx->pc = 0x48EAB0u;
            goto label_48eab0;
        }
    }
    ctx->pc = 0x48EA44u;
label_48ea44:
    // 0x48ea44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x48ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_48ea48:
    // 0x48ea48: 0x40f809  jalr        $v0
label_48ea4c:
    if (ctx->pc == 0x48EA4Cu) {
        ctx->pc = 0x48EA50u;
        goto label_48ea50;
    }
    ctx->pc = 0x48EA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48EA50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48EA48u, 0x48EA50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48EA50u;
label_48ea50:
    // 0x48ea50: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x48ea50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_48ea54:
    // 0x48ea54: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x48ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_48ea58:
    // 0x48ea58: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x48ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_48ea5c:
    // 0x48ea5c: 0x24706e00  addiu       $s0, $v1, 0x6E00
    ctx->pc = 0x48ea5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 28160));
label_48ea60:
    // 0x48ea60: 0x2502024  and         $a0, $s2, $s0
    ctx->pc = 0x48ea60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
label_48ea64:
    // 0x48ea64: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x48ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_48ea68:
    // 0x48ea68: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x48ea68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_48ea6c:
    // 0x48ea6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_48ea70:
    if (ctx->pc == 0x48EA70u) {
        ctx->pc = 0x48EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EA6Cu;
        // 0x48ea70: 0x42402  srl         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EA74u;
        goto label_48ea74;
    }
    ctx->pc = 0x48EA6Cu;
    {
        const bool branch_taken_0x48ea6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EA6Cu;
        // 0x48ea70: 0x42402  srl         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ea6c) {
            ctx->pc = 0x48EA90u;
            goto label_48ea90;
        }
    }
    ctx->pc = 0x48EA74u;
label_48ea74:
    // 0x48ea74: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x48ea74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_48ea78:
    // 0x48ea78: 0x26106e10  addiu       $s0, $s0, 0x6E10
    ctx->pc = 0x48ea78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28176));
label_48ea7c:
    // 0x48ea7c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x48ea7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_48ea80:
    // 0x48ea80: 0x2121024  and         $v0, $s0, $s2
    ctx->pc = 0x48ea80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 18));
label_48ea84:
    // 0x48ea84: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x48ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_48ea88:
    // 0x48ea88: 0x10000002  b           . + 4 + (0x2 << 2)
label_48ea8c:
    if (ctx->pc == 0x48EA8Cu) {
        ctx->pc = 0x48EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EA88u;
        // 0x48ea8c: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EA90u;
        goto label_48ea90;
    }
    ctx->pc = 0x48EA88u;
    {
        const bool branch_taken_0x48ea88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EA88u;
        // 0x48ea8c: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ea88) {
            ctx->pc = 0x48EA94u;
            goto label_48ea94;
        }
    }
    ctx->pc = 0x48EA90u;
label_48ea90:
    // 0x48ea90: 0xa6640000  sh          $a0, 0x0($s3)
    ctx->pc = 0x48ea90u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 4));
label_48ea94:
    // 0x48ea94: 0xa6900000  sh          $s0, 0x0($s4)
    ctx->pc = 0x48ea94u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 16));
label_48ea98:
    // 0x48ea98: 0x8eb00008  lw          $s0, 0x8($s5)
    ctx->pc = 0x48ea98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_48ea9c:
    // 0x48ea9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48ea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48eaa0:
    // 0x48eaa0: 0xa4a30016  sh          $v1, 0x16($a1)
    ctx->pc = 0x48eaa0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 3));
label_48eaa4:
    // 0x48eaa4: 0x101402  srl         $v0, $s0, 16
    ctx->pc = 0x48eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
label_48eaa8:
    // 0x48eaa8: 0xa4b00014  sh          $s0, 0x14($a1)
    ctx->pc = 0x48eaa8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 16));
label_48eaac:
    // 0x48eaac: 0xa4a20012  sh          $v0, 0x12($a1)
    ctx->pc = 0x48eaacu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 2));
label_48eab0:
    // 0x48eab0: 0x26c30016  addiu       $v1, $s6, 0x16
    ctx->pc = 0x48eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 22));
label_48eab4:
    // 0x48eab4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x48eab4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_48eab8:
    // 0x48eab8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x48eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_48eabc:
    // 0x48eabc: 0xc1246f2  jal         func_491BC8
label_48eac0:
    if (ctx->pc == 0x48EAC0u) {
        ctx->pc = 0x48EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EABCu;
        // 0x48eac0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EAC4u;
        goto label_48eac4;
    }
    ctx->pc = 0x48EABCu;
    SET_GPR_U32(ctx, 31, 0x48EAC4u);
    ctx->pc = 0x48EAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48EABCu;
    // 0x48eac0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491BC8u, 0x48EABCu, 0x48EAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48EAC4u;
label_48eac4:
    // 0x48eac4: 0x96c30012  lhu         $v1, 0x12($s6)
    ctx->pc = 0x48eac4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 18)));
label_48eac8:
    // 0x48eac8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x48eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_48eacc:
    // 0x48eacc: 0x86c40014  lh          $a0, 0x14($s6)
    ctx->pc = 0x48eaccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 20)));
label_48ead0:
    // 0x48ead0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x48ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_48ead4:
    // 0x48ead4: 0x2022825  or          $a1, $s0, $v0
    ctx->pc = 0x48ead4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_48ead8:
    // 0x48ead8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48ead8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_48eadc:
    // 0x48eadc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x48eadcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_48eae0:
    // 0x48eae0: 0xa38024  and         $s0, $a1, $v1
    ctx->pc = 0x48eae0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_48eae4:
    // 0x48eae4: 0x3602ffff  ori         $v0, $s0, 0xFFFF
    ctx->pc = 0x48eae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_48eae8:
    // 0x48eae8: 0x448024  and         $s0, $v0, $a0
    ctx->pc = 0x48eae8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_48eaec:
    // 0x48eaec: 0x200f809  jalr        $s0
label_48eaf0:
    if (ctx->pc == 0x48EAF0u) {
        ctx->pc = 0x48EAF4u;
        goto label_48eaf4;
    }
    ctx->pc = 0x48EAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x48EAF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48EAECu, 0x48EAF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48EAF4u;
label_48eaf4:
    // 0x48eaf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48eaf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48eaf8:
    // 0x48eaf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48eaf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_48eafc:
    // 0x48eafc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48eafcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48eb00:
    // 0x48eb00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x48eb00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_48eb04:
    // 0x48eb04: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x48eb04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48eb08:
    // 0x48eb08: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x48eb08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_48eb0c:
    // 0x48eb0c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x48eb0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_48eb10:
    // 0x48eb10: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x48eb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_48eb14:
    // 0x48eb14: 0x3e00008  jr          $ra
label_48eb18:
    if (ctx->pc == 0x48EB18u) {
        ctx->pc = 0x48EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EB14u;
        // 0x48eb18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EB1Cu;
        goto label_48eb1c;
    }
    ctx->pc = 0x48EB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EB14u;
        // 0x48eb18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48EB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48EB1Cu;
label_48eb1c:
    // 0x48eb1c: 0x0  nop
    ctx->pc = 0x48eb1cu;
    // NOP
    ctx->pc = 0x48eb20u;
}
