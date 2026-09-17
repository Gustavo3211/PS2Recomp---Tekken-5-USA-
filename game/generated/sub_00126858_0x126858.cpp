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

// Function: sub_00126858
// Address: 0x126858 - 0x126950
void sub_00126858_0x126858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126858_0x126858");
#endif

    switch (ctx->pc) {
        case 0x126858u: goto label_126858;
        case 0x12685cu: goto label_12685c;
        case 0x126860u: goto label_126860;
        case 0x126864u: goto label_126864;
        case 0x126868u: goto label_126868;
        case 0x12686cu: goto label_12686c;
        case 0x126870u: goto label_126870;
        case 0x126874u: goto label_126874;
        case 0x126878u: goto label_126878;
        case 0x12687cu: goto label_12687c;
        case 0x126880u: goto label_126880;
        case 0x126884u: goto label_126884;
        case 0x126888u: goto label_126888;
        case 0x12688cu: goto label_12688c;
        case 0x126890u: goto label_126890;
        case 0x126894u: goto label_126894;
        case 0x126898u: goto label_126898;
        case 0x12689cu: goto label_12689c;
        case 0x1268a0u: goto label_1268a0;
        case 0x1268a4u: goto label_1268a4;
        case 0x1268a8u: goto label_1268a8;
        case 0x1268acu: goto label_1268ac;
        case 0x1268b0u: goto label_1268b0;
        case 0x1268b4u: goto label_1268b4;
        case 0x1268b8u: goto label_1268b8;
        case 0x1268bcu: goto label_1268bc;
        case 0x1268c0u: goto label_1268c0;
        case 0x1268c4u: goto label_1268c4;
        case 0x1268c8u: goto label_1268c8;
        case 0x1268ccu: goto label_1268cc;
        case 0x1268d0u: goto label_1268d0;
        case 0x1268d4u: goto label_1268d4;
        case 0x1268d8u: goto label_1268d8;
        case 0x1268dcu: goto label_1268dc;
        case 0x1268e0u: goto label_1268e0;
        case 0x1268e4u: goto label_1268e4;
        case 0x1268e8u: goto label_1268e8;
        case 0x1268ecu: goto label_1268ec;
        case 0x1268f0u: goto label_1268f0;
        case 0x1268f4u: goto label_1268f4;
        case 0x1268f8u: goto label_1268f8;
        case 0x1268fcu: goto label_1268fc;
        case 0x126900u: goto label_126900;
        case 0x126904u: goto label_126904;
        case 0x126908u: goto label_126908;
        case 0x12690cu: goto label_12690c;
        case 0x126910u: goto label_126910;
        case 0x126914u: goto label_126914;
        case 0x126918u: goto label_126918;
        case 0x12691cu: goto label_12691c;
        case 0x126920u: goto label_126920;
        case 0x126924u: goto label_126924;
        case 0x126928u: goto label_126928;
        case 0x12692cu: goto label_12692c;
        case 0x126930u: goto label_126930;
        case 0x126934u: goto label_126934;
        case 0x126938u: goto label_126938;
        case 0x12693cu: goto label_12693c;
        case 0x126940u: goto label_126940;
        case 0x126944u: goto label_126944;
        case 0x126948u: goto label_126948;
        case 0x12694cu: goto label_12694c;
        default: break;
    }

    ctx->pc = 0x126858u;

label_126858:
    // 0x126858: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x126858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_12685c:
    // 0x12685c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x12685cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_126860:
    // 0x126860: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x126860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126864:
    // 0x126864: 0x84800b  movn        $s0, $a0, $a0
    ctx->pc = 0x126864u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_126868:
    // 0x126868: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x126868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_12686c:
    // 0x12686c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x12686cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_126870:
    // 0x126870: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x126870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_126874:
    // 0x126874: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x126874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_126878:
    // 0x126878: 0xc049e78  jal         func_1279E0
label_12687c:
    if (ctx->pc == 0x12687Cu) {
        ctx->pc = 0x12687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126878u;
        // 0x12687c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126880u;
        goto label_126880;
    }
    ctx->pc = 0x126878u;
    SET_GPR_U32(ctx, 31, 0x126880u);
    ctx->pc = 0x12687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126878u;
    // 0x12687c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1279E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1279E0u, 0x126878u, 0x126880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126880u;
label_126880:
    // 0x126880: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
label_126884:
    if (ctx->pc == 0x126884u) {
        ctx->pc = 0x126884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126880u;
        // 0x126884: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126888u;
        goto label_126888;
    }
    ctx->pc = 0x126880u;
    {
        const bool branch_taken_0x126880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126880) {
            ctx->pc = 0x126884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126880u;
            // 0x126884: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126958u;
            return;
        }
    }
    ctx->pc = 0x126888u;
label_126888:
    // 0x126888: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_12688c:
    // 0x12688c: 0x3c110013  lui         $s1, 0x13
    ctx->pc = 0x12688cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)19 << 16));
