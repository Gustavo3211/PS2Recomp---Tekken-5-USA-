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

// Function: sub_003058D8
// Address: 0x3058d8 - 0x3059a8
void sub_003058D8_0x3058d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003058D8_0x3058d8");
#endif

    switch (ctx->pc) {
        case 0x305908u: goto label_305908;
        case 0x30590cu: goto label_30590c;
        case 0x305968u: goto label_305968;
        case 0x30599cu: goto label_30599c;
        default: break;
    }

    ctx->pc = 0x3058d8u;

    // 0x3058d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3058d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3058dc: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x3058dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3058e0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3058e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3058e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3058e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3058e8: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x3058e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3058ec: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x3058ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3058f0: 0xa3a30002  sb          $v1, 0x2($sp)
    ctx->pc = 0x3058f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3058f4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3058f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3058f8: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x3058f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3058fc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3058fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x305900: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x305900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x305904: 0x240a002c  addiu       $t2, $zero, 0x2C
    ctx->pc = 0x305904u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_305908:
    // 0x305908: 0xc9001b  divu        $zero, $a2, $t1
    ctx->pc = 0x305908u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_30590c:
    // 0x30590c: 0x3a72821  addu        $a1, $sp, $a3
    ctx->pc = 0x30590cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
    // 0x305910: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x305910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x305914: 0x24e2fffe  addiu       $v0, $a3, -0x2
    ctx->pc = 0x305914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x305918: 0x3a74021  addu        $t0, $sp, $a3
    ctx->pc = 0x305918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
    // 0x30591c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x30591cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x305920: 0x1810  mfhi        $v1
    ctx->pc = 0x305920u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x305924: 0x2012  mflo        $a0
    ctx->pc = 0x305924u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x305928: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x305928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x30592c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x30592cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305930: 0x18800007  blez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x305930u;
    {
        const bool branch_taken_0x305930 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x305934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305930u;
        // 0x305934: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305930) {
            ctx->pc = 0x305950u;
            goto label_305950;
        }
    }
    ctx->pc = 0x305938u;
    // 0x305938: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x305938u;
    {
        const bool branch_taken_0x305938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305938) {
            ctx->pc = 0x30593Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305938u;
            // 0x30593c: 0xc9001b  divu        $zero, $a2, $t1 (Delay Slot)
            { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x30590Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30590c;
        }
    }
    ctx->pc = 0x305940u;
    // 0x305940: 0xa10a0000  sb          $t2, 0x0($t0)
    ctx->pc = 0x305940u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x305944: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x305944u;
    {
        const bool branch_taken_0x305944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305944u;
        // 0x305948: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305944) {
            ctx->pc = 0x305908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305908;
        }
    }
    ctx->pc = 0x30594Cu;
    // 0x30594c: 0x0  nop
    ctx->pc = 0x30594cu;
    // NOP
label_305950:
    // 0x305950: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x305950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x305954: 0x4c0000e  bltz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x305954u;
    {
        const bool branch_taken_0x305954 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x305958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305954u;
        // 0x305958: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305954) {
            ctx->pc = 0x305990u;
            goto label_305990;
        }
    }
    ctx->pc = 0x30595Cu;
    // 0x30595c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x30595cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305960: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x305960u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305964: 0x0  nop
    ctx->pc = 0x305964u;
    // NOP
label_305968:
    // 0x305968: 0x3a61021  addu        $v0, $sp, $a2
    ctx->pc = 0x305968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
    // 0x30596c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x30596cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x305970: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x305970u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305974: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x305974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x305978: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x305978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30597c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30597Cu;
    {
        const bool branch_taken_0x30597c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x305980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30597Cu;
        // 0x305980: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30597c) {
            ctx->pc = 0x305968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305968;
        }
    }
    ctx->pc = 0x305984u;
    // 0x305984: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x305984u;
    {
        const bool branch_taken_0x305984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305984) {
            ctx->pc = 0x305994u;
            goto label_305994;
        }
    }
    ctx->pc = 0x30598Cu;
    // 0x30598c: 0x0  nop
    ctx->pc = 0x30598cu;
    // NOP
label_305990:
    // 0x305990: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x305990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_305994:
    // 0x305994: 0xc0b635c  jal         func_2D8D70
    ctx->pc = 0x305994u;
    SET_GPR_U32(ctx, 31, 0x30599Cu);
    ctx->pc = 0x305998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305994u;
    // 0x305998: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D70u, 0x305994u, 0x30599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30599Cu;
label_30599c:
    // 0x30599c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x30599cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3059a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3059A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3059A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059A0u;
        // 0x3059a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3059A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3059A8u;
}
