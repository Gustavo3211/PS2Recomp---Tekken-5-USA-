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

// Function: sub_0033A7D8
// Address: 0x33a7d8 - 0x33aa98
void sub_0033A7D8_0x33a7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A7D8_0x33a7d8");
#endif

    switch (ctx->pc) {
        case 0x33a7d8u: goto label_33a7d8;
        case 0x33a7dcu: goto label_33a7dc;
        case 0x33a7e0u: goto label_33a7e0;
        case 0x33a7e4u: goto label_33a7e4;
        case 0x33a7e8u: goto label_33a7e8;
        case 0x33a7ecu: goto label_33a7ec;
        case 0x33a7f0u: goto label_33a7f0;
        case 0x33a7f4u: goto label_33a7f4;
        case 0x33a7f8u: goto label_33a7f8;
        case 0x33a7fcu: goto label_33a7fc;
        case 0x33a800u: goto label_33a800;
        case 0x33a804u: goto label_33a804;
        case 0x33a808u: goto label_33a808;
        case 0x33a80cu: goto label_33a80c;
        case 0x33a810u: goto label_33a810;
        case 0x33a814u: goto label_33a814;
        case 0x33a818u: goto label_33a818;
        case 0x33a81cu: goto label_33a81c;
        case 0x33a820u: goto label_33a820;
        case 0x33a824u: goto label_33a824;
        case 0x33a828u: goto label_33a828;
        case 0x33a82cu: goto label_33a82c;
        case 0x33a830u: goto label_33a830;
        case 0x33a834u: goto label_33a834;
        case 0x33a838u: goto label_33a838;
        case 0x33a83cu: goto label_33a83c;
        case 0x33a840u: goto label_33a840;
        case 0x33a844u: goto label_33a844;
        case 0x33a848u: goto label_33a848;
        case 0x33a84cu: goto label_33a84c;
        case 0x33a850u: goto label_33a850;
        case 0x33a854u: goto label_33a854;
        case 0x33a858u: goto label_33a858;
        case 0x33a85cu: goto label_33a85c;
        case 0x33a860u: goto label_33a860;
        case 0x33a864u: goto label_33a864;
        case 0x33a868u: goto label_33a868;
        case 0x33a86cu: goto label_33a86c;
        case 0x33a870u: goto label_33a870;
        case 0x33a874u: goto label_33a874;
        case 0x33a878u: goto label_33a878;
        case 0x33a87cu: goto label_33a87c;
        case 0x33a880u: goto label_33a880;
        case 0x33a884u: goto label_33a884;
        case 0x33a888u: goto label_33a888;
        case 0x33a88cu: goto label_33a88c;
        case 0x33a890u: goto label_33a890;
        case 0x33a894u: goto label_33a894;
        case 0x33a898u: goto label_33a898;
        case 0x33a89cu: goto label_33a89c;
        case 0x33a8a0u: goto label_33a8a0;
        case 0x33a8a4u: goto label_33a8a4;
        case 0x33a8a8u: goto label_33a8a8;
        case 0x33a8acu: goto label_33a8ac;
        case 0x33a8b0u: goto label_33a8b0;
        case 0x33a8b4u: goto label_33a8b4;
        case 0x33a8b8u: goto label_33a8b8;
        case 0x33a8bcu: goto label_33a8bc;
        case 0x33a8c0u: goto label_33a8c0;
        case 0x33a8c4u: goto label_33a8c4;
        case 0x33a8c8u: goto label_33a8c8;
        case 0x33a8ccu: goto label_33a8cc;
        case 0x33a8d0u: goto label_33a8d0;
        case 0x33a8d4u: goto label_33a8d4;
        case 0x33a8d8u: goto label_33a8d8;
        case 0x33a8dcu: goto label_33a8dc;
        case 0x33a8e0u: goto label_33a8e0;
        case 0x33a8e4u: goto label_33a8e4;
        case 0x33a8e8u: goto label_33a8e8;
        case 0x33a8ecu: goto label_33a8ec;
        case 0x33a8f0u: goto label_33a8f0;
        case 0x33a8f4u: goto label_33a8f4;
        case 0x33a8f8u: goto label_33a8f8;
        case 0x33a8fcu: goto label_33a8fc;
        case 0x33a900u: goto label_33a900;
        case 0x33a904u: goto label_33a904;
        case 0x33a908u: goto label_33a908;
        case 0x33a90cu: goto label_33a90c;
        case 0x33a910u: goto label_33a910;
        case 0x33a914u: goto label_33a914;
        case 0x33a918u: goto label_33a918;
        case 0x33a91cu: goto label_33a91c;
        case 0x33a920u: goto label_33a920;
        case 0x33a924u: goto label_33a924;
        case 0x33a928u: goto label_33a928;
        case 0x33a92cu: goto label_33a92c;
        case 0x33a930u: goto label_33a930;
        case 0x33a934u: goto label_33a934;
        case 0x33a938u: goto label_33a938;
        case 0x33a93cu: goto label_33a93c;
        case 0x33a940u: goto label_33a940;
        case 0x33a944u: goto label_33a944;
        case 0x33a948u: goto label_33a948;
        case 0x33a94cu: goto label_33a94c;
        case 0x33a950u: goto label_33a950;
        case 0x33a954u: goto label_33a954;
        case 0x33a958u: goto label_33a958;
        case 0x33a95cu: goto label_33a95c;
        case 0x33a960u: goto label_33a960;
        case 0x33a964u: goto label_33a964;
        case 0x33a968u: goto label_33a968;
        case 0x33a96cu: goto label_33a96c;
        case 0x33a970u: goto label_33a970;
        case 0x33a974u: goto label_33a974;
        case 0x33a978u: goto label_33a978;
        case 0x33a97cu: goto label_33a97c;
        case 0x33a980u: goto label_33a980;
        case 0x33a984u: goto label_33a984;
        case 0x33a988u: goto label_33a988;
        case 0x33a98cu: goto label_33a98c;
        case 0x33a990u: goto label_33a990;
        case 0x33a994u: goto label_33a994;
        case 0x33a998u: goto label_33a998;
        case 0x33a99cu: goto label_33a99c;
        case 0x33a9a0u: goto label_33a9a0;
        case 0x33a9a4u: goto label_33a9a4;
        case 0x33a9a8u: goto label_33a9a8;
        case 0x33a9acu: goto label_33a9ac;
        case 0x33a9b0u: goto label_33a9b0;
        case 0x33a9b4u: goto label_33a9b4;
        case 0x33a9b8u: goto label_33a9b8;
        case 0x33a9bcu: goto label_33a9bc;
        case 0x33a9c0u: goto label_33a9c0;
        case 0x33a9c4u: goto label_33a9c4;
        case 0x33a9c8u: goto label_33a9c8;
        case 0x33a9ccu: goto label_33a9cc;
        case 0x33a9d0u: goto label_33a9d0;
        case 0x33a9d4u: goto label_33a9d4;
        case 0x33a9d8u: goto label_33a9d8;
        case 0x33a9dcu: goto label_33a9dc;
        case 0x33a9e0u: goto label_33a9e0;
        case 0x33a9e4u: goto label_33a9e4;
        case 0x33a9e8u: goto label_33a9e8;
        case 0x33a9ecu: goto label_33a9ec;
        case 0x33a9f0u: goto label_33a9f0;
        case 0x33a9f4u: goto label_33a9f4;
        case 0x33a9f8u: goto label_33a9f8;
        case 0x33a9fcu: goto label_33a9fc;
        case 0x33aa00u: goto label_33aa00;
        case 0x33aa04u: goto label_33aa04;
        case 0x33aa08u: goto label_33aa08;
        case 0x33aa0cu: goto label_33aa0c;
        case 0x33aa10u: goto label_33aa10;
        case 0x33aa14u: goto label_33aa14;
        case 0x33aa18u: goto label_33aa18;
        case 0x33aa1cu: goto label_33aa1c;
        case 0x33aa20u: goto label_33aa20;
        case 0x33aa24u: goto label_33aa24;
        case 0x33aa28u: goto label_33aa28;
        case 0x33aa2cu: goto label_33aa2c;
        case 0x33aa30u: goto label_33aa30;
        case 0x33aa34u: goto label_33aa34;
        case 0x33aa38u: goto label_33aa38;
        case 0x33aa3cu: goto label_33aa3c;
        case 0x33aa40u: goto label_33aa40;
        case 0x33aa44u: goto label_33aa44;
        case 0x33aa48u: goto label_33aa48;
        case 0x33aa4cu: goto label_33aa4c;
        case 0x33aa50u: goto label_33aa50;
        case 0x33aa54u: goto label_33aa54;
        case 0x33aa58u: goto label_33aa58;
        case 0x33aa5cu: goto label_33aa5c;
        case 0x33aa60u: goto label_33aa60;
        case 0x33aa64u: goto label_33aa64;
        case 0x33aa68u: goto label_33aa68;
        case 0x33aa6cu: goto label_33aa6c;
        case 0x33aa70u: goto label_33aa70;
        case 0x33aa74u: goto label_33aa74;
        case 0x33aa78u: goto label_33aa78;
        case 0x33aa7cu: goto label_33aa7c;
        case 0x33aa80u: goto label_33aa80;
        case 0x33aa84u: goto label_33aa84;
        case 0x33aa88u: goto label_33aa88;
        case 0x33aa8cu: goto label_33aa8c;
        case 0x33aa90u: goto label_33aa90;
        case 0x33aa94u: goto label_33aa94;
        default: break;
    }

    ctx->pc = 0x33a7d8u;

