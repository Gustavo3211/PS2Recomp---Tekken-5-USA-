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

// Function: sub_004E6BB8
// Address: 0x4e6bb8 - 0x4e6c78
void sub_004E6BB8_0x4e6bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6BB8_0x4e6bb8");
#endif

    switch (ctx->pc) {
        case 0x4e6c00u: goto label_4e6c00;
        default: break;
    }

    ctx->pc = 0x4e6bb8u;

    // 0x4e6bb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e6bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e6bbc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e6bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e6bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e6bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e6bc4: 0x24a511e4  addiu       $a1, $a1, 0x11E4
    ctx->pc = 0x4e6bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4580));
    // 0x4e6bc8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e6bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e6bcc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4e6bccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4e6bd0: 0x844711d0  lh          $a3, 0x11D0($v0)
    ctx->pc = 0x4e6bd0u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x7F11D0u));
    // 0x4e6bd4: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4e6bd4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7F11E4u));
    // 0x4e6bd8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11E4u));
    // 0x4e6bdc: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4e6bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4e6be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e6be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e6be4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4e6be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4e6be8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e6be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e6bec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e6becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e6bf0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4e6bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4e6bf4: 0x8139b00  j           func_4E6C00
    ctx->pc = 0x4E6BF4u;
    ctx->pc = 0x4E6BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6BF4u;
    // 0x4e6bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6C00u;
    goto label_4e6c00;
    ctx->pc = 0x4E6BFCu;
    // 0x4e6bfc: 0x0  nop
    ctx->pc = 0x4e6bfcu;
    // NOP
label_4e6c00:
    // 0x4e6c00: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e6c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e6c04: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x4e6c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4e6c08: 0x944311dc  lhu         $v1, 0x11DC($v0)
    ctx->pc = 0x4e6c08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7F11DCu));
    // 0x4e6c0c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4e6c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4e6c10: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e6c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e6c14: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4e6c14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4e6c18: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4e6c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4e6c1c: 0x24870014  addiu       $a3, $a0, 0x14
    ctx->pc = 0x4e6c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4e6c20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e6c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e6c24: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4e6c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4e6c28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e6c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e6c2c: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4e6c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4e6c30: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4e6c30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4e6c34: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x4e6c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x4e6c38: 0x950211e0  lhu         $v0, 0x11E0($t0)
    ctx->pc = 0x4e6c38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4576)));
    // 0x4e6c3c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4e6c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e6c40: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e6c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e6c44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e6c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e6c48: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4e6c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4e6c4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e6c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e6c50: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e6c50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e6c54: 0x952211e4  lhu         $v0, 0x11E4($t1)
    ctx->pc = 0x4e6c54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4580)));
    // 0x4e6c58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e6c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e6c5c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e6c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e6c60: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4e6c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4e6c64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e6c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e6c68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e6c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e6c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E6C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6C6Cu;
        // 0x4e6c70: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E6C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E6C74u;
    // 0x4e6c74: 0x0  nop
    ctx->pc = 0x4e6c74u;
    // NOP
    ctx->pc = 0x4e6c78u;
}
