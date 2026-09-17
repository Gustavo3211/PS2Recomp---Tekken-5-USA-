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

// Function: sub_00249830
// Address: 0x249830 - 0x2498b8
void sub_00249830_0x249830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249830_0x249830");
#endif

    ctx->pc = 0x249830u;

    // 0x249830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x249834: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x249834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x249838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24983c: 0x24487270  addiu       $t0, $v0, 0x7270
    ctx->pc = 0x24983cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 29296));
    // 0x249840: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x249840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249844: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x249844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249848: 0x8d06000c  lw          $a2, 0xC($t0)
    ctx->pc = 0x249848u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x16727Cu));
    // 0x24984c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24984cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249850: 0x10c3000d  beq         $a2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x249850u;
    {
        const bool branch_taken_0x249850 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x249854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249850u;
        // 0x249854: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249850) {
            ctx->pc = 0x249888u;
            goto label_249888;
        }
    }
    ctx->pc = 0x249858u;
    // 0x249858: 0x50c00009  beql        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x249858u;
    {
        const bool branch_taken_0x249858 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x249858) {
            ctx->pc = 0x24985Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249858u;
            // 0x24985c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249880u;
            goto label_249880;
        }
    }
    ctx->pc = 0x249860u;
    // 0x249860: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x249860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x249864: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x249864u;
    {
        const bool branch_taken_0x249864 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x249868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249864u;
        // 0x249868: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249864) {
            ctx->pc = 0x249898u;
            goto label_249898;
        }
    }
    ctx->pc = 0x24986Cu;
    // 0x24986c: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24986Cu;
    {
        const bool branch_taken_0x24986c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x249870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24986Cu;
        // 0x249870: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24986c) {
            ctx->pc = 0x2498B0u;
            goto label_2498b0;
        }
    }
    ctx->pc = 0x249874u;
    // 0x249874: 0x3e00008  jr          $ra
    ctx->pc = 0x249874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249874u;
        // 0x249878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24987Cu;
    // 0x24987c: 0x0  nop
    ctx->pc = 0x24987cu;
    // NOP
label_249880:
    // 0x249880: 0x80925ce  j           func_249738
    ctx->pc = 0x249880u;
    ctx->pc = 0x249884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249880u;
    // 0x249884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249738u;
    sub_00249738_0x249738(rdram, ctx, runtime); return;
    ctx->pc = 0x249888u;
label_249888:
    // 0x249888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24988c: 0x80925ec  j           func_2497B0
    ctx->pc = 0x24988Cu;
    ctx->pc = 0x249890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24988Cu;
    // 0x249890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2497B0u;
    sub_002497B0_0x2497b0(rdram, ctx, runtime); return;
    ctx->pc = 0x249894u;
    // 0x249894: 0x0  nop
    ctx->pc = 0x249894u;
    // NOP
label_249898:
    // 0x249898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24989c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x24989cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2498a0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2498a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2498a4: 0x8092526  j           func_249498
    ctx->pc = 0x2498A4u;
    ctx->pc = 0x2498A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2498A4u;
    // 0x2498a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249498u, 0x2498A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2498ACu;
    // 0x2498ac: 0x0  nop
    ctx->pc = 0x2498acu;
    // NOP
label_2498b0:
    // 0x2498b0: 0x8092600  j           func_249800
    ctx->pc = 0x2498B0u;
    ctx->pc = 0x2498B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2498B0u;
    // 0x2498b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249800u, 0x2498B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2498B8u;
}