label_33a7d8:
    // 0x33a7d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33a7dc:
    // 0x33a7dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33a7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33a7e0:
    // 0x33a7e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33a7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_33a7e4:
    // 0x33a7e4: 0xc0ce922  jal         func_33A488
label_33a7e8:
    if (ctx->pc == 0x33A7E8u) {
        ctx->pc = 0x33A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7E4u;
        // 0x33a7e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A7ECu;
        goto label_33a7ec;
    }
    ctx->pc = 0x33A7E4u;
    SET_GPR_U32(ctx, 31, 0x33A7ECu);
    ctx->pc = 0x33A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A7E4u;
    // 0x33a7e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A488u, 0x33A7E4u, 0x33A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A7ECu;
label_33a7ec:
    // 0x33a7ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33a7ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33a7f0:
    // 0x33a7f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33a7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33a7f4:
    // 0x33a7f4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_33a7f8:
    if (ctx->pc == 0x33A7F8u) {
        ctx->pc = 0x33A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7F4u;
        // 0x33a7f8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A7FCu;
        goto label_33a7fc;
    }
    ctx->pc = 0x33A7F4u;
    {
        const bool branch_taken_0x33a7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7F4u;
        // 0x33a7f8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a7f4) {
            ctx->pc = 0x33A810u;
            goto label_33a810;
        }
    }
    ctx->pc = 0x33A7FCu;
