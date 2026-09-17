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

// Function: sub_0036F618
// Address: 0x36f618 - 0x36f688
void sub_0036F618_0x36f618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F618_0x36f618");
#endif

    switch (ctx->pc) {
        case 0x36f63cu: goto label_36f63c;
        case 0x36f654u: goto label_36f654;
        default: break;
    }

    ctx->pc = 0x36f618u;

    // 0x36f618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36f618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36f61c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36f620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36f620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36f624: 0x245072e0  addiu       $s0, $v0, 0x72E0
    ctx->pc = 0x36f624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29408));
    // 0x36f628: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36f628u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D72E0u));
    // 0x36f62c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36F62Cu;
    {
        const bool branch_taken_0x36f62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F62Cu;
        // 0x36f630: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f62c) {
            ctx->pc = 0x36F654u;
            goto label_36f654;
        }
    }
    ctx->pc = 0x36F634u;
    // 0x36f634: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36F634u;
    SET_GPR_U32(ctx, 31, 0x36F63Cu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36F634u, 0x36F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F63Cu;
label_36f63c:
    // 0x36f63c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36f63cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36f640: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36f640u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36f644: 0x24a5fe68  addiu       $a1, $a1, -0x198
    ctx->pc = 0x36f644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966888));
    // 0x36f648: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36f648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36f64c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36F64Cu;
    SET_GPR_U32(ctx, 31, 0x36F654u);
    ctx->pc = 0x36F650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F64Cu;
    // 0x36f650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36F64Cu, 0x36F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F654u;
label_36f654:
    // 0x36f654: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36f654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36f658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f65c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36f65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f660: 0x3e00008  jr          $ra
    ctx->pc = 0x36F660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F660u;
        // 0x36f664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F668u;
    // 0x36f668: 0x3e00008  jr          $ra
    ctx->pc = 0x36F668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F668u;
        // 0x36f66c: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F670u;
    // 0x36f670: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36f670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f674: 0xe48c0054  swc1        $f12, 0x54($a0)
    ctx->pc = 0x36f674u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x36f678: 0x3e00008  jr          $ra
    ctx->pc = 0x36F678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F678u;
        // 0x36f67c: 0xac820050  sw          $v0, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F680u;
    // 0x36f680: 0x3e00008  jr          $ra
    ctx->pc = 0x36F680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F680u;
        // 0x36f684: 0xc4800054  lwc1        $f0, 0x54($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F688u;
}
