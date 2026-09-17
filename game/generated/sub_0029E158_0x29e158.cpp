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

// Function: sub_0029E158
// Address: 0x29e158 - 0x29e1a0
void sub_0029E158_0x29e158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E158_0x29e158");
#endif

    switch (ctx->pc) {
        case 0x29e194u: goto label_29e194;
        default: break;
    }

    ctx->pc = 0x29e158u;

    // 0x29e158: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x29e158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29e15c: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x29e15cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x29e160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29e160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29e164: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x29e164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
    // 0x29e168: 0x2484c150  addiu       $a0, $a0, -0x3EB0
    ctx->pc = 0x29e168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951248));
    // 0x29e16c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29e16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e170: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x29e170u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x29e174: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x29e174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29e178: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29e178u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e17c: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x29e17cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x29e180: 0x240a0226  addiu       $t2, $zero, 0x226
    ctx->pc = 0x29e180u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x29e184: 0x240b0088  addiu       $t3, $zero, 0x88
    ctx->pc = 0x29e184u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x29e188: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29e188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29e18c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29E18Cu;
    SET_GPR_U32(ctx, 31, 0x29E194u);
    ctx->pc = 0x29E190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E18Cu;
    // 0x29e190: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29E18Cu, 0x29E194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E194u;
label_29e194:
    // 0x29e194: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29e194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e198: 0x3e00008  jr          $ra
    ctx->pc = 0x29E198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E198u;
        // 0x29e19c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E1A0u;
}