label_33a7fc:
    // 0x33a7fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33a7fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33a800:
    // 0x33a800: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33a800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33a804:
    // 0x33a804: 0x80cea08  j           func_33A820
label_33a808:
    if (ctx->pc == 0x33A808u) {
        ctx->pc = 0x33A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A804u;
        // 0x33a808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A80Cu;
        goto label_33a80c;
    }
    ctx->pc = 0x33A804u;
    ctx->pc = 0x33A808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A804u;
    // 0x33a808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A820u;
    goto label_33a820;
    ctx->pc = 0x33A80Cu;
label_33a80c:
    // 0x33a80c: 0x0  nop
    ctx->pc = 0x33a80cu;
    // NOP
label_33a810:
    // 0x33a810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33a810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33a814:
    // 0x33a814: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33a814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33a818:
    // 0x33a818: 0x3e00008  jr          $ra
label_33a81c:
    if (ctx->pc == 0x33A81Cu) {
        ctx->pc = 0x33A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A818u;
        // 0x33a81c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A820u;
        goto label_33a820;
    }
    ctx->pc = 0x33A818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A818u;
        // 0x33a81c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A820u;
label_33a820:
    // 0x33a820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33a820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_33a824:
    // 0x33a824: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x33a824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_33a828:
    // 0x33a828: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33a828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33a82c:
    // 0x33a82c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x33a82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_33a830:
    // 0x33a830: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33a830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33a834:
    // 0x33a834: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x33a834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_33a838:
    // 0x33a838: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x33a838u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33a83c:
    // 0x33a83c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x33a83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_33a840:
    // 0x33a840: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x33a840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_33a844:
    // 0x33a844: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x33a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_33a848:
    // 0x33a848: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x33a848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33a84c:
    // 0x33a84c: 0x31702  srl         $v0, $v1, 28
    ctx->pc = 0x33a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
