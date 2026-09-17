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

// Function: sub_0010A260
// Address: 0x10a260 - 0x10a3a8
void sub_0010A260_0x10a260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A260_0x10a260");
#endif

    switch (ctx->pc) {
        case 0x10a27cu: goto label_10a27c;
        case 0x10a28cu: goto label_10a28c;
        case 0x10a29cu: goto label_10a29c;
        case 0x10a2b8u: goto label_10a2b8;
        case 0x10a2c8u: goto label_10a2c8;
        case 0x10a2e4u: goto label_10a2e4;
        case 0x10a2f4u: goto label_10a2f4;
        case 0x10a300u: goto label_10a300;
        case 0x10a308u: goto label_10a308;
        case 0x10a314u: goto label_10a314;
        case 0x10a324u: goto label_10a324;
        default: break;
    }

    ctx->pc = 0x10a260u;

    // 0x10a260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a264: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x10a264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10a268: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a26c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10a26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10a270: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10a270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10a274: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A274u;
    SET_GPR_U32(ctx, 31, 0x10A27Cu);
    ctx->pc = 0x10A278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A274u;
    // 0x10a278: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A274u, 0x10A27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A27Cu;
label_10a27c:
    // 0x10a27c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10a27cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a284: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A284u;
    SET_GPR_U32(ctx, 31, 0x10A28Cu);
    ctx->pc = 0x10A288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A284u;
    // 0x10a288: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A284u, 0x10A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A28Cu;
label_10a28c:
    // 0x10a28c: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x10a28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x10a290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a294: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A294u;
    SET_GPR_U32(ctx, 31, 0x10A29Cu);
    ctx->pc = 0x10A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A294u;
    // 0x10a298: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A294u, 0x10A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A29Cu;
label_10a29c:
    // 0x10a29c: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x10a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x10a2a0: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x10a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x10a2a4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x10a2a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x10a2a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10A2A8u;
    {
        const bool branch_taken_0x10a2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A2A8u;
        // 0x10a2ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a2a8) {
            ctx->pc = 0x10A2D0u;
            goto label_10a2d0;
        }
    }
    ctx->pc = 0x10A2B0u;
    // 0x10a2b0: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A2B0u;
    SET_GPR_U32(ctx, 31, 0x10A2B8u);
    ctx->pc = 0x10A2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A2B0u;
    // 0x10a2b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A2B0u, 0x10A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A2B8u;
label_10a2b8:
    // 0x10a2b8: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x10a2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    // 0x10a2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a2c0: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A2C0u;
    SET_GPR_U32(ctx, 31, 0x10A2C8u);
    ctx->pc = 0x10A2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A2C0u;
    // 0x10a2c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A2C0u, 0x10A2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A2C8u;
label_10a2c8:
    // 0x10a2c8: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x10a2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x10a2cc: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x10a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_10a2d0:
    // 0x10a2d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a2d4: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10A2D4u;
    {
        const bool branch_taken_0x10a2d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A2D4u;
        // 0x10a2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a2d4) {
            ctx->pc = 0x10A30Cu;
            goto label_10a30c;
        }
    }
    ctx->pc = 0x10A2DCu;
    // 0x10a2dc: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A2DCu;
    SET_GPR_U32(ctx, 31, 0x10A2E4u);
    ctx->pc = 0x10A2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A2DCu;
    // 0x10a2e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A2DCu, 0x10A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A2E4u;
label_10a2e4:
    // 0x10a2e4: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x10a2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
    // 0x10a2e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a2ec: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A2ECu;
    SET_GPR_U32(ctx, 31, 0x10A2F4u);
    ctx->pc = 0x10A2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A2ECu;
    // 0x10a2f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A2ECu, 0x10A2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A2F4u;
label_10a2f4:
    // 0x10a2f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10A2F4u;
    {
        const bool branch_taken_0x10a2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A2F4u;
        // 0x10a2f8: 0xae020170  sw          $v0, 0x170($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a2f4) {
            ctx->pc = 0x10A308u;
            goto label_10a308;
        }
    }
    ctx->pc = 0x10A2FCu;
    // 0x10a2fc: 0x0  nop
    ctx->pc = 0x10a2fcu;
    // NOP
