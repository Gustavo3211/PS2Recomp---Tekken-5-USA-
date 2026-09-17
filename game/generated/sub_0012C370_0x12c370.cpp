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

// Function: sub_0012C370
// Address: 0x12c370 - 0x12c450
void sub_0012C370_0x12c370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C370_0x12c370");
#endif

    switch (ctx->pc) {
        case 0x12c3b8u: goto label_12c3b8;
        case 0x12c400u: goto label_12c400;
        default: break;
    }

    ctx->pc = 0x12c370u;

    // 0x12c370: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x12c370u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x12c374: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x12c374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12c378: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C378u;
    {
        const bool branch_taken_0x12c378 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x12C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C378u;
        // 0x12c37c: 0x27bdfec0  addiu       $sp, $sp, -0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c378) {
            ctx->pc = 0x12C390u;
            goto label_12c390;
        }
    }
    ctx->pc = 0x12C380u;
    // 0x12c380: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x12c380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12c384: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12C384u;
    {
        const bool branch_taken_0x12c384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C384u;
        // 0x12c388: 0x52823  negu        $a1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c384) {
            ctx->pc = 0x12C394u;
            goto label_12c394;
        }
    }
    ctx->pc = 0x12C38Cu;
    // 0x12c38c: 0x0  nop
    ctx->pc = 0x12c38cu;
    // NOP
label_12c390:
    // 0x12c390: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x12c390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_12c394:
    // 0x12c394: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x12c394u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c398: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x12c398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x12c39c: 0x27a70134  addiu       $a3, $sp, 0x134
    ctx->pc = 0x12c39cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x12c3a0: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x12c3a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x12c3a4: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x12C3A4u;
    {
        const bool branch_taken_0x12c3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C3A4u;
        // 0x12c3a8: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3a4) {
            ctx->pc = 0x12C428u;
            goto label_12c428;
        }
    }
    ctx->pc = 0x12C3ACu;
    // 0x12c3ac: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x12c3acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12c3b0: 0xa8001a  div         $zero, $a1, $t0
    ctx->pc = 0x12c3b0u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12c3b4: 0x0  nop
    ctx->pc = 0x12c3b4u;
    // NOP
label_12c3b8:
    // 0x12c3b8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12c3b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12c3bc: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12C3BCu;
    {
        const bool branch_taken_0x12c3bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c3bc) {
            ctx->pc = 0x12C3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C3BCu;
            // 0x12c3c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C3C4u;
            goto label_12c3c4;
        }
    }
    ctx->pc = 0x12C3C4u;
label_12c3c4:
    // 0x12c3c4: 0x1812  mflo        $v1
    ctx->pc = 0x12c3c4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x12c3c8: 0x1010  mfhi        $v0
    ctx->pc = 0x12c3c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x12c3cc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x12c3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c3d0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x12c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12c3d4: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x12c3d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x12c3d8: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x12c3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c3dc: 0x5060fff6  beql        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x12C3DCu;
    {
        const bool branch_taken_0x12c3dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c3dc) {
            ctx->pc = 0x12C3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C3DCu;
            // 0x12c3e0: 0xa8001a  div         $zero, $a1, $t0 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c3b8;
        }
    }
    ctx->pc = 0x12C3E4u;
    // 0x12c3e4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12c3e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12c3e8: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x12c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12c3ec: 0xe9182b  sltu        $v1, $a3, $t1
    ctx->pc = 0x12c3ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x12c3f0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x12C3F0u;
    {
        const bool branch_taken_0x12c3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C3F0u;
        // 0x12c3f4: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3f0) {
            ctx->pc = 0x12C440u;
            goto label_12c440;
        }
    }
    ctx->pc = 0x12C3F8u;
    // 0x12c3f8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x12c3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c3fc: 0x0  nop
    ctx->pc = 0x12c3fcu;
    // NOP
label_12c400:
    // 0x12c400: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x12c400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12c404: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x12c404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x12c408: 0xe5182b  sltu        $v1, $a3, $a1
    ctx->pc = 0x12c408u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12c40c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x12c40cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c410: 0x0  nop
    ctx->pc = 0x12c410u;
    // NOP
    // 0x12c414: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12C414u;
    {
        const bool branch_taken_0x12c414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C414u;
        // 0x12c418: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c414) {
            ctx->pc = 0x12C400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c400;
        }
    }
    ctx->pc = 0x12C41Cu;
    // 0x12c41c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12C41Cu;
    {
        const bool branch_taken_0x12c41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C41Cu;
        // 0x12c420: 0xc41023  subu        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c41c) {
            ctx->pc = 0x12C444u;
            goto label_12c444;
        }
    }
    ctx->pc = 0x12C424u;
    // 0x12c424: 0x0  nop
    ctx->pc = 0x12c424u;
    // NOP
label_12c428:
    // 0x12c428: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x12c428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12c42c: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x12c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12c430: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x12c430u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c434: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12c434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x12c438: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x12c438u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x12c43c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12c43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_12c440:
    // 0x12c440: 0xc41023  subu        $v0, $a2, $a0
    ctx->pc = 0x12c440u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_12c444:
    // 0x12c444: 0x3e00008  jr          $ra
    ctx->pc = 0x12C444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C444u;
        // 0x12c448: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C44Cu;
    // 0x12c44c: 0x0  nop
    ctx->pc = 0x12c44cu;
    // NOP
    ctx->pc = 0x12c450u;
}
