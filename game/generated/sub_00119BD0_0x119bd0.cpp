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

// Function: sub_00119BD0
// Address: 0x119bd0 - 0x119c40
void sub_00119BD0_0x119bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119BD0_0x119bd0");
#endif

    ctx->pc = 0x119bd0u;

    // 0x119bd0: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x119bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x119bd4: 0x24472148  addiu       $a3, $v0, 0x2148
    ctx->pc = 0x119bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 8520));
    // 0x119bd8: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x119bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x13215Cu));
    // 0x119bdc: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x119BDCu;
    {
        const bool branch_taken_0x119bdc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x119bdc) {
            ctx->pc = 0x119BF0u;
            goto label_119bf0;
        }
    }
    ctx->pc = 0x119BE4u;
    // 0x119be4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x119be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x119be8: 0x3e00008  jr          $ra
    ctx->pc = 0x119BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BE8u;
        // 0x119bec: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119BF0u;
label_119bf0:
    // 0x119bf0: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x119bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x119bf4: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x119bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x119bf8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x119bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x119bfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x119c00: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x119c00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x119c04: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x119c04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x119c08: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x119c08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x119c0c: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x119c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x119c10: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x119c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x119c14: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x119c14u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x119c18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x119c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x119c1c: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x119c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x119c20: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x119c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x119c24: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x119c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x119c28: 0x304203fe  andi        $v0, $v0, 0x3FE
    ctx->pc = 0x119c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1022);
    // 0x119c2c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x119c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x119c30: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x119c30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x119c34: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x119c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x119c38: 0x3e00008  jr          $ra
    ctx->pc = 0x119C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C38u;
        // 0x119c3c: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119C40u;
}
