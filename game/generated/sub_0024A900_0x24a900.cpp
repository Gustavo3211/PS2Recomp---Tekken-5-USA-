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

// Function: sub_0024A900
// Address: 0x24a900 - 0x24a958
void sub_0024A900_0x24a900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A900_0x24a900");
#endif

    switch (ctx->pc) {
        case 0x24a91cu: goto label_24a91c;
        case 0x24a940u: goto label_24a940;
        default: break;
    }

    ctx->pc = 0x24a900u;

    // 0x24a900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24a900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24a904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a908: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24a908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a90c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24a90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24a910: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24a910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24a914: 0xc092278  jal         func_2489E0
    ctx->pc = 0x24A914u;
    SET_GPR_U32(ctx, 31, 0x24A91Cu);
    ctx->pc = 0x24A918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A914u;
    // 0x24a918: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2489E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2489E0u, 0x24A914u, 0x24A91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A91Cu;
label_24a91c:
    // 0x24a91c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24a91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a920: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24a920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a924: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x24a924u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a928: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x24a928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24a92c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24a92cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a930: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A930u;
    {
        const bool branch_taken_0x24a930 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A930u;
        // 0x24a934: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a930) {
            ctx->pc = 0x24A940u;
            goto label_24a940;
        }
    }
    ctx->pc = 0x24A938u;
    // 0x24a938: 0xc09289a  jal         func_24A268
    ctx->pc = 0x24A938u;
    SET_GPR_U32(ctx, 31, 0x24A940u);
    ctx->pc = 0x24A268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A268u, 0x24A938u, 0x24A940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A940u;
label_24a940:
    // 0x24a940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a944: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24a944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24a948: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24a948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a94c: 0x3e00008  jr          $ra
    ctx->pc = 0x24A94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A94Cu;
        // 0x24a950: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A954u;
    // 0x24a954: 0x0  nop
    ctx->pc = 0x24a954u;
    // NOP
    ctx->pc = 0x24a958u;
}
