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

// Function: sub_0011A268
// Address: 0x11a268 - 0x11a360
void sub_0011A268_0x11a268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A268_0x11a268");
#endif

    switch (ctx->pc) {
        case 0x11a2e4u: goto label_11a2e4;
        case 0x11a32cu: goto label_11a32c;
        case 0x11a334u: goto label_11a334;
        case 0x11a33cu: goto label_11a33c;
        default: break;
    }

    ctx->pc = 0x11a268u;

    // 0x11a268: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11a268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11a26c: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x11a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x11a270: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11a270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11a274: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11a274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11a278: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x11a278u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a27c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a280: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11a280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a288: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11a288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a28c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11a28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11a290: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A290u;
    {
        const bool branch_taken_0x11a290 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A290u;
        // 0x11a294: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a290) {
            ctx->pc = 0x11A2A8u;
            goto label_11a2a8;
        }
    }
    ctx->pc = 0x11A298u;
    // 0x11a298: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x11a298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11a29c: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x11a29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x11a2a0: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A2A0u;
    {
        const bool branch_taken_0x11a2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11a2a0) {
            ctx->pc = 0x11A2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A2A0u;
            // 0x11a2a4: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A2B4u;
            goto label_11a2b4;
        }
    }
    ctx->pc = 0x11A2A8u;
label_11a2a8:
    // 0x11a2a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11a2ac: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x11A2ACu;
    {
        const bool branch_taken_0x11a2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2ACu;
        // 0x11a2b0: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2ac) {
            ctx->pc = 0x11A340u;
            goto label_11a340;
        }
    }
    ctx->pc = 0x11A2B4u;
label_11a2b4:
    // 0x11a2b4: 0x24422148  addiu       $v0, $v0, 0x2148
    ctx->pc = 0x11a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8520));
    // 0x11a2b8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x11a2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x11a2bc: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A2BCu;
    {
        const bool branch_taken_0x11a2bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x11a2bc) {
            ctx->pc = 0x11A2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A2BCu;
            // 0x11a2c0: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A2D0u;
            goto label_11a2d0;
        }
    }
    ctx->pc = 0x11A2C4u;
    // 0x11a2c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11a2c8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x11A2C8u;
    {
        const bool branch_taken_0x11a2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2C8u;
        // 0x11a2cc: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2c8) {
            ctx->pc = 0x11A340u;
            goto label_11a340;
        }
    }
    ctx->pc = 0x11A2D0u;
label_11a2d0:
    // 0x11a2d0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x11a2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x11a2d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A2D4u;
    {
        const bool branch_taken_0x11a2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a2d4) {
            ctx->pc = 0x11A2E8u;
            goto label_11a2e8;
        }
    }
    ctx->pc = 0x11A2DCu;
    // 0x11a2dc: 0xc046608  jal         func_119820
    ctx->pc = 0x11A2DCu;
    SET_GPR_U32(ctx, 31, 0x11A2E4u);
    ctx->pc = 0x11A2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A2DCu;
    // 0x11a2e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119820u, 0x11A2DCu, 0x11A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A2E4u;
label_11a2e4:
    // 0x11a2e4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x11a2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11a2e8:
    // 0x11a2e8: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A2E8u;
    {
        const bool branch_taken_0x11a2e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2E8u;
        // 0x11a2ec: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2e8) {
            ctx->pc = 0x11A304u;
            goto label_11a304;
        }
    }
    ctx->pc = 0x11A2F0u;
    // 0x11a2f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11a2f4: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x11a2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x11a2f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x11a2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11a2fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11A2FCu;
    {
        const bool branch_taken_0x11a2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2FCu;
        // 0x11a300: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2fc) {
            ctx->pc = 0x11A32Cu;
            goto label_11a32c;
        }
    }
    ctx->pc = 0x11A304u;
label_11a304:
    // 0x11a304: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x11a304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x11a308: 0xfe120020  sd          $s2, 0x20($s0)
    ctx->pc = 0x11a308u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 18));
    // 0x11a30c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x11a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x11a310: 0xae1c002c  sw          $gp, 0x2C($s0)
    ctx->pc = 0x11a310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 28));
    // 0x11a314: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x11a314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11a318: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11a318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11a31c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A31Cu;
    {
        const bool branch_taken_0x11a31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A31Cu;
        // 0x11a320: 0xae130030  sw          $s3, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a31c) {
            ctx->pc = 0x11A32Cu;
            goto label_11a32c;
        }
    }
    ctx->pc = 0x11A324u;
    // 0x11a324: 0xc0465e6  jal         func_119798
    ctx->pc = 0x11A324u;
    SET_GPR_U32(ctx, 31, 0x11A32Cu);
    ctx->pc = 0x11A328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A324u;
    // 0x11a328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119798u, 0x11A324u, 0x11A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A32Cu;
label_11a32c:
    // 0x11a32c: 0xc0466c0  jal         func_119B00
    ctx->pc = 0x11A32Cu;
    SET_GPR_U32(ctx, 31, 0x11A334u);
    ctx->pc = 0x119B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B00u, 0x11A32Cu, 0x11A334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A334u;
label_11a334:
    // 0x11a334: 0xc046582  jal         func_119608
    ctx->pc = 0x11A334u;
    SET_GPR_U32(ctx, 31, 0x11A33Cu);
    ctx->pc = 0x11A338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A334u;
    // 0x11a338: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119608u, 0x11A334u, 0x11A33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A33Cu;
label_11a33c:
    // 0x11a33c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11a33cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a340:
    // 0x11a340: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11a340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a344: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11a344u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a348: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11a348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a34c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a34cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a354: 0x3e00008  jr          $ra
    ctx->pc = 0x11A354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A354u;
        // 0x11a358: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A35Cu;
    // 0x11a35c: 0x0  nop
    ctx->pc = 0x11a35cu;
    // NOP
    ctx->pc = 0x11a360u;
}
