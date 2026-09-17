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

// Function: sub_00305510
// Address: 0x305510 - 0x305548
void sub_00305510_0x305510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305510_0x305510");
#endif

    switch (ctx->pc) {
        case 0x30552cu: goto label_30552c;
        case 0x305534u: goto label_305534;
        default: break;
    }

    ctx->pc = 0x305510u;

    // 0x305510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x305510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x305514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x305514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x305518: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x305518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30551c: 0x3c0410bf  lui         $a0, 0x10BF
    ctx->pc = 0x30551cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4287 << 16));
    // 0x305520: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x305520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x305524: 0xc0cb30a  jal         func_32CC28
    ctx->pc = 0x305524u;
    SET_GPR_U32(ctx, 31, 0x30552Cu);
    ctx->pc = 0x305528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305524u;
    // 0x305528: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CC28u, 0x305524u, 0x30552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30552Cu;
label_30552c:
    // 0x30552c: 0xc0c11dc  jal         func_304770
    ctx->pc = 0x30552Cu;
    SET_GPR_U32(ctx, 31, 0x305534u);
    ctx->pc = 0x305530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30552Cu;
    // 0x305530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304770u, 0x30552Cu, 0x305534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305534u;
label_305534:
    // 0x305534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x305534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305538: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x305538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30553c: 0x3e00008  jr          $ra
    ctx->pc = 0x30553Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30553Cu;
        // 0x305540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30553Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305544u;
    // 0x305544: 0x0  nop
    ctx->pc = 0x305544u;
    // NOP
    ctx->pc = 0x305548u;
}
