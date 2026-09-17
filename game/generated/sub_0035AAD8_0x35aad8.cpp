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

// Function: sub_0035AAD8
// Address: 0x35aad8 - 0x35ab40
void sub_0035AAD8_0x35aad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AAD8_0x35aad8");
#endif

    switch (ctx->pc) {
        case 0x35ab0cu: goto label_35ab0c;
        default: break;
    }

    ctx->pc = 0x35aad8u;

    // 0x35aad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35aad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35aadc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35aadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35aae0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x35aae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aae4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35aae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35aae8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35aae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aaec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35aaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35aaf0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35aaf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aaf4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35aaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35aaf8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x35aaf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aafc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35aafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35ab00: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x35ab00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35ab04: 0xc0d6a68  jal         func_35A9A0
    ctx->pc = 0x35AB04u;
    SET_GPR_U32(ctx, 31, 0x35AB0Cu);
    ctx->pc = 0x35AB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AB04u;
    // 0x35ab08: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A9A0u, 0x35AB04u, 0x35AB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AB0Cu;
label_35ab0c:
    // 0x35ab0c: 0xac500010  sw          $s0, 0x10($v0)
    ctx->pc = 0x35ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
    // 0x35ab10: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x35ab10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x35ab14: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x35ab14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x35ab18: 0xac530008  sw          $s3, 0x8($v0)
    ctx->pc = 0x35ab18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 19));
    // 0x35ab1c: 0xac54000c  sw          $s4, 0xC($v0)
    ctx->pc = 0x35ab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 20));
    // 0x35ab20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ab20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ab24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ab24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ab28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35ab28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ab2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35ab2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ab30: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35ab30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ab34: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x35ab34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35ab38: 0x3e00008  jr          $ra
    ctx->pc = 0x35AB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AB38u;
        // 0x35ab3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AB40u;
}
