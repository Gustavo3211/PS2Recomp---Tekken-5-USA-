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

// Function: sub_00304300
// Address: 0x304300 - 0x304348
void sub_00304300_0x304300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304300_0x304300");
#endif

    switch (ctx->pc) {
        case 0x304338u: goto label_304338;
        default: break;
    }

    ctx->pc = 0x304300u;

    // 0x304300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304304: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x304304u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30430c: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x30430cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x304310: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x304310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x304314: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x304314u;
    {
        const bool branch_taken_0x304314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304314u;
        // 0x304318: 0x24640040  addiu       $a0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304314) {
            ctx->pc = 0x304330u;
            goto label_304330;
        }
    }
    ctx->pc = 0x30431Cu;
    // 0x30431c: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x30431cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x304320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304324: 0x80bf0da  j           func_2FC368
    ctx->pc = 0x304324u;
    ctx->pc = 0x304328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304324u;
    // 0x304328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC368u;
    sub_002FC368_0x2fc368(rdram, ctx, runtime); return;
    ctx->pc = 0x30432Cu;
    // 0x30432c: 0x0  nop
    ctx->pc = 0x30432cu;
    // NOP
label_304330:
    // 0x304330: 0xc0bf084  jal         func_2FC210
    ctx->pc = 0x304330u;
    SET_GPR_U32(ctx, 31, 0x304338u);
    ctx->pc = 0x304334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304330u;
    // 0x304334: 0x24640040  addiu       $a0, $v1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC210u, 0x304330u, 0x304338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304338u;
label_304338:
    // 0x304338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30433c: 0x3e00008  jr          $ra
    ctx->pc = 0x30433Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30433Cu;
        // 0x304340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30433Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304344u;
    // 0x304344: 0x0  nop
    ctx->pc = 0x304344u;
    // NOP
    ctx->pc = 0x304348u;
}
