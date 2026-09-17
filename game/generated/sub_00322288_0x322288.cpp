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

// Function: sub_00322288
// Address: 0x322288 - 0x322310
void sub_00322288_0x322288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322288_0x322288");
#endif

    switch (ctx->pc) {
        case 0x3222d0u: goto label_3222d0;
        case 0x3222dcu: goto label_3222dc;
        case 0x3222e8u: goto label_3222e8;
        case 0x3222f4u: goto label_3222f4;
        default: break;
    }

    ctx->pc = 0x322288u;

    // 0x322288: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x322288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32228c: 0x24850048  addiu       $a1, $a0, 0x48
    ctx->pc = 0x32228cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x322290: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x322290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x322294: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x322294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x322298: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x322298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x32229c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x32229cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x3222a0: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x3222a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x3222a4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3222a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3222a8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x3222a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x3222ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3222ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3222B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3222ACu;
        // 0x3222b0: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3222ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3222B4u;
    // 0x3222b4: 0x0  nop
    ctx->pc = 0x3222b4u;
    // NOP
    // 0x3222b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3222b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3222bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3222bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3222c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3222c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3222c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3222c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3222c8: 0xc0c89ec  jal         func_3227B0
    ctx->pc = 0x3222C8u;
    SET_GPR_U32(ctx, 31, 0x3222D0u);
    ctx->pc = 0x3222CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3222C8u;
    // 0x3222cc: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3227B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3227B0u, 0x3222C8u, 0x3222D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222D0u;
label_3222d0:
    // 0x3222d0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x3222d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x3222d4: 0xc0c8a26  jal         func_322898
    ctx->pc = 0x3222D4u;
    SET_GPR_U32(ctx, 31, 0x3222DCu);
    ctx->pc = 0x3222D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3222D4u;
    // 0x3222d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322898u, 0x3222D4u, 0x3222DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222DCu;
label_3222dc:
    // 0x3222dc: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x3222dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x3222e0: 0xc0c8a52  jal         func_322948
    ctx->pc = 0x3222E0u;
    SET_GPR_U32(ctx, 31, 0x3222E8u);
    ctx->pc = 0x3222E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3222E0u;
    // 0x3222e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322948u, 0x3222E0u, 0x3222E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222E8u;
label_3222e8:
    // 0x3222e8: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x3222e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x3222ec: 0xc0c8a76  jal         func_3229D8
    ctx->pc = 0x3222ECu;
    SET_GPR_U32(ctx, 31, 0x3222F4u);
    ctx->pc = 0x3222F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3222ECu;
    // 0x3222f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3229D8u, 0x3222ECu, 0x3222F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222F4u;
label_3222f4:
    // 0x3222f4: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x3222f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x3222f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3222f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3222fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3222fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322304: 0x80c8ab8  j           func_322AE0
    ctx->pc = 0x322304u;
    ctx->pc = 0x322308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322304u;
    // 0x322308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322AE0u, 0x322304u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32230Cu;
    // 0x32230c: 0x0  nop
    ctx->pc = 0x32230cu;
    // NOP
    ctx->pc = 0x322310u;
}
