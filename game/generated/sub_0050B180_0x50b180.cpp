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

// Function: sub_0050B180
// Address: 0x50b180 - 0x50b1f0
void sub_0050B180_0x50b180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050B180_0x50b180");
#endif

    switch (ctx->pc) {
        case 0x50b194u: goto label_50b194;
        default: break;
    }

    ctx->pc = 0x50b180u;

    // 0x50b180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50b180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50b184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50b184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50b188: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x50b188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x50b18c: 0xc124620  jal         func_491880
    ctx->pc = 0x50B18Cu;
    SET_GPR_U32(ctx, 31, 0x50B194u);
    ctx->pc = 0x50B190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50B18Cu;
    // 0x50b190: 0x3c10008f  lui         $s0, 0x8F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x50B18Cu, 0x50B194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50B194u;
label_50b194:
    // 0x50b194: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50b194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x50b198: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x50b198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x50b19c: 0x24a5c628  addiu       $a1, $a1, -0x39D8
    ctx->pc = 0x50b19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952488));
    // 0x50b1a0: 0x24424c00  addiu       $v0, $v0, 0x4C00
    ctx->pc = 0x50b1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19456));
    // 0x50b1a4: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x50b1a4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x8EC628u));
    // 0x50b1a8: 0x2610c604  addiu       $s0, $s0, -0x39FC
    ctx->pc = 0x50b1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952452));
    // 0x50b1ac: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x50b1acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EC628u));
    // 0x50b1b0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x50b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x50b1b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x50b1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50b1b8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x50b1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x50b1bc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50b1bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50b1c0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x50b1c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x50b1c4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x50b1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x50b1c8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x50b1c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50b1cc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x50b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x50b1d0: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x50b1d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x50b1d4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x50b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x50b1d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x50b1dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x50b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x50b1e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50b1e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50b1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x50B1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B1E4u;
        // 0x50b1e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50B1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50B1ECu;
    // 0x50b1ec: 0x0  nop
    ctx->pc = 0x50b1ecu;
    // NOP
    ctx->pc = 0x50b1f0u;
}
