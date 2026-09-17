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

// Function: sub_00285998
// Address: 0x285998 - 0x285a20
void sub_00285998_0x285998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285998_0x285998");
#endif

    switch (ctx->pc) {
        case 0x2859ccu: goto label_2859cc;
        case 0x2859f4u: goto label_2859f4;
        case 0x2859fcu: goto label_2859fc;
        default: break;
    }

    ctx->pc = 0x285998u;

    // 0x285998: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28599c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28599cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2859a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2859a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2859a4: 0x24513370  addiu       $s1, $v0, 0x3370
    ctx->pc = 0x2859a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 13168));
    // 0x2859a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2859a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2859ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2859acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2859b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2859b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2859b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2859b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2859b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2859b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2859bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2859bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2859c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2859c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2859c4: 0xc0a1396  jal         func_284E58
    ctx->pc = 0x2859C4u;
    SET_GPR_U32(ctx, 31, 0x2859CCu);
    ctx->pc = 0x2859C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2859C4u;
    // 0x2859c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E58u, 0x2859C4u, 0x2859CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2859CCu;
label_2859cc:
    // 0x2859cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2859ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2859d0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2859D0u;
    {
        const bool branch_taken_0x2859d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2859D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859D0u;
        // 0x2859d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859d0) {
            ctx->pc = 0x2859FCu;
            goto label_2859fc;
        }
    }
    ctx->pc = 0x2859D8u;
    // 0x2859d8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2859D8u;
    {
        const bool branch_taken_0x2859d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2859DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859D8u;
        // 0x2859dc: 0x24025780  addiu       $v0, $zero, 0x5780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859d8) {
            ctx->pc = 0x2859ECu;
            goto label_2859ec;
        }
    }
    ctx->pc = 0x2859E0u;
    // 0x2859e0: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x2859e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
    // 0x2859e4: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x2859e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x2859e8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2859e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2859ec:
    // 0x2859ec: 0xc0a1418  jal         func_285060
    ctx->pc = 0x2859ECu;
    SET_GPR_U32(ctx, 31, 0x2859F4u);
    ctx->pc = 0x2859F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2859ECu;
    // 0x2859f0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285060u, 0x2859ECu, 0x2859F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2859F4u;
label_2859f4:
    // 0x2859f4: 0xc092668  jal         func_2499A0
    ctx->pc = 0x2859F4u;
    SET_GPR_U32(ctx, 31, 0x2859FCu);
    ctx->pc = 0x2859F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2859F4u;
    // 0x2859f8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2499A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2499A0u, 0x2859F4u, 0x2859FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2859FCu;
label_2859fc:
    // 0x2859fc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2859fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x285a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285a04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x285a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x285a08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x285a08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285a0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x285a0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x285a10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x285a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285a14: 0x3e00008  jr          $ra
    ctx->pc = 0x285A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A14u;
        // 0x285a18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285A1Cu;
    // 0x285a1c: 0x0  nop
    ctx->pc = 0x285a1cu;
    // NOP
    ctx->pc = 0x285a20u;
}