label_33a850:
    // 0x33a850: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33a850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_33a854:
    // 0x33a854: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_33a858:
    if (ctx->pc == 0x33A858u) {
        ctx->pc = 0x33A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A854u;
        // 0x33a858: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A85Cu;
        goto label_33a85c;
    }
    ctx->pc = 0x33A854u;
    {
        const bool branch_taken_0x33a854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A854u;
        // 0x33a858: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a854) {
            ctx->pc = 0x33A8BCu;
            goto label_33a8bc;
        }
    }
    ctx->pc = 0x33A85Cu;
label_33a85c:
    // 0x33a85c: 0xc0c8864  jal         func_322190
label_33a860:
    if (ctx->pc == 0x33A860u) {
        ctx->pc = 0x33A864u;
        goto label_33a864;
    }
    ctx->pc = 0x33A85Cu;
    SET_GPR_U32(ctx, 31, 0x33A864u);
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x33A85Cu, 0x33A864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A864u;
label_33a864:
    // 0x33a864: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x33a864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33a868:
    // 0x33a868: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x33a868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33a86c:
    // 0x33a86c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x33a86cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33a870:
    // 0x33a870: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x33a870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_33a874:
    // 0x33a874: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x33a874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_33a878:
    // 0x33a878: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33a878u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33a87c:
    // 0x33a87c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33a880:
    // 0x33a880: 0x40f809  jalr        $v0
label_33a884:
    if (ctx->pc == 0x33A884u) {
        ctx->pc = 0x33A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A880u;
        // 0x33a884: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A888u;
        goto label_33a888;
    }
    ctx->pc = 0x33A880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33A888u);
        ctx->pc = 0x33A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A880u;
        // 0x33a884: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A880u, 0x33A888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A888u;
label_33a888:
    // 0x33a888: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
label_33a88c:
    if (ctx->pc == 0x33A88Cu) {
        ctx->pc = 0x33A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A888u;
        // 0x33a88c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A890u;
        goto label_33a890;
    }
    ctx->pc = 0x33A888u;
    {
        const bool branch_taken_0x33a888 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A888u;
        // 0x33a88c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a888) {
            ctx->pc = 0x33A8B8u;
            goto label_33a8b8;
        }
    }
    ctx->pc = 0x33A890u;
label_33a890:
    // 0x33a890: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x33a890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_33a894:
    // 0x33a894: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x33a894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_33a898:
    // 0x33a898: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33a898u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33a89c:
    // 0x33a89c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33a8a0:
    // 0x33a8a0: 0x40f809  jalr        $v0
label_33a8a4:
    if (ctx->pc == 0x33A8A4u) {
        ctx->pc = 0x33A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8A0u;
        // 0x33a8a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A8A8u;
        goto label_33a8a8;
    }
    ctx->pc = 0x33A8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33A8A8u);
        ctx->pc = 0x33A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8A0u;
        // 0x33a8a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A8A0u, 0x33A8A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A8A8u;
label_33a8a8:
    // 0x33a8a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x33a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33a8ac:
    // 0x33a8ac: 0x10000003  b           . + 4 + (0x3 << 2)
