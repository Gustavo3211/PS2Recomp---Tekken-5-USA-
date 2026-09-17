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

// Function: sub_0028A4F8
// Address: 0x28a4f8 - 0x28a550
void sub_0028A4F8_0x28a4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A4F8_0x28a4f8");
#endif

    switch (ctx->pc) {
        case 0x28a51cu: goto label_28a51c;
        case 0x28a540u: goto label_28a540;
        default: break;
    }

    ctx->pc = 0x28a4f8u;

    // 0x28a4f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a4fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a500: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28a500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a504: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28a504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28a508: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x28a508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x28a50c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28A50Cu;
    {
        const bool branch_taken_0x28a50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A50Cu;
        // 0x28a510: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a50c) {
            ctx->pc = 0x28A540u;
            goto label_28a540;
        }
    }
    ctx->pc = 0x28A514u;
    // 0x28a514: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x28A514u;
    SET_GPR_U32(ctx, 31, 0x28A51Cu);
    ctx->pc = 0x28A518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A514u;
    // 0x28a518: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2875E8u, 0x28A514u, 0x28A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A51Cu;
label_28a51c:
    // 0x28a51c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x28a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28a520: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x28a520u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28a524: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28a524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28a528: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x28a528u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x28a52c: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x28a52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x28a530: 0x2421b528  addiu       $at, $at, -0x4AD8
    ctx->pc = 0x28a530u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294948136));
    // 0x28a534: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x28a534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x28a538: 0xc0a1c7a  jal         func_2871E8
    ctx->pc = 0x28A538u;
    SET_GPR_U32(ctx, 31, 0x28A540u);
    ctx->pc = 0x28A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A538u;
    // 0x28a53c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2871E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2871E8u, 0x28A538u, 0x28A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A540u;
label_28a540:
    // 0x28a540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a544: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28a544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a548: 0x3e00008  jr          $ra
    ctx->pc = 0x28A548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A548u;
        // 0x28a54c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A550u;
}
