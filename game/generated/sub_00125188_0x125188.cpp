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

// Function: sub_00125188
// Address: 0x125188 - 0x125220
void sub_00125188_0x125188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125188_0x125188");
#endif

    switch (ctx->pc) {
        case 0x1251c8u: goto label_1251c8;
        case 0x1251e4u: goto label_1251e4;
        default: break;
    }

    ctx->pc = 0x125188u;

    // 0x125188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12518c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x12518cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125190: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x125190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x125194: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x125194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125198: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12519c: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x12519cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1251a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1251a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1251a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1251a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1251ac: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1251acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1251b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1251b4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1251b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251b8: 0x168a0007  bne         $s4, $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1251B8u;
    {
        const bool branch_taken_0x1251b8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 10));
        ctx->pc = 0x1251BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1251B8u;
        // 0x1251bc: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251b8) {
            ctx->pc = 0x1251D8u;
            goto label_1251d8;
        }
    }
    ctx->pc = 0x1251C0u;
    // 0x1251c0: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1251C0u;
    SET_GPR_U32(ctx, 31, 0x1251C8u);
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1251C0u, 0x1251C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1251C8u;
label_1251c8:
    // 0x1251c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1251C8u;
    {
        const bool branch_taken_0x1251c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1251CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1251C8u;
        // 0x1251cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251c8) {
            ctx->pc = 0x1251DCu;
            goto label_1251dc;
        }
    }
    ctx->pc = 0x1251D0u;
    // 0x1251d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1251D0u;
    {
        const bool branch_taken_0x1251d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1251D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1251D0u;
        // 0x1251d4: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251d0) {
            ctx->pc = 0x1251FCu;
            goto label_1251fc;
        }
    }
    ctx->pc = 0x1251D8u;
label_1251d8:
    // 0x1251d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1251d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1251dc:
    // 0x1251dc: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1251DCu;
    SET_GPR_U32(ctx, 31, 0x1251E4u);
    ctx->pc = 0x1251E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1251DCu;
    // 0x1251e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1251DCu, 0x1251E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1251E4u;
label_1251e4:
    // 0x1251e4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1251E4u;
    {
        const bool branch_taken_0x1251e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1251e4) {
            ctx->pc = 0x1251E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1251E4u;
            // 0x1251e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125204u;
            goto label_125204;
        }
    }
    ctx->pc = 0x1251ECu;
    // 0x1251ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1251ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1251f0: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x1251f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x1251f4: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1251f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x1251f8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1251f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1251fc:
    // 0x1251fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1251fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_125204:
    // 0x125204: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x125204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125208: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x125208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12520c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12520cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x125210: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x125210u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125214: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x125214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125218: 0x3e00008  jr          $ra
    ctx->pc = 0x125218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125218u;
        // 0x12521c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125220u;
}
