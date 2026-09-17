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

// Function: sub_002A0870
// Address: 0x2a0870 - 0x2a0918
void sub_002A0870_0x2a0870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0870_0x2a0870");
#endif

    switch (ctx->pc) {
        case 0x2a08bcu: goto label_2a08bc;
        case 0x2a08e8u: goto label_2a08e8;
        default: break;
    }

    ctx->pc = 0x2a0870u;

    // 0x2a0870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a0870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a0874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a0874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a0878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a0878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a087c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a087cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a0880: 0x26050158  addiu       $a1, $s0, 0x158
    ctx->pc = 0x2a0880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x2a0884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a0884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a0888: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2a0888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a088c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A088Cu;
    {
        const bool branch_taken_0x2a088c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A088Cu;
        // 0x2a0890: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a088c) {
            ctx->pc = 0x2A08A4u;
            goto label_2a08a4;
        }
    }
    ctx->pc = 0x2A0894u;
    // 0x2a0894: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a0894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a0898: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2a0898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a089c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A089Cu;
    {
        const bool branch_taken_0x2a089c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a089c) {
            ctx->pc = 0x2A08A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A089Cu;
            // 0x2a08a0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A08B4u;
            goto label_2a08b4;
        }
    }
    ctx->pc = 0x2A08A4u;
label_2a08a4:
    // 0x2a08a4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a08a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2a08a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a08a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a08ac: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2a08acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2a08b0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a08b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2a08b4:
    // 0x2a08b4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A08B4u;
    SET_GPR_U32(ctx, 31, 0x2A08BCu);
    ctx->pc = 0x2A08B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A08B4u;
    // 0x2a08b8: 0x24a5cc50  addiu       $a1, $a1, -0x33B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A08B4u, 0x2A08BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A08BCu;
label_2a08bc:
    // 0x2a08bc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a08bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a08c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a08c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a08c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a08c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a08c8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A08C8u;
    {
        const bool branch_taken_0x2a08c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A08CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A08C8u;
        // 0x2a08cc: 0x24a5cc70  addiu       $a1, $a1, -0x3390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a08c8) {
            ctx->pc = 0x2A08E0u;
            goto label_2a08e0;
        }
    }
    ctx->pc = 0x2A08D0u;
    // 0x2a08d0: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x2a08d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2a08d4: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2a08d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a08d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a08d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a08dc: 0xacc20080  sw          $v0, 0x80($a2)
    ctx->pc = 0x2a08dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
label_2a08e0:
    // 0x2a08e0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A08E0u;
    SET_GPR_U32(ctx, 31, 0x2A08E8u);
    ctx->pc = 0x2A08E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A08E0u;
    // 0x2a08e4: 0xae260080  sw          $a2, 0x80($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A08E0u, 0x2A08E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A08E8u;
label_2a08e8:
    // 0x2a08e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a08e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a08ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A08ECu;
    {
        const bool branch_taken_0x2a08ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A08F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A08ECu;
        // 0x2a08f0: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a08ec) {
            ctx->pc = 0x2A0900u;
            goto label_2a0900;
        }
    }
    ctx->pc = 0x2A08F4u;
    // 0x2a08f4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a08f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a08f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a08f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a08fc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a08fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a0900:
    // 0x2a0900: 0xae240084  sw          $a0, 0x84($s1)
    ctx->pc = 0x2a0900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 4));
    // 0x2a0904: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a0904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0908: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a0908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a090c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a090cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0910: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0910u;
        // 0x2a0914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0918u;
}
