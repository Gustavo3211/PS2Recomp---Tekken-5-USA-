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

// Function: sub_00122128
// Address: 0x122128 - 0x122208
void sub_00122128_0x122128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122128_0x122128");
#endif

    switch (ctx->pc) {
        case 0x122144u: goto label_122144;
        case 0x122150u: goto label_122150;
        case 0x122160u: goto label_122160;
        case 0x122188u: goto label_122188;
        case 0x1221b0u: goto label_1221b0;
        case 0x1221dcu: goto label_1221dc;
        default: break;
    }

    ctx->pc = 0x122128u;

    // 0x122128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x122128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12212c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12212cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122130: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x122130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122134: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x122134u;
    {
        const bool branch_taken_0x122134 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x122138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122134u;
        // 0x122138: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122134) {
            ctx->pc = 0x122148u;
            goto label_122148;
        }
    }
    ctx->pc = 0x12213Cu;
    // 0x12213c: 0xc049d4a  jal         func_127528
    ctx->pc = 0x12213Cu;
    SET_GPR_U32(ctx, 31, 0x122144u);
    ctx->pc = 0x127528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127528u, 0x12213Cu, 0x122144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122144u;
label_122144:
    // 0x122144: 0x0  nop
    ctx->pc = 0x122144u;
    // NOP
label_122148:
    // 0x122148: 0xc049e78  jal         func_1279E0
    ctx->pc = 0x122148u;
    SET_GPR_U32(ctx, 31, 0x122150u);
    ctx->pc = 0x1279E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1279E0u, 0x122148u, 0x122150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122150u;
label_122150:
    // 0x122150: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x122150u;
    {
        const bool branch_taken_0x122150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x122150) {
            ctx->pc = 0x122154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122150u;
            // 0x122154: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1221FCu;
            goto label_1221fc;
        }
    }
    ctx->pc = 0x122158u;
    // 0x122158: 0xc048758  jal         func_121D60
    ctx->pc = 0x122158u;
    SET_GPR_U32(ctx, 31, 0x122160u);
    ctx->pc = 0x121D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121D60u, 0x122158u, 0x122160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122160u;
label_122160:
    // 0x122160: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x122160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122164: 0x2602000f  addiu       $v0, $s0, 0xF
    ctx->pc = 0x122164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x122168: 0x8ce600d0  lw          $a2, 0xD0($a3)
    ctx->pc = 0x122168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 208)));
    // 0x12216c: 0x22902  srl         $a1, $v0, 4
    ctx->pc = 0x12216cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x122170: 0x2ca3000d  sltiu       $v1, $a1, 0xD
    ctx->pc = 0x122170u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x122174: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x122174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x122178: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x122178u;
    {
        const bool branch_taken_0x122178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122178u;
        // 0x12217c: 0xc24025  or          $t0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122178) {
            ctx->pc = 0x122188u;
            goto label_122188;
        }
    }
    ctx->pc = 0x122180u;
    // 0x122180: 0xc048724  jal         func_121C90
    ctx->pc = 0x122180u;
    SET_GPR_U32(ctx, 31, 0x122188u);
    ctx->pc = 0x121C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121C90u, 0x122180u, 0x122188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122188u;
label_122188:
    // 0x122188: 0x38a20001  xori        $v0, $a1, 0x1
    ctx->pc = 0x122188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x12218c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12218cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122190: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x122190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x122194: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x122194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x122198: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x122198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12219c: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x12219cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x1221a0: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1221a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1221a4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1221A4u;
    {
        const bool branch_taken_0x1221a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1221A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1221A4u;
        // 0x1221a8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1221a4) {
            ctx->pc = 0x1221D4u;
            goto label_1221d4;
        }
    }
    ctx->pc = 0x1221ACu;
    // 0x1221ac: 0x881006  srlv        $v0, $t0, $a0
    ctx->pc = 0x1221acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
label_1221b0:
    // 0x1221b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1221b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1221b4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1221B4u;
    {
        const bool branch_taken_0x1221b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1221b4) {
            ctx->pc = 0x1221B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1221B4u;
            // 0x1221b8: 0x31842  srl         $v1, $v1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1221E0u;
            goto label_1221e0;
        }
    }
    ctx->pc = 0x1221BCu;
    // 0x1221bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1221bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1221c0: 0x0  nop
    ctx->pc = 0x1221c0u;
    // NOP
    // 0x1221c4: 0x0  nop
    ctx->pc = 0x1221c4u;
    // NOP
    // 0x1221c8: 0x0  nop
    ctx->pc = 0x1221c8u;
    // NOP
    // 0x1221cc: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1221CCu;
    {
        const bool branch_taken_0x1221cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1221D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1221CCu;
        // 0x1221d0: 0x881006  srlv        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1221cc) {
            ctx->pc = 0x1221B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1221b0;
        }
    }
    ctx->pc = 0x1221D4u;
label_1221d4:
    // 0x1221d4: 0xc048724  jal         func_121C90
    ctx->pc = 0x1221D4u;
    SET_GPR_U32(ctx, 31, 0x1221DCu);
    ctx->pc = 0x121C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121C90u, 0x1221D4u, 0x1221DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1221DCu;
label_1221dc:
    // 0x1221dc: 0x0  nop
    ctx->pc = 0x1221dcu;
    // NOP
label_1221e0:
    // 0x1221e0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1221e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1221e4: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1221e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1221e8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1221e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1221ec: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1221ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1221f0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1221f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1221f4: 0xace300d0  sw          $v1, 0xD0($a3)
    ctx->pc = 0x1221f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 208), GPR_U32(ctx, 3));
    // 0x1221f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1221f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1221fc:
    // 0x1221fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1221fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x122200: 0x3e00008  jr          $ra
    ctx->pc = 0x122200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122200u;
        // 0x122204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122208u;
}
