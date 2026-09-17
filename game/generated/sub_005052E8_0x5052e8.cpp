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

// Function: sub_005052E8
// Address: 0x5052e8 - 0x505380
void sub_005052E8_0x5052e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005052E8_0x5052e8");
#endif

    switch (ctx->pc) {
        case 0x5052f8u: goto label_5052f8;
        case 0x505300u: goto label_505300;
        case 0x505310u: goto label_505310;
        case 0x505320u: goto label_505320;
        case 0x505338u: goto label_505338;
        case 0x50534cu: goto label_50534c;
        case 0x50535cu: goto label_50535c;
        case 0x505370u: goto label_505370;
        default: break;
    }

    ctx->pc = 0x5052e8u;

    // 0x5052e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5052e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5052ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5052ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5052f0: 0xc1439b0  jal         func_50E6C0
    ctx->pc = 0x5052F0u;
    SET_GPR_U32(ctx, 31, 0x5052F8u);
    ctx->pc = 0x50E6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50E6C0u, 0x5052F0u, 0x5052F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5052F8u;
label_5052f8:
    // 0x5052f8: 0xc142c1c  jal         func_50B070
    ctx->pc = 0x5052F8u;
    SET_GPR_U32(ctx, 31, 0x505300u);
    ctx->pc = 0x50B070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50B070u, 0x5052F8u, 0x505300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505300u;
label_505300:
    // 0x505300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x505300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x505304: 0x8142c02  j           func_50B008
    ctx->pc = 0x505304u;
    ctx->pc = 0x505308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x505304u;
    // 0x505308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50B008u;
    sub_0050B008_0x50b008(rdram, ctx, runtime); return;
    ctx->pc = 0x50530Cu;
    // 0x50530c: 0x0  nop
    ctx->pc = 0x50530cu;
    // NOP
label_505310:
    // 0x505310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x505310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x505314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x505314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x505318: 0xc144398  jal         func_510E60
    ctx->pc = 0x505318u;
    SET_GPR_U32(ctx, 31, 0x505320u);
    ctx->pc = 0x510E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x510E60u, 0x505318u, 0x505320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505320u;
label_505320:
    // 0x505320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x505320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x505324: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x505324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x505328: 0xa4403d56  sh          $zero, 0x3D56($v0)
    ctx->pc = 0x505328u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x903D56u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903D56u, _value); } while (0);
    // 0x50532c: 0x8143c66  j           func_50F198
    ctx->pc = 0x50532Cu;
    ctx->pc = 0x505330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50532Cu;
    // 0x505330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50F198u;
    sub_0050F198_0x50f198(rdram, ctx, runtime); return;
    ctx->pc = 0x505334u;
    // 0x505334: 0x0  nop
    ctx->pc = 0x505334u;
    // NOP
label_505338:
    // 0x505338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x505338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50533c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50533cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x505340: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x505340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x505344: 0xc144398  jal         func_510E60
    ctx->pc = 0x505344u;
    SET_GPR_U32(ctx, 31, 0x50534Cu);
    ctx->pc = 0x505348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x505344u;
    // 0x505348: 0x3c100090  lui         $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)144 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x510E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x510E60u, 0x505344u, 0x50534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50534Cu;
label_50534c:
    // 0x50534c: 0x2610f080  addiu       $s0, $s0, -0xF80
    ctx->pc = 0x50534cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963328));
    // 0x505350: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x505350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x505354: 0xc143c66  jal         func_50F198
    ctx->pc = 0x505354u;
    SET_GPR_U32(ctx, 31, 0x50535Cu);
    ctx->pc = 0x505358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x505354u;
    // 0x505358: 0xa6024cd6  sh          $v0, 0x4CD6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 19670), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50F198u, 0x505354u, 0x50535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50535Cu;
label_50535c:
    // 0x50535c: 0xa6004dfc  sh          $zero, 0x4DFC($s0)
    ctx->pc = 0x50535cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 19964), (uint16_t)GPR_U32(ctx, 0));
    // 0x505360: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x505360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x505364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x505364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x505368: 0x3e00008  jr          $ra
    ctx->pc = 0x505368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505368u;
        // 0x50536c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x505368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x505370u;
label_505370:
    // 0x505370: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x505370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x505374: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x505374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x505378: 0x3e00008  jr          $ra
    ctx->pc = 0x505378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505378u;
        // 0x50537c: 0xa462f08a  sh          $v0, -0xF76($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294963338), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x505378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x505380u;
}
