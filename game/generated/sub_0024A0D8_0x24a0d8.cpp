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

// Function: sub_0024A0D8
// Address: 0x24a0d8 - 0x24a148
void sub_0024A0D8_0x24a0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A0D8_0x24a0d8");
#endif

    switch (ctx->pc) {
        case 0x24a0f8u: goto label_24a0f8;
        case 0x24a0fcu: goto label_24a0fc;
        case 0x24a108u: goto label_24a108;
        case 0x24a13cu: goto label_24a13c;
        case 0x24a140u: goto label_24a140;
        default: break;
    }

    ctx->pc = 0x24a0d8u;

    // 0x24a0d8: 0x8cc30044  lw          $v1, 0x44($a2)
    ctx->pc = 0x24a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x24a0dc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x24a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x24a0e0: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x24A0E0u;
    {
        const bool branch_taken_0x24a0e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0E0u;
        // 0x24a0e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0e0) {
            ctx->pc = 0x24A140u;
            goto label_24a140;
        }
    }
    ctx->pc = 0x24A0E8u;
    // 0x24a0e8: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x24a0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x24a0ec: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x24a0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a0f0: 0x8092a16  j           func_24A858
    ctx->pc = 0x24A0F0u;
    ctx->pc = 0x24A0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A0F0u;
    // 0x24a0f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A858u;
    sub_0024A858_0x24a858(rdram, ctx, runtime); return;
    ctx->pc = 0x24A0F8u;
label_24a0f8:
    // 0x24a0f8: 0x25090008  addiu       $t1, $t0, 0x8
    ctx->pc = 0x24a0f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_24a0fc:
    // 0x24a0fc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x24a0fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x24a100: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24a100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a104: 0x0  nop
    ctx->pc = 0x24a104u;
    // NOP
label_24a108:
    // 0x24a108: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x24a108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24a10c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24A10Cu;
    {
        const bool branch_taken_0x24a10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A10Cu;
        // 0x24a110: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a10c) {
            ctx->pc = 0x24A140u;
            goto label_24a140;
        }
    }
    ctx->pc = 0x24A114u;
    // 0x24a114: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x24a114u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x24a118: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x24a118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x24a11c: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x24a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x24a120: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24a120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24a124: 0x5444fff8  bnel        $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24A124u;
    {
        const bool branch_taken_0x24a124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x24a124) {
            ctx->pc = 0x24A128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A124u;
            // 0x24a128: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a108;
        }
    }
    ctx->pc = 0x24A12Cu;
    // 0x24a12c: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x24a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x24a130: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x24a130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a134: 0xc092a16  jal         func_24A858
    ctx->pc = 0x24A134u;
    SET_GPR_U32(ctx, 31, 0x24A13Cu);
    ctx->pc = 0x24A138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A134u;
    // 0x24a138: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A858u, 0x24A134u, 0x24A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A13Cu;
label_24a13c:
    // 0x24a13c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24a140:
    // 0x24a140: 0x3e00008  jr          $ra
    ctx->pc = 0x24A140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A140u;
        // 0x24a144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A148u;
}
