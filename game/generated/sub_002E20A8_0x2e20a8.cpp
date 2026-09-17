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

// Function: sub_002E20A8
// Address: 0x2e20a8 - 0x2e2158
void sub_002E20A8_0x2e20a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E20A8_0x2e20a8");
#endif

    switch (ctx->pc) {
        case 0x2e20f8u: goto label_2e20f8;
        case 0x2e212cu: goto label_2e212c;
        case 0x2e2144u: goto label_2e2144;
        default: break;
    }

    ctx->pc = 0x2e20a8u;

    // 0x2e20a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e20a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e20ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e20acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e20b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e20b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e20b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e20b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e20b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e20b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e20bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e20bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e20c0: 0x2651008c  addiu       $s1, $s2, 0x8C
    ctx->pc = 0x2e20c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 140));
    // 0x2e20c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e20c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e20c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e20c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e20cc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E20CCu;
    {
        const bool branch_taken_0x2e20cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E20CCu;
        // 0x2e20d0: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e20cc) {
            ctx->pc = 0x2E20E4u;
            goto label_2e20e4;
        }
    }
    ctx->pc = 0x2E20D4u;
    // 0x2e20d4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2e20d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e20d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e20d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e20dc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E20DCu;
    {
        const bool branch_taken_0x2e20dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e20dc) {
            ctx->pc = 0x2E20F0u;
            goto label_2e20f0;
        }
    }
    ctx->pc = 0x2E20E4u;
label_2e20e4:
    // 0x2e20e4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e20e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2e20e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e20e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e20ec: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e20ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e20f0:
    // 0x2e20f0: 0xc0b7aaa  jal         func_2DEAA8
    ctx->pc = 0x2E20F0u;
    SET_GPR_U32(ctx, 31, 0x2E20F8u);
    ctx->pc = 0x2DEAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEAA8u, 0x2E20F0u, 0x2E20F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E20F8u;
label_2e20f8:
    // 0x2e20f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e20f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e20fc: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x2e20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x2e2100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e2100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2104: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2104u;
    {
        const bool branch_taken_0x2e2104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2104u;
        // 0x2e2108: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2104) {
            ctx->pc = 0x2E2120u;
            goto label_2e2120;
        }
    }
    ctx->pc = 0x2E210Cu;
    // 0x2e210c: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E210Cu;
    {
        const bool branch_taken_0x2e210c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e210c) {
            ctx->pc = 0x2E2110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E210Cu;
            // 0x2e2110: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2124u;
            goto label_2e2124;
        }
    }
    ctx->pc = 0x2E2114u;
    // 0x2e2114: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2114u;
    {
        const bool branch_taken_0x2e2114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2114) {
            ctx->pc = 0x2E2124u;
            goto label_2e2124;
        }
    }
    ctx->pc = 0x2E211Cu;
    // 0x2e211c: 0x0  nop
    ctx->pc = 0x2e211cu;
    // NOP
label_2e2120:
    // 0x2e2120: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x2e2120u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e2124:
    // 0x2e2124: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E2124u;
    SET_GPR_U32(ctx, 31, 0x2E212Cu);
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E2124u, 0x2E212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E212Cu;
label_2e212c:
    // 0x2e212c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e212cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2130: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e2130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2134: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2e2134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e213c: 0xc090aa2  jal         func_242A88
    ctx->pc = 0x2E213Cu;
    SET_GPR_U32(ctx, 31, 0x2E2144u);
    ctx->pc = 0x2E2140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E213Cu;
    // 0x2e2140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242A88u, 0x2E213Cu, 0x2E2144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2144u;
label_2e2144:
    // 0x2e2144: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2e2144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2e2148: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e2148u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e214c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e214cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e2150: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e2150u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e2154: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e2154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x2e2158u;
}
