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

// Function: sub_002EE4F8
// Address: 0x2ee4f8 - 0x2ee598
void sub_002EE4F8_0x2ee4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE4F8_0x2ee4f8");
#endif

    switch (ctx->pc) {
        case 0x2ee548u: goto label_2ee548;
        default: break;
    }

    ctx->pc = 0x2ee4f8u;

    // 0x2ee4f8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2ee4f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee4fc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2ee4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2ee500: 0x24e300fc  addiu       $v1, $a3, 0xFC
    ctx->pc = 0x2ee500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 252));
    // 0x2ee504: 0x24e900e8  addiu       $t1, $a3, 0xE8
    ctx->pc = 0x2ee504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 232));
    // 0x2ee508: 0x24e400f0  addiu       $a0, $a3, 0xF0
    ctx->pc = 0x2ee508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 240));
    // 0x2ee50c: 0x24420810  addiu       $v0, $v0, 0x810
    ctx->pc = 0x2ee50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2064));
    // 0x2ee510: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2ee510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee514: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x2ee514u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x2ee518: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2ee518u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x2ee51c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ee51cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee520: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x2ee520u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x2ee524: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2ee524u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ee528: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ee528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2ee52c: 0x24eb0004  addiu       $t3, $a3, 0x4
    ctx->pc = 0x2ee52cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2ee530: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ee530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2ee534: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2ee534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2ee538: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2ee538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2ee53c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2ee53cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2ee540: 0xace50050  sw          $a1, 0x50($a3)
    ctx->pc = 0x2ee540u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 5));
    // 0x2ee544: 0x0  nop
    ctx->pc = 0x2ee544u;
    // NOP
label_2ee548:
    // 0x2ee548: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x2ee548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2ee54c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2ee54cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2ee550: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2ee550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2ee554: 0x29040011  slti        $a0, $t0, 0x11
    ctx->pc = 0x2ee554u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2ee558: 0x1621821  addu        $v1, $t3, $v0
    ctx->pc = 0x2ee558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2ee55c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2ee55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2ee560: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x2ee560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x2ee564: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EE564u;
    {
        const bool branch_taken_0x2ee564 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE564u;
        // 0x2ee568: 0xac6a0000  sw          $t2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee564) {
            ctx->pc = 0x2EE548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee548;
        }
    }
    ctx->pc = 0x2EE56Cu;
    // 0x2ee56c: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x2ee56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2ee570: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ee570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee574: 0xace30054  sw          $v1, 0x54($a3)
    ctx->pc = 0x2ee574u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 3));
    // 0x2ee578: 0xace0005c  sw          $zero, 0x5C($a3)
    ctx->pc = 0x2ee578u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 0));
    // 0x2ee57c: 0xace00058  sw          $zero, 0x58($a3)
    ctx->pc = 0x2ee57cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 88), GPR_U32(ctx, 0));
    // 0x2ee580: 0xace00108  sw          $zero, 0x108($a3)
    ctx->pc = 0x2ee580u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 264), GPR_U32(ctx, 0));
    // 0x2ee584: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2ee584u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x2ee588: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ee588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ee58c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE58Cu;
        // 0x2ee590: 0xad230004  sw          $v1, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE594u;
    // 0x2ee594: 0x0  nop
    ctx->pc = 0x2ee594u;
    // NOP
    ctx->pc = 0x2ee598u;
}
