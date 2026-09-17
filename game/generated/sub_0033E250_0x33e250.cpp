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

// Function: sub_0033E250
// Address: 0x33e250 - 0x33e2c0
void sub_0033E250_0x33e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E250_0x33e250");
#endif

    switch (ctx->pc) {
        case 0x33e270u: goto label_33e270;
        case 0x33e294u: goto label_33e294;
        default: break;
    }

    ctx->pc = 0x33e250u;

    // 0x33e250: 0x43042  srl         $a2, $a0, 1
    ctx->pc = 0x33e250u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x33e254: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x33e254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x33e258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33e258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33e25c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x33e25cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e260: 0x24841140  addiu       $a0, $a0, 0x1140
    ctx->pc = 0x33e260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4416));
    // 0x33e264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33e264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33e268: 0xc0cb152  jal         func_32C548
    ctx->pc = 0x33E268u;
    SET_GPR_U32(ctx, 31, 0x33E270u);
    ctx->pc = 0x33E26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E268u;
    // 0x33e26c: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C548u, 0x33E268u, 0x33E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E270u;
label_33e270:
    // 0x33e270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33e270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e274: 0x3e00008  jr          $ra
    ctx->pc = 0x33E274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E274u;
        // 0x33e278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E27Cu;
    // 0x33e27c: 0x0  nop
    ctx->pc = 0x33e27cu;
    // NOP
    // 0x33e280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33e280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33e284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33e284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33e288: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33e288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33e28c: 0xc0c778a  jal         func_31DE28
    ctx->pc = 0x33E28Cu;
    SET_GPR_U32(ctx, 31, 0x33E294u);
    ctx->pc = 0x33E290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E28Cu;
    // 0x33e290: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE28u, 0x33E28Cu, 0x33E294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E294u;
label_33e294:
    // 0x33e294: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x33e294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x33e298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33e298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e29c: 0x24632b18  addiu       $v1, $v1, 0x2B18
    ctx->pc = 0x33e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11032));
    // 0x33e2a0: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x33e2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x33e2a4: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x33e2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x33e2a8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x33e2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x33e2ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33e2acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e2b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33e2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33e2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x33E2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E2B4u;
        // 0x33e2b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E2BCu;
    // 0x33e2bc: 0x0  nop
    ctx->pc = 0x33e2bcu;
    // NOP
    ctx->pc = 0x33e2c0u;
}
