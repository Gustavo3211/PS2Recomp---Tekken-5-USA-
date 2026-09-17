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

// Function: sub_0036BB20
// Address: 0x36bb20 - 0x36bb70
void sub_0036BB20_0x36bb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BB20_0x36bb20");
#endif

    switch (ctx->pc) {
        case 0x36bb34u: goto label_36bb34;
        default: break;
    }

    ctx->pc = 0x36bb20u;

    // 0x36bb20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36bb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36bb24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36bb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36bb28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36bb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36bb2c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x36BB2Cu;
    SET_GPR_U32(ctx, 31, 0x36BB34u);
    ctx->pc = 0x36BB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BB2Cu;
    // 0x36bb30: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x36BB2Cu, 0x36BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BB34u;
label_36bb34:
    // 0x36bb34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36bb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bb38: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x36BB38u;
    {
        const bool branch_taken_0x36bb38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bb38) {
            ctx->pc = 0x36BB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36BB38u;
            // 0x36bb3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36BB60u;
            goto label_36bb60;
        }
    }
    ctx->pc = 0x36BB40u;
    // 0x36bb40: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36BB40u;
    {
        const bool branch_taken_0x36bb40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BB40u;
        // 0x36bb44: 0x8ca30080  lw          $v1, 0x80($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bb40) {
            ctx->pc = 0x36BB50u;
            goto label_36bb50;
        }
    }
    ctx->pc = 0x36BB48u;
    // 0x36bb48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36BB48u;
    {
        const bool branch_taken_0x36bb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BB48u;
        // 0x36bb4c: 0x34631000  ori         $v1, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bb48) {
            ctx->pc = 0x36BB58u;
            goto label_36bb58;
        }
    }
    ctx->pc = 0x36BB50u;
label_36bb50:
    // 0x36bb50: 0x2404efff  addiu       $a0, $zero, -0x1001
    ctx->pc = 0x36bb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x36bb54: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x36bb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_36bb58:
    // 0x36bb58: 0xaca30080  sw          $v1, 0x80($a1)
    ctx->pc = 0x36bb58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 3));
    // 0x36bb5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36bb5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36bb60:
    // 0x36bb60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36bb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36bb64: 0x3e00008  jr          $ra
    ctx->pc = 0x36BB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BB64u;
        // 0x36bb68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BB6Cu;
    // 0x36bb6c: 0x0  nop
    ctx->pc = 0x36bb6cu;
    // NOP
    ctx->pc = 0x36bb70u;
}
