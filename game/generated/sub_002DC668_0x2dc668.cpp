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

// Function: sub_002DC668
// Address: 0x2dc668 - 0x2dc710
void sub_002DC668_0x2dc668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC668_0x2dc668");
#endif

    switch (ctx->pc) {
        case 0x2dc698u: goto label_2dc698;
        case 0x2dc6c8u: goto label_2dc6c8;
        case 0x2dc704u: goto label_2dc704;
        default: break;
    }

    ctx->pc = 0x2dc668u;

    // 0x2dc668: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2dc668u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc66c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc66cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dc670: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x2dc670u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2dc674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc678: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2dc678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2dc67c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2dc67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2dc680: 0x8c4288d0  lw          $v0, -0x7730($v0)
    ctx->pc = 0x2dc680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
    // 0x2dc684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc688: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2dc688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dc68c: 0x244708b0  addiu       $a3, $v0, 0x8B0
    ctx->pc = 0x2dc68cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2224));
    // 0x2dc690: 0x244608a8  addiu       $a2, $v0, 0x8A8
    ctx->pc = 0x2dc690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2216));
    // 0x2dc694: 0x0  nop
    ctx->pc = 0x2dc694u;
    // NOP
label_2dc698:
    // 0x2dc698: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2dc698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2dc69c: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2dc69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2dc6a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2dc6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2dc6a4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2dc6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2dc6a8: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x2dc6a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2dc6ac: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x2dc6acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dc6b0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DC6B0u;
    {
        const bool branch_taken_0x2dc6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC6B0u;
        // 0x2dc6b4: 0xa0880000  sb          $t0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc6b0) {
            ctx->pc = 0x2DC698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc698;
        }
    }
    ctx->pc = 0x2DC6B8u;
    // 0x2dc6b8: 0x24c7000f  addiu       $a3, $a2, 0xF
    ctx->pc = 0x2dc6b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x2dc6bc: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x2dc6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x2dc6c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc6c4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2dc6c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2dc6c8:
    // 0x2dc6c8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2dc6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2dc6cc: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2dc6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2dc6d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2dc6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2dc6d4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2dc6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc6d8: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x2dc6d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2dc6dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DC6DCu;
    {
        const bool branch_taken_0x2dc6dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC6DCu;
        // 0x2dc6e0: 0xa0880000  sb          $t0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc6dc) {
            ctx->pc = 0x2DC6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc6c8;
        }
    }
    ctx->pc = 0x2DC6E4u;
    // 0x2dc6e4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2dc6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2dc6e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dc6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc6ec: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x2dc6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x2dc6f0: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2dc6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc6f4: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2dc6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2dc6f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2dc6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc6fc: 0xc0b7014  jal         func_2DC050
    ctx->pc = 0x2DC6FCu;
    SET_GPR_U32(ctx, 31, 0x2DC704u);
    ctx->pc = 0x2DC700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC6FCu;
    // 0x2dc700: 0xac6508bc  sw          $a1, 0x8BC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 2236), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC050u, 0x2DC6FCu, 0x2DC704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC704u;
label_2dc704:
    // 0x2dc704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc708: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC708u;
        // 0x2dc70c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC710u;
}