label_126890:
    // 0x126890: 0x24524d28  addiu       $s2, $v0, 0x4D28
    ctx->pc = 0x126890u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19752));
label_126894:
    // 0x126894: 0x3c130013  lui         $s3, 0x13
    ctx->pc = 0x126894u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)19 << 16));
label_126898:
    // 0x126898: 0x8e224430  lw          $v0, 0x4430($s1)
    ctx->pc = 0x126898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17456)));
label_12689c:
    // 0x12689c: 0x0  nop
    ctx->pc = 0x12689cu;
    // NOP
label_1268a0:
    // 0x1268a0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1268a4:
    if (ctx->pc == 0x1268A4u) {
        ctx->pc = 0x1268A8u;
        goto label_1268a8;
    }
    ctx->pc = 0x1268A0u;
    {
        const bool branch_taken_0x1268a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1268a0) {
            ctx->pc = 0x1268D8u;
            goto label_1268d8;
        }
    }
    ctx->pc = 0x1268A8u;
label_1268a8:
    // 0x1268a8: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x1268a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_1268ac:
    // 0x1268ac: 0xc04884a  jal         func_122128
label_1268b0:
    if (ctx->pc == 0x1268B0u) {
        ctx->pc = 0x1268B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268ACu;
        // 0x1268b0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1268B4u;
        goto label_1268b4;
    }
    ctx->pc = 0x1268ACu;
    SET_GPR_U32(ctx, 31, 0x1268B4u);
    ctx->pc = 0x1268B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1268ACu;
    // 0x1268b0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122128u, 0x1268ACu, 0x1268B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1268B4u;
label_1268b4:
    // 0x1268b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1268b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1268b8:
    // 0x1268b8: 0xc04c2dc  jal         func_130B70
label_1268bc:
    if (ctx->pc == 0x1268BCu) {
        ctx->pc = 0x1268BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268B8u;
        // 0x1268bc: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1268C0u;
        goto label_1268c0;
    }
    ctx->pc = 0x1268B8u;
    SET_GPR_U32(ctx, 31, 0x1268C0u);
    ctx->pc = 0x1268BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1268B8u;
    // 0x1268bc: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130B70u, 0x1268B8u, 0x1268C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1268C0u;
label_1268c0:
    // 0x1268c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1268c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1268c4:
    // 0x1268c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1268c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1268c8:
    // 0x1268c8: 0xc049ad6  jal         func_126B58
label_1268cc:
    if (ctx->pc == 0x1268CCu) {
        ctx->pc = 0x1268CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268C8u;
        // 0x1268cc: 0x26660b38  addiu       $a2, $s3, 0xB38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2872));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1268D0u;
        goto label_1268d0;
    }
    ctx->pc = 0x1268C8u;
    SET_GPR_U32(ctx, 31, 0x1268D0u);
    ctx->pc = 0x1268CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1268C8u;
    // 0x1268cc: 0x26660b38  addiu       $a2, $s3, 0xB38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126B58u, 0x1268C8u, 0x1268D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1268D0u;
label_1268d0:
    // 0x1268d0: 0xc048b3c  jal         func_122CF0
label_1268d4:
    if (ctx->pc == 0x1268D4u) {
        ctx->pc = 0x1268D8u;
        goto label_1268d8;
    }
    ctx->pc = 0x1268D0u;
    SET_GPR_U32(ctx, 31, 0x1268D8u);
    ctx->pc = 0x122CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CF0u, 0x1268D0u, 0x1268D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1268D8u;
label_1268d8:
    // 0x1268d8: 0x40f809  jalr        $v0
label_1268dc:
    if (ctx->pc == 0x1268DCu) {
        ctx->pc = 0x1268E0u;
        goto label_1268e0;
    }
    ctx->pc = 0x1268D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1268E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1268D8u, 0x1268E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1268E0u;
label_1268e0:
    // 0x1268e0: 0xc049e78  jal         func_1279E0
label_1268e4:
    if (ctx->pc == 0x1268E4u) {
        ctx->pc = 0x1268E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268E0u;
        // 0x1268e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1268E8u;
        goto label_1268e8;
    }
    ctx->pc = 0x1268E0u;
    SET_GPR_U32(ctx, 31, 0x1268E8u);
    ctx->pc = 0x1268E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1268E0u;
    // 0x1268e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1279E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1279E0u, 0x1268E0u, 0x1268E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1268E8u;
label_1268e8:
    // 0x1268e8: 0x5040ffed  beql        $v0, $zero, . + 4 + (-0x13 << 2)
label_1268ec:
    if (ctx->pc == 0x1268ECu) {
        ctx->pc = 0x1268ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268E8u;
        // 0x1268ec: 0x8e224430  lw          $v0, 0x4430($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1268F0u;
        goto label_1268f0;
    }
    ctx->pc = 0x1268E8u;
    {
        const bool branch_taken_0x1268e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1268e8) {
            ctx->pc = 0x1268ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1268E8u;
            // 0x1268ec: 0x8e224430  lw          $v0, 0x4430($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1268A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1268a0;
        }
    }
    ctx->pc = 0x1268F0u;
