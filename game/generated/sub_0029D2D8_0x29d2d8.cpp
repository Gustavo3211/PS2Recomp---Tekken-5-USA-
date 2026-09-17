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

// Function: sub_0029D2D8
// Address: 0x29d2d8 - 0x29d338
void sub_0029D2D8_0x29d2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D2D8_0x29d2d8");
#endif

    switch (ctx->pc) {
        case 0x29d328u: goto label_29d328;
        default: break;
    }

    ctx->pc = 0x29d2d8u;

    // 0x29d2d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29d2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29d2dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d2e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29d2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29d2e4: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x29d2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x29d2e8: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29D2E8u;
    {
        const bool branch_taken_0x29d2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29d2e8) {
            ctx->pc = 0x29D2ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D2E8u;
            // 0x29d2ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D32Cu;
            goto label_29d32c;
        }
    }
    ctx->pc = 0x29D2F0u;
    // 0x29d2f0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x29d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29d2f4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x29d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x29d2f8: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x29d2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x29d2fc: 0x34420026  ori         $v0, $v0, 0x26
    ctx->pc = 0x29d2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38);
    // 0x29d300: 0x2484c150  addiu       $a0, $a0, -0x3EB0
    ctx->pc = 0x29d300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951248));
    // 0x29d304: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29d304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d308: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x29d308u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x29d30c: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x29d30cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29d310: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29d310u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d314: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x29d314u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x29d318: 0x240a021c  addiu       $t2, $zero, 0x21C
    ctx->pc = 0x29d318u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x29d31c: 0x240b017e  addiu       $t3, $zero, 0x17E
    ctx->pc = 0x29d31cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 382));
    // 0x29d320: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29D320u;
    SET_GPR_U32(ctx, 31, 0x29D328u);
    ctx->pc = 0x29D324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D320u;
    // 0x29d324: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29D320u, 0x29D328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D328u;
label_29d328:
    // 0x29d328: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29d328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29d32c:
    // 0x29d32c: 0x3e00008  jr          $ra
    ctx->pc = 0x29D32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D32Cu;
        // 0x29d330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D334u;
    // 0x29d334: 0x0  nop
    ctx->pc = 0x29d334u;
    // NOP
    ctx->pc = 0x29d338u;
}
