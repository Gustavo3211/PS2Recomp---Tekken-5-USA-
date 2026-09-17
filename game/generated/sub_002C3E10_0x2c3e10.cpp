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

// Function: sub_002C3E10
// Address: 0x2c3e10 - 0x2c3eb8
void sub_002C3E10_0x2c3e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3E10_0x2c3e10");
#endif

    switch (ctx->pc) {
        case 0x2c3e24u: goto label_2c3e24;
        case 0x2c3e34u: goto label_2c3e34;
        case 0x2c3e40u: goto label_2c3e40;
        case 0x2c3e50u: goto label_2c3e50;
        default: break;
    }

    ctx->pc = 0x2c3e10u;

    // 0x2c3e10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c3e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c3e14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c3e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c3e18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c3e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2c3e1c: 0xc08eb20  jal         func_23AC80
    ctx->pc = 0x2C3E1Cu;
    SET_GPR_U32(ctx, 31, 0x2C3E24u);
    ctx->pc = 0x23AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC80u, 0x2C3E1Cu, 0x2C3E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E24u;
label_2c3e24:
    // 0x2c3e24: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C3E24u;
    {
        const bool branch_taken_0x2c3e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3e24) {
            ctx->pc = 0x2C3E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3E24u;
            // 0x2c3e28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3EA8u;
            goto label_2c3ea8;
        }
    }
    ctx->pc = 0x2C3E2Cu;
    // 0x2c3e2c: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x2C3E2Cu;
    SET_GPR_U32(ctx, 31, 0x2C3E34u);
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x2C3E2Cu, 0x2C3E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E34u;
label_2c3e34:
    // 0x2c3e34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c3e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3e38: 0xc09d480  jal         func_275200
    ctx->pc = 0x2C3E38u;
    SET_GPR_U32(ctx, 31, 0x2C3E40u);
    ctx->pc = 0x2C3E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3E38u;
    // 0x2c3e3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x2C3E38u, 0x2C3E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E40u;
label_2c3e40:
    // 0x2c3e40: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C3E40u;
    {
        const bool branch_taken_0x2c3e40 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2C3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E40u;
        // 0x2c3e44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e40) {
            ctx->pc = 0x2C3EA4u;
            goto label_2c3ea4;
        }
    }
    ctx->pc = 0x2C3E48u;
    // 0x2c3e48: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c3e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c3e4c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2c3e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c3e50:
    // 0x2c3e50: 0x8ca40898  lw          $a0, 0x898($a1)
    ctx->pc = 0x2c3e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2200)));
    // 0x2c3e54: 0x9482006c  lhu         $v0, 0x6C($a0)
    ctx->pc = 0x2c3e54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x2c3e58: 0x50470001  beql        $v0, $a3, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C3E58u;
    {
        const bool branch_taken_0x2c3e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x2c3e58) {
            ctx->pc = 0x2C3E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3E58u;
            // 0x2c3e5c: 0xac800088  sw          $zero, 0x88($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3E60u;
            goto label_2c3e60;
        }
    }
    ctx->pc = 0x2C3E60u;
label_2c3e60:
    // 0x2c3e60: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2c3e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x2c3e64: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2c3e64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c3e68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3E68u;
    {
        const bool branch_taken_0x2c3e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E68u;
        // 0x2c3e6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e68) {
            ctx->pc = 0x2C3E7Cu;
            goto label_2c3e7c;
        }
    }
    ctx->pc = 0x2C3E70u;
    // 0x2c3e70: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3E70u;
    {
        const bool branch_taken_0x2c3e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E70u;
        // 0x2c3e74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e70) {
            ctx->pc = 0x2C3E7Cu;
            goto label_2c3e7c;
        }
    }
    ctx->pc = 0x2C3E78u;
    // 0x2c3e78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3e78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3e7c:
    // 0x2c3e7c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3E7Cu;
    {
        const bool branch_taken_0x2c3e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3e7c) {
            ctx->pc = 0x2C3E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3E7Cu;
            // 0x2c3e80: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3E9Cu;
            goto label_2c3e9c;
        }
    }
    ctx->pc = 0x2C3E84u;
    // 0x2c3e84: 0x94a2003c  lhu         $v0, 0x3C($a1)
    ctx->pc = 0x2c3e84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2c3e88: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x2c3e88u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2c3e8c: 0x1810  mfhi        $v1
    ctx->pc = 0x2c3e8cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2c3e90: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C3E90u;
    {
        const bool branch_taken_0x2c3e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3e90) {
            ctx->pc = 0x2C3E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3E90u;
            // 0x2c3e94: 0xac800088  sw          $zero, 0x88($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3E98u;
            goto label_2c3e98;
        }
    }
    ctx->pc = 0x2C3E98u;
label_2c3e98:
    // 0x2c3e98: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2c3e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2c3e9c:
    // 0x2c3e9c: 0x1e00ffec  bgtz        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2C3E9Cu;
    {
        const bool branch_taken_0x2c3e9c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2C3EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E9Cu;
        // 0x2c3ea0: 0x24a508d0  addiu       $a1, $a1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e9c) {
            ctx->pc = 0x2C3E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3e50;
        }
    }
    ctx->pc = 0x2C3EA4u;
label_2c3ea4:
    // 0x2c3ea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c3ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3ea8:
    // 0x2c3ea8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c3ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3eac: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3EACu;
        // 0x2c3eb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3EB4u;
    // 0x2c3eb4: 0x0  nop
    ctx->pc = 0x2c3eb4u;
    // NOP
    ctx->pc = 0x2c3eb8u;
}
