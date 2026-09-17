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

// Function: sub_0031D3A0
// Address: 0x31d3a0 - 0x31d420
void sub_0031D3A0_0x31d3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D3A0_0x31d3a0");
#endif

    switch (ctx->pc) {
        case 0x31d3f8u: goto label_31d3f8;
        default: break;
    }

    ctx->pc = 0x31d3a0u;

    // 0x31d3a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31d3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31d3a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x31d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x31d3a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31d3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d3ac: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x31d3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x31d3b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31d3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31d3b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31d3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d3b8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x31d3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31d3bc: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x31d3bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x31d3c0: 0x73d78  dsll        $a3, $a3, 21
    ctx->pc = 0x31d3c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 21);
    // 0x31d3c4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x31d3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x31d3c8: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x31d3c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31d3cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31d3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31d3d0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x31d3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x31d3d4: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x31d3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x31d3d8: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x31d3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x31d3dc: 0xfe070010  sd          $a3, 0x10($s0)
    ctx->pc = 0x31d3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 7));
    // 0x31d3e0: 0xae080028  sw          $t0, 0x28($s0)
    ctx->pc = 0x31d3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 8));
    // 0x31d3e4: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x31d3e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x31d3e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31D3E8u;
    {
        const bool branch_taken_0x31d3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D3E8u;
        // 0x31d3ec: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d3e8) {
            ctx->pc = 0x31D408u;
            goto label_31d408;
        }
    }
    ctx->pc = 0x31D3F0u;
    // 0x31d3f0: 0xc0c7880  jal         func_31E200
    ctx->pc = 0x31D3F0u;
    SET_GPR_U32(ctx, 31, 0x31D3F8u);
    ctx->pc = 0x31E200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E200u, 0x31D3F0u, 0x31D3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D3F8u;
label_31d3f8:
    // 0x31d3f8: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x31d3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x31d3fc: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x31d3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x31d400: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31d400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31d404: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x31d404u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
label_31d408:
    // 0x31d408: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x31d408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x31d40c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31d40cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d410: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31d410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31d414: 0x3e00008  jr          $ra
    ctx->pc = 0x31D414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D414u;
        // 0x31d418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D41Cu;
    // 0x31d41c: 0x0  nop
    ctx->pc = 0x31d41cu;
    // NOP
    ctx->pc = 0x31d420u;
}
