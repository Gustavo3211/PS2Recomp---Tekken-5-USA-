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

// Function: sub_0029E1F0
// Address: 0x29e1f0 - 0x29e250
void sub_0029E1F0_0x29e1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E1F0_0x29e1f0");
#endif

    switch (ctx->pc) {
        case 0x29e240u: goto label_29e240;
        default: break;
    }

    ctx->pc = 0x29e1f0u;

    // 0x29e1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29e1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29e1f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e1f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29e1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29e1fc: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x29e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x29e200: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29E200u;
    {
        const bool branch_taken_0x29e200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29e200) {
            ctx->pc = 0x29E204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E200u;
            // 0x29e204: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E244u;
            goto label_29e244;
        }
    }
    ctx->pc = 0x29E208u;
    // 0x29e208: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x29e208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29e20c: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x29e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
    // 0x29e210: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x29e210u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x29e214: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x29e214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x29e218: 0x2484c150  addiu       $a0, $a0, -0x3EB0
    ctx->pc = 0x29e218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951248));
    // 0x29e21c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29e21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e220: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x29e220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x29e224: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x29e224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29e228: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29e228u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e22c: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x29e22cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x29e230: 0x240a021c  addiu       $t2, $zero, 0x21C
    ctx->pc = 0x29e230u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x29e234: 0x240b017e  addiu       $t3, $zero, 0x17E
    ctx->pc = 0x29e234u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 382));
    // 0x29e238: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29E238u;
    SET_GPR_U32(ctx, 31, 0x29E240u);
    ctx->pc = 0x29E23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E238u;
    // 0x29e23c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29E238u, 0x29E240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E240u;
label_29e240:
    // 0x29e240: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29e240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29e244:
    // 0x29e244: 0x3e00008  jr          $ra
    ctx->pc = 0x29E244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E244u;
        // 0x29e248: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E24Cu;
    // 0x29e24c: 0x0  nop
    ctx->pc = 0x29e24cu;
    // NOP
    ctx->pc = 0x29e250u;
}