label_1268f0:
    // 0x1268f0: 0x10000019  b           . + 4 + (0x19 << 2)
label_1268f4:
    if (ctx->pc == 0x1268F4u) {
        ctx->pc = 0x1268F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268F0u;
        // 0x1268f4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1268F8u;
        goto label_1268f8;
    }
    ctx->pc = 0x1268F0u;
    {
        const bool branch_taken_0x1268f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1268F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268F0u;
        // 0x1268f4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268f0) {
            ctx->pc = 0x126958u;
            return;
        }
    }
    ctx->pc = 0x1268F8u;
label_1268f8:
    // 0x1268f8: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x1268f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_1268fc:
    // 0x1268fc: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1268fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_126900:
    // 0x126900: 0x24424d68  addiu       $v0, $v0, 0x4D68
    ctx->pc = 0x126900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19816));
label_126904:
    // 0x126904: 0x24840738  addiu       $a0, $a0, 0x738
    ctx->pc = 0x126904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1848));
label_126908:
    // 0x126908: 0xc048b90  jal         func_122E40
label_12690c:
    if (ctx->pc == 0x12690Cu) {
        ctx->pc = 0x12690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126908u;
        // 0x12690c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126910u;
        goto label_126910;
    }
    ctx->pc = 0x126908u;
    SET_GPR_U32(ctx, 31, 0x126910u);
    ctx->pc = 0x12690Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126908u;
    // 0x12690c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x126908u, 0x126910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126910u;
label_126910:
    // 0x126910: 0xc049afa  jal         func_126BE8
label_126914:
    if (ctx->pc == 0x126914u) {
        ctx->pc = 0x126914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126910u;
        // 0x126914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126918u;
        goto label_126918;
    }
    ctx->pc = 0x126910u;
    SET_GPR_U32(ctx, 31, 0x126918u);
    ctx->pc = 0x126914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126910u;
    // 0x126914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126BE8u, 0x126910u, 0x126918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126918u;
label_126918:
    // 0x126918: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x126918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_12691c:
    // 0x12691c: 0xc048b90  jal         func_122E40
label_126920:
    if (ctx->pc == 0x126920u) {
        ctx->pc = 0x126920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12691Cu;
        // 0x126920: 0x24840758  addiu       $a0, $a0, 0x758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126924u;
        goto label_126924;
    }
    ctx->pc = 0x12691Cu;
    SET_GPR_U32(ctx, 31, 0x126924u);
    ctx->pc = 0x126920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12691Cu;
    // 0x126920: 0x24840758  addiu       $a0, $a0, 0x758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x12691Cu, 0x126924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126924u;
label_126924:
    // 0x126924: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x126924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_126928:
    // 0x126928: 0xc048b90  jal         func_122E40
label_12692c:
    if (ctx->pc == 0x12692Cu) {
        ctx->pc = 0x12692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126928u;
        // 0x12692c: 0x24840748  addiu       $a0, $a0, 0x748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126930u;
        goto label_126930;
    }
    ctx->pc = 0x126928u;
    SET_GPR_U32(ctx, 31, 0x126930u);
    ctx->pc = 0x12692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126928u;
    // 0x12692c: 0x24840748  addiu       $a0, $a0, 0x748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x126928u, 0x126930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126930u;
label_126930:
    // 0x126930: 0xc049ab0  jal         func_126AC0
label_126934:
    if (ctx->pc == 0x126934u) {
        ctx->pc = 0x126938u;
        goto label_126938;
    }
    ctx->pc = 0x126930u;
    SET_GPR_U32(ctx, 31, 0x126938u);
    ctx->pc = 0x126AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126AC0u, 0x126930u, 0x126938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126938u;
label_126938:
    // 0x126938: 0xc04c2dc  jal         func_130B70
label_12693c:
    if (ctx->pc == 0x12693Cu) {
        ctx->pc = 0x12693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126938u;
        // 0x12693c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126940u;
        goto label_126940;
    }
    ctx->pc = 0x126938u;
    SET_GPR_U32(ctx, 31, 0x126940u);
    ctx->pc = 0x12693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126938u;
    // 0x12693c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130B70u, 0x126938u, 0x126940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126940u;
label_126940:
    // 0x126940: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126944:
    // 0x126944: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x126944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_126948:
    // 0x126948: 0xc049b5c  jal         func_126D70
label_12694c:
    if (ctx->pc == 0x12694Cu) {
        ctx->pc = 0x12694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126948u;
        // 0x12694c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126950u;
        goto label_fallthrough_0x126948;
    }
    ctx->pc = 0x126948u;
    SET_GPR_U32(ctx, 31, 0x126950u);
    ctx->pc = 0x12694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126948u;
    // 0x12694c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126D70u, 0x126948u, 0x126950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x126948:
    ctx->pc = 0x126950u;
}
