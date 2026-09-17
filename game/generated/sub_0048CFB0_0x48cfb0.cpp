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

// Function: sub_0048CFB0
// Address: 0x48cfb0 - 0x48d008
void sub_0048CFB0_0x48cfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CFB0_0x48cfb0");
#endif

    switch (ctx->pc) {
        case 0x48cfe0u: goto label_48cfe0;
        case 0x48cfecu: goto label_48cfec;
        default: break;
    }

    ctx->pc = 0x48cfb0u;

    // 0x48cfb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48cfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48cfb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48cfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48cfb8: 0x3c10007e  lui         $s0, 0x7E
    ctx->pc = 0x48cfb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)126 << 16));
    // 0x48cfbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48cfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48cfc0: 0x48c00  sll         $s1, $a0, 16
    ctx->pc = 0x48cfc0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x48cfc4: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x48cfc4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x48cfc8: 0x2610b240  addiu       $s0, $s0, -0x4DC0
    ctx->pc = 0x48cfc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947392));
    // 0x48cfcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48cfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48cfd0: 0x26100200  addiu       $s0, $s0, 0x200
    ctx->pc = 0x48cfd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x48cfd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48cfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48cfd8: 0xc1233d0  jal         func_48CF40
    ctx->pc = 0x48CFD8u;
    SET_GPR_U32(ctx, 31, 0x48CFE0u);
    ctx->pc = 0x48CFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48CFD8u;
    // 0x48cfdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF40u, 0x48CFD8u, 0x48CFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CFE0u;
label_48cfe0:
    // 0x48cfe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48cfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48cfe4: 0xc1233d0  jal         func_48CF40
    ctx->pc = 0x48CFE4u;
    SET_GPR_U32(ctx, 31, 0x48CFECu);
    ctx->pc = 0x48CFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48CFE4u;
    // 0x48cfe8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF40u, 0x48CFE4u, 0x48CFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CFECu;
label_48cfec:
    // 0x48cfec: 0x26040200  addiu       $a0, $s0, 0x200
    ctx->pc = 0x48cfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x48cff0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48cff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48cff4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48cff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48cff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48cff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48cffc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48cffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48d000: 0x81233d0  j           func_48CF40
    ctx->pc = 0x48D000u;
    ctx->pc = 0x48D004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D000u;
    // 0x48d004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF40u;
    sub_0048CF40_0x48cf40(rdram, ctx, runtime); return;
    ctx->pc = 0x48D008u;
}
