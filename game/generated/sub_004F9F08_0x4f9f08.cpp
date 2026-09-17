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

// Function: sub_004F9F08
// Address: 0x4f9f08 - 0x4f9fb8
void sub_004F9F08_0x4f9f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F9F08_0x4f9f08");
#endif

    switch (ctx->pc) {
        case 0x4f9f20u: goto label_4f9f20;
        case 0x4f9f28u: goto label_4f9f28;
        case 0x4f9f30u: goto label_4f9f30;
        case 0x4f9f40u: goto label_4f9f40;
        case 0x4f9f60u: goto label_4f9f60;
        case 0x4f9f88u: goto label_4f9f88;
        case 0x4f9f90u: goto label_4f9f90;
        case 0x4f9f98u: goto label_4f9f98;
        case 0x4f9fa0u: goto label_4f9fa0;
        case 0x4f9fa8u: goto label_4f9fa8;
        default: break;
    }

    ctx->pc = 0x4f9f08u;

    // 0x4f9f08: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x4f9f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x4f9f0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f9f0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f9f10: 0x3405b2c0  ori         $a1, $zero, 0xB2C0
    ctx->pc = 0x4f9f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45760);
    // 0x4f9f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f9f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f9f18: 0xc13e4a6  jal         func_4F9298
    ctx->pc = 0x4F9F18u;
    SET_GPR_U32(ctx, 31, 0x4F9F20u);
    ctx->pc = 0x4F9F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F9F18u;
    // 0x4f9f1c: 0x24841400  addiu       $a0, $a0, 0x1400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9298u, 0x4F9F18u, 0x4F9F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9F20u;
label_4f9f20:
    // 0x4f9f20: 0xc13e74a  jal         func_4F9D28
    ctx->pc = 0x4F9F20u;
    SET_GPR_U32(ctx, 31, 0x4F9F28u);
    ctx->pc = 0x4F9D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9D28u, 0x4F9F20u, 0x4F9F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9F28u;
label_4f9f28:
    // 0x4f9f28: 0xc13e758  jal         func_4F9D60
    ctx->pc = 0x4F9F28u;
    SET_GPR_U32(ctx, 31, 0x4F9F30u);
    ctx->pc = 0x4F9D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9D60u, 0x4F9F28u, 0x4F9F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9F30u;
label_4f9f30:
    // 0x4f9f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f9f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f9f34: 0x813e7a8  j           func_4F9EA0
    ctx->pc = 0x4F9F34u;
    ctx->pc = 0x4F9F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F9F34u;
    // 0x4f9f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9EA0u, 0x4F9F34u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F9F3Cu;
    // 0x4f9f3c: 0x0  nop
    ctx->pc = 0x4f9f3cu;
    // NOP
label_4f9f40:
    // 0x4f9f40: 0x3c020083  lui         $v0, 0x83
    ctx->pc = 0x4f9f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)131 << 16));
    // 0x4f9f44: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x4f9f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4f9f48: 0x244213c0  addiu       $v0, $v0, 0x13C0
    ctx->pc = 0x4f9f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5056));
    // 0x4f9f4c: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x4f9f4cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8313C2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8313C2u, _value); } while (0);
    // 0x4f9f50: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x4f9f50u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8313C6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8313C6u, _value); } while (0);
    // 0x4f9f54: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x4f9f54u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8313C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8313C0u, _value); } while (0);
    // 0x4f9f58: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F9F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9F58u;
        // 0x4f9f5c: 0xa4400004  sh          $zero, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F9F60u;
label_4f9f60:
    // 0x4f9f60: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f9f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x4f9f64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f9f64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f9f68: 0x8c435b00  lw          $v1, 0x5B00($v0)
    ctx->pc = 0x4f9f68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x515B00u));
    // 0x4f9f6c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F9F6Cu;
    {
        const bool branch_taken_0x4f9f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9F6Cu;
        // 0x4f9f70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9f6c) {
            ctx->pc = 0x4F9F80u;
            goto label_4f9f80;
        }
    }
    ctx->pc = 0x4F9F74u;
    // 0x4f9f74: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x4f9f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x4f9f78: 0x2402047a  addiu       $v0, $zero, 0x47A
    ctx->pc = 0x4f9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1146));
    // 0x4f9f7c: 0xac62ced0  sw          $v0, -0x3130($v1)
    ctx->pc = 0x4f9f7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x56CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56CED0u, _value); } while (0);
label_4f9f80:
    // 0x4f9f80: 0xc04066a  jal         func_1019A8
    ctx->pc = 0x4F9F80u;
    SET_GPR_U32(ctx, 31, 0x4F9F88u);
    ctx->pc = 0x4F9F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F9F80u;
    // 0x4f9f84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1019A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1019A8u, 0x4F9F80u, 0x4F9F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9F88u;
label_4f9f88:
    // 0x4f9f88: 0xc040884  jal         func_102210
    ctx->pc = 0x4F9F88u;
    SET_GPR_U32(ctx, 31, 0x4F9F90u);
    ctx->pc = 0x102210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102210u, 0x4F9F88u, 0x4F9F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9F90u;
label_4f9f90:
    // 0x4f9f90: 0xc13f0d8  jal         func_4FC360
    ctx->pc = 0x4F9F90u;
    SET_GPR_U32(ctx, 31, 0x4F9F98u);
    ctx->pc = 0x4FC360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FC360u, 0x4F9F90u, 0x4F9F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9F98u;
label_4f9f98:
    // 0x4f9f98: 0xc13eb2a  jal         func_4FACA8
    ctx->pc = 0x4F9F98u;
    SET_GPR_U32(ctx, 31, 0x4F9FA0u);
    ctx->pc = 0x4FACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FACA8u, 0x4F9F98u, 0x4F9FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9FA0u;
label_4f9fa0:
    // 0x4f9fa0: 0xc140d58  jal         func_503560
    ctx->pc = 0x4F9FA0u;
    SET_GPR_U32(ctx, 31, 0x4F9FA8u);
    ctx->pc = 0x503560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503560u, 0x4F9FA0u, 0x4F9FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9FA8u;
label_4f9fa8:
    // 0x4f9fa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f9fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f9fac: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9FACu;
        // 0x4f9fb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F9FB4u;
    // 0x4f9fb4: 0x0  nop
    ctx->pc = 0x4f9fb4u;
    // NOP
    ctx->pc = 0x4f9fb8u;
}
