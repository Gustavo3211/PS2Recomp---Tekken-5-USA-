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

// Function: sub_0049A2C8
// Address: 0x49a2c8 - 0x49a340
void sub_0049A2C8_0x49a2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A2C8_0x49a2c8");
#endif

    ctx->pc = 0x49a2c8u;

    // 0x49a2c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49a2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49a2cc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x49a2ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a2d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49a2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49a2d4: 0x24e60134  addiu       $a2, $a3, 0x134
    ctx->pc = 0x49a2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 308));
    // 0x49a2d8: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x49a2d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x49a2dc: 0x8ce2012c  lw          $v0, 0x12C($a3)
    ctx->pc = 0x49a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 300)));
    // 0x49a2e0: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x49a2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x49a2e4: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x49a2e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49a2e8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49a2ec: 0x84c90000  lh          $t1, 0x0($a2)
    ctx->pc = 0x49a2ecu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49a2f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x49a2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x49a2f4: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x49a2f4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x49a2f8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x49a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49a2fc: 0x681024  and         $v0, $v1, $t0
    ctx->pc = 0x49a2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x49a300: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x49a300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x49a304: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49a304u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49a308: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x49a308u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x49a30c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49a310: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49a310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49a314: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49a314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49a318: 0x684024  and         $t0, $v1, $t0
    ctx->pc = 0x49a318u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x49a31c: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49A31Cu;
    {
        const bool branch_taken_0x49a31c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x49A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A31Cu;
        // 0x49a320: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a31c) {
            ctx->pc = 0x49A330u;
            goto label_49a330;
        }
    }
    ctx->pc = 0x49A324u;
    // 0x49a324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49a324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a328: 0x8123392  j           func_48CE48
    ctx->pc = 0x49A328u;
    ctx->pc = 0x49A32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A328u;
    // 0x49a32c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CE48u;
    sub_0048CE48_0x48ce48(rdram, ctx, runtime); return;
    ctx->pc = 0x49A330u;
label_49a330:
    // 0x49a330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49a330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a334: 0x3e00008  jr          $ra
    ctx->pc = 0x49A334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A334u;
        // 0x49a338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A33Cu;
    // 0x49a33c: 0x0  nop
    ctx->pc = 0x49a33cu;
    // NOP
    ctx->pc = 0x49a340u;
}
