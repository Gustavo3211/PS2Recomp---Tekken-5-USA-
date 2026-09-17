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

// Function: sub_0032D5F0
// Address: 0x32d5f0 - 0x32d638
void sub_0032D5F0_0x32d5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D5F0_0x32d5f0");
#endif

    switch (ctx->pc) {
        case 0x32d614u: goto label_32d614;
        case 0x32d628u: goto label_32d628;
        default: break;
    }

    ctx->pc = 0x32d5f0u;

    // 0x32d5f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d5f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32d5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d5f8: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32d5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32d5fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32d5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32d600: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x32d600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x32d604: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32d604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d608: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32d608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32d60c: 0xc0cb628  jal         func_32D8A0
    ctx->pc = 0x32D60Cu;
    SET_GPR_U32(ctx, 31, 0x32D614u);
    ctx->pc = 0x32D610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D60Cu;
    // 0x32d610: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8A0u, 0x32D60Cu, 0x32D614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D614u;
label_32d614:
    // 0x32d614: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32d614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d618: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D618u;
    {
        const bool branch_taken_0x32d618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D618u;
        // 0x32d61c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d618) {
            ctx->pc = 0x32D628u;
            goto label_32d628;
        }
    }
    ctx->pc = 0x32D620u;
    // 0x32d620: 0xc0cb77e  jal         func_32DDF8
    ctx->pc = 0x32D620u;
    SET_GPR_U32(ctx, 31, 0x32D628u);
    ctx->pc = 0x32DDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DDF8u, 0x32D620u, 0x32D628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D628u;
label_32d628:
    // 0x32d628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d62c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32d62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d630: 0x3e00008  jr          $ra
    ctx->pc = 0x32D630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D630u;
        // 0x32d634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D638u;
}
