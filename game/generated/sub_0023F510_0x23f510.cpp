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

// Function: sub_0023F510
// Address: 0x23f510 - 0x23f5c0
void sub_0023F510_0x23f510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F510_0x23f510");
#endif

    switch (ctx->pc) {
        case 0x23f528u: goto label_23f528;
        case 0x23f530u: goto label_23f530;
        case 0x23f590u: goto label_23f590;
        default: break;
    }

    ctx->pc = 0x23f510u;

    // 0x23f510: 0x18c00029  blez        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x23F510u;
    {
        const bool branch_taken_0x23f510 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x23F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F510u;
        // 0x23f514: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f510) {
            ctx->pc = 0x23F5B8u;
            goto label_23f5b8;
        }
    }
    ctx->pc = 0x23F518u;
    // 0x23f518: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23f518u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f51c: 0x24cb07ff  addiu       $t3, $a2, 0x7FF
    ctx->pc = 0x23f51cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
    // 0x23f520: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x23F520u;
    {
        const bool branch_taken_0x23f520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F520u;
        // 0x23f524: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f520) {
            ctx->pc = 0x23F55Cu;
            goto label_23f55c;
        }
    }
    ctx->pc = 0x23F528u;
label_23f528:
    // 0x23f528: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23f528u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f52c: 0x0  nop
    ctx->pc = 0x23f52cu;
    // NOP
label_23f530:
    // 0x23f530: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23f530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23f534: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x23f534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x23f538: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23f538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x23f53c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23f540: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x23f540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x23f544: 0x24670003  addiu       $a3, $v1, 0x3
    ctx->pc = 0x23f544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x23f548: 0x2d040200  sltiu       $a0, $t0, 0x200
    ctx->pc = 0x23f548u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x23f54c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x23f54cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x23f550: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x23F550u;
    {
        const bool branch_taken_0x23f550 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F550u;
        // 0x23f554: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f550) {
            ctx->pc = 0x23F530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f530;
        }
    }
    ctx->pc = 0x23F558u;
    // 0x23f558: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x23f558u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_23f55c:
    // 0x23f55c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x23f55cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f560: 0x16c100b  movn        $v0, $t3, $t4
    ctx->pc = 0x23f560u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 11));
    // 0x23f564: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x23f564u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x23f568: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x23f568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x23f56c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x23F56Cu;
    {
        const bool branch_taken_0x23f56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F56Cu;
        // 0x23f570: 0x140382d  daddu       $a3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f56c) {
            ctx->pc = 0x23F528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f528;
        }
    }
    ctx->pc = 0x23F574u;
    // 0x23f574: 0x30c207ff  andi        $v0, $a2, 0x7FF
    ctx->pc = 0x23f574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2047);
    // 0x23f578: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x23f578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x23f57c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x23f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x23f580: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23F580u;
    {
        const bool branch_taken_0x23f580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F580u;
        // 0x23f584: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f580) {
            ctx->pc = 0x23F5B8u;
            goto label_23f5b8;
        }
    }
    ctx->pc = 0x23F588u;
    // 0x23f588: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23f588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f58c: 0x0  nop
    ctx->pc = 0x23f58cu;
    // NOP
label_23f590:
    // 0x23f590: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23f590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23f594: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x23f594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x23f598: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x23f598u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x23f59c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x23f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23f5a0: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x23f5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x23f5a4: 0x24670003  addiu       $a3, $v1, 0x3
    ctx->pc = 0x23f5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x23f5a8: 0x126202b  sltu        $a0, $t1, $a2
    ctx->pc = 0x23f5a8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x23f5ac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x23f5acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x23f5b0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x23F5B0u;
    {
        const bool branch_taken_0x23f5b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5B0u;
        // 0x23f5b4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5b0) {
            ctx->pc = 0x23F590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f590;
        }
    }
    ctx->pc = 0x23F5B8u;
label_23f5b8:
    // 0x23f5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x23F5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F5C0u;
}
