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

// Function: sub_003761F0
// Address: 0x3761f0 - 0x376280
void sub_003761F0_0x3761f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003761F0_0x3761f0");
#endif

    switch (ctx->pc) {
        case 0x376264u: goto label_376264;
        default: break;
    }

    ctx->pc = 0x3761f0u;

    // 0x3761f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3761F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3761F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3761F0u;
        // 0x3761f4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3761F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3761F8u;
    // 0x3761f8: 0x90880017  lbu         $t0, 0x17($a0)
    ctx->pc = 0x3761f8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
    // 0x3761fc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3761fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376200: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x376200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x376204: 0x94860014  lhu         $a2, 0x14($a0)
    ctx->pc = 0x376204u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x376208: 0x90870016  lbu         $a3, 0x16($a0)
    ctx->pc = 0x376208u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x37620c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x37620cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x376210: 0xa4a60004  sh          $a2, 0x4($a1)
    ctx->pc = 0x376210u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x376214: 0xa0a70006  sb          $a3, 0x6($a1)
    ctx->pc = 0x376214u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 7));
    // 0x376218: 0x3e00008  jr          $ra
    ctx->pc = 0x376218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376218u;
        // 0x37621c: 0xa0a80007  sb          $t0, 0x7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376220u;
    // 0x376220: 0x3e00008  jr          $ra
    ctx->pc = 0x376220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376220u;
        // 0x376224: 0x94820012  lhu         $v0, 0x12($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376228u;
    // 0x376228: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x376228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x37622c: 0xa31026  xor         $v0, $a1, $v1
    ctx->pc = 0x37622cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x376230: 0x3e00008  jr          $ra
    ctx->pc = 0x376230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376230u;
        // 0x376234: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376238u;
    // 0x376238: 0xa4850014  sh          $a1, 0x14($a0)
    ctx->pc = 0x376238u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 5));
    // 0x37623c: 0x3e00008  jr          $ra
    ctx->pc = 0x37623Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37623Cu;
        // 0x376240: 0xac860018  sw          $a2, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37623Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376244u;
    // 0x376244: 0x0  nop
    ctx->pc = 0x376244u;
    // NOP
    // 0x376248: 0x3e00008  jr          $ra
    ctx->pc = 0x376248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376248u;
        // 0x37624c: 0x94820014  lhu         $v0, 0x14($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376250u;
    // 0x376250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x376250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x376254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x376254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x376258: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x376258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x37625c: 0xc0cf24c  jal         func_33C930
    ctx->pc = 0x37625Cu;
    SET_GPR_U32(ctx, 31, 0x376264u);
    ctx->pc = 0x376260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37625Cu;
    // 0x376260: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C930u, 0x37625Cu, 0x376264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376264u;
label_376264:
    // 0x376264: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x376264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x376268: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x376268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37626c: 0x246325f8  addiu       $v1, $v1, 0x25F8
    ctx->pc = 0x37626cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9720));
    // 0x376270: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x376270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x376274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x376274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376278: 0x3e00008  jr          $ra
    ctx->pc = 0x376278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376278u;
        // 0x37627c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376280u;
}