label_10a300:
    // 0x10a300: 0xc042a80  jal         func_10AA00
    ctx->pc = 0x10A300u;
    SET_GPR_U32(ctx, 31, 0x10A308u);
    ctx->pc = 0x10A304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A300u;
    // 0x10a304: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AA00u, 0x10A300u, 0x10A308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A308u;
label_10a308:
    // 0x10a308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a30c:
    // 0x10a30c: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A30Cu;
    SET_GPR_U32(ctx, 31, 0x10A314u);
    ctx->pc = 0x10A310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A30Cu;
    // 0x10a310: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A30Cu, 0x10A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A314u;
label_10a314:
    // 0x10a314: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10A314u;
    {
        const bool branch_taken_0x10a314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A314u;
        // 0x10a318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a314) {
            ctx->pc = 0x10A300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a300;
        }
    }
    ctx->pc = 0x10A31Cu;
    // 0x10a31c: 0xc0429fe  jal         func_10A7F8
    ctx->pc = 0x10A31Cu;
    SET_GPR_U32(ctx, 31, 0x10A324u);
    ctx->pc = 0x10A320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A31Cu;
    // 0x10a320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A7F8u, 0x10A31Cu, 0x10A324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A324u;
label_10a324:
    // 0x10a324: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x10a324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x10a328: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10a328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a32c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a330: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10A330u;
    {
        const bool branch_taken_0x10a330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A330u;
        // 0x10a334: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a330) {
            ctx->pc = 0x10A358u;
            goto label_10a358;
        }
    }
    ctx->pc = 0x10A338u;
    // 0x10a338: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A338u;
    {
        const bool branch_taken_0x10a338 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a338) {
            ctx->pc = 0x10A33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A338u;
            // 0x10a33c: 0x8e02085c  lw          $v0, 0x85C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A35Cu;
            goto label_10a35c;
        }
    }
    ctx->pc = 0x10A340u;
    // 0x10a340: 0x6230004  bgezl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A340u;
    {
        const bool branch_taken_0x10a340 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x10a340) {
            ctx->pc = 0x10A344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A340u;
            // 0x10a344: 0xae000864  sw          $zero, 0x864($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A354u;
            goto label_10a354;
        }
    }
    ctx->pc = 0x10A348u;
    // 0x10a348: 0x8e020864  lw          $v0, 0x864($s0)
    ctx->pc = 0x10a348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2148)));
    // 0x10a34c: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x10a34cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10a350: 0xae000864  sw          $zero, 0x864($s0)
    ctx->pc = 0x10a350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
label_10a354:
    // 0x10a354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10a358:
    // 0x10a358: 0x8e02085c  lw          $v0, 0x85C($s0)
    ctx->pc = 0x10a358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
label_10a35c:
    // 0x10a35c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x10a35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x10a360: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A360u;
    {
        const bool branch_taken_0x10a360 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A360u;
        // 0x10a364: 0xae0301bc  sw          $v1, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a360) {
            ctx->pc = 0x10A37Cu;
            goto label_10a37c;
        }
    }
    ctx->pc = 0x10A368u;
    // 0x10a368: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x10a368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x10a36c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A36Cu;
    {
        const bool branch_taken_0x10a36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a36c) {
            ctx->pc = 0x10A370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A36Cu;
            // 0x10a370: 0x8e020860  lw          $v0, 0x860($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A380u;
            goto label_10a380;
        }
    }
    ctx->pc = 0x10A374u;
    // 0x10a374: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x10a374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x10a378: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x10a378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_10a37c:
    // 0x10a37c: 0x8e020860  lw          $v0, 0x860($s0)
    ctx->pc = 0x10a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
label_10a380:
    // 0x10a380: 0x8e0401bc  lw          $a0, 0x1BC($s0)
    ctx->pc = 0x10a380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x10a384: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10a384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a388: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x10a388u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x10a38c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10a38cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a390: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x10a390u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x10a394: 0xae020860  sw          $v0, 0x860($s0)
    ctx->pc = 0x10a394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2144), GPR_U32(ctx, 2));
    // 0x10a398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a39c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A39Cu;
        // 0x10a3a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A3A4u;
    // 0x10a3a4: 0x0  nop
    ctx->pc = 0x10a3a4u;
    // NOP
    ctx->pc = 0x10a3a8u;
}
