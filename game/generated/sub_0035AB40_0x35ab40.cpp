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

// Function: sub_0035AB40
// Address: 0x35ab40 - 0x35abb8
void sub_0035AB40_0x35ab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AB40_0x35ab40");
#endif

    switch (ctx->pc) {
        case 0x35ab7cu: goto label_35ab7c;
        default: break;
    }

    ctx->pc = 0x35ab40u;

    // 0x35ab40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35ab40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35ab44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35ab44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35ab48: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x35ab48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ab4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35ab4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35ab50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35ab50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ab54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35ab54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35ab58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35ab58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ab5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35ab5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35ab60: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x35ab60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ab64: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35ab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35ab68: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x35ab68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ab6c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x35ab6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x35ab70: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35ab70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x35ab74: 0xc0d6a68  jal         func_35A9A0
    ctx->pc = 0x35AB74u;
    SET_GPR_U32(ctx, 31, 0x35AB7Cu);
    ctx->pc = 0x35AB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AB74u;
    // 0x35ab78: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A9A0u, 0x35AB74u, 0x35AB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AB7Cu;
label_35ab7c:
    // 0x35ab7c: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x35ab7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
    // 0x35ab80: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x35ab80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x35ab84: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x35ab84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x35ab88: 0xac530008  sw          $s3, 0x8($v0)
    ctx->pc = 0x35ab88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 19));
    // 0x35ab8c: 0xac54000c  sw          $s4, 0xC($v0)
    ctx->pc = 0x35ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 20));
    // 0x35ab90: 0xac550010  sw          $s5, 0x10($v0)
    ctx->pc = 0x35ab90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 21));
    // 0x35ab94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ab94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ab98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ab98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ab9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35ab9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35aba0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35aba0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35aba4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35aba4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35aba8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x35aba8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35abac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35abacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35abb0: 0x3e00008  jr          $ra
    ctx->pc = 0x35ABB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ABB0u;
        // 0x35abb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35ABB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35ABB8u;
}