label_33a8b0:
    if (ctx->pc == 0x33A8B0u) {
        ctx->pc = 0x33A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8ACu;
        // 0x33a8b0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A8B4u;
        goto label_33a8b4;
    }
    ctx->pc = 0x33A8ACu;
    {
        const bool branch_taken_0x33a8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8ACu;
        // 0x33a8b0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a8ac) {
            ctx->pc = 0x33A8BCu;
            goto label_33a8bc;
        }
    }
    ctx->pc = 0x33A8B4u;
label_33a8b4:
    // 0x33a8b4: 0x0  nop
    ctx->pc = 0x33a8b4u;
    // NOP
label_33a8b8:
    // 0x33a8b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x33a8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33a8bc:
    // 0x33a8bc: 0x31742  srl         $v0, $v1, 29
    ctx->pc = 0x33a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 29));
label_33a8c0:
    // 0x33a8c0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x33a8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_33a8c4:
    // 0x33a8c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33a8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_33a8c8:
    // 0x33a8c8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_33a8cc:
    if (ctx->pc == 0x33A8CCu) {
        ctx->pc = 0x33A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8C8u;
        // 0x33a8cc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A8D0u;
        goto label_33a8d0;
    }
    ctx->pc = 0x33A8C8u;
    {
        const bool branch_taken_0x33a8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8C8u;
        // 0x33a8cc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a8c8) {
            ctx->pc = 0x33A920u;
            goto label_33a920;
        }
    }
    ctx->pc = 0x33A8D0u;
label_33a8d0:
    // 0x33a8d0: 0xc0c8864  jal         func_322190
label_33a8d4:
    if (ctx->pc == 0x33A8D4u) {
        ctx->pc = 0x33A8D8u;
        goto label_33a8d8;
    }
    ctx->pc = 0x33A8D0u;
    SET_GPR_U32(ctx, 31, 0x33A8D8u);
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x33A8D0u, 0x33A8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A8D8u;
label_33a8d8:
    // 0x33a8d8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x33a8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33a8dc:
    // 0x33a8dc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x33a8dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33a8e0:
    // 0x33a8e0: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x33a8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_33a8e4:
    // 0x33a8e4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x33a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_33a8e8:
    // 0x33a8e8: 0x24630088  addiu       $v1, $v1, 0x88
    ctx->pc = 0x33a8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
label_33a8ec:
    // 0x33a8ec: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33a8ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33a8f0:
    // 0x33a8f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33a8f4:
    // 0x33a8f4: 0x40f809  jalr        $v0
label_33a8f8:
    if (ctx->pc == 0x33A8F8u) {
        ctx->pc = 0x33A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8F4u;
        // 0x33a8f8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A8FCu;
        goto label_33a8fc;
    }
    ctx->pc = 0x33A8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33A8FCu);
        ctx->pc = 0x33A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8F4u;
        // 0x33a8f8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A8F4u, 0x33A8FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A8FCu;
label_33a8fc:
    // 0x33a8fc: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_33a900:
    if (ctx->pc == 0x33A900u) {
        ctx->pc = 0x33A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8FCu;
        // 0x33a900: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A904u;
        goto label_33a904;
    }
    ctx->pc = 0x33A8FCu;
    {
        const bool branch_taken_0x33a8fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8FCu;
        // 0x33a900: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a8fc) {
            ctx->pc = 0x33A920u;
            goto label_33a920;
        }
    }
    ctx->pc = 0x33A904u;
label_33a904:
    // 0x33a904: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x33a904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_33a908:
    // 0x33a908: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x33a908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_33a90c:
    // 0x33a90c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33a90cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33a910:
    // 0x33a910: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33a910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33a914:
    // 0x33a914: 0x40f809  jalr        $v0
label_33a918:
    if (ctx->pc == 0x33A918u) {
        ctx->pc = 0x33A918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A914u;
        // 0x33a918: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A91Cu;
        goto label_33a91c;
    }
    ctx->pc = 0x33A914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33A91Cu);
        ctx->pc = 0x33A918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A914u;
        // 0x33a918: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A914u, 0x33A91Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A91Cu;
