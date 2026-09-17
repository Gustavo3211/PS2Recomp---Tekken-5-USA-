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

// Function: sub_003094A8
// Address: 0x3094a8 - 0x309520
void sub_003094A8_0x3094a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003094A8_0x3094a8");
#endif

    switch (ctx->pc) {
        case 0x3094d0u: goto label_3094d0;
        default: break;
    }

    ctx->pc = 0x3094a8u;

    // 0x3094a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3094a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3094ac: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x3094acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x3094b0: 0x244aeda8  addiu       $t2, $v0, -0x1258
    ctx->pc = 0x3094b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962600));
    // 0x3094b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3094b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3094b8: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x3094b8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094bc: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x3094bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094c0: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x3094c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3094c4: 0x254f0100  addiu       $t7, $t2, 0x100
    ctx->pc = 0x3094c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 10), 256));
    // 0x3094c8: 0x254e0200  addiu       $t6, $t2, 0x200
    ctx->pc = 0x3094c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), 512));
    // 0x3094cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3094ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3094d0:
    // 0x3094d0: 0x1a91021  addu        $v0, $t5, $t1
    ctx->pc = 0x3094d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x3094d4: 0x1492021  addu        $a0, $t2, $t1
    ctx->pc = 0x3094d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3094d8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3094d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3094dc: 0x1892821  addu        $a1, $t4, $t1
    ctx->pc = 0x3094dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x3094e0: 0x1e93821  addu        $a3, $t7, $t1
    ctx->pc = 0x3094e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x3094e4: 0x1694021  addu        $t0, $t3, $t1
    ctx->pc = 0x3094e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x3094e8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3094e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3094ec: 0x1c93021  addu        $a2, $t6, $t1
    ctx->pc = 0x3094ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
    // 0x3094f0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3094f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3094f4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3094f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3094f8: 0x29240100  slti        $a0, $t1, 0x100
    ctx->pc = 0x3094f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3094fc: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x3094fcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x309500: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x309500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x309504: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x309504u;
    {
        const bool branch_taken_0x309504 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x309508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309504u;
        // 0x309508: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309504) {
            ctx->pc = 0x3094D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3094d0;
        }
    }
    ctx->pc = 0x30950Cu;
    // 0x30950c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30950cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309510: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x309510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x309514: 0x80c26aa  j           func_309AA8
    ctx->pc = 0x309514u;
    ctx->pc = 0x309518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309514u;
    // 0x309518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309AA8u;
    sub_00309AA8_0x309aa8(rdram, ctx, runtime); return;
    ctx->pc = 0x30951Cu;
    // 0x30951c: 0x0  nop
    ctx->pc = 0x30951cu;
    // NOP
    ctx->pc = 0x309520u;
}
