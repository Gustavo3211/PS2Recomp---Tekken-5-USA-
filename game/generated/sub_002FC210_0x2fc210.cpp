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

// Function: sub_002FC210
// Address: 0x2fc210 - 0x2fc270
void sub_002FC210_0x2fc210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC210_0x2fc210");
#endif

    switch (ctx->pc) {
        case 0x2fc224u: goto label_2fc224;
        case 0x2fc25cu: goto label_2fc25c;
        default: break;
    }

    ctx->pc = 0x2fc210u;

    // 0x2fc210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fc214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fc218: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2fc218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2fc21c: 0xc0befd2  jal         func_2FBF48
    ctx->pc = 0x2FC21Cu;
    SET_GPR_U32(ctx, 31, 0x2FC224u);
    ctx->pc = 0x2FC220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC21Cu;
    // 0x2fc220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBF48u, 0x2FC21Cu, 0x2FC224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC224u;
label_2fc224:
    // 0x2fc224: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2fc224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2fc228: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fc228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fc22c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC22Cu;
    {
        const bool branch_taken_0x2fc22c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FC230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC22Cu;
        // 0x2fc230: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc22c) {
            ctx->pc = 0x2FC248u;
            goto label_2fc248;
        }
    }
    ctx->pc = 0x2FC234u;
    // 0x2fc234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc238: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fc238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fc23c: 0x80c8e14  j           func_323850
    ctx->pc = 0x2FC23Cu;
    ctx->pc = 0x2FC240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC23Cu;
    // 0x2fc240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323850u, 0x2FC23Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2FC244u;
    // 0x2fc244: 0x0  nop
    ctx->pc = 0x2fc244u;
    // NOP
label_2fc248:
    // 0x2fc248: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fc248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fc24c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC24Cu;
    {
        const bool branch_taken_0x2fc24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FC250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC24Cu;
        // 0x2fc250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc24c) {
            ctx->pc = 0x2FC25Cu;
            goto label_2fc25c;
        }
    }
    ctx->pc = 0x2FC254u;
    // 0x2fc254: 0xc0c8dfe  jal         func_3237F8
    ctx->pc = 0x2FC254u;
    SET_GPR_U32(ctx, 31, 0x2FC25Cu);
    ctx->pc = 0x3237F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3237F8u, 0x2FC254u, 0x2FC25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC25Cu;
label_2fc25c:
    // 0x2fc25c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc25cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc260: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fc260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fc264: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC264u;
        // 0x2fc268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC26Cu;
    // 0x2fc26c: 0x0  nop
    ctx->pc = 0x2fc26cu;
    // NOP
    ctx->pc = 0x2fc270u;
}