label_33a91c:
    // 0x33a91c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x33a91cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33a920:
    // 0x33a920: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x33a920u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_33a924:
    // 0x33a924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33a924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a928:
    // 0x33a928: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x33a928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_33a92c:
    // 0x33a92c: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x33a92cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_33a930:
    // 0x33a930: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x33a930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_33a934:
    // 0x33a934: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33a934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33a938:
    // 0x33a938: 0xc0ce804  jal         func_33A010
label_33a93c:
    if (ctx->pc == 0x33A93Cu) {
        ctx->pc = 0x33A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A938u;
        // 0x33a93c: 0xb6420000  sdr         $v0, 0x0($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A940u;
        goto label_33a940;
    }
    ctx->pc = 0x33A938u;
    SET_GPR_U32(ctx, 31, 0x33A940u);
    ctx->pc = 0x33A93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A938u;
    // 0x33a93c: 0xb6420000  sdr         $v0, 0x0($s2) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A010u, 0x33A938u, 0x33A940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A940u;
label_33a940:
    // 0x33a940: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x33a940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33a944:
    // 0x33a944: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33a944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33a948:
    // 0x33a948: 0x1483004b  bne         $a0, $v1, . + 4 + (0x4B << 2)
label_33a94c:
    if (ctx->pc == 0x33A94Cu) {
        ctx->pc = 0x33A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A948u;
        // 0x33a94c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A950u;
        goto label_33a950;
    }
    ctx->pc = 0x33A948u;
    {
        const bool branch_taken_0x33a948 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x33A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A948u;
        // 0x33a94c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a948) {
            ctx->pc = 0x33AA78u;
            goto label_33aa78;
        }
    }
    ctx->pc = 0x33A950u;
label_33a950:
    // 0x33a950: 0x12600025  beqz        $s3, . + 4 + (0x25 << 2)
label_33a954:
    if (ctx->pc == 0x33A954u) {
        ctx->pc = 0x33A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A950u;
        // 0x33a954: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A958u;
        goto label_33a958;
    }
    ctx->pc = 0x33A950u;
    {
        const bool branch_taken_0x33a950 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A950u;
        // 0x33a954: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a950) {
            ctx->pc = 0x33A9E8u;
            goto label_33a9e8;
        }
    }
    ctx->pc = 0x33A958u;
label_33a958:
    // 0x33a958: 0x21782  srl         $v0, $v0, 30
    ctx->pc = 0x33a958u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 30));
label_33a95c:
    // 0x33a95c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33a95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_33a960:
    // 0x33a960: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_33a964:
    if (ctx->pc == 0x33A964u) {
        ctx->pc = 0x33A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A960u;
        // 0x33a964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A968u;
        goto label_33a968;
    }
    ctx->pc = 0x33A960u;
    {
        const bool branch_taken_0x33a960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A960u;
        // 0x33a964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a960) {
            ctx->pc = 0x33A9E8u;
            goto label_33a9e8;
        }
    }
    ctx->pc = 0x33A968u;
label_33a968:
    // 0x33a968: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x33a968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_33a96c:
    // 0x33a96c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33a96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33a970:
    // 0x33a970: 0xc0ce900  jal         func_33A400
label_33a974:
    if (ctx->pc == 0x33A974u) {
        ctx->pc = 0x33A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A970u;
        // 0x33a974: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A978u;
        goto label_33a978;
    }
    ctx->pc = 0x33A970u;
    SET_GPR_U32(ctx, 31, 0x33A978u);
    ctx->pc = 0x33A974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A970u;
    // 0x33a974: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A400u, 0x33A970u, 0x33A978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A978u;
label_33a978:
    // 0x33a978: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x33a978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33a97c:
    // 0x33a97c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33a97cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33a980:
    // 0x33a980: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x33a980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_33a984:
    // 0x33a984: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x33a984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_33a988:
    // 0x33a988: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33a988u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33a98c:
    // 0x33a98c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33a990:
    // 0x33a990: 0x60f809  jalr        $v1
