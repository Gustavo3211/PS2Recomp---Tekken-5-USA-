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

// Function: sub_002F0700
// Address: 0x2f0700 - 0x2f0758
void sub_002F0700_0x2f0700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0700_0x2f0700");
#endif

    switch (ctx->pc) {
        case 0x2f071cu: goto label_2f071c;
        case 0x2f0724u: goto label_2f0724;
        case 0x2f0734u: goto label_2f0734;
        case 0x2f073cu: goto label_2f073c;
        case 0x2f0744u: goto label_2f0744;
        default: break;
    }

    ctx->pc = 0x2f0700u;

    // 0x2f0700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f0704: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f0704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f0708: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f070c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f070cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0710: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f0710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f0714: 0xc0bc338  jal         func_2F0CE0
    ctx->pc = 0x2F0714u;
    SET_GPR_U32(ctx, 31, 0x2F071Cu);
    ctx->pc = 0x2F0718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0714u;
    // 0x2f0718: 0x2444f450  addiu       $a0, $v0, -0xBB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0CE0u, 0x2F0714u, 0x2F071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F071Cu;
label_2f071c:
    // 0x2f071c: 0xc08e6d0  jal         func_239B40
    ctx->pc = 0x2F071Cu;
    SET_GPR_U32(ctx, 31, 0x2F0724u);
    ctx->pc = 0x239B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B40u, 0x2F071Cu, 0x2F0724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0724u;
label_2f0724:
    // 0x2f0724: 0x3042000a  andi        $v0, $v0, 0xA
    ctx->pc = 0x2f0724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)10);
    // 0x2f0728: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x2f0728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x2f072c: 0xc0b4588  jal         func_2D1620
    ctx->pc = 0x2F072Cu;
    SET_GPR_U32(ctx, 31, 0x2F0734u);
    ctx->pc = 0x2F0730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F072Cu;
    // 0x2f0730: 0x2c440001  sltiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1620u, 0x2F072Cu, 0x2F0734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0734u;
label_2f0734:
    // 0x2f0734: 0xc0b2720  jal         func_2C9C80
    ctx->pc = 0x2F0734u;
    SET_GPR_U32(ctx, 31, 0x2F073Cu);
    ctx->pc = 0x2F0738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0734u;
    // 0x2f0738: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9C80u, 0x2F0734u, 0x2F073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F073Cu;
label_2f073c:
    // 0x2f073c: 0xc087f8e  jal         func_21FE38
    ctx->pc = 0x2F073Cu;
    SET_GPR_U32(ctx, 31, 0x2F0744u);
    ctx->pc = 0x21FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FE38u, 0x2F073Cu, 0x2F0744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0744u;
label_2f0744:
    // 0x2f0744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0748: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f0748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f074c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F074Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F074Cu;
        // 0x2f0750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F074Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0754u;
    // 0x2f0754: 0x0  nop
    ctx->pc = 0x2f0754u;
    // NOP
    ctx->pc = 0x2f0758u;
}
