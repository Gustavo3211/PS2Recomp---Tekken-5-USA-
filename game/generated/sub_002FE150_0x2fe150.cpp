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

// Function: sub_002FE150
// Address: 0x2fe150 - 0x2fe1d8
void sub_002FE150_0x2fe150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE150_0x2fe150");
#endif

    switch (ctx->pc) {
        case 0x2fe164u: goto label_2fe164;
        case 0x2fe19cu: goto label_2fe19c;
        default: break;
    }

    ctx->pc = 0x2fe150u;

    // 0x2fe150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fe150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fe154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fe154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fe158: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2fe158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2fe15c: 0xc0bf796  jal         func_2FDE58
    ctx->pc = 0x2FE15Cu;
    SET_GPR_U32(ctx, 31, 0x2FE164u);
    ctx->pc = 0x2FE160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE15Cu;
    // 0x2fe160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDE58u, 0x2FE15Cu, 0x2FE164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE164u;
label_2fe164:
    // 0x2fe164: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2fe164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2fe168: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fe168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fe16c: 0x24631120  addiu       $v1, $v1, 0x1120
    ctx->pc = 0x2fe16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4384));
    // 0x2fe170: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2fe170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2fe174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe178: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x2fe178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x2fe17c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fe17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe180: 0x80bf862  j           func_2FE188
    ctx->pc = 0x2FE180u;
    ctx->pc = 0x2FE184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE180u;
    // 0x2fe184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE188u;
    goto label_2fe188;
    ctx->pc = 0x2FE188u;
label_2fe188:
    // 0x2fe188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fe188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fe18c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fe18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fe190: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2fe190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2fe194: 0xc0bf79e  jal         func_2FDE78
    ctx->pc = 0x2FE194u;
    SET_GPR_U32(ctx, 31, 0x2FE19Cu);
    ctx->pc = 0x2FE198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE194u;
    // 0x2fe198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDE78u, 0x2FE194u, 0x2FE19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE19Cu;
label_2fe19c:
    // 0x2fe19c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fe19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fe1a0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x2fe1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x2fe1a4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2fe1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2fe1a8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2fe1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2fe1ac: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2fe1acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x2fe1b0: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2fe1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x2fe1b4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2fe1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2fe1b8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2fe1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x2fe1bc: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2fe1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2fe1c0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2fe1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2fe1c4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2fe1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2fe1c8: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2fe1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2fe1cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fe1ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE1D0u;
        // 0x2fe1d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE1D8u;
}
