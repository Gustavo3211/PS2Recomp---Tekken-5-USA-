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

// Function: sub_00331480
// Address: 0x331480 - 0x331508
void sub_00331480_0x331480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331480_0x331480");
#endif

    switch (ctx->pc) {
        case 0x331490u: goto label_331490;
        case 0x3314c0u: goto label_3314c0;
        case 0x3314e4u: goto label_3314e4;
        default: break;
    }

    ctx->pc = 0x331480u;

    // 0x331480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331488: 0xc0cde96  jal         func_337A58
    ctx->pc = 0x331488u;
    SET_GPR_U32(ctx, 31, 0x331490u);
    ctx->pc = 0x337A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A58u, 0x331488u, 0x331490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331490u;
label_331490:
    // 0x331490: 0xdf83c610  ld          $v1, -0x39F0($gp)
    ctx->pc = 0x331490u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294952464)));
    // 0x331494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331498: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x331498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x33149c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33149cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3314a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3314a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3314a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3314A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3314A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3314A4u;
        // 0x3314a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3314A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3314ACu;
    // 0x3314ac: 0x0  nop
    ctx->pc = 0x3314acu;
    // NOP
    // 0x3314b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3314b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3314b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3314b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3314b8: 0xc0cde96  jal         func_337A58
    ctx->pc = 0x3314B8u;
    SET_GPR_U32(ctx, 31, 0x3314C0u);
    ctx->pc = 0x337A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A58u, 0x3314B8u, 0x3314C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3314C0u;
label_3314c0:
    // 0x3314c0: 0xdf83c610  ld          $v1, -0x39F0($gp)
    ctx->pc = 0x3314c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294952464)));
    // 0x3314c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3314c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3314c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3314c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3314cc: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x3314ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x3314d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3314d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3314d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3314d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3314d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3314d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3314dc: 0xc0ce0b0  jal         func_3382C0
    ctx->pc = 0x3314DCu;
    SET_GPR_U32(ctx, 31, 0x3314E4u);
    ctx->pc = 0x3314E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3314DCu;
    // 0x3314e0: 0x2203e  dsrl32      $a0, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3382C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3382C0u, 0x3314DCu, 0x3314E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3314E4u;
label_3314e4:
    // 0x3314e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3314e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3314e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3314e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3314ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3314ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3314F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3314ECu;
        // 0x3314f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3314ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3314F4u;
    // 0x3314f4: 0x0  nop
    ctx->pc = 0x3314f4u;
    // NOP
    // 0x3314f8: 0xc7809638  lwc1        $f0, -0x69C8($gp)
    ctx->pc = 0x3314f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3314fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3314FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3314FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331504u;
    // 0x331504: 0x0  nop
    ctx->pc = 0x331504u;
    // NOP
    ctx->pc = 0x331508u;
}