label_33a994:
    if (ctx->pc == 0x33A994u) {
        ctx->pc = 0x33A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A990u;
        // 0x33a994: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A998u;
        goto label_33a998;
    }
    ctx->pc = 0x33A990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33A998u);
        ctx->pc = 0x33A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A990u;
        // 0x33a994: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A990u, 0x33A998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A998u;
label_33a998:
    // 0x33a998: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_33a99c:
    if (ctx->pc == 0x33A99Cu) {
        ctx->pc = 0x33A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A998u;
        // 0x33a99c: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A9A0u;
        goto label_33a9a0;
    }
    ctx->pc = 0x33A998u;
    {
        const bool branch_taken_0x33a998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A998u;
        // 0x33a99c: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a998) {
            ctx->pc = 0x33A9E8u;
            goto label_33a9e8;
        }
    }
    ctx->pc = 0x33A9A0u;
label_33a9a0:
    // 0x33a9a0: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x33a9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
label_33a9a4:
    // 0x33a9a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x33a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33a9a8:
    // 0x33a9a8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x33a9a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_33a9ac:
    // 0x33a9ac: 0x8ce3002c  lw          $v1, 0x2C($a3)
    ctx->pc = 0x33a9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
label_33a9b0:
    // 0x33a9b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33a9b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33a9b4:
    // 0x33a9b4: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x33a9b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_33a9b8:
    // 0x33a9b8: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x33a9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_33a9bc:
    // 0x33a9bc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33a9bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33a9c0:
    // 0x33a9c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33a9c4:
    // 0x33a9c4: 0x40f809  jalr        $v0
label_33a9c8:
    if (ctx->pc == 0x33A9C8u) {
        ctx->pc = 0x33A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9C4u;
        // 0x33a9c8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A9CCu;
        goto label_33a9cc;
    }
    ctx->pc = 0x33A9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33A9CCu);
        ctx->pc = 0x33A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9C4u;
        // 0x33a9c8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A9C4u, 0x33A9CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A9CCu;
label_33a9cc:
    // 0x33a9cc: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x33a9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_33a9d0:
    // 0x33a9d0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x33a9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33a9d4:
    // 0x33a9d4: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x33a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_33a9d8:
    // 0x33a9d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33a9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_33a9dc:
    // 0x33a9dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x33a9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_33a9e0:
    // 0x33a9e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33a9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_33a9e4:
    // 0x33a9e4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x33a9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_33a9e8:
    // 0x33a9e8: 0x12800022  beqz        $s4, . + 4 + (0x22 << 2)
label_33a9ec:
    if (ctx->pc == 0x33A9ECu) {
        ctx->pc = 0x33A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9E8u;
        // 0x33a9ec: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A9F0u;
        goto label_33a9f0;
    }
    ctx->pc = 0x33A9E8u;
    {
        const bool branch_taken_0x33a9e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9E8u;
        // 0x33a9ec: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a9e8) {
            ctx->pc = 0x33AA74u;
            goto label_33aa74;
        }
    }
    ctx->pc = 0x33A9F0u;
label_33a9f0:
    // 0x33a9f0: 0x4410020  bgez        $v0, . + 4 + (0x20 << 2)
label_33a9f4:
    if (ctx->pc == 0x33A9F4u) {
        ctx->pc = 0x33A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9F0u;
        // 0x33a9f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A9F8u;
        goto label_33a9f8;
    }
    ctx->pc = 0x33A9F0u;
    {
        const bool branch_taken_0x33a9f0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x33A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9F0u;
        // 0x33a9f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a9f0) {
            ctx->pc = 0x33AA74u;
            goto label_33aa74;
        }
    }
    ctx->pc = 0x33A9F8u;
label_33a9f8:
    // 0x33a9f8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x33a9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_33a9fc:
    // 0x33a9fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33a9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33aa00:
    // 0x33aa00: 0xc0ce900  jal         func_33A400
