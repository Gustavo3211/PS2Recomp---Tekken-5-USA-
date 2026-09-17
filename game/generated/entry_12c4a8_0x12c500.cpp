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

// Function: entry_12c4a8
// Address: 0x12c4a8 - 0x12c500
void entry_12c4a8_0x12c500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_12c4a8_0x12c500");
#endif

    switch (ctx->pc) {
        case 0x12c4e8u: goto label_12c4e8;
        default: break;
    }

    ctx->pc = 0x12c4a8u;

    // 0x12c4a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12c4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12c4ac: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x12c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x12c4b0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x12c4b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12c4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x12c4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x12c4bc: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x12c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x12c4c0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x12c4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4c4: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x12c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x12c4c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12c4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4cc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12c4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12c4d0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x12c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x12c4d4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x12c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x12c4d8: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x12c4d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x12c4dc: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x12c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x12c4e0: 0xc04aab2  jal         func_12AAC8
    ctx->pc = 0x12C4E0u;
    SET_GPR_U32(ctx, 31, 0x12C4E8u);
    ctx->pc = 0x12C4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C4E0u;
    // 0x12c4e4: 0xafa80000  sw          $t0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AAC8u, 0x12C4E0u, 0x12C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C4E8u;
label_12c4e8:
    // 0x12c4e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12c4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c4ec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12c4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12c4f0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x12c4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x12C4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4F4u;
        // 0x12c4f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C4FCu;
    // 0x12c4fc: 0x0  nop
    ctx->pc = 0x12c4fcu;
    // NOP
    ctx->pc = 0x12c500u;
}
