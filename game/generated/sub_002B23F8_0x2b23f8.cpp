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

// Function: sub_002B23F8
// Address: 0x2b23f8 - 0x2b2458
void sub_002B23F8_0x2b23f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B23F8_0x2b23f8");
#endif

    switch (ctx->pc) {
        case 0x2b2434u: goto label_2b2434;
        case 0x2b2440u: goto label_2b2440;
        default: break;
    }

    ctx->pc = 0x2b23f8u;

label_2b23f8:
    // 0x2b23f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b23f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b23fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b23fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2400: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2404: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b2404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b2408: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b2408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b240c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B240Cu;
    {
        const bool branch_taken_0x2b240c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B240Cu;
        // 0x2b2410: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b240c) {
            ctx->pc = 0x2B2440u;
            goto label_2b2440;
        }
    }
    ctx->pc = 0x2B2414u;
    // 0x2b2414: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2b2414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2b2418: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B2418u;
    {
        const bool branch_taken_0x2b2418 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b2418) {
            ctx->pc = 0x2B241Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2418u;
            // 0x2b241c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2444u;
            goto label_2b2444;
        }
    }
    ctx->pc = 0x2B2420u;
    // 0x2b2420: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2b2420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2b2424: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x2b2424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2b2428: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2b2428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2b242c: 0xc0ac8fe  jal         func_2B23F8
    ctx->pc = 0x2B242Cu;
    SET_GPR_U32(ctx, 31, 0x2B2434u);
    ctx->pc = 0x2B2430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B242Cu;
    // 0x2b2430: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B23F8u;
    goto label_2b23f8;
    ctx->pc = 0x2B2434u;
label_2b2434:
    // 0x2b2434: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x2b2434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b2438: 0xc0ac8fe  jal         func_2B23F8
    ctx->pc = 0x2B2438u;
    SET_GPR_U32(ctx, 31, 0x2B2440u);
    ctx->pc = 0x2B243Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2438u;
    // 0x2b243c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B23F8u;
    goto label_2b23f8;
    ctx->pc = 0x2B2440u;
label_2b2440:
    // 0x2b2440: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b2444:
    // 0x2b2444: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b2444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2448: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b2448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b244c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B244Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B244Cu;
        // 0x2b2450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B244Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2454u;
    // 0x2b2454: 0x0  nop
    ctx->pc = 0x2b2454u;
    // NOP
    ctx->pc = 0x2b2458u;
}
