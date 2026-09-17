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

// Function: sub_001227B0
// Address: 0x1227b0 - 0x122840
void sub_001227B0_0x1227b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001227B0_0x1227b0");
#endif

    switch (ctx->pc) {
        case 0x1227e0u: goto label_1227e0;
        default: break;
    }

    ctx->pc = 0x1227b0u;

    // 0x1227b0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1227b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1227b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1227b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1227b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1227b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1227bc: 0x24c703f0  addiu       $a3, $a2, 0x3F0
    ctx->pc = 0x1227bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1008));
    // 0x1227c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1227c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1227c4: 0x24a8000c  addiu       $t0, $a1, 0xC
    ctx->pc = 0x1227c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x1227c8: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x1227c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1227cc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1227ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1227d0: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1227D0u;
    {
        const bool branch_taken_0x1227d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1227D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227D0u;
        // 0x1227d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227d0) {
            ctx->pc = 0x122810u;
            goto label_122810;
        }
    }
    ctx->pc = 0x1227D8u;
    // 0x1227d8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1227d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1227dc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1227dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1227e0:
    // 0x1227e0: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1227e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1227e4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1227e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1227e8: 0xdc430020  ld          $v1, 0x20($v0)
    ctx->pc = 0x1227e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1227ec: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1227ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1227f0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1227f0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1227f4: 0x24c703f0  addiu       $a3, $a2, 0x3F0
    ctx->pc = 0x1227f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1008));
    // 0x1227f8: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x1227f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1227fc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1227fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122800: 0x1069fff7  beq         $v1, $t1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x122800u;
    {
        const bool branch_taken_0x122800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x122804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122800u;
        // 0x122804: 0x1071021  addu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122800) {
            ctx->pc = 0x1227E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1227e0;
        }
    }
    ctx->pc = 0x122808u;
    // 0x122808: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x122808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12280c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x12280cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_122810:
    // 0x122810: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x122810u;
    {
        const bool branch_taken_0x122810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x122814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122810u;
        // 0x122814: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122810) {
            ctx->pc = 0x122838u;
            goto label_122838;
        }
    }
    ctx->pc = 0x122818u;
    // 0x122818: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x122818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x12281c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x12281cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122820: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x122820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x122824: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x122824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x122828: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x122828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12282c: 0x3e00008  jr          $ra
    ctx->pc = 0x12282Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12282Cu;
        // 0x122830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12282Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122834u;
    // 0x122834: 0x0  nop
    ctx->pc = 0x122834u;
    // NOP
label_122838:
    // 0x122838: 0x8049d4a  j           func_127528
    ctx->pc = 0x122838u;
    ctx->pc = 0x12283Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122838u;
    // 0x12283c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127528u;
    sub_00127528_0x127528(rdram, ctx, runtime); return;
    ctx->pc = 0x122840u;
}
