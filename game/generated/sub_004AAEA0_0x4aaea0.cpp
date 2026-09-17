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

// Function: sub_004AAEA0
// Address: 0x4aaea0 - 0x4aaf10
void sub_004AAEA0_0x4aaea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AAEA0_0x4aaea0");
#endif

    switch (ctx->pc) {
        case 0x4aaeccu: goto label_4aaecc;
        case 0x4aaee0u: goto label_4aaee0;
        default: break;
    }

    ctx->pc = 0x4aaea0u;

    // 0x4aaea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aaea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aaea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aaea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aaea8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4aaea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaeac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4aaeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4aaeb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4aaeb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaeb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4aaeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4aaeb8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4aaeb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaebc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4aaebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4aaec0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4aaec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4aaec4: 0xc12ab5c  jal         func_4AAD70
    ctx->pc = 0x4AAEC4u;
    SET_GPR_U32(ctx, 31, 0x4AAECCu);
    ctx->pc = 0x4AAEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAEC4u;
    // 0x4aaec8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAD70u, 0x4AAEC4u, 0x4AAECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAECCu;
label_4aaecc:
    // 0x4aaecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aaeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaed0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aaed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaed4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aaed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaed8: 0xc12aac4  jal         func_4AAB10
    ctx->pc = 0x4AAED8u;
    SET_GPR_U32(ctx, 31, 0x4AAEE0u);
    ctx->pc = 0x4AAEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAED8u;
    // 0x4aaedc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAB10u, 0x4AAED8u, 0x4AAEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAEE0u;
label_4aaee0:
    // 0x4aaee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aaee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaee4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aaee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaee8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4aaee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aaeec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aaeecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaef0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4aaef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aaef4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4aaef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaef8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4aaef8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4aaefc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aaefcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aaf00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4aaf00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aaf04: 0x812ab10  j           func_4AAC40
    ctx->pc = 0x4AAF04u;
    ctx->pc = 0x4AAF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAF04u;
    // 0x4aaf08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAC40u, 0x4AAF04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4AAF0Cu;
    // 0x4aaf0c: 0x0  nop
    ctx->pc = 0x4aaf0cu;
    // NOP
    ctx->pc = 0x4aaf10u;
}
