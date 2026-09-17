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

// Function: sub_00219890
// Address: 0x219890 - 0x2198c8
void sub_00219890_0x219890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219890_0x219890");
#endif

    switch (ctx->pc) {
        case 0x2198a4u: goto label_2198a4;
        default: break;
    }

    ctx->pc = 0x219890u;

    // 0x219890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x219890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219898: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x219898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21989c: 0xc086620  jal         func_219880
    ctx->pc = 0x21989Cu;
    SET_GPR_U32(ctx, 31, 0x2198A4u);
    ctx->pc = 0x2198A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21989Cu;
    // 0x2198a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219880u, 0x21989Cu, 0x2198A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198A4u;
label_2198a4:
    // 0x2198a4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2198a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2198a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2198a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2198ac: 0x2021007  srav        $v0, $v0, $s0
    ctx->pc = 0x2198acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x2198b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2198b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2198b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2198b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2198b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2198b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2198bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2198BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2198C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2198BCu;
        // 0x2198c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2198BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2198C4u;
    // 0x2198c4: 0x0  nop
    ctx->pc = 0x2198c4u;
    // NOP
    ctx->pc = 0x2198c8u;
}
