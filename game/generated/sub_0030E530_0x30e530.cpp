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

// Function: sub_0030E530
// Address: 0x30e530 - 0x30e5e0
void sub_0030E530_0x30e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E530_0x30e530");
#endif

    switch (ctx->pc) {
        case 0x30e560u: goto label_30e560;
        case 0x30e5a8u: goto label_30e5a8;
        default: break;
    }

    ctx->pc = 0x30e530u;

    // 0x30e530: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x30e530u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30e534: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x30e534u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x30e538: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x30e538u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30e53c: 0x240b0050  addiu       $t3, $zero, 0x50
    ctx->pc = 0x30e53cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x30e540: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x30e540u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30e544: 0xa507c  dsll32      $t2, $t2, 1
    ctx->pc = 0x30e544u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 1));
    // 0x30e548: 0x24090053  addiu       $t1, $zero, 0x53
    ctx->pc = 0x30e548u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x30e54c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x30e54cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30e550: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x30e550u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x30e554: 0x24864580  addiu       $a2, $a0, 0x4580
    ctx->pc = 0x30e554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 17792));
    // 0x30e558: 0x24831bd0  addiu       $v1, $a0, 0x1BD0
    ctx->pc = 0x30e558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7120));
    // 0x30e55c: 0x0  nop
    ctx->pc = 0x30e55cu;
    // NOP
label_30e560:
    // 0x30e560: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x30e560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30e564: 0xfc6c0008  sd          $t4, 0x8($v1)
    ctx->pc = 0x30e564u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 12));
    // 0x30e568: 0xac6e0000  sw          $t6, 0x0($v1)
    ctx->pc = 0x30e568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 14));
    // 0x30e56c: 0xac6d0004  sw          $t5, 0x4($v1)
    ctx->pc = 0x30e56cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 13));
    // 0x30e570: 0x24831be0  addiu       $v1, $a0, 0x1BE0
    ctx->pc = 0x30e570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7136));
    // 0x30e574: 0xfc6b0008  sd          $t3, 0x8($v1)
    ctx->pc = 0x30e574u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 11));
    // 0x30e578: 0x8f82cb94  lw          $v0, -0x346C($gp)
    ctx->pc = 0x30e578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953876)));
    // 0x30e57c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30e57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30e580: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x30e580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x30e584: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x30e584u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x30e588: 0x24831bf0  addiu       $v1, $a0, 0x1BF0
    ctx->pc = 0x30e588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7152));
    // 0x30e58c: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x30e58cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x30e590: 0xfc690008  sd          $t1, 0x8($v1)
    ctx->pc = 0x30e590u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 9));
    // 0x30e594: 0x24831c00  addiu       $v1, $a0, 0x1C00
    ctx->pc = 0x30e594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7168));
    // 0x30e598: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x30e598u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x30e59c: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x30e59cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x30e5a0: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x30e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x30e5a4: 0x24831c10  addiu       $v1, $a0, 0x1C10
    ctx->pc = 0x30e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7184));
label_30e5a8:
    // 0x30e5a8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x30e5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x30e5ac: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x30e5acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x30e5b0: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x30e5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x30e5b4: 0x0  nop
    ctx->pc = 0x30e5b4u;
    // NOP
    // 0x30e5b8: 0x0  nop
    ctx->pc = 0x30e5b8u;
    // NOP
    // 0x30e5bc: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30E5BCu;
    {
        const bool branch_taken_0x30e5bc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x30E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E5BCu;
        // 0x30e5c0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e5bc) {
            ctx->pc = 0x30E5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e5a8;
        }
    }
    ctx->pc = 0x30E5C4u;
    // 0x30e5c4: 0x248422c0  addiu       $a0, $a0, 0x22C0
    ctx->pc = 0x30e5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8896));
    // 0x30e5c8: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x30e5c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x30e5cc: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x30E5CCu;
    {
        const bool branch_taken_0x30e5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e5cc) {
            ctx->pc = 0x30E5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E5CCu;
            // 0x30e5d0: 0x24831bd0  addiu       $v1, $a0, 0x1BD0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7120));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e560;
        }
    }
    ctx->pc = 0x30E5D4u;
    // 0x30e5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x30E5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E5DCu;
    // 0x30e5dc: 0x0  nop
    ctx->pc = 0x30e5dcu;
    // NOP
    ctx->pc = 0x30e5e0u;
}
