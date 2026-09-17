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

// Function: sub_00304988
// Address: 0x304988 - 0x3049d0
void sub_00304988_0x304988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304988_0x304988");
#endif

    switch (ctx->pc) {
        case 0x3049a8u: goto label_3049a8;
        case 0x3049b8u: goto label_3049b8;
        default: break;
    }

    ctx->pc = 0x304988u;

    // 0x304988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30498c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30498cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304990: 0x24900040  addiu       $s0, $a0, 0x40
    ctx->pc = 0x304990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x304994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x304994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304998: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x304998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30499c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30499cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3049a0: 0xc0bfd88  jal         func_2FF620
    ctx->pc = 0x3049A0u;
    SET_GPR_U32(ctx, 31, 0x3049A8u);
    ctx->pc = 0x3049A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3049A0u;
    // 0x3049a4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF620u, 0x3049A0u, 0x3049A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3049A8u;
label_3049a8:
    // 0x3049a8: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x3049a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3049ac: 0x86240012  lh          $a0, 0x12($s1)
    ctx->pc = 0x3049acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x3049b0: 0xc0bf1b2  jal         func_2FC6C8
    ctx->pc = 0x3049B0u;
    SET_GPR_U32(ctx, 31, 0x3049B8u);
    ctx->pc = 0x3049B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3049B0u;
    // 0x3049b4: 0x24a50130  addiu       $a1, $a1, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC6C8u, 0x3049B0u, 0x3049B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3049B8u;
label_3049b8:
    // 0x3049b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3049b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3049bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3049bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3049c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3049c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3049c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3049C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3049C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049C4u;
        // 0x3049c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3049C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3049CCu;
    // 0x3049cc: 0x0  nop
    ctx->pc = 0x3049ccu;
    // NOP
    ctx->pc = 0x3049d0u;
}