label_33aa04:
    if (ctx->pc == 0x33AA04u) {
        ctx->pc = 0x33AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA00u;
        // 0x33aa04: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AA08u;
        goto label_33aa08;
    }
    ctx->pc = 0x33AA00u;
    SET_GPR_U32(ctx, 31, 0x33AA08u);
    ctx->pc = 0x33AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AA00u;
    // 0x33aa04: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A400u, 0x33AA00u, 0x33AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AA08u;
label_33aa08:
    // 0x33aa08: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x33aa08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_33aa0c:
    // 0x33aa0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33aa0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33aa10:
    // 0x33aa10: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x33aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_33aa14:
    // 0x33aa14: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x33aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_33aa18:
    // 0x33aa18: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33aa18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33aa1c:
    // 0x33aa1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33aa20:
    // 0x33aa20: 0x60f809  jalr        $v1
label_33aa24:
    if (ctx->pc == 0x33AA24u) {
        ctx->pc = 0x33AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA20u;
        // 0x33aa24: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AA28u;
        goto label_33aa28;
    }
    ctx->pc = 0x33AA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33AA28u);
        ctx->pc = 0x33AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA20u;
        // 0x33aa24: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AA20u, 0x33AA28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33AA28u;
label_33aa28:
    // 0x33aa28: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_33aa2c:
    if (ctx->pc == 0x33AA2Cu) {
        ctx->pc = 0x33AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA28u;
        // 0x33aa2c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AA30u;
        goto label_33aa30;
    }
    ctx->pc = 0x33AA28u;
    {
        const bool branch_taken_0x33aa28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA28u;
        // 0x33aa2c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aa28) {
            ctx->pc = 0x33AA74u;
            goto label_33aa74;
        }
    }
    ctx->pc = 0x33AA30u;
label_33aa30:
    // 0x33aa30: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x33aa30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
label_33aa34:
    // 0x33aa34: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x33aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33aa38:
    // 0x33aa38: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x33aa38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_33aa3c:
    // 0x33aa3c: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x33aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_33aa40:
    // 0x33aa40: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x33aa40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_33aa44:
    // 0x33aa44: 0x24630058  addiu       $v1, $v1, 0x58
    ctx->pc = 0x33aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_33aa48:
    // 0x33aa48: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33aa48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33aa4c:
    // 0x33aa4c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33aa50:
    // 0x33aa50: 0x40f809  jalr        $v0
label_33aa54:
    if (ctx->pc == 0x33AA54u) {
        ctx->pc = 0x33AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA50u;
        // 0x33aa54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AA58u;
        goto label_33aa58;
    }
    ctx->pc = 0x33AA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33AA58u);
        ctx->pc = 0x33AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA50u;
        // 0x33aa54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AA50u, 0x33AA58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33AA58u;
label_33aa58:
    // 0x33aa58: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x33aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_33aa5c:
    // 0x33aa5c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x33aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33aa60:
    // 0x33aa60: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x33aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_33aa64:
    // 0x33aa64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33aa64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_33aa68:
    // 0x33aa68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x33aa68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_33aa6c:
    // 0x33aa6c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33aa6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_33aa70:
    // 0x33aa70: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x33aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_33aa74:
    // 0x33aa74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33aa78:
    // 0x33aa78: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x33aa78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33aa7c:
    // 0x33aa7c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x33aa7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_33aa80:
    // 0x33aa80: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x33aa80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_33aa84:
    // 0x33aa84: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x33aa84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_33aa88:
    // 0x33aa88: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x33aa88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_33aa8c:
    // 0x33aa8c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x33aa8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_33aa90:
    // 0x33aa90: 0x3e00008  jr          $ra
label_33aa94:
    if (ctx->pc == 0x33AA94u) {
        ctx->pc = 0x33AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA90u;
        // 0x33aa94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AA98u;
        goto label_fallthrough_0x33aa90;
    }
    ctx->pc = 0x33AA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA90u;
        // 0x33aa94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33aa90:
    ctx->pc = 0x33AA98u;
}
