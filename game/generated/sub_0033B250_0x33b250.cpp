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

// Function: sub_0033B250
// Address: 0x33b250 - 0x33b308
void sub_0033B250_0x33b250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B250_0x33b250");
#endif

    switch (ctx->pc) {
        case 0x33b290u: goto label_33b290;
        case 0x33b2fcu: goto label_33b2fc;
        default: break;
    }

    ctx->pc = 0x33b250u;

    // 0x33b250: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x33b250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b254: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33b254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33b258: 0x24e20014  addiu       $v0, $a3, 0x14
    ctx->pc = 0x33b258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x33b25c: 0x24e80028  addiu       $t0, $a3, 0x28
    ctx->pc = 0x33b25cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
    // 0x33b260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33b260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33b264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33b264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b268: 0xace70000  sw          $a3, 0x0($a3)
    ctx->pc = 0x33b268u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 7));
    // 0x33b26c: 0xace70004  sw          $a3, 0x4($a3)
    ctx->pc = 0x33b26cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 7));
    // 0x33b270: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x33b270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x33b274: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x33b274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
    // 0x33b278: 0xad080000  sw          $t0, 0x0($t0)
    ctx->pc = 0x33b278u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 8));
    // 0x33b27c: 0xad080004  sw          $t0, 0x4($t0)
    ctx->pc = 0x33b27cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 8));
    // 0x33b280: 0x8ce20040  lw          $v0, 0x40($a3)
    ctx->pc = 0x33b280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x33b284: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33B284u;
    {
        const bool branch_taken_0x33b284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B284u;
        // 0x33b288: 0x8ce6003c  lw          $a2, 0x3C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b284) {
            ctx->pc = 0x33B2BCu;
            goto label_33b2bc;
        }
    }
    ctx->pc = 0x33B28Cu;
    // 0x33b28c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x33b28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_33b290:
    // 0x33b290: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x33b290u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x33b294: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x33b294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x33b298: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33b298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33b29c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x33b29cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x33b2a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x33b2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33b2a4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x33b2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x33b2a8: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x33b2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x33b2ac: 0x8ce20040  lw          $v0, 0x40($a3)
    ctx->pc = 0x33b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x33b2b0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x33b2b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33b2b4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x33B2B4u;
    {
        const bool branch_taken_0x33b2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B2B4u;
        // 0x33b2b8: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b2b4) {
            ctx->pc = 0x33B290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b290;
        }
    }
    ctx->pc = 0x33B2BCu;
label_33b2bc:
    // 0x33b2bc: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x33b2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33b2c0: 0x50a80008  beql        $a1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33B2C0u;
    {
        const bool branch_taken_0x33b2c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        if (branch_taken_0x33b2c0) {
            ctx->pc = 0x33B2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B2C0u;
            // 0x33b2c4: 0x94e30044  lhu         $v1, 0x44($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B2E4u;
            goto label_33b2e4;
        }
    }
    ctx->pc = 0x33B2C8u;
    // 0x33b2c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x33b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33b2cc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x33b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33b2d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33b2d4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x33b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33b2d8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x33b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33b2dc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x33b2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x33b2e0: 0x94e30044  lhu         $v1, 0x44($a3)
    ctx->pc = 0x33b2e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 68)));
label_33b2e4:
    // 0x33b2e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x33b2e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b2e8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x33b2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b2ec: 0xa4c30008  sh          $v1, 0x8($a2)
    ctx->pc = 0x33b2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x33b2f0: 0x94e20048  lhu         $v0, 0x48($a3)
    ctx->pc = 0x33b2f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x33b2f4: 0xc0ceccc  jal         func_33B330
    ctx->pc = 0x33B2F4u;
    SET_GPR_U32(ctx, 31, 0x33B2FCu);
    ctx->pc = 0x33B2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B2F4u;
    // 0x33b2f8: 0xa4c2000a  sh          $v0, 0xA($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B330u, 0x33B2F4u, 0x33B2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B2FCu;
label_33b2fc:
    // 0x33b2fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b300: 0x3e00008  jr          $ra
    ctx->pc = 0x33B300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B300u;
        // 0x33b304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B308u;
}
